import OpenMobileCore
import SwiftUI
import WebKit

@available(iOS 13.0.0, *)
struct OMUIWebView: View {
    var url: String
    var modifier: [String: AnyObject]?

    public init(json: [String: AnyObject]) {
        let attributes = json["attributes"] as! [String: AnyObject]
        url = attributes["url"] as! String? ?? ""
        modifier = attributes["modifier"] as! [String: AnyObject]?
    }

    var body: some View {
        WebView(request: URLRequest(url: URL(string: url)!))
            .modifier(Modifier(modifier: modifier))
    }
}

struct WebView: UIViewRepresentable {
    let request: URLRequest

    func makeUIView(context: Context) -> WKWebView {
        let webConfiguration = WKWebViewConfiguration()
        let userController = WKUserContentController()
        userController.add(AttributesJSBridgeHandler(), name: "AttributesJSBridge")
        webConfiguration.userContentController = userController
        return WKWebView(frame: .zero, configuration: webConfiguration)
    }

    func updateUIView(_ uiView: WKWebView, context: Context) {
        uiView.load(request)
    }
}

class AttributesJSBridgeHandler: NSObject, WKScriptMessageHandler {
    func userContentController(_ userContentController: WKUserContentController, didReceive message: WKScriptMessage) {
        if message.name == "AttributesJSBridge" {
            if let jsonAttributes = message.body as? String {
                let data = convertStringToDictionary(text: jsonAttributes)
                if let map = data {
                    for key in map.keys {
                        print("SetSettingsValue key: \(key) value: \(String(describing: map[key]))")
                        OpenMobileCore.shared.setSettingsValue(key: key, value: map[key] as! String)
                    }
                } else {
                    print("Missing attributes")
                    return
                }
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
}
