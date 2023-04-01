import SwiftUI

@available(iOS 13.0.0, *)
public struct UIParser: View {
    var jsonMap: [String: AnyObject]

    public init(json: [String: AnyObject]) {
        jsonMap = json
    }

    public var body: some View {
        guard let type = jsonMap["type"] else { return AnyView(UIError(error: "No Type")) }
        switch type as! String {
        case "column":
            return AnyView(UIColumn(json: jsonMap))
        case "row":
            return AnyView(UIRow(json: jsonMap))
        case "text":
            return AnyView(UIText(json: jsonMap))
        case "image":
            return AnyView(OMUIImage(json: jsonMap))
        case "button":
            return AnyView(UIButton(json: jsonMap))
        case "webView":
            return AnyView(OMUIWebView(json: jsonMap))
        default:
            return AnyView(UIError(error: "\(type) Component Not Found"))
        }
    }
}

@available(iOS 13.0.0, *)
struct UIError: View {
    var error: String

    public init(error: String) {
        self.error = error
    }

    var body: some View {
        return Text(error)
    }
}
