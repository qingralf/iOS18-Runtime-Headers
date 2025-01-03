/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface, PKXPCServiceDelegate> {
    NSObject<OS_dispatch_queue> * _asynchronousImageQueue;
    <PKPassLibraryDelegate> * _delegate;
    NSHashTable * _delegates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegatesLock;
    unsigned long long  _interfaceType;
    PKPassLibrary * _remoteLibrary;
    <NSObject> * _remoteLibraryObserver;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKPassLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *remoteSecureElementPasses;
@property (getter=isSecureElementPassActivationAvailable, nonatomic, readonly) bool secureElementPassActivationAvailable;
@property (readonly) Class superclass;

+ (bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1;
+ (bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1 deviceUILocked:(bool)arg2;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (bool)isPassLibraryAvailable;
+ (bool)isPaymentPassActivationAvailable;
+ (bool)isSecureElementPassActivationAvailable;
+ (bool)isSuppressingAutomaticPassPresentation;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(id /* block */)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceWithRemoteLibrary;

- (void).cxx_destruct;
- (void)_activateSecureElementPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(id /* block */)arg4;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (id)_copyPassesOfStyles:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_copyPassesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_copyPassesWithRetries:(unsigned long long)arg1;
- (long long)_currentNotificationCountForIdentifier:(id)arg1;
- (id)_defaultPaymentPassForPaymentRequest:(id)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_fetchContentForUniqueID:(id)arg1 usingSynchronousProxy:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_fetchImageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(bool)arg5 withCompletion:(id /* block */)arg6;
- (void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)_filterPeerPaymentPass:(id)arg1 request:(id)arg2;
- (void)_getGroupsControllerSnapshotWithOptions:(id)arg1 synchronously:(bool)arg2 retries:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(bool)arg2 limitResults:(bool)arg3 withRetries:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (bool)_hasRemoteLibrary;
- (id)_inAppRemoteObjectProxy;
- (id)_inAppRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_inAppRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_initWithRemote:(id)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (id)_remoteLibrary;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (bool)_setSetting:(unsigned long long)arg1 enabled:(bool)arg2 forPass:(id)arg3;
- (id)_sortedPaymentPassesForPaymentRequest:(id)arg1;
- (id)_sortedPaymentPassesForPaymentRequest:(id)arg1 additionalPaymentPasses:(id)arg2;
- (id)_synchronousExtendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(id /* block */)arg3;
- (void)activateSecureElementPass:(id)arg1 withActivationData:(id)arg2 completion:(id /* block */)arg3;
- (void)addDelegate:(id)arg1;
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(id /* block */)arg3;
- (void)addPasses:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addPassesContainer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addPassesWithData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addPassesWithIngestionPayloads:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addUnsignedPassesAtURLs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (void)availableHomeKeyPassesWithCompletionHandler:(id /* block */)arg1;
- (id)backupMetadata;
- (void)badgeCountItemsWithCompletion:(id /* block */)arg1;
- (id)cachedImageSetForUniqueID:(id)arg1 type:(long long)arg2 withDisplayProfile:(id)arg3 displayTraits:(id)arg4;
- (void)canAddCarKeyPassWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (bool)canAddFelicaPass;
- (bool)canAddPassOfType:(unsigned long long)arg1;
- (bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (bool)canAddSecureElementPassWithConfiguration:(id)arg1;
- (void)canAddSecureElementPassWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (bool)canAddSecureElementPassWithConfiguration:(id)arg1 outError:(id*)arg2;
- (bool)canAddSecureElementPassWithPrimaryAccountIdentifier:(id)arg1;
- (void)canPresentPaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2 states:(id)arg3;
- (void)checkFidoKeyPresenceForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 completion:(id /* block */)arg4;
- (void)checkForTransitNotification;
- (void)configureHomeAuxiliaryCapabilitiesForSerialNumber:(id)arg1 homeIdentifier:(id)arg2 fromUnifiedAccessDescriptor:(id)arg3 andAliroDescriptor:(id)arg4 completion:(id /* block */)arg5;
- (void)configurePushProvisioningConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)configurePushProvisioningConfigurationV2:(id)arg1 completion:(id /* block */)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (bool)containsPass:(id)arg1;
- (void)containsPassWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)contentForUniqueID:(id)arg1;
- (unsigned long long)countOfPasses;
- (unsigned long long)countPassesOfType:(unsigned long long)arg1;
- (void)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 externalizedAuth:(id)arg4 completion:(id /* block */)arg5;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3;
- (id)dataForBundleResources:(id)arg1 objectUniqueIdentifier:(id)arg2;
- (void)dealloc;
- (id)defaultPaymentPassesWithRemotePasses:(bool)arg1;
- (id)delegate;
- (id)delegates;
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;
- (id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg1;
- (id)dynamicStateForPassUniqueID:(id)arg1;
- (void)enableExpressForPassWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enabledValueAddedServicePassesWithCompletion:(id /* block */)arg1;
- (void)encryptedServiceProviderDataForSecureElementPass:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)estimatedTimeToResetApplePay;
- (id)expressFelicaTransitPasses;
- (void)fetchAppletSubCredentialForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchCurrentRelevantPassInfo:(id /* block */)arg1;
- (void)fetchHasCandidatePasses:(id /* block */)arg1;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)fetchTransactionKeyForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceImmediateRevocationCheck;
- (void)generateAuxiliaryCapabilitiesForRequirements:(id)arg1 completion:(id /* block */)arg2;
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(id /* block */)arg2;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(id /* block */)arg2;
- (void)generateTransactionKeyWithReaderIdentifier:(id)arg1 readerPublicKey:(id)arg2 completion:(id /* block */)arg3;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getGroupsControllerSnapshotWithOptions:(id)arg1 synchronously:(bool)arg2 handler:(id /* block */)arg3;
- (void)getMetadataForFieldWithProperties:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalog:(bool)arg1 synchronously:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)getPassesAndCatalog:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(id /* block */)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 isMultiTokensRequest:(bool)arg4 withHandler:(id /* block */)arg5;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 paymentRequestType:(id)arg4 isMultiTokensRequest:(bool)arg5 withHandler:(id /* block */)arg6;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 withHandler:(id /* block */)arg4;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 isMultiTokensRequest:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 isMultiTokensRequest:(bool)arg3 withHandler:(id /* block */)arg4;
- (bool)hasPassesInExpiredSection;
- (bool)hasPassesOfType:(unsigned long long)arg1;
- (bool)hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 webDomain:(id)arg4;
- (bool)hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 webDomain:(id)arg4 paymentRequestType:(id)arg5 isMultiTokensRequest:(bool)arg6;
- (bool)hasSecureElementPassesOfType:(long long)arg1;
- (bool)iPadSupportsPasses;
- (id)imageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4;
- (id)inAppPaymentPassesForPaymentRequest:(id)arg1;
- (id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 isMultiTokensRequest:(bool)arg3;
- (id)inAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 isMultiTokensRequest:(bool)arg3;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3;
- (void)introduceDatabaseIntegrityProblem;
- (void)invalidateVehicleConnectionSessionIdentifier:(id)arg1;
- (bool)isPassbookVisible;
- (bool)isPaymentPassActivationAvailable;
- (bool)isRemovingPassesOfType:(unsigned long long)arg1;
- (bool)isSecureElementPassActivationAvailable;
- (bool)isWatchIssuerAppProvisioningSupported;
- (void)issueWalletUserNotificationWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 customActionRoute:(id)arg4;
- (void)issuerBindingAuthenticationOccured;
- (void)longTermPrivacyKeyForCredentialGroupIdentifier:(id)arg1 reuseExisting:(bool)arg2 completion:(id /* block */)arg3;
- (id)manifestHashForPassWithUniqueID:(id)arg1;
- (void)meetsProvisioningRequirements:(id)arg1 completion:(id /* block */)arg2;
- (bool)meetsProvisioningRequirements:(id)arg1 missingRequirements:(id*)arg2;
- (bool)migrateDataWithDidRestoreFromBackup:(bool)arg1;
- (void)noteACAccountChanged:(id)arg1;
- (void)noteAppleAccountChanged:(id)arg1;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)notifyPassUsedWithIdentifier:(id)arg1 fromSource:(long long)arg2;
- (void)openPaymentSetup;
- (void)openPaymentSetupForMerchantIdentifier:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)passAdded:(id)arg1;
- (id)passForProvisioningCredentialHash:(id)arg1;
- (id)passLocalizedStringForKey:(id)arg1 uniqueID:(id)arg2;
- (void)passRecovered:(id)arg1;
- (void)passRemoved:(id)arg1;
- (id)passUniqueIDsForAssociatedApplicationIdentifier:(id)arg1;
- (void)passUpdated:(id)arg1;
- (id)passWithDPANIdentifier:(id)arg1;
- (id)passWithFPANIdentifier:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (bool)passbookHasBeenDeleted;
- (id)passes;
- (id)passesOfStyles:(unsigned long long)arg1;
- (id)passesOfType:(unsigned long long)arg1;
- (id)passesPendingActivation;
- (id)passesWithReaderIdentifier:(id)arg1;
- (void)passesWithSearchableTransactions:(id /* block */)arg1;
- (void)paymentPassWithAssociatedAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)paymentPassesWithLocallyStoredValue;
- (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentPassUniqueID;
- (void)pendingUserNotificationsWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;
- (void)postUpgradesAvailableNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;
- (void)prepareForBackupRestoreWithExistingPreferencesData:(id)arg1;
- (void)prepareForBackupRestoreWithSafeHavenPath:(id)arg1;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(id /* block */)arg3;
- (void)presentIssuerBindingFlowForIssuerData:(id)arg1 signature:(id)arg2 orientation:(id)arg3;
- (void)presentPaymentPass:(id)arg1;
- (void)presentPaymentSetupRequest:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentSecureElementPass:(id)arg1;
- (void)presentWalletWithRelevantPassUniqueID:(id)arg1;
- (void)provisionHomeKeyPassForSerialNumbers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pushProvisioningNoncesWithCredentialCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)recoverPassWithUniqueID:(id)arg1;
- (id)remotePaymentPasses;
- (id)remoteSecureElementPasses;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)removeAllScheduledActivities;
- (void)removeDelegate:(id)arg1;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;
- (void)removePasses:(id)arg1;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 completion:(id /* block */)arg3;
- (void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2;
- (bool)replacePassWithPass:(id)arg1;
- (void)replaceUnsignedPassAtURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestIssuerBoundPassesWithBindingWithData:(id)arg1 automaticallyProvision:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(id /* block */)arg6;
- (void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)arg1;
- (bool)resetApplePayWithDiagnosticReason:(id)arg1;
- (void)resetApplePayWithDiagnosticReason:(id)arg1 completion:(id /* block */)arg2;
- (bool)resetSettingsForPass:(id)arg1;
- (bool)sendRKEPassThroughMessage:(id)arg1 forSessionIdentifier:(id)arg2 error:(id*)arg3;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)serviceProviderDataForSecureElementPass:(id)arg1 completion:(id /* block */)arg2;
- (bool)setAutomaticPresentationEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setAutomaticUpdatesEnabled:(bool)arg1 forPass:(id)arg2;
- (void)setBackupMetadata:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)setLiveRenderingEnabled:(bool)arg1 forPassUniqueID:(id)arg2;
- (bool)setNotificationServiceUpdatesEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setShowInLockScreenEnabled:(bool)arg1 forPass:(id)arg2;
- (void)setSortingState:(long long)arg1 forObjectWithUniqueID:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)setSuppressNotificationsEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setSuppressPromotionsEnabled:(bool)arg1 forPass:(id)arg2;
- (void)shuffleGroups:(int)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)signData:(id)arg1 withSecureElementPass:(id)arg2 completion:(id /* block */)arg3;
- (void)signWithFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 challenge:(id)arg4 publicKeyIdentifier:(id)arg5 externalizedAuth:(id)arg6 completion:(id /* block */)arg7;
- (void)sortedTransitPassesForAppletDataFormat:(id)arg1 completion:(id /* block */)arg2;
- (void)sortedTransitPassesForTransitNetworkIdentifiersWithCompletion:(id /* block */)arg1;
- (void)spotlightReindexAllContentWithAcknowledgement:(id /* block */)arg1;
- (void)spotlightReindexContentWithIdentifiers:(id)arg1 acknowledgement:(id /* block */)arg2;
- (void)spotlightResetWithCompletion:(id /* block */)arg1;
- (void)spotlightStatusWithCompletion:(id /* block */)arg1;
- (void)startVehicleConnectionSessionWithPassUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)supportsSearchForPassUniqueID:(id)arg1;
- (void)unexpiredPassesOrderedByGroup:(id /* block */)arg1;
- (void)updateDate:(id)arg1 forPendingNotificationWithIdentifier:(id)arg2;
- (void)updateIngestedDate:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;
- (void)vehicleConnectionDidRecievePassthroughData:(id)arg1;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)arg1;

@end
