/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol, PKXPCServiceDelegate> {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMutableDictionary * _cachedPasses;
    NSMutableSet * _cachedUniqueIDs;
    NSMutableDictionary * _connectionAvailableActions;
    PKPaymentWebServiceContext * _connectionUnavailableWebServiceContext;
    <NPKCompanionAgentConnectionDelegate> * _delegate;
    bool  _hasQueuedPaymentPasses;
    int  _notifyToken;
    bool  _queueAppropriateFailedActions;
    PKXPCService * _remoteService;
}

@property (retain) NSMutableDictionary *cachedPasses;
@property (retain) NSMutableSet *cachedUniqueIDs;
@property (nonatomic, retain) NSMutableDictionary *connectionAvailableActions;
@property (nonatomic, retain) PKPaymentWebServiceContext *connectionUnavailableWebServiceContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <NPKCompanionAgentConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasQueuedPaymentPasses;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool queueAppropriateFailedActions;
@property (nonatomic, retain) PKXPCService *remoteService;
@property (readonly) Class superclass;

+ (bool)isSetupAssistantProvisioningSupported;
+ (id)watchPaymentWebService;
+ (id)watchPeerPaymentWebService;
+ (id)watchProvisioningURL;
+ (id)watchProvisioningURLForPaymentPasses:(id)arg1;

- (void).cxx_destruct;
- (void)_addPassToCache:(id)arg1;
- (void)_applyPropertiesToPass:(id)arg1;
- (id)_cachedPassForUniqueID:(id)arg1;
- (id)_cachedUniqueIDs;
- (void)_clearCaches;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (void)_handleDefaultCardChanged:(id)arg1;
- (void)_handleServerPaymentPassesChanged:(id)arg1;
- (id)_installedCompanionApplicationBundleIDForPaymentPass:(id)arg1;
- (void)_invalidateCachedPassWithUniqueID:(id)arg1;
- (unsigned long long)_isApplePaySupportedInCurrentRegion;
- (id)_remoteObjectProxySynchronize:(bool)arg1 withFailureHandler:(id /* block */)arg2;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_removePassWithUniqueIDFromCache:(id)arg1;
- (void)_savePaymentPass:(id)arg1 atURL:(id)arg2 forDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)_setCachedUniqueIDs:(id)arg1;
- (void)_shouldShowApplePaySettingsForTinkerWithCompletion:(id /* block */)arg1;
- (void)_shouldShowApplePaySettingsWithCompletion:(id /* block */)arg1;
- (void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)beginPairedWatchInstallationOfApplicationForPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)beginPairedWatchInstallationOfWalletWithCompletion:(id /* block */)arg1;
- (void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)beginProvisioningFromWatchOfferForPaymentPasses:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)cachedPasses;
- (id)cachedUniqueIDs;
- (void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)connectionAvailableActions;
- (id)connectionUnavailableWebServiceContext;
- (void)consistencyCheckWithCompletion:(id /* block */)arg1;
- (void)countOfPassesSynchronous:(bool)arg1 completion:(id /* block */)arg2;
- (void)credentialedPassUniqueIDsSynchronous:(bool)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (void)defaultCardUniqueID:(id /* block */)arg1;
- (void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 fromDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)deviceIDSIdentifierSynchronous:(bool)arg1 completion:(id /* block */)arg2;
- (void)expressModeEnabledForPassIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPendingTransactionForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;
- (void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;
- (void)handlePendingUnpairingWithCompletion:(id /* block */)arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(id /* block */)arg1;
- (void)hasActiveExternallySharedPasses:(id /* block */)arg1;
- (void)hasActiveExternallySharedPassesWithCompletion:(id /* block */)arg1;
- (bool)hasQueuedPaymentPasses;
- (id)init;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg1;
- (bool)isIssuerAppProvisioningSupported;
- (void)markAllAppletsForDeletionWithCompletion:(id /* block */)arg1;
- (void)markPendingTransactionAsProcessedForPassWithUniqueID:(id)arg1;
- (void)noteForegroundVerificationObserverActive:(bool)arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(bool)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)noteWatchOfferShownForPaymentPass:(id)arg1;
- (bool)pairedWatchHasApplicationWithBundleID:(id)arg1;
- (void)passesSynchronous:(bool)arg1 completion:(id /* block */)arg2;
- (void)paymentPassUniqueIDs:(id /* block */)arg1;
- (void)paymentPassUniqueIDsSynchronous:(bool)arg1 excludingDeactivated:(bool)arg2 reply:(id /* block */)arg3;
- (void)paymentPassUniqueIDsSynchronous:(bool)arg1 reply:(id /* block */)arg2;
- (void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)paymentPassWithPairedTerminalIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)paymentPassWithUniqueID:(id)arg1 reply:(id /* block */)arg2;
- (void)paymentPassWithUniqueID:(id)arg1 synchronous:(bool)arg2 reply:(id /* block */)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithBalances:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithCredentials:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentAccountForDevice:(id)arg1;
- (void)presentStandaloneTransaction:(long long)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)presentStandaloneTransaction:(long long)arg1 forPassUniqueIdentifier:(id)arg2 terminalReaderIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)provisionIdentityPassWithPassMetadata:(id)arg1 policyIdentifier:(id)arg2 targetDeviceIdentifier:(id)arg3 credentialIdentifier:(id)arg4 attestations:(id)arg5 completion:(id /* block */)arg6;
- (void)provisionIdentityPassWithPassMetadata:(id)arg1 targetDeviceIdentifier:(id)arg2 credentialIdentifier:(id)arg3 attestations:(id)arg4 supplementalData:(id)arg5 completion:(id /* block */)arg6;
- (void)provisionPassForAccountIdentifier:(id)arg1 makeDefault:(bool)arg2 completion:(id /* block */)arg3;
- (void)provisionPassForRemoteCredentialWithType:(long long)arg1 andIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)queueAppropriateFailedActions;
- (void)redownloadAllPaymentPassesWithCompletion:(id /* block */)arg1;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)reloadPaymentPassesWithCompletion:(id /* block */)arg1;
- (id)remoteService;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)removePaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 waitForConfirmation:(bool)arg3 completion:(id /* block */)arg4;
- (void)savePaymentPass:(id)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(id /* block */)arg4;
- (void)setCachedPasses:(id)arg1;
- (void)setCachedUniqueIDs:(id)arg1;
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(id /* block */)arg4;
- (void)setConnectionAvailableActions:(id)arg1;
- (void)setConnectionUnavailableWebServiceContext:(id)arg1;
- (void)setDefaultCardUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHasQueuedPaymentPasses:(bool)arg1;
- (void)setPeerPaymentAccount:(id)arg1 forDevice:(id)arg2;
- (void)setQueueAppropriateFailedActions:(bool)arg1;
- (void)setRemoteService:(id)arg1;
- (void)setSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (id)sharedPaymentWebServiceContext;
- (id)sharedPaymentWebServiceContextForDevice:(id)arg1;
- (id)sharedPeerPaymentWebServiceContextForDevice:(id)arg1;
- (void)shouldShowApplePaySettingsWithCompletion:(id /* block */)arg1;
- (bool)shouldShowWatchExtensionInstallationForPaymentPass:(id)arg1;
- (void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)shouldShowWatchOfferForPaymentPasses:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(id /* block */)arg8;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)trustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(id /* block */)arg3;
- (void)updateCredentials:(id)arg1 forUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)watchPaymentWebService;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(id /* block */)arg2;

@end