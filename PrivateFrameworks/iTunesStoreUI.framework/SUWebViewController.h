/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUWebViewController : SUViewController <SUWebViewDelegate, SUWebViewManagerDelegate> {
    ACAccount * _account;
    SSMutableAuthenticationContext * _authenticationContext;
    SUDelayedNavigationItem * _delayedNavigationItem;
    NSURL * _displayedURL;
    bool  _hasEverAppeared;
    long long  _lastKnownOrientation;
    id /* block */  _loadBlock;
    SUMescalSession * _mescalSession;
    SUObjectPool * _objectPool;
    ISURLRequestPerformance * _performanceMetrics;
    long long  _scheduledOrientation;
    bool  _shouldSignRequests;
    SUStorePageProtocol * _storePageProtocol;
    long long  _style;
    NSDictionary * _tidHeaders;
    NSURL * _url;
    bool  _viewIsReady;
    SUWebView * _webView;
    SUWebViewManager * _webViewManager;
}

@property (getter=_mescalSession, setter=_setMescalSession:, nonatomic, retain) SUMescalSession *_mescalSession;
@property (getter=_performanceMetrics, setter=_setPerformanceMetrics:, nonatomic, retain) ISURLRequestPerformance *_performanceMetrics;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldSignRequests;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tidHeaders;
@property (nonatomic) bool viewIsReady;
@property (nonatomic, readonly) SUWebView *webView;

- (void)_addPlaceholderBackgroundView;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_applyScriptProperties:(id)arg1;
- (id)_defaultBackgroundColor;
- (void)_finishLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_getURLRequestForOperation:(id)arg1 block:(id /* block */)arg2;
- (void)_loadURLRequest:(id)arg1;
- (void)_loadWithURLOperation:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_mescalSession;
- (id)_performanceMetrics;
- (id)_placeholderBackgroundView;
- (void)_prepareToLoadURL:(id)arg1;
- (void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1;
- (void)_reloadObjectPool;
- (void)_reloadPlaceholderBackgroundView;
- (void)_reloadUI;
- (void)_removePlaceholderBackgroundView;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(long long)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)_setLastKnownOrientation:(long long)arg1;
- (void)_setMescalSession:(id)arg1;
- (void)_setPerformanceMetrics:(id)arg1;
- (id)account;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (void)dealloc;
- (id)displayedURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (void)invalidate;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })minimumViewSize;
- (id)navigationItemForScriptInterface;
- (id)newRotationController;
- (id)newScriptInterface;
- (id)newScriptInterfaceForWebViewManager:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setShouldSignRequests:(bool)arg1;
- (void)setStorePageProtocol:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTidHeaders:(id)arg1;
- (void)setViewIsReady:(bool)arg1;
- (bool)shouldSignRequests;
- (void)storePageCleanupBeforeTearDown;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (long long)style;
- (id)tidHeaders;
- (id)viewControllerForWebViewManager:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (bool)viewIsReady;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;
- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;
- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
- (void)webViewManagerDidFinishLoad:(id)arg1;
- (void)webViewManagerDidStartLoad:(id)arg1;

@end
