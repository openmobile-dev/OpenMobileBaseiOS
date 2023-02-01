import SDWebImageSwiftUI
import SwiftUI

@available(iOS 13.0.0, *)
struct UIImage: View {
    var url: String
    var contentScale: String
    var modifier: [String: AnyObject]?

    /** TODO: missing attributes to map
     val contentDescription = attributes["contentDescription"] as String? ?: ""
     */
    public init(json: [String: AnyObject]) {
        let attributes = json["attributes"] as! [String: AnyObject]
        url = attributes["url"] as! String? ?? "https://via.placeholder.com/150"
        contentScale = attributes["contentScale"] as! String? ?? "fit"
        modifier = attributes["modifier"] as! [String: AnyObject]?
    }

    var body: some View {
        WebImage(url: URL(string: url))
            .resizable()
            .if(contentScale == "fit") { content in
                content.scaledToFit()
            }
            .if(contentScale == "fill") { content in
                content.scaledToFill()
            }
            .modifier(Modifier(modifier: modifier))
    }
}

/*
 WebImage(url: URL(string: url))
     .if(contentScale == "fill") { content in
         content.resizable().scaledToFill()
     }
     /*
         .if(contentScale == "fit") { content in
             (content as! WebImage).resizable().scaledToFit()
         }
      */
     .modifier(Modifier(modifier: modifier))
 */
