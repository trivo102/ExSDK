rootProject.name = "exsdk"
enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

pluginManagement {
    repositories {
        google {
            mavenContent {
                includeGroupAndSubgroups("androidx")
                includeGroupAndSubgroups("com.android")
                includeGroupAndSubgroups("com.google")
            }
        }
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositories {
        google {
            mavenContent {
                includeGroupAndSubgroups("androidx")
                includeGroupAndSubgroups("com.android")
                includeGroupAndSubgroups("com.google")
            }
        }
        mavenCentral()
        maven("https://jitpack.io")
        // Local Maven repo for vendored AARs (required because AGP forbids file-based .aar deps when producing an AAR)
        maven {
            url = uri("$rootDir/build/maven-repo")
        }
    }
}

include(":shared")
include(":androidApp:ExSdk")
include(":androidApp:app")