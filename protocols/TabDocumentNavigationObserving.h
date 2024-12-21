/* Generated by RuntimeBrowser.
 */

@protocol TabDocumentNavigationObserving <NSObject>

@optional

- (void)tabDocumentDidBeginNavigationGesture:(TabDocument *)arg1;
- (void)tabDocumentDidCommitNavigation:(TabDocument *)arg1;
- (void)tabDocumentDidEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)tabDocumentDidEnterFullscreen:(TabDocument *)arg1;
- (void)tabDocumentDidExitFullscreen:(TabDocument *)arg1;
- (void)tabDocumentDidStartLoading:(TabDocument *)arg1;
- (void)tabDocumentWillEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;

@end