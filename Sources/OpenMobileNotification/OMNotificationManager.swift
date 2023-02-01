import OpenMobileCore

public class OMNotificationManager: ActionManager {
    public func runFutureAction(action: ActionType, parameters: [AnyHashable: Any]? = nil, completionHandler: @escaping (Any?, Error?) -> Void) {}

    public init() {}

    public func runAction(action: ActionType, parameters: [AnyHashable: Any]? = nil) -> Any? {
        switch action as! NotificationsActions {
        case .notificationShowNotification:
            guard parameters != nil else { return nil }
            buildNotification(data: parameters)
            return nil
        case .notificationRegisterDevicePushToken:
            guard let token = parameters?["token"] else { return nil }
            guard let deviceId = parameters?["deviceId"] else { return nil }
            guard let userId = parameters?["userId"] else { return nil }
            registerDevicePushToken(token: token as! String, deviceId: deviceId as! String, userId: userId as! String)
            return nil
        case .notificationHandlePushMessage:
            guard parameters != nil else { return nil }
            handlePushMessage(data: parameters)
            return nil
        case .notificationDeregisterDevicePushToken:
            guard let deviceId = parameters?["deviceId"] else { return nil }
            deregisterDevicePushToken(deviceId: deviceId as! String)
            return nil
        default:
            print("Action not found")
            return nil
        }
    }

    private func registerDevicePushToken(token: String, deviceId: String, userId: String) {
        let body = "{ \"device_token\": { \"user_id\": \"\(userId)\", \"device_id\": \"\(deviceId)\", \"token\": \"\(token)\" } }"
        print("Register body :: \(body)")
        OpenMobileCore.shared.runFutureAction(
            actionLink: OpenMobileActions.NETWORK_POST(
                tag: "NETWORK_POST",
                parameters: [
                    "path": "/v1/device_tokens",
                    "body": body
                ]
            ),
            completionHandler: { data, error in
                print("Request response data :: \(String(describing: data)) error :: \(String(describing: error))")
            }
        )
    }

    private func handlePushMessage(data: [AnyHashable: Any]?) {
        if let dataAction = data?["action"] {
            let action = convertStringToDictionary(text: dataAction as! String)
            let type = action?["type"] as! String
            let parameters = action?["parameters"] as! [AnyHashable: Any]?
            guard let actionLink = OpenMobileActions.companion.getActionLink(
                type: type,
                parameters: parameters
            ) else {
                print("runAction couldn't find the actionLink from type :: \(type)")
                return
            }
            OpenMobileCore.shared.runAction(actionLink: actionLink)
        }
    }

    private func deregisterDevicePushToken(deviceId: String) {
        /** https://openmobile.dev/api/devices/deregister_token
         * deviceId: device para identificarlo **/
        // Log.i("OpenMobile", "Deregister Device :: $deviceId")
    }

    private func buildNotification(data: [AnyHashable: Any]?) {}

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
}
