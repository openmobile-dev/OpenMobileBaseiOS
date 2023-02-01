import OpenMobileCore
import SwiftUI

@available(iOS 13.0.0, *)
public class OpenMobileUI: ActionManager {
    public func runFutureAction(action: ActionType, parameters: [AnyHashable: Any]? = nil, completionHandler: @escaping (Any?, Error?) -> Void) {}

    public init() {}

    public func runAction(action: ActionType, parameters: [AnyHashable: Any]? = nil) -> Any? {
        switch action as! UIActions {
        case .uiLaunchIntent:
            guard let json = parameters?["json"] else { return nil }
            build(json: json as! String)
        case .uiBuildIntent:
            guard let json = parameters?["json"] else { return nil }
            build(json: json as! String)
        case .uiShowToast:
            guard let message = parameters?["message"] else { return nil }
            showToast(message: message as! String)
        case .uiDismissIntent:
            dismiss()
        case .uiOpenUrl:
            guard let url = parameters?["url"] else { return nil }
            openUrl(value: url as! String)
        default:
            print("Action not found")
        }
        return nil
    }

    private func build(json: String) {
        // let transitioner = OpenMobileViewTransitioner()
        let viewController = UIHostingController(rootView: LayoutView(stringJson: json, swipe: false))
        // viewController.modalPresentationStyle = .fullScreen
        // viewController.transitioningDelegate = transitioner
        viewController.modalPresentationStyle = .popover
        UIApplication.topViewController()?.present(viewController, animated: true, completion: nil)
    }

    private func openUrl(value: String) {
        if let url = URL(string: value) {
            let webview = "{\"type\":\"column\",\"attributes\":{\"modifier\":{\"backgroundColor\":\"#FFFFFF\",\"fillMaxHeight\":true,\"fillMaxWidth\":true},\"verticalArrangement\":\"top\",\"horizontalAlignment\":\"center\"},\"children\":[{\"type\":\"webView\",\"attributes\":{\"modifier\":{\"fillMaxHeight\":true,\"fillMaxWidth\":true},\"url\":\"\(url)\"}}]}"
            build(json: webview)
            // UIApplication.shared.open(url)
        }
    }

    private func dismiss() {
        UIApplication.topViewController()?.dismiss(animated: true)
    }

    private func showToast(message: String) {
        let alertController = UIAlertController(
            title: "Open Mobile",
            message: message,
            preferredStyle: .alert)
        let OKAction = UIAlertAction(title: "OK", style: .default)
        alertController.addAction(OKAction)
        UIApplication.topViewController()?.present(
            alertController,
            animated: true,
            completion: nil)
    }
}

extension UIApplication {
    class func topViewController(base: UIViewController? = UIApplication.shared.currentWindow?.rootViewController) -> UIViewController? {
        if let tab = base as? UITabBarController {
            if let selected = tab.selectedViewController {
                return topViewController(base: selected)
            }
        }
        if let presented = base?.presentedViewController {
            return topViewController(base: presented)
        }
        return base
    }
}

class OpenMobileViewTransitioner: NSObject, UIViewControllerTransitioningDelegate {
    var isPresenting: Bool = true

    func animationController(forPresented presented: UIViewController, presenting: UIViewController, source: UIViewController) -> UIViewControllerAnimatedTransitioning? {
        isPresenting = true
        return LeftToRightAnimator()
    }

    func animationController(forDismissed dismissed: UIViewController) -> UIViewControllerAnimatedTransitioning? {
        isPresenting = false
        // TODO: is not working
        return RightToLeftDismissAnimation()
    }
}

class LeftToRightAnimator: NSObject, UIViewControllerAnimatedTransitioning {
    func transitionDuration(using transitionContext: UIViewControllerContextTransitioning?) -> TimeInterval {
        return 0.6
    }

    func animateTransition(using transitionContext: UIViewControllerContextTransitioning) {
        let containerView = transitionContext.containerView
        let fromViewController = transitionContext.viewController(forKey: .from)!
        let toViewController = transitionContext.viewController(forKey: .to)!
        let finalFrame = transitionContext.finalFrame(for: toViewController)
        toViewController.view.frame = finalFrame.offsetBy(dx: finalFrame.width, dy: 0)
        containerView.addSubview(toViewController.view)
        UIView.animate(withDuration: transitionDuration(using: transitionContext), animations: {
            toViewController.view.frame = finalFrame
            fromViewController.view.frame = finalFrame.offsetBy(dx: -finalFrame.width, dy: 0)
        }, completion: { _ in
            fromViewController.view.frame = finalFrame.offsetBy(dx: 0, dy: 0)
            transitionContext.completeTransition(true)
        })
    }
}

class RightToLeftDismissAnimation: NSObject, UIViewControllerAnimatedTransitioning {
    func transitionDuration(using transitionContext: UIViewControllerContextTransitioning?) -> TimeInterval {
        return 0.6
    }

    func animateTransition(using transitionContext: UIViewControllerContextTransitioning) {
        let fromView = transitionContext.view(forKey: .from)!
        let toView = transitionContext.view(forKey: .to)!
        transitionContext.containerView.addSubview(toView)
        let screenWidth = UIScreen.main.bounds.size.width
        fromView.frame = CGRect(x: 0, y: 0, width: screenWidth, height: fromView.frame.height)
        UIView.animate(withDuration: transitionDuration(using: transitionContext),
                       animations: {
                           fromView.frame = CGRect(x: -screenWidth, y: 0, width: screenWidth, height: fromView.frame.height)
                       }, completion: { _ in
                           transitionContext.completeTransition(!transitionContext.transitionWasCancelled)
                       })
    }
}
