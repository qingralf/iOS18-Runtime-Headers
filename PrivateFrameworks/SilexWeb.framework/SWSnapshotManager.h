/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

@interface SWSnapshotManager : NSObject <SWSnapshotManager> {
    <SWConfigurationManager> * _configurationManager;
    WKWebView * _webView;
}

@property (nonatomic, readonly) <SWConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)configurationManager;
- (id)initWithWebView:(id)arg1 configurationManager:(id)arg2;
- (void)takeSnapshotWithCompletionHandler:(id /* block */)arg1;
- (id)webView;

@end
