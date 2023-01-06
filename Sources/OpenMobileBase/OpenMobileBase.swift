import OpenMobileCore

public struct OpenMobileBase {
    // static let shared = OpenMobileBase()
    public init() {}

    public func initialize(baseUrl: String, pkLive: String) {
        OpenMobile.shared.initialize()
        /*
         OpenMobile.shared.initialize()
         OpenMobile.shared.registerActionManager(name: ManagerType.ui, actionManager: OpenMobileUI())
         OpenMobile.shared.registerActionManager(name: ManagerType.notification, actionManager: OMNotificationManager())
          */
    }

    public func printExample() {
        print("hello!")
    }
}
