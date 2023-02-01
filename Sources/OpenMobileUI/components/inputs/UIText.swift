import SwiftUI

@available(iOS 13.0.0, *)
struct UIText: View {
    var text: String
    var color: String
    var fontSize: Double
    var fontStyle: String
    var fontWeight: Int
    var letterSpacing: Double
    var textDecoration: String
    var textAlign: String?
    var lineHeight: Double
    var maxLines: Int?
    var modifier: [String: AnyObject]?

    /* TODO: missing attributes to mapping
        style: TextStyle = LocalTextStyle.current
        fontFamily: FontFamily? = null
        overflow = getTextOverflow(attributes["overflow"] as String?)
        softWrap = attributes["softWrap"] as Boolean? ?: true
     */

    public init(json: [String: AnyObject]) {
        let attributes = json["attributes"] as! [String: AnyObject]
        text = attributes["text"] as! String? ?? ""
        color = attributes["color"] as! String? ?? "#000000"
        fontSize = attributes["fontSize"] as! Double? ?? 16.0
        fontStyle = attributes["fontStyle"] as! String? ?? "normal"
        fontWeight = attributes["fontWeight"] as! Int? ?? 400
        letterSpacing = attributes["letterSpacing"] as! Double? ?? 0.0
        textDecoration = attributes["textDecoration"] as! String? ?? "none"
        textAlign = attributes["textAlign"] as! String?
        lineHeight = attributes["lineHeight"] as! Double? ?? 0.0
        maxLines = attributes["maxLines"] as! Int?
        modifier = attributes["modifier"] as! [String: AnyObject]?
    }

    var body: some View {
        Text(text)
            .foregroundColor(Color(hex: color))
            .font(.system(
                size: fontSize,
                weight: getFontStyle(weight: fontWeight)
            ))
            .tracking(letterSpacing)
            .underline(textDecoration == "underline")
            .strikethrough(textDecoration == "lineThrough")
            .multilineTextAlignment(getTextAlign(value: textAlign))
            .lineSpacing(lineHeight)
            .lineLimit(maxLines)
            .modifier(Modifier(modifier: modifier))
            .fixedSize(horizontal: false, vertical: true)
        // TODO: fix issue that makes require ios16 when uncomment next line
        // .italic(fontStyle == "italic")
    }

    private func getFontStyle(weight: Int) -> Font.Weight {
        switch weight {
        case 100:
            return Font.Weight.ultraLight
        case 200:
            return Font.Weight.thin
        case 300:
            return Font.Weight.light
        case 400:
            return Font.Weight.regular
        case 500:
            return Font.Weight.medium
        case 600:
            return Font.Weight.semibold
        case 700:
            return Font.Weight.bold
        case 800:
            return Font.Weight.heavy
        case 900:
            return Font.Weight.black
        default:
            return Font.Weight.regular
        }
    }

    private func getTextAlign(value: String?) -> TextAlignment {
        switch value {
        case "start":
            return TextAlignment.leading
        case "center":
            return TextAlignment.center
        case "end":
            return TextAlignment.trailing
        default:
            return TextAlignment.leading
        }
    }
}
