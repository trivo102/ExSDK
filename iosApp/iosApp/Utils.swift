//
//  Utils.swift
//  iosApp
//
//  Created by TRI on 2/2/26.
//

import Foundation
import Shared

// Simple Collector for Swift
class Collector<T>: Kotlinx_coroutines_coreFlowCollector {
    let callback: (T) -> Void
    
    init(callback: @escaping (T) -> Void) {
        self.callback = callback
    }
    
    func emit(value: Any?, completionHandler: @escaping (Error?) -> Void) {
        if let v = value as? T {
            callback(v)
        }
        completionHandler(nil)
    }
}
