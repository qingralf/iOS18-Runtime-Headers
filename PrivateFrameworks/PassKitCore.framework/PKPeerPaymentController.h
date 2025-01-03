/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPeerPaymentAccount * _account;
    PKContactResolver * _contactResolver;
    <PKPeerPaymentControllerDelegate> * _delegate;
    PKPeerPaymentControllerInternalState * _is;
    PKPaymentPass * _peerPaymentPass;
    bool  _performOnAuthorization;
    NSObject<OS_dispatch_queue> * _performQuoteCallbackQueue;
    NSError * _performQuoteError;
    NSObject<OS_dispatch_group> * _performQuoteGroup;
    bool  _performQuoteSuccess;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _quoteAuthorizationCallbackQueue;
    PKPaymentAuthorizationCoordinator * _quoteAuthorizationCoordinator;
    NSError * _quoteAuthorizationError;
    NSObject<OS_dispatch_group> * _quoteAuthorizationGroup;
    bool  _quoteAuthorizationSuccess;
    PKPeerPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKPeerPaymentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) PKPaymentPass *peerPaymentPass;
@property (nonatomic, readonly) PKPeerPaymentPerformResponse *performQuoteResponse;
@property (nonatomic, readonly) PKPeerPaymentQuote *quote;
@property (nonatomic, readonly, copy) PKPeerPaymentRecipient *recipient;
@property (nonatomic, readonly, copy) NSString *recipientDisplayName;
@property (nonatomic, readonly, copy) NSString *recipientPhoneOrEmail;
@property (nonatomic, readonly) PKPeerPaymentRequestToken *requestToken;
@property (nonatomic, readonly, copy) NSString *senderPhoneOrEmail;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPeerPaymentWebService *webService;

+ (id)_displayNameForRecipientAddress:(id)arg1 contactResolver:(id)arg2 foundInContacts:(bool*)arg3;
+ (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
+ (id)_paymentNotCompletedErrorWithError:(id)arg1;
+ (id)_peerPaymentPassURL;
+ (void)_sendAuthorizedQuoteAnalyticsWithSuccess:(bool)arg1 mode:(unsigned long long)arg2 authorizedQuote:(id)arg3 status:(long long)arg4;
+ (id)displayNameForAddress:(id)arg1 contactResolver:(id)arg2;
+ (id)displayableErrorForError:(id)arg1;
+ (bool)errorIsIdentityVerificationRequiredError:(id)arg1;
+ (bool)errorIsTermsAcceptanceRequiredError:(id)arg1;
+ (void)performNearbyAuthorizedQuote:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned long long)proposedResolutionForError:(id)arg1;

- (void).cxx_destruct;
- (bool)_contactInfoIsValidForAuthorizedQuote:(id)arg1 errors:(id*)arg2;
- (id)_contactResolver;
- (id)_defaultAlternateFundingSourceForMode:(unsigned long long)arg1;
- (bool)_ensureState:(unsigned long long)arg1;
- (id)_featureDescriptorForMode:(unsigned long long)arg1;
- (void)_handleAccountChanged:(id)arg1;
- (bool)_modeIsSendType:(unsigned long long)arg1;
- (bool)_modeSupportsExternalFundingSource:(unsigned long long)arg1;
- (void)_performAuthorizedQuote:(id)arg1 completion:(id /* block */)arg2;
- (void)_refreshRecipientWithCompletion:(id /* block */)arg1;
- (void)_requestQuoteWithRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_resetToState:(unsigned long long)arg1;
- (void)_sendAnalyticsForQuote:(id)arg1 withRequest:(id)arg2;
- (void)_setPerformQuoteSuccess:(bool)arg1;
- (void)_setState:(unsigned long long)arg1 notify:(bool)arg2;
- (void)_updateLastUsedAlternateFundingSource;
- (id)account;
- (id)analyticsSessionSubjectForPaymentAuthorizationCoordinator:(id)arg1;
- (id)analyticsSessionTokenForPaymentAuthorizationCoordinator:(id)arg1;
- (void)authorizeQuote:(id)arg1 performOnAuthorization:(bool)arg2 completion:(id /* block */)arg3;
- (id)contactForHandle:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)displayNameForRecipientAddress:(id)arg1;
- (id)displayNameForRecipientAddress:(id)arg1 foundInContacts:(bool*)arg2;
- (id)displayableErrorForError:(id)arg1;
- (id)externalizedControllerState;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)formalRequestTokenForAmount:(id)arg1 source:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)handleIdentityVerificationWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)handleTermsAcceptanceRequiredWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)identifyRecipientDebitCardWithCompletion:(id /* block */)arg1;
- (void)identifyRecipientSelf;
- (void)identifyRecipientWithAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;
- (void)identifyRecipientWithRoutingNumber:(id)arg1 accountNumber:(id)arg2 accountName:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithPeerPaymentWebService:(id)arg1;
- (id)initWithPeerPaymentWebService:(id)arg1 queue:(id)arg2;
- (id)internalState;
- (unsigned long long)mode;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (id)peerPaymentPass;
- (void)pendingRequestsWithCompletion:(id /* block */)arg1;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)performPendingRequestAction:(id)arg1 withRequestToken:(id)arg2 completion:(id /* block */)arg3;
- (void)performQuote:(id)arg1 completion:(id /* block */)arg2;
- (id)performQuoteResponse;
- (void)performQuoteWithCompletion:(id /* block */)arg1;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (id)quote;
- (void)quoteWithAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(id /* block */)arg4;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 completion:(id /* block */)arg3;
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 requestToken:(id)arg3 alternateFundingSource:(id)arg4 completion:(id /* block */)arg5;
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 requestToken:(id)arg3 alternateFundingSource:(id)arg4 preserveCurrentBalance:(unsigned long long)arg5 recurringPaymentIdentifier:(id)arg6 frequency:(unsigned long long)arg7 startDate:(id)arg8 threshold:(id)arg9 completion:(id /* block */)arg10;
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 requestToken:(id)arg3 completion:(id /* block */)arg4;
- (id)recipient;
- (id)recipientDisplayName;
- (id)recipientPhoneOrEmail;
- (id)requestToken;
- (void)requestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (bool)restoreStateWithExternalizedControllerState:(id)arg1;
- (void)selectMode:(unsigned long long)arg1;
- (id)senderPhoneOrEmail;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)statusForPaymentIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)summaryItemsForQuote:(id)arg1;
- (void)updatePreservePeerPaymentBalanceSetting:(bool)arg1;
- (id)webService;

@end
