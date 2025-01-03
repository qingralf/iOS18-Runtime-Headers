/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQDaemonOfferManager : NSObject {
    _ICQAccountManager * _accountManager;
    FLFollowUpController * _followUpController;
    NSURLSession * _sharedURLSession;
    _TtC11iCloudQuota15ICQTaskLimiters * _taskLimiters;
    ICQNetworkThrottleController * _throttleController;
}

@property (nonatomic, readonly) _ICQAccountManager *accountManager;
@property (getter=isBuddyOfferEnabled, nonatomic) bool buddyOfferEnabled;
@property (getter=isLegacyDeviceStorageLevelNotificationEnabled, nonatomic) bool legacyDeviceStorageLevelNotificationEnabled;
@property (nonatomic, readonly) NSURLSession *sharedURLSession;
@property (nonatomic) bool shouldDirectToStorageManagement;
@property (getter=isSimulatedDeviceStorageAlmostFull, nonatomic) bool simulatedDeviceStorageAlmostFull;
@property (nonatomic, retain) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic, retain) _TtC11iCloudQuota15ICQTaskLimiters *taskLimiters;

+ (id)ckBackupDeviceID;
+ (id)getCkBackupDeviceIDWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedDaemonOfferManager;

- (void).cxx_destruct;
- (Class)_classForOfferStub:(id)arg1;
- (void)_clearCachedStubsIfOfferIDIsNew:(id)arg1;
- (void)_clearStorageManagementFollowup;
- (void)_coalescedDaemonOfferStubsDictionaryForAccount:(id)arg1 requestType:(long long)arg2 quotaReason:(id)arg3 completion:(id /* block */)arg4;
- (void)_coalescedFetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(id /* block */)arg4;
- (void)_coalescedReconsiderOffersForAccount:(id)arg1 isForBuddy:(bool)arg2 quotaReason:(id)arg3 options:(id)arg4 choiceHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_daemonLocalOfferStubsDictionaryForAccount:(id)arg1 requestType:(long long)arg2 completion:(id /* block */)arg3;
- (Class)_daemonOfferClassForRequestType:(long long)arg1;
- (void)_daemonOfferStubsDictionaryForAccount:(id)arg1 requestType:(long long)arg2 quotaReason:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchDaemonOfferStubsForAccount:(id)arg1 isForBuddy:(bool)arg2 quotaReason:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 quotaReason:(id)arg3 stub:(id)arg4 notificationID:(id)arg5 contextDictionary:(id)arg6 mlDaemonExtraFields:(id)arg7 completion:(id /* block */)arg8;
- (id)_getFetchOfferStubsFromStubs:(id)arg1;
- (id /* block */)_getHandlerForBundleId:(id)arg1 options:(id)arg2;
- (id)_getStubsForRequestType:(long long)arg1 fromDaemonStubs:(id)arg2;
- (void)_handlerMultipleStubs:(id)arg1 forAccount:(id)arg2 requestType:(long long)arg3 completion:(id /* block */)arg4;
- (bool)_isCacheValidForRequestType:(long long)arg1 offerStubs:(id)arg2;
- (bool)_isCachedDaemonOfferValid:(id)arg1 forAccount:(id)arg2;
- (void)_logErrorsForFetchOfferResultWithOffer:(id)arg1 error:(id)arg2 isForBuddy:(bool)arg3;
- (void)_mockFetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 completion:(id /* block */)arg6;
- (void)_persistAndNotifyMissingPlaceholdersForRequestType:(long long)arg1 account:(id)arg2;
- (id)_placeholderOfferForAccount:(id)arg1 requestType:(long long)arg2 error:(id)arg3;
- (void)_postDaemonOfferChangedDueToPushDarwinNotificationRequestType:(long long)arg1;
- (void)_postFollowupForDaemonOffer:(id)arg1 replaceExisting:(bool)arg2 completion:(id /* block */)arg3;
- (void)_postOfferType:(id)arg1 isForBuddy:(bool)arg2;
- (void)_postStorageManagementFollowup;
- (void)_postUserNotification:(id)arg1 replaceExisting:(bool)arg2 offerID:(id)arg3 completion:(id /* block */)arg4;
- (void)_processOfferStub:(id)arg1 account:(id)arg2 offerType:(long long)arg3 completion:(id /* block */)arg4;
- (void)_processPushNotificationCheckHardwareIDWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)_processPushNotificationDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)_reconsiderLocalOffersWithReason:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(bool)arg2 quotaReason:(id)arg3 choiceHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(bool)arg2 quotaReason:(id)arg3 options:(id)arg4 choiceHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(id /* block */)arg5;
- (id)_storageManagementFollowupActions;
- (id)_storageManagementFollowupItem;
- (id)_storageManagementFollowupNotification;
- (void)_subdDisplayDelayedOfferWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_subdFetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 isoNewOfferResponse:(id)arg4 completion:(id /* block */)arg5;
- (void)_subdFetchNewOfferResponseWithContent:(id)arg1 andMaxDelaySecs:(id)arg2 completion:(id /* block */)arg3;
- (void)_subdHandleFetchOffersStub:(id)arg1 account:(id)arg2 requestType:(long long)arg3 group:(id)arg4 completion:(id /* block */)arg5;
- (void)_subdRefreshOfferDetailsAndDisplay:(id)arg1 completion:(id /* block */)arg2 account:(id)arg3 accountStore:(id)arg4 notificationID:(id)arg5 isoNewOfferResponse:(id)arg6;
- (void)_subdStopFailsafeActivity;
- (void)_subdTearDown;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedDefaultOfferAndNotify:(bool)arg1;
- (void)_teardownCachedEventOfferAndNotify:(bool)arg1;
- (void)_teardownCachedOfferAndNotify:(bool)arg1;
- (void)_teardownCachedOffersAndNotify:(bool)arg1;
- (void)_teardownCachedPremiumOfferAndNotify:(bool)arg1;
- (void)_updateOffer:(id)arg1 buttonId:(id)arg2 info:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completion:(id /* block */)arg6;
- (void)_updateQuotaForAccount:(id)arg1 withServerDictionary:(id)arg2;
- (bool)_useFetchOffersDataDirectly;
- (id)accountManager;
- (void)addCommonHeadersToRequest:(id)arg1;
- (void)addPremiumOffersHeaderIfNeededForRequest:(id)arg1;
- (void)clearAllFollowupsWithCompletion:(id /* block */)arg1;
- (void)clearFollowupsOfferType:(long long)arg1 completion:(id /* block */)arg2;
- (void)clearLegacyFollowups;
- (void)daemonBuddyOfferDictionaryForAccount:(id)arg1 completion:(id /* block */)arg2;
- (Class)daemonOfferClassFromBundleId:(id)arg1 options:(id)arg2;
- (void)daemonOfferDictionaryForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)daemonOfferSource;
- (void)displayDelayedOfferWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)forcePostFollowup;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (bool)isBuddyOfferEnabled;
- (bool)isLegacyDeviceStorageLevelNotificationEnabled;
- (bool)isSimulatedDeviceStorageAlmostFull;
- (void)postBuddyOfferType:(id)arg1;
- (void)postOfferType:(id)arg1;
- (void)processPushNotificationDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)reconsiderOffersWithCompletion:(id /* block */)arg1;
- (void)reconsiderOffersWithReason:(id)arg1 reuseLocalOffers:(bool)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsWithCompletion:(id /* block */)arg1;
- (void)setBuddyOfferEnabled:(bool)arg1;
- (void)setLegacyDeviceStorageLevelNotificationEnabled:(bool)arg1;
- (void)setShouldDirectToStorageManagement:(bool)arg1;
- (void)setSimulatedDeviceStorageAlmostFull:(bool)arg1;
- (void)setSimulatedPhotosLibrarySize:(id)arg1;
- (void)setTaskLimiters:(id)arg1;
- (id)sharedURLSession;
- (bool)shouldDirectToStorageManagement;
- (id)simulatedPhotosLibrarySize;
- (id)soonestOfferOrStubExpirationDate;
- (void)startDirectingToStorageManagement;
- (void)stopDirectingToStorageManagement;
- (id)taskLimiters;
- (void)tearDownCachedEventOffer;
- (void)tearDownCachedPremiumOffer;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffer;
- (void)teardownCachedOffers;
- (void)teardownOffersForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(id /* block */)arg5;

@end
