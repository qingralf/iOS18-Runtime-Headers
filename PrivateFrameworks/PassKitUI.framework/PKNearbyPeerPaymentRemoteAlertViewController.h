/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNearbyPeerPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    CLInUseAssertion * _inUseAssertion;
    long long  _nearbyContext;
    NSObject<OS_dispatch_source> * _systemUITimer;
    NSDictionary * _userInfo;
    PKNearbyPeerPaymentViewController * _viewController;
}

@property (nonatomic, readonly) long long nearbyContext;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, retain) PKNearbyPeerPaymentViewController *viewController;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_dismiss:(id /* block */)arg1;
- (void)_handleInitialHome;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleButtonActions:(id)arg1;
- (long long)nearbyContext;
- (void)setUserInfo:(id)arg1;
- (void)setViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)userInfo;
- (id)viewController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end