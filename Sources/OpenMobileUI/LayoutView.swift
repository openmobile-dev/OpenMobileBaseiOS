import SwiftUI

@available(iOS 13.0.0, *)
struct LayoutView: View {
    var json: String
    var swipe: Bool

    public init(stringJson: String, swipe: Bool) {
        self.json = stringJson
        self.swipe = swipe
    }

    var body: some View {
        if swipe {
            UIParser(json: convertStringToDictionary(text: json) ?? [:])
                .swipe(right: {
                    UIApplication.topViewController()?.dismiss(animated: true)
                })
        } else {
            UIParser(json: convertStringToDictionary(text: json) ?? [:])
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

extension View {
    func swipe(
        up: @escaping (() -> Void) = {},
        down: @escaping (() -> Void) = {},
        left: @escaping (() -> Void) = {},
        right: @escaping (() -> Void) = {}
    ) -> some View {
        return self.gesture(DragGesture(minimumDistance: 0, coordinateSpace: .local)
            .onEnded { value in
                if value.translation.width < 0 { left() }
                if value.translation.width > 0 { right() }
                if value.translation.height < 0 { up() }
                if value.translation.height > 0 { down() }
            })
    }
}
