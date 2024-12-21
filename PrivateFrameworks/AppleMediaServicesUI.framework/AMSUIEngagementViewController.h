/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIEngagementViewController : AMSUICommonViewController <AMSBagConsumer, AMSUIDynamicViewControllerDelegate, AMSUIWebDelegate> {
    <AMSBagProtocol> * _bag;
    UIViewController * _childController;
    AMSProcessInfo * _clientInfo;
    <AMSUIEngagementViewControllerDelegate> * _delegate;
    AMSEngagementRequest * _effectiveRequest;
    NSDictionary * _engagementMetrics;
    AMSPromise * _loadVCPromise;
    AMSEngagementRequest * _request;
    bool  _started;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) UIViewController *childController;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AMSUIEngagementViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSEngagementRequest *effectiveRequest;
@property (nonatomic, retain) NSDictionary *engagementMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSPromise *loadVCPromise;
@property (nonatomic, readonly) AMSEngagementRequest *request;
@property (nonatomic) bool started;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_enqueueDisplayEvent;
- (id)_isOriginatingURLTrusted;
- (bool)_isURLTrusted:(id)arg1 inDomains:(id)arg2;
- (long long)_modalPresentationStyle;
- (id)_preloadChildVC;
- (void)_receivedCarrierLinkResult:(id)arg1;
- (void)_receivedPurchaseResult:(id)arg1;
- (void)_setup;
- (void)_setupContentSize;
- (void)_startEngagement;
- (void)_updateChildViewController:(id)arg1;
- (id)bag;
- (id)childController;
- (id)clientInfo;
- (id)delegate;
- (id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;
- (bool)dynamicViewController:(id)arg1 handleDelegateAction:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (id)effectiveRequest;
- (id)engagementMetrics;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 delegate:(id)arg3;
- (id)loadVCPromise;
- (void)loadView;
- (id)request;
- (id)requestIsSupported;
- (void)resolveWithResult:(id)arg1 error:(id)arg2;
- (void)setBag:(id)arg1;
- (void)setChildController:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngagementMetrics:(id)arg1;
- (void)setLoadVCPromise:(id)arg1;
- (void)setStarted:(bool)arg1;
- (bool)started;
- (void)updateEffectiveRequest:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)webViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;

@end