package com.exam.exsdk.exsdk

import android.app.Activity
import android.os.Build

class AndroidPlatform : Platform {
    override val name: String = "Android ${Build.VERSION.SDK_INT}"
}

actual fun getPlatform(): Platform = AndroidPlatform()

actual typealias PlatformController = Activity