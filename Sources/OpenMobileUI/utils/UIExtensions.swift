import OpenMobileCore
import SwiftUI

@available(iOS 13.0.0, *)
extension Color {
    init(hex: String) {
        let hex = hex.trimmingCharacters(in: CharacterSet.alphanumerics.inverted)
        var int: UInt64 = 0
        Scanner(string: hex).scanHexInt64(&int)
        let a, r, g, b: UInt64
        switch hex.count {
        case 3: // RGB (12-bit)
            (a, r, g, b) = (255, (int >> 8) * 17, (int >> 4 & 0xF) * 17, (int & 0xF) * 17)
        case 6: // RGB (24-bit)
            (a, r, g, b) = (255, int >> 16, int >> 8 & 0xFF, int & 0xFF)
        case 8: // ARGB (32-bit)
            (a, r, g, b) = (int >> 24, int >> 16 & 0xFF, int >> 8 & 0xFF, int & 0xFF)
        default:
            (a, r, g, b) = (1, 1, 1, 0)
        }

        self.init(
            .sRGB,
            red: Double(r) / 255,
            green: Double(g) / 255,
            blue: Double(b) / 255,
            opacity: Double(a) / 255
        )
    }
}

@available(iOS 13.0.0, *)
extension View {
    @available(iOS, deprecated: 15.0, message: "No longer needed, use the default background modifier instead")
    func backgroundColor(_ color: Color) -> some View {
        modifier(BackgroundColorModifier(color: color))
    }
}

@available(iOS 13.0.0, *)
extension View {
    /// Applies the given transform if the given condition evaluates to `true`.
    /// - Parameters:
    ///   - condition: The condition to evaluate.
    ///   - transform: The transform to apply to the source `View`.
    /// - Returns: Either the original `View` or the modified `View` if the condition is `true`.
    @ViewBuilder func `if`<Content: View>(_ condition: @autoclosure () -> Bool, transform: (Self) -> Content) -> some View {
        if condition() {
            transform(self)
        } else {
            self
        }
    }
}

@available(iOS 13.0.0, *)
extension UIApplication {
    var currentWindow: UIWindow? {
        connectedScenes
            .flatMap { ($0 as? UIWindowScene)?.windows ?? [] }
            .first { $0.isKeyWindow }
    }
}

/* -------------------------

        Views Modifier

 ---------------------------*/

@available(iOS 13.0.0, *)
struct BackgroundColorModifier: ViewModifier {
    var color: Color

    func body(content: Content) -> some View {
        if #available(iOS 15.0, *) {
            content
                .background(color)
        } else {
            ZStack {
                color
                content
            }
        }
    }
}

@available(iOS 13.0.0, *)
struct Modifier: ViewModifier {
    var modifier: [String: AnyObject]?

    @ViewBuilder func body(content: Content) -> some View {
        if modifier != nil {
            let backgroundColor = modifier?["backgroundColor"] as! String? ?? "#00FFFFFF"
            let rounded = modifier?["rounded"] as! Double? ?? 0.0

            let padding = modifier?["padding"] as! [String: AnyObject]?
            let top = padding?["top"] as! Double?
            let start = padding?["start"] as! Double?
            let end = padding?["end"] as! Double?
            let bottom = padding?["bottom"] as! Double?

            let margin = modifier?["margin"] as! [String: AnyObject]?
            let mTop = margin?["top"] as! Double?
            let mStart = margin?["start"] as! Double?
            let mEnd = margin?["end"] as! Double?
            let mBottom = margin?["bottom"] as! Double?

            let width = modifier?["width"] as! CGFloat?
            let height = modifier?["height"] as! CGFloat?
            let fillMaxHeight = modifier?["fillMaxHeight"] as! Bool? ?? false
            let fillMaxWidth = modifier?["fillMaxWidth"] as! Bool? ?? false

            let action = modifier?["action"] as! [String: AnyObject]?

            content
                .cornerRadius(rounded * 1.5)
                .if(fillMaxHeight) { content in
                    content.frame(maxHeight: .infinity)
                }
                .if(fillMaxWidth) { content in
                    content.frame(maxWidth: .infinity)
                }
                .if(height != nil) { content in
                    content.frame(height: height)
                }
                .if(width != nil) { content in
                    content.frame(width: width)
                }
                .if(top != nil) { content in
                    content.padding(.top, top!)
                }
                .if(start != nil) { content in
                    content.padding(.leading, start!)
                }
                .if(end != nil) { content in
                    content.padding(.trailing, end!)
                }
                .if(bottom != nil) { content in
                    content.padding(.bottom, bottom!)
                }
                .backgroundColor(Color(hex: backgroundColor))
                .if(mTop != nil) { content in
                    content.padding(.top, mTop!)
                }
                .if(mStart != nil) { content in
                    content.padding(.leading, mStart!)
                }
                .if(mEnd != nil) { content in
                    content.padding(.trailing, mEnd!)
                }
                .if(mBottom != nil) { content in
                    content.padding(.bottom, mBottom!)
                }
                .if(action != nil) { content in
                    content.onTapGesture {
                        runAction(action: action)
                    }
                }
        } else {
            content
        }
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
