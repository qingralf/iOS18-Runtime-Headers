/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQCommerceRemoteUIDelegate : NSObject <AMSPurchaseResponseProtocol, ISStoreURLOperationDelegate, RUIObjectModelDelegate, SKAccountPageViewControllerDelegate> {
    SKAccountPageViewController * _accountPageViewController;
    UIAlertController * _alertController;
    NSDictionary * _buyParameters;
    bool  _cancelled;
    <ICQCommerceRemoteUIDelegateDelegate> * _delegate;
    ISDialog * _dialog;
    bool  _didJustCancelDialog;
    long long  _failureType;
    ISURLOperation * _finishingOperation;
    bool  _forRetailOffer;
    bool  _modallyPresented;
    UINavigationController * _navigationController;
    NSMutableArray * _objectModels;
    UINavigationController * _parentNavigationController;
    bool  _pseudoModallyPresented;
    NSString * _purchaseToken;
    NSOperationQueue * _queue;
    id /* block */  _queuedCompletionBlock;
    bool  _registeredAuthNotification;
    bool  _registeredDialogNotification;
    NSDictionary * _requestHeaders;
    bool  _shouldOfferDeviceOffers;
    bool  _shouldOfferFamilySharePlansOnly;
    bool  _skipCompletionAlert;
    bool  _skipGoBack;
    bool  _skipRetryWithoutToken;
    bool  _supportsModernAlerts;
    UIViewController * _topViewController;
}

@property (nonatomic, copy) NSDictionary *buyParameters;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ICQCommerceRemoteUIDelegateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didJustCancelDialog;
@property (nonatomic) long long failureType;
@property (nonatomic) bool forRetailOffer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *purchaseToken;
@property (nonatomic, copy) NSDictionary *requestHeaders;
@property (nonatomic) bool shouldOfferDeviceOffers;
@property (nonatomic) bool shouldOfferFamilySharePlansOnly;
@property (nonatomic) bool skipCompletionAlert;
@property (nonatomic) bool skipGoBack;
@property (nonatomic) bool skipRetryWithoutToken;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsModernAlerts;

- (void).cxx_destruct;
- (void)_clearRetailFollowUpItem;
- (void)_dismissAccountPageViewController:(id)arg1 keepCommerceSpinner:(bool)arg2;
- (void)_dismissAlertsWithCompletion:(id /* block */)arg1;
- (void)_forgetAccountPageViewController:(id)arg1;
- (void)_handleFinishForOperation:(id)arg1 withOutput:(id)arg2;
- (void)_handleOperationError:(id)arg1;
- (bool)_handleResponseForDialog:(id)arg1 atIndex:(long long)arg2;
- (bool)_hasUnfinishedOperations;
- (bool)_isPurchaseTokenOperation:(id)arg1;
- (bool)_isSuccessfulPurchaseTokenOperation:(id)arg1;
- (bool)_loadNativeURL:(id)arg1;
- (void)_popAccountPageViewController:(id)arg1 keepCommerceSpinner:(bool)arg2;
- (void)_popCommerceSpinnerIfNeeded;
- (void)_popObjectModelAnimated:(bool)arg1;
- (void)_presentAlertWithDialog:(id)arg1;
- (bool)_shouldSuppressDialog:(id)arg1 failureType:(long long)arg2;
- (long long)_statusCodeForFinishedOperation:(id)arg1;
- (void)accountPageViewController:(id)arg1 financeInterruptionResolved:(bool)arg2;
- (void)accountPageViewControllerDidFinish:(id)arg1;
- (id)buyParameters;
- (void)cancelFlowBecause:(id)arg1;
- (void)cancelRemoteUI;
- (void)cancelRemoteUIKeeping:(id)arg1;
- (void)cleanupLoader;
- (void)dealloc;
- (id)delegate;
- (bool)didJustCancelDialog;
- (bool)didUserDismissAMSFlow:(id)arg1;
- (void)errorWithTitle:(id)arg1 andExplanation:(id)arg2 dismissedCompletion:(id /* block */)arg3;
- (long long)failureType;
- (bool)forRetailOffer;
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDialog:(id)arg1;
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithNavigationController:(id)arg1 needsModalPresentation:(bool)arg2;
- (void)loadURLforKey:(id)arg1;
- (void)makeBuyRequest:(id)arg1;
- (void)makeBuyRequest:(id)arg1 forceAuth:(bool)arg2 usePurchaseToken:(bool)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)presentationContext;
- (void)processLink:(id)arg1 forceAuth:(bool)arg2;
- (void)processLink:(id)arg1 forceAuth:(bool)arg2 needsAuth:(bool)arg3;
- (void)processLink:(id)arg1 forceAuth:(bool)arg2 needsAuth:(bool)arg3 localAuth:(bool)arg4;
- (void)processLink:(id)arg1 forceAuth:(bool)arg2 needsAuth:(bool)arg3 localAuth:(bool)arg4 usePurchaseToken:(bool)arg5;
- (id)purchaseToken;
- (void)purchaseWithToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3;
- (void)pushSpinner;
- (id)requestHeaders;
- (void)retryPurchaseWithoutToken;
- (void)setBuyParameters:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidJustCancelDialog:(bool)arg1;
- (void)setFailureType:(long long)arg1;
- (void)setForRetailOffer:(bool)arg1;
- (void)setPurchaseToken:(id)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setShouldOfferDeviceOffers:(bool)arg1;
- (void)setShouldOfferFamilySharePlansOnly:(bool)arg1;
- (void)setSkipCompletionAlert:(bool)arg1;
- (void)setSkipGoBack:(bool)arg1;
- (void)setSkipRetryWithoutToken:(bool)arg1;
- (void)setSupportsModernAlerts:(bool)arg1;
- (bool)shouldOfferDeviceOffers;
- (bool)shouldOfferFamilySharePlansOnly;
- (bool)skipCompletionAlert;
- (bool)skipGoBack;
- (bool)skipRetryWithoutToken;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsModernAlerts;
- (void)unregisterAuthNotification;
- (void)userCompletedFlow:(long long)arg1;

@end
