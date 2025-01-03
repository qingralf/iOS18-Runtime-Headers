/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
 */

@interface AMSUIDDynamicViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate> {
    void $__lazy_storage_$_childNavigationController;
    void account;
    void anonymousMetrics;
    void automaticErrorRetry;
    void bag;
    void child;
    void clientInfo;
    void clientOptions;
    void delegate;
    void didInitialSetup;
    void internalClientOptions;
    void loadPromise;
    void loadState;
    void mediaClientIdentifier;
    void mediaContentDelegate;
    void metricsOverlay;
    void objectGraph;
    void preferredSizingModel;
    void preloadingCompletionPromise;
    void urlPromise;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool anonymousMetrics;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, copy) NSDictionary *clientOptions;
@property (nonatomic) <AMSUIDDynamicViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *internalClientOptions;
@property (nonatomic, copy) NSString *mediaClientIdentifier;
@property (nonatomic) <AMSUIMediaContentDelegate> *mediaContentDelegate;
@property (nonatomic, copy) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)account;
- (id)animationControllerForDismissedController:(id)arg1;
- (bool)anonymousMetrics;
- (id)bag;
- (void)cancelButtonAction;
- (id)clientInfo;
- (id)clientOptions;
- (void)dealloc;
- (id)delegate;
- (void)didEnterBackground;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithBag:(id)arg1 URL:(id)arg2;
- (id)initWithBag:(id)arg1 bagValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)internalClientOptions;
- (void)legacyPurchaseDidSucceed:(id)arg1;
- (void)loadView;
- (id)mediaClientIdentifier;
- (id)mediaContentDelegate;
- (id)metricsOverlay;
- (id)navigationItem;
- (id)preload;
- (void)reloadContentViewImpressionItems;
- (void)setAccount:(id)arg1;
- (void)setAnonymousMetrics:(bool)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setClientOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalClientOptions:(id)arg1;
- (void)setMediaClientIdentifier:(id)arg1;
- (void)setMediaContentDelegate:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willEnterForeground;

@end
