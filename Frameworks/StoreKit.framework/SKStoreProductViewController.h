/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreProductViewController : UIViewController <SKObservableViewDelegate, SKRemoteDismissingViewController, SKScreenTrackingDelegate, UIViewControllerTransitioningDelegate> {
    NSString * _additionalBuyParameters;
    NSString * _affiliateIdentifier;
    bool  _askToBuy;
    bool  _automaticallyDismisses;
    NSString * _bundleID;
    NSString * _cancelButtonTitle;
    _UIAsyncInvocation * _cancelRequest;
    NSString * _clientIdentifier;
    <SKStoreProductViewControllerDelegatePrivate> * _delegate;
    id /* block */  _dismissalCompleted;
    NSString * _hostBundleIdentifier;
    id /* block */  _loadBlock;
    long long  _originalStatusBarStyle;
    bool  _productPageQFAEnabled;
    long long  _productPageStyle;
    NSString * _promptString;
    SKRemoteProductViewController * _remoteViewController;
    SKProductRemoteViewTask * _remoteViewTask;
    NSString * _rightBarButtonTitle;
    NSDictionary * _scriptContextDictionary;
    SKScrollDetector * _scrollDetector;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> * _serviceProxy;
    bool  _showsRightBarButton;
    bool  _showsStoreButton;
    NSString * _usageContext;
    bool  _viewWasOnScreen;
    bool  _viewWillAppearWasCalled;
}

@property (nonatomic, copy) NSString *additionalBuyParameters;
@property (nonatomic, copy) NSString *affiliateIdentifier;
@property (nonatomic) bool askToBuy;
@property (nonatomic) bool automaticallyDismisses;
@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SKStoreProductViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostBundleIdentifier;
@property (nonatomic) long long productPageStyle;
@property (nonatomic, copy) NSString *promptString;
@property (nonatomic, copy) NSString *rightBarButtonTitle;
@property (nonatomic, copy) NSDictionary *scriptContextDictionary;
@property (nonatomic) bool showsRightBarButton;
@property (nonatomic) bool showsStoreButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *usageContext;

+ (id)_defaultIXStoreSheetDictionary;
+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_configureForFullScreenPresentationOrThrowException;
- (void)_didFinish;
- (void)_didFinishDismissal;
- (void)_didFinishWithResult:(long long)arg1;
- (void)_fireLoadBlockBeforeFinishing;
- (void)_forceOrientationBackToSupportedOrientation;
- (id)_impressionDictFromImpression:(id)arg1;
- (bool)_isInvalidSubclass;
- (bool)_isPeeking;
- (void)_loadDidFinishWithResult:(bool)arg1 error:(id)arg2;
- (int)_preferredStatusBarVisibility;
- (void)_presentPageWithRequest:(id)arg1 animated:(bool)arg2;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_setLoadBlock:(id /* block */)arg1;
- (void)_throwUnsupportedPresentationException;
- (void)_userDidInteractWithProduct:(unsigned long long)arg1;
- (void)_viewTapped:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)additionalBuyParameters;
- (id)affiliateIdentifier;
- (id)animationControllerForDismissedController:(id)arg1;
- (bool)askToBuy;
- (bool)automaticallyDismisses;
- (id)cancelButtonTitle;
- (id)clientIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)didChangeAlpha:(double)arg1;
- (void)didChangeHidden;
- (bool)dismissRemoteViewControllerWithCompletion:(id /* block */)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)finishImmediately;
- (id)hostBundleIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithParameters:(id)arg1 impression:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (long long)productPageStyle;
- (id)promptString;
- (id)rightBarButtonTitle;
- (id)scriptContextDictionary;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(bool)arg1;
- (void)setAutomaticallyDismisses:(bool)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostBundleIdentifier:(id)arg1;
- (void)setNoClippingIfNeeded;
- (void)setParentViewController:(id)arg1;
- (void)setPresentationStyleIfNeeded;
- (void)setProductPageStyle:(long long)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setUsageContext:(id)arg1;
- (bool)shouldAutorotate;
- (bool)showsRightBarButton;
- (bool)showsStoreButton;
- (void)sk_didBecomeOffScreen:(id)arg1;
- (void)sk_didBecomeOnScreen:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)usageContext;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end