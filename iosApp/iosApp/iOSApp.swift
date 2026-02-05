import ExSdk
import SwiftUI

@main
struct iOSApp: App {
    
    init() {
        ExSdk.initialize()
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
