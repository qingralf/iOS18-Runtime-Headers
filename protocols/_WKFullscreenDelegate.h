/* Generated by RuntimeBrowser.
 */

@protocol _WKFullscreenDelegate <NSObject>

@optional

- (void)_webView:(WKWebView *)arg1 didFullscreenImageWithQuickLook:(struct CGSize { double x1; double x2; })arg2;
- (void)_webView:(void *)arg1 requestPresentingViewControllerWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, NSError *, void*
- (void)_webViewDidEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewDidExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillExitElementFullscreen:(WKWebView *)arg1;

@end
