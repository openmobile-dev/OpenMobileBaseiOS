import OpenMobileCore
import SwiftUI

@available(iOS 13.0.0, *)
struct UIButton: View {
    var child: [String: AnyObject]
    var color: String
    var rounded: Double
    var borderWidth: Double
    var borderColor: String
    var modifier: [String: AnyObject]?
    var fillMaxWidth: Bool
    var action: [String: AnyObject]?

    var top: Double?
    var start: Double?
    var end: Double?
    var bottom: Double?

    public init(json: [String: AnyObject]) {
        let attributes = json["attributes"] as! [String: AnyObject]
        child = json["child"] as! [String: AnyObject]
        color = attributes["color"] as! String? ?? "#000000"
        rounded = attributes["rounded"] as! Double? ?? 0.0
        borderWidth = attributes["borderWidth"] as! Double? ?? 0.0
        borderColor = attributes["borderColor"] as! String? ?? "#000000"
        modifier = attributes["modifier"] as! [String: AnyObject]?
        fillMaxWidth = modifier?["fillMaxWidth"] as! Bool? ?? false
        action = json["action"] as! [String: AnyObject]?
    }

    var body: some View {
        Button {
            runAction(action: action)
        } label: {
            UIParser(json: child)
        }
        .modifier(Modifier(modifier: modifier))
        .background(Color(hex: color))
        .cornerRadius(rounded / 3)
        .overlay(
            RoundedRectangle(cornerRadius: rounded / 3)
                .stroke(Color(hex: borderColor), lineWidth: borderWidth)
        )
    }

    func runAction(action: [String: AnyObject]?) {
        guard let action else { return }

        let type = action["type"] as! String? ?? "UI_OPEN_URL"
        let parameters = action["parameters"] as! [String: AnyObject]?

        guard let actionLink = OpenMobileActions.companion.getActionLink(
            type: type,
            parameters: parameters
        )
        else {
            print("runAction couldn't find the actionLink from type :: \(type)")
            return
        }
        OpenMobileCore.shared.runAction(actionLink: actionLink)
    }
}
