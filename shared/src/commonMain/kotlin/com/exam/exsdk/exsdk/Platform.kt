package com.exam.exsdk.exsdk

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform

expect class PlatformController