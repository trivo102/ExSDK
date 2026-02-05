import org.jetbrains.kotlin.gradle.dsl.JvmTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.kotlinSerialization)
}

kotlin {
    androidTarget {
        compilerOptions {
            jvmTarget.set(JvmTarget.JVM_17)
        }
    }

    val xcf = XCFramework("ExSdkCore")
    val targets = mutableListOf<org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget>()
    targets.add(iosArm64())
    
    if (project.findProperty("buildSimulator") == "true") {
        targets.add(iosX64())
    }

    targets.forEach { iosTarget ->
        iosTarget.binaries.framework {
            baseName = "ExSdkCore"
            isStatic = true
            export(libs.kotlinx.coroutines.core)
            xcf.add(this)
        }
        val mainCompilation = iosTarget.compilations.getByName("main")
        mainCompilation.cinterops {
            val HdsEkycThirdParty by creating {
                defFile(file("src/iosMain/cinterop/HdsEkycThirdParty.def"))

                // Xác định đúng slice dựa trên target
                val frameworkSlice = when (iosTarget.name) {
                    "iosArm64" -> "ios-arm64"
                    "iosX64" -> "ios-x86_64-simulator"
                    "iosSimulatorArm64" -> "ios-arm64_x86_64-simulator"
                    else -> error("Unsupported target: ${iosTarget.name}")
                }

                // Chỉ build cho ios-arm64
                compilerOpts(
                    "-F${rootDir}/shared/iosLibs/ekyc/eKYCLib.xcframework/$frameworkSlice",
                    "-framework",
                    "eKYCLib",
                    "-fmodules"
                )
            }
            val ICSdkEKYCHDSaison by creating {
                defFile(file("src/iosMain/cinterop/ICSdkEKYCHDSaison.def"))

                // Xác định đúng slice dựa trên target
                val frameworkSlice = when (iosTarget.name) {
                    "iosArm64" -> "ios-arm64"
                    "iosX64" -> "ios-x86_64-simulator"
                    "iosSimulatorArm64" -> "ios-arm64_x86_64-simulator"
                    else -> error("Unsupported target: ${iosTarget.name}")
                }

                // Chỉ build cho ios-arm64
                compilerOpts(
                    "-F${rootDir}/shared/iosLibs/ekyc/ICSdkEKYCHDSaison.xcframework/$frameworkSlice",
                    "-framework",
                    "ICSdkEKYCHDSaison",
                    "-fmodules"
                )
            }
        }
    }

    sourceSets {
        commonMain.dependencies {
            api(libs.kotlinx.coroutines.core)
            implementation(libs.kotlinx.serialization.json)

            implementation(libs.ktor.client.core)
            implementation(libs.ktor.client.content.negotiation)
            implementation(libs.ktor.serialization.kotlinx.json)

            api(libs.koin.core)
            implementation(libs.koin.compose)
            implementation(libs.koin.compose.viewmodel)

            implementation(libs.androidx.lifecycle.viewmodelCompose)
            
            implementation(libs.coil.compose)
            implementation(libs.coil.network.ktor)
        }
        androidMain.dependencies {
            implementation(libs.ktor.client.android)
            implementation(libs.koin.android)

            // Dependencies local
            implementation("com.hdsaison.ekyc:ekyc_sdk_hdsaison:1.2.2")
            implementation("com.hdsaison.scanqr:scanqr_ic_sdk:1.0.6")
            // Other dependencies
            implementation("com.airbnb.android:lottie:6.4.0")
            implementation("androidx.constraintlayout:constraintlayout:2.1.4")
            implementation("com.squareup.okhttp3:okhttp:4.12.0")
        }
        iosMain.dependencies {
            implementation(libs.ktor.client.darwin)
        }
    }
}

android {
    namespace = "com.exam.exsdk.exsdk.shared"
    compileSdk = libs.versions.android.compileSdk.get().toInt()
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    defaultConfig {
        minSdk = libs.versions.android.minSdk.get().toInt()
    }
}
