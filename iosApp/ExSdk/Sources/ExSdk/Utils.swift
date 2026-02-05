//
//  Utils.swift
//  iosApp
//
//  Created by TRI on 2/2/26.
//

import Foundation
import UIKit
import ExSdkCore

// Simple Collector for Swift
public class Collector<T>: FlowCollector {
    let callback: (T) -> Void
    
    public init(callback: @escaping (T) -> Void) {
        self.callback = callback
    }
    
    public func emit(value: Any?, completionHandler: @escaping (Error?) -> Void) {
        if let v = value as? T {
            callback(v)
        }
        completionHandler(nil)
    }
}

func topViewController(
    controller: UIViewController? = UIApplication.shared
        .connectedScenes
        .compactMap { ($0 as? UIWindowScene)?.keyWindow }
        .first?
        .rootViewController
) -> UIViewController? {
    
    if let nav = controller as? UINavigationController {
        return topViewController(controller: nav.visibleViewController)
    }
    if let tab = controller as? UITabBarController {
        return tab.selectedViewController
    }
    if let presented = controller?.presentedViewController {
        return topViewController(controller: presented)
    }
    return controller
}
