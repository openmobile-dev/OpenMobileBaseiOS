import Combine
import SwiftUI

@available(iOS 13.0.0, *)
struct OMUIImage: View {
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
        if let imageURL = URL(string: url) {
            RemoteImage(url: imageURL)
                .if(contentScale == "fit") { content in
                    content.scaledToFit()
                }
                .if(contentScale == "fill") { content in
                    content.scaledToFill()
                }
                .modifier(Modifier(modifier: modifier))
        } else {
            Image(systemName: "exclamationmark.triangle")
        }
    }
}

@available(iOS 13.0.0, *)
struct RemoteImage: View {
    let url: URL
    @State private var image: UIImage?
    @State private var cancellable: AnyCancellable?

    var body: some View {
        Group {
            if let image = image {
                Image(uiImage: image)
                    .resizable()
            } else {
                CustomProgressView()
            }
        }
        .onAppear {
            cancellable = URLSession.shared.dataTaskPublisher(for: url)
                .map { UIImage(data: $0.data) }
                .replaceError(with: nil)
                .receive(on: DispatchQueue.main)
                .sink { self.image = $0 }
        }
        .onDisappear {
            cancellable?.cancel()
        }
    }
}

struct ActivityIndicator: UIViewRepresentable {
    typealias UIViewType = UIActivityIndicatorView

    var isAnimating: Binding<Bool>
    let style: UIActivityIndicatorView.Style

    func makeUIView(context: Context) -> UIActivityIndicatorView {
        return UIActivityIndicatorView(style: style)
    }

    func updateUIView(_ uiView: UIActivityIndicatorView, context: Context) {
        isAnimating.wrappedValue ? uiView.startAnimating() : uiView.stopAnimating()
    }
}

struct CustomProgressView: View {
    var body: some View {
        VStack {
            ActivityIndicator(isAnimating: .constant(true), style: .medium)
            Text("Loading...")
        }
    }
}
