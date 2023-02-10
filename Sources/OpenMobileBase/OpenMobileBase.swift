import Foundation.NSUUID
import OpenMobileCore
import OpenMobileNetwork
import SwiftUI

public struct OpenMobile {
    public static let shared = OpenMobile()
    private init() {}

    public func initialize(baseUrl: String, pkLive: String) {
        OpenMobileCore.shared.initialize()
        OpenMobileCore.shared.registerActionManager(
            name: ManagerType.ui,
            actionManager: OpenMobileUI()
        )
        OpenMobileCore.shared.registerActionManager(
            name: ManagerType.notification,
            actionManager: OMNotificationManager()
        )
        OpenMobileCore.shared.registerActionManager(name: ManagerType.network, actionManager: NetworkManagerLocal(networkRequest: NetworkRequest(
            baseUrl: baseUrl,
            pkLive: pkLive,
            headers: ["Content-Type": "application/json"]
        )))
    }

    public func registerDevicePushToken(token: String, userId: String) {
        _ = runAction(actionLink:
            OpenMobileActions.NOTIFICATION_REGISTER_DEVICE_PUSH_TOKEN(
                tag: "NOTIFICATION_REGISTER_DEVICE_PUSH_TOKEN",
                parameters: [
                    "token": token,
                    "deviceId": getDeviceID(),
                    "userId": userId
                ]
            )
        )
    }

    public func handlePushMessage(data: [AnyHashable: Any]) -> Any? {
        return runAction(actionLink: OpenMobileActions.NOTIFICATION_HANDLE_PUSH_MESSAGE(tag: "NOTIFICATION_HANDLE_PUSH_MESSAGE", parameters: data))
    }

    public func runAction(actionLink: OpenMobileActions) -> Any? {
        return OpenMobileCore.shared.runAction(actionLink: actionLink)
    }

    public func runFutureAction(actionLink: OpenMobileActions, completionHandler: @escaping (Any?, Error?) -> Void) {
        OpenMobileCore.shared.runFutureAction(actionLink: actionLink, completionHandler: completionHandler)
    }

    public func setSettingsValue(key: String, value: String) {
        OpenMobileCore.shared.setSettingsValue(key: key, value: value)
    }

    public func getSettingsValue(key: String) -> String? {
        return OpenMobileCore.shared.getSettingsValue(key: key)
    }

    public func clearSettings() {
        OpenMobileCore.shared.clearSettings()
    }

    public func showMessage(message: String) {
        OpenMobileCore.shared.showMessage(message: message)
    }

    public func getDeviceID() -> String {
        guard let deviceId = getSettingsValue(key: "OPEN_MOBILE_DEVICE_ID") else {
            let randomUUID = randomUUID()
            setSettingsValue(key: "OPEN_MOBILE_DEVICE_ID", value: randomUUID)
            return randomUUID
        }
        return deviceId
    }

    public func renderComponent(json: [String: AnyObject]) -> any View {
        return UIParser(json: json)
    }

    public func renderComponent(json: String) -> any View {
        return UIParser(json: convertStringToDictionary(text: json) ?? [:])
    }

    public func getRemoteComponent(screenId: String, completionHandler: @escaping ([String: AnyObject]?, Error?) -> Void) {
        let actionLink = OpenMobileActions.NETWORK_GET(
            tag: "NETWORK_GET",
            parameters: ["path": "/v1/screens/\(screenId)"]
        )
        OpenMobileCore.shared.runFutureAction(actionLink: actionLink) { response, error in
            if response != nil {
                let responseMap = convertStringToDictionary(text: response as! String)
                var definition = responseMap?["data"]?["definition"]
                if definition != nil {
                    completionHandler(definition as? [String: AnyObject], nil)
                } else {
                    completionHandler(nil, OpenMobileError.wrongResponseError)
                }

            } else if let error = error {
                completionHandler(nil, error)
            } else {
                completionHandler(nil, OpenMobileError.unknowError)
            }
        }
    }

    private func convertStringToDictionary(text: String) -> [String: AnyObject]? {
        if let data = text.data(using: .utf8) {
            do {
                let json = try JSONSerialization.jsonObject(with: data, options: .mutableContainers) as? [String: AnyObject]
                return json
            } catch {
                print("Something went wrong")
            }
        }
        return nil
    }

    private func randomUUID() -> String {
        return NSUUID().uuidString
    }
}

class NetworkManagerLocal: ActionManager {
    let networkRequest: NetworkRequest

    init(networkRequest: NetworkRequest) {
        self.networkRequest = networkRequest
    }

    func runAction(action: ActionType, parameters: [AnyHashable: Any]? = nil) -> Any? {
        return nil
    }

    func runFutureAction(action: ActionType, parameters: [AnyHashable: Any]? = nil, completionHandler: @escaping (Any?, Error?) -> Void) {
        switch action as! NetworkActions {
        case .networkGet:
            if parameters != nil {
                networkRequest.makeGet(parameters: parameters, completionHandler: completionHandler)
            }
        case .networkPost:
            if parameters != nil {
                networkRequest.makePost(parameters: parameters, completionHandler: completionHandler)
            }
        default:
            print("Action not found")
        }
    }
}

enum OpenMobileError: Error {
    case wrongResponseError
    case unknowError
}
