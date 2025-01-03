/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCarrierSignupFlow : TSSIMSetupFlow <SFSafariViewControllerDelegate, TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate> {
    TSBuddyMLController * _buddyMLController;
    CoreTelephonyClient * _client;
    UIViewController * _hostViewController;
    bool  _isQueriableFirstViewController;
    CTPlan * _plan;
    NSDictionary * _postdata;
    UIViewController<TSSetupFlowItem> * _signUpViewController;
    TSSIMSetupFlow * _subFlow;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TSSIMSetupFlow *subFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getSFSafariViewControllerWithURL:(id)arg1;
- (id)_handleCarrierInfoWithUrl:(id)arg1 postdata:(id)arg2 type:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (void)didPurchasePlanSuccessfullyWithCarrier:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 state:(id)arg5;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (id)initWithPlan:(id)arg1;
- (id)initWithPlan:(id)arg1 queriableFirstViewController:(bool)arg2 hostViewController:(id)arg3;
- (id)nextViewControllerFrom:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setSubFlow:(id)arg1;
- (void)showFirstViewControllerWithHostController:(id)arg1 completion:(id /* block */)arg2;
- (void)startTimer:(long long)arg1;
- (id)subFlow;
- (void)viewControllerDidComplete:(id)arg1;

@end
