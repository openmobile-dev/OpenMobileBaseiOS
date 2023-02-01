import SwiftUI

@available(iOS 13.0.0, *)
struct UIRow: View {
    var children: [[String: AnyObject]]
    var horizontalArrangement: String
    var verticalAlignment: String
    var modifier: [String: AnyObject]?
    var fillMaxWidth: Bool
    var horizontalScroll: Bool

    public init(json: [String: AnyObject]) {
        let attributes = json["attributes"] as! [String: AnyObject]
        children = json["children"] as! [[String: AnyObject]]
        horizontalArrangement = attributes["horizontalArrangement"] as! String? ?? "start"
        verticalAlignment = attributes["verticalAlignment"] as! String? ?? "top"
        modifier = attributes["modifier"] as! [String: AnyObject]?
        fillMaxWidth = modifier?["fillMaxWidth"] as! Bool? ?? false
        horizontalScroll = modifier?["horizontalScroll"] as! Bool? ?? false
    }

    var body: some View {
        HStack(
            alignment: VerticalAlignment.center,
            spacing: 0
        ) {
            if horizontalArrangement == "end" {
                Spacer()
            }
            ForEach(
                0 ... children.count - 1,
                id: \.self
            ) {
                UIParser(json: children[$0])
            }
            if horizontalArrangement == "start" {
                Spacer()
            }
        }
        .modifier(Modifier(modifier: modifier))
        .if(fillMaxWidth) { content in
            content.frame(maxWidth: .infinity, alignment: getHorizontalAlignment(value: horizontalArrangement))
        }
        .if(horizontalScroll) { content in
            ScrollView(.horizontal) {
                content
            }
        }
    }

    private func getVerticalAlignment(value: String?) -> VerticalAlignment {
        switch value {
        case "top":
            return VerticalAlignment.top
        case "center":
            return VerticalAlignment.center
        case "bottom":
            return VerticalAlignment.bottom
        default:
            return VerticalAlignment.top
        }
    }

    private func getHorizontalAlignment(value: String?) -> Alignment {
        switch value {
        case "start":
            return Alignment.leading
        case "center":
            return Alignment.center
        case "end":
            return Alignment.trailing
        default:
            return Alignment.leading
        }
    }
}
