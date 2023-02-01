import SwiftUI

@available(iOS 13.0.0, *)
struct UIColumn: View {
    var children: [[String: AnyObject]]
    var horizontalAlignment: String
    var verticalArrangement: String
    var modifier: [String: AnyObject]?
    var fillMaxHeight: Bool
    var verticalScroll: Bool

    public init(json: [String: AnyObject]) {
        let attributes = json["attributes"] as! [String: AnyObject]
        children = json["children"] as! [[String: AnyObject]]
        horizontalAlignment = attributes["horizontalAlignment"] as! String? ?? "start"
        verticalArrangement = attributes["verticalArrangement"] as! String? ?? "top"
        modifier = attributes["modifier"] as! [String: AnyObject]?
        fillMaxHeight = modifier?["fillMaxHeight"] as! Bool? ?? false
        verticalScroll = modifier?["verticalScroll"] as! Bool? ?? false
    }

    var body: some View {
        VStack(
            alignment: getHorizontalAlignment(value: horizontalAlignment),
            spacing: 0
        ) {
            ForEach(
                0 ... children.count - 1,
                id: \.self
            ) {
                UIParser(json: children[$0])
            }
        }
        .if(fillMaxHeight) { content in
            content.frame(maxHeight: .infinity, alignment: getVerticalAlignment(value: verticalArrangement))
        }
        .modifier(Modifier(modifier: modifier))
        .if(verticalScroll) { content in
            ScrollView {
                content
            }
        }
    }

    private func getHorizontalAlignment(value: String?) -> HorizontalAlignment {
        switch value {
        case "start":
            return HorizontalAlignment.leading
        case "center":
            return HorizontalAlignment.center
        case "end":
            return HorizontalAlignment.trailing
        default:
            return HorizontalAlignment.leading
        }
    }

    private func getVerticalAlignment(value: String?) -> Alignment {
        switch value {
        case "top":
            return Alignment.topLeading
        case "bottom":
            return Alignment.bottomLeading
        default:
            return Alignment.topLeading
        }
    }
}
