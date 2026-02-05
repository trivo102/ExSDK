package com.exam.exsdk.exsdk.ekyc

import com.exam.exsdk.exsdk.PlatformController
import com.hdsaison.onboarding.FlowType
import com.hdsaison.onboarding.ICEKYCSavedData
import com.hdsaison.onboarding.ICEkycCameraDelegateProtocol
import com.hdsaison.onboarding.ICEkycCameraRouter
import com.hdsaison.onboarding.ICEkycCameraViewController
import com.hdsaison.onboarding.ScreenType
import com.hdsaison.onboarding.TypeDocument
import kotlinx.cinterop.BetaInteropApi
import kotlinx.cinterop.ExperimentalForeignApi
import platform.Foundation.*
import platform.UIKit.UIDevice
import platform.darwin.NSObject

@OptIn(ExperimentalForeignApi::class)
actual fun startEkyc(controller: PlatformController, onResult: (String?) -> Unit) {
    
    val tokenId = "49482780-d356-6b15-e063-63199f0a34db"
    val accessToken = "bearer eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJ0cmFuc2FjdGlvbl9pZCI6IjE4MjMwYTczLTlmMDItNDdkZC1hNTYyLTkxZjNhOGU3NmYzNSIsInN1YiI6IjllNTY5NGY4LWZhOTktMTFmMC1hOWIwLTIxNjhmYTVhYjYwNyIsImF1ZCI6WyJyZXN0c2VydmljZSJdLCJ1c2VyX25hbWUiOiJ2by5taW5oLXRyaTFAaGRzYWlzb24uY29tLnZuIiwic2NvcGUiOlsicmVhZCJdLCJpc3MiOiJodHRwczovL2xvY2FsaG9zdCIsIm5hbWUiOiJ2by5taW5oLXRyaTFAaGRzYWlzb24uY29tLnZuIiwiZXhwIjoxNzY5NTA2MjE0LCJ1dWlkX2FjY291bnQiOiI5ZTU2OTRmOC1mYTk5LTExZjAtYTliMC0yMTY4ZmE1YWI2MDciLCJhdXRob3JpdGllcyI6WyJVU0VSIl0sImp0aSI6ImUwZWU3NTE2LTVjZmYtNDcxNi05OTA1LTE0Nzc1M2M5NzEyYSIsImNsaWVudF9pZCI6ImNsaWVudGFwcCJ9.XwzUOco9vtAmQvKe-fh8dOrBEbFrCugSYuMhXptDlnkaxLamYgK4YHGPEJk84ZyiXkxIJkx1bwZ9YV38GSzbFpSF0E789HbLNOwvGtL9rlE0gcvei4flLE5ZNxqiKveW2yO2SmRkqZlInvgwjJpVVWrEEeWEkRZbAGEIb1AHsRyNg-yi50WWK6KeFuPe9m328U6k4uyRl_0Yf6ePLZdK6pTW5zB6GqIqf4jjo2CAf7Shz6dBL4rwnw6sWdfvTuE52pn3jIRz0Qu_AgQdFI0972XwlSj7xu5xGD0oI2RFA1vknaMiuYwAFADKlFgAqpfLfCeFpbKpddtxwzdAPwhyKw"
    val tokenKey = "MFwwDQYJKoZIhvcNAQEBBQADSwAwSAJBAMwUksxGcnQzLhRO/eZZBfClUfoagd8fTMQaYnw+zZBUenww2sjIAruoozeN7eVIOtkeaaPtBIROKMooExQle/kCAwEAAQ=="
    val camera = ICEkycCameraRouter.createModule() as ICEkycCameraViewController
    camera.flowType = FlowType.full
    camera.timeoutCallApi = 120
    camera.tokenId = tokenId
    camera.tokenKey = tokenKey
    camera.accessToken = accessToken
    camera.documentType = TypeDocument.IdentityCard
    val handler = EkycHandler { json ->
        println(json)
        onResult(json)
    }
    camera.cameraDelegate = handler
    controller.presentViewController(camera, true, null)
}

@OptIn(ExperimentalForeignApi::class)
class EkycHandler(
    val onResult: (String?) -> Unit
) : NSObject(), ICEkycCameraDelegateProtocol {

    @OptIn(BetaInteropApi::class)
    override fun icEkycGetResult() {
        UIDevice.currentDevice.setProximityMonitoringEnabled(false)

        val saved = ICEKYCSavedData.shared()

        val dict: Map<String, Any?> = mapOf(
            "INFO_RESULT" to saved.ocrResult,
            "LIVENESS_CARD_FRONT_RESULT" to saved.livenessCardFrontResult,
            "LIVENESS_CARD_REAR_RESULT" to saved.livenessCardBackResult,
            "COMPARE_RESULT" to saved.compareFaceResult,
            "LIVENESS_FACE_RESULT" to saved.livenessFaceResult,
            "MASKED_FACE_RESULT" to saved.maskedFaceResult,
            "CLIENT_SESSION_RESULT" to saved.clientSessionResult,
            "QR_CODE_RESULT" to saved.scanQRCodeResult,
            "HASH_PORTRAIT" to saved.hashImageFar,
            "HASH_BACK" to saved.hashImageBack,
            "HASH_FRONT" to saved.hashImageFront,
            "NETWORK_PROBLEM" to saved.networkProblem,
            "IMAGE_PATH" to mapOf(
                "front" to saved.pathImageCropedFront.path,
                "back" to saved.pathImageCropedBack.path,
                "selfie" to saved.pathImageCropedFaceFar.path,
                "PORTRAIT_SCAN3D" to saved.dataScan3D.toString(),
                "VIDEO_RECORDING_PATH" to saved.pathVideoRecordFace.path
            )
        )

        val nsDict = dict.toNSDictionary()

        val jsonData = NSJSONSerialization.dataWithJSONObject(
            nsDict,
            options = NSJSONWritingPrettyPrinted,
            error = null
        )

        val jsonString = jsonData?.let {
            NSString.create(it, NSUTF8StringEncoding) as String
        }

        onResult(jsonString)
    }

    override fun icEkycCameraClosedWithType(type: ScreenType) {
        UIDevice.currentDevice.setProximityMonitoringEnabled(false)
        onResult(null)
    }

    fun Map<String, Any?>.toNSDictionary(): NSDictionary {
        val dict = NSMutableDictionary()
        for ((k, v) in this) {
            if (v != null) dict.setObject(v, forKey = k as NSString)
        }
        return dict
    }
}
