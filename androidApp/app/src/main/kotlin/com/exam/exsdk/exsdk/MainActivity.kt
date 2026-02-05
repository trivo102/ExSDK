package com.exam.exsdk.exsdk

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import com.exam.exsdk.ui.ExSdkContent
import com.exam.exsdk.ui.ExSdk
import androidx.activity.enableEdgeToEdge
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        enableEdgeToEdge()
        super.onCreate(savedInstanceState)

        // Initialize Koin via SDK
        ExSdk.initialize(this)

        setContent {
            ExSdkContent()
        }
    }
}

@Preview
@Composable
fun AppAndroidPreview() {
    ExSdkContent()
}