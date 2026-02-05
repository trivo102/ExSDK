package com.exam.exsdk.exsdk.ekyc

import com.exam.exsdk.exsdk.PlatformController

expect fun startEkyc(controller: PlatformController, onResult: (String?) -> Unit)