package com.exam.exsdk.ui

import android.content.Context
import org.koin.android.ext.koin.androidContext
import org.koin.core.context.startKoin
import com.exam.exsdk.exsdk.di.appModule

object ExSdk {
    fun initialize(context: Context) {
        startKoin {
            androidContext(context)
            modules(appModule)
        }
    }
}
