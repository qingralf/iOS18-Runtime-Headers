/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebExtensionSidebar : NSObject

@property (nonatomic, readonly) <WKWebExtensionTab> *associatedTab;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) WKWebExtensionContext *webExtensionContext;
@property (nonatomic, readonly) WKWebView *webView;

- (id)associatedTab;
- (id)iconForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEnabled;
- (id)title;
- (id)viewController;
- (id)webExtensionContext;
- (id)webView;
- (void)willCloseSidebar;
- (void)willOpenSidebar;

@end