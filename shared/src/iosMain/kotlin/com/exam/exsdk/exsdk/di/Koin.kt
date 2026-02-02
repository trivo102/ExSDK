package com.exam.exsdk.exsdk.di

import org.koin.core.context.startKoin
import com.exam.exsdk.exsdk.di.appModule

fun initKoin() {
    startKoin {
        modules(appModule)
    }
}
