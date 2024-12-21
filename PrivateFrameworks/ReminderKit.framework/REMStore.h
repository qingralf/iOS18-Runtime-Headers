/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMStore : NSObject <REMChangeTrackingProvider, REMClientConnectionsInteractable> {
    bool  _assertOnMainThreadFetches;
    <REMDaemonController> * _daemonController;
    _REMInProgressSaveRequestsContainer * _l_inProgressSaveRequestsContainer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _mode;
    REMStore * _nonUserInteractiveStore;
    REMStoreContainerToken * _storeContainerToken;
}

@property (nonatomic) bool assertOnMainThreadFetches;
@property (nonatomic, retain) <REMDaemonController> *daemonController;
@property (nonatomic, readonly) _REMInProgressSaveRequestsContainer *l_inProgressSaveRequestsContainer;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) REMStore *nonUserInteractiveStore;
@property (nonatomic, readonly) REMStoreContainerToken *storeContainerToken;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (bool)_shouldNotifyReminddOfInteractionWithPeople;
+ (id)createIsolatedStoreContainerWithError:(id*)arg1;
+ (bool)dataaccessDaemonStopSyncingReminders;
+ (bool)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (bool)isEventKitSyncEnabledForReminderKit;
+ (bool)notificationsEnabled;
+ (void)notifyOfInteractionWithPeople:(id)arg1;
+ (bool)siriShouldRouteIntentsToNewRemindersApp;
+ (id)storeDidChangeNotificationName;

- (void).cxx_destruct;
- (id)MCIsManagedAccountWithObjectID:(id)arg1 error:(id*)arg2;
- (void)_addChangeItemChangedKeys:(id)arg1 objectID:(id)arg2 toChangedKeysMap:(id)arg3;
- (void)_enumerateAllListsIncludingGroups:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)_incrementStoreGeneration;
- (bool)_isUserInteractiveStore;
- (void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 listSectionChangeItems:(id)arg3 smartListChangeItems:(id)arg4 smartListSectionChangeItems:(id)arg5 templateChangeItems:(id)arg6 templateSectionChangeItems:(id)arg7 reminderChangeItems:(id)arg8 author:(id)arg9 replicaManagerProvider:(id)arg10 synchronously:(bool)arg11 syncToCloudKit:(bool)arg12 performer:(id)arg13 completion:(id /* block */)arg14;
- (void)_triggerSyncWithReason:(id)arg1 skipDataAccessSync:(bool)arg2 forcingCloudKitReload:(bool)arg3 discretionary:(bool)arg4 bypassThrottler:(bool)arg5 completion:(id /* block */)arg6;
- (id)_withInProgressSaveRequestContainer:(id /* block */)arg1;
- (id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)addCKShareObserverIfNeededForAccountID:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)addParticipantsToSharedGroceryList:(id)arg1 completion:(id /* block */)arg2;
- (void)anchoredBubbleCloudOverridesWithCompletion:(id /* block */)arg1;
- (bool)assertOnMainThreadFetches;
- (unsigned long long)completedRemindersCountForTipKitWithError:(id*)arg1;
- (id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id*)arg2;
- (bool)containsCustomSmartListForTipKitWithError:(id*)arg1;
- (bool)containsHashtagsForTipKitWithError:(id*)arg1;
- (bool)containsListWithCustomBadgeForTipKitWithError:(id*)arg1;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)createShareForListWithID:(id)arg1 appIconData:(id)arg2 error:(id*)arg3;
- (id)createSharedGroceryListWithError:(id*)arg1;
- (id)daemonController;
- (id)debugDescription;
- (id)debugFetchPhantomListsWithError:(id*)arg1;
- (bool)deleteSharedGroceryList:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)enumerateAllGroupsAndListsWithBlock:(id /* block */)arg1;
- (void)enumerateAllListsWithBlock:(id /* block */)arg1;
- (void)enumerateAllRemindersWithBlock:(id /* block */)arg1;
- (bool)everConnectedToCar;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchAccountsForDumpingWithError:(id*)arg1;
- (id)fetchAccountsIncludingInactive:(bool)arg1 error:(id*)arg2;
- (id)fetchAccountsWithError:(id*)arg1;
- (id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchActiveCloudKitAccountObjectIDsWithFetchOption:(long long)arg1 error:(id*)arg2;
- (id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchAssignmentsWithObjectIDs:(id)arg1 includeConcealedObjects:(bool)arg2 error:(id*)arg3;
- (id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4;
- (id)fetchCreatedOrCompletedRemindersCountForAppStoreFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3;
- (id)fetchCustomSmartListWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchCustomSmartListsWithError:(id*)arg1;
- (id)fetchDefaultAccountWithError:(id*)arg1;
- (id)fetchDefaultListRequiringCloudKitAccountWithAccountID:(id)arg1 error:(id*)arg2;
- (id)fetchDefaultListRequiringCloudKitWithError:(id*)arg1;
- (id)fetchDefaultListWithError:(id*)arg1;
- (id)fetchEligibleDefaultListsWithError:(id*)arg1;
- (id)fetchFamilyGroceryListEligibilityForFamilyChecklistWithLocale:(id)arg1 error:(id*)arg2;
- (id)fetchHashtagsWithObjectIDs:(id)arg1 includeConcealedObjects:(bool)arg2 error:(id*)arg3;
- (id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4;
- (id)fetchListIncludingConcealedWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListRepresentationOfTemplateWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsCountWithListObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsForListSectionContext:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsForListSectionContextChangeItem:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsWithListObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchListWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListsForEventKitBridgingWithError:(id*)arg1;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2;
- (id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchMinimumSearchTermLengthByBaseLanguageWithError:(id*)arg1;
- (id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(id*)arg1;
- (id)fetchPrimaryActiveCloudKitAccountWithError:(id*)arg1;
- (id)fetchReminderIncludingConcealedWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchReminderWithObjectID:(id)arg1 fetchOptions:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersMatchingPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id*)arg7;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersWithObjectIDs:(id)arg1 fetchOptions:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2;
- (id)fetchReplicaManagerForAccountID:(id)arg1 error:(id*)arg2;
- (id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id*)arg3;
- (id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id*)arg2;
- (id)fetchShareForListWithID:(id)arg1 error:(id*)arg2;
- (id)fetchSiriFoundInAppsListWithError:(id*)arg1;
- (id)fetchSmartListSectionWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchSmartListSectionsForSmartListSectionContext:(id)arg1 error:(id*)arg2;
- (id)fetchSmartListSectionsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateSectionWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateSectionsForTemplateSectionContext:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateSectionsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateWithObjectID:(id)arg1 error:(id*)arg2;
- (bool)hasActiveCloudKitAccountForTipKitWithError:(id*)arg1;
- (id)init;
- (id)initUserInteractive:(bool)arg1;
- (id)initWithDaemonController:(id)arg1;
- (id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2;
- (id)initWithStoreContainerToken:(id)arg1;
- (void)invalidate;
- (id)l_inProgressSaveRequestsContainer;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (unsigned long long)mode;
- (id)nonUserInteractiveStore;
- (void)notifyOfInteractionWithPeople:(id)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (void)nukeDatabase;
- (id)optimisticallyMaterializeReminderChangeItem:(id)arg1;
- (void)postFamilyAnalyticsPayloadWithOperationId:(id)arg1 operationDetail:(id)arg2;
- (void)processNoOpSaveRequest:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3;
- (id)refreshAccount:(id)arg1;
- (id)refreshList:(id)arg1;
- (id)refreshReminder:(id)arg1;
- (void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOrphanedAccountsWithCompletion:(id /* block */)arg1;
- (id)repairPhantomObjectsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)replicaManagerProviderForCalDAVSync;
- (void)requestDownloadGroceryModelAssetsFromTrial;
- (void)requestToDeleteLocalDataWithCompletion:(id /* block */)arg1;
- (void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestToUpdateClientConnectionsAsynchronously:(bool)arg1 shouldKeepAlive:(bool)arg2 completion:(id /* block */)arg3;
- (id)resultFromPerformingInvocation:(id)arg1 error:(id*)arg2;
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4;
- (id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 listSectionChangeItems:(id)arg4 smartListChangeItems:(id)arg5 smartListSectionChangeItems:(id)arg6 templateChangeItems:(id)arg7 templateSectionChangeItems:(id)arg8 reminderChangeItems:(id)arg9 author:(id)arg10 replicaManagerProvider:(id)arg11 error:(id*)arg12;
- (void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 listSectionChangeItems:(id)arg4 smartListChangeItems:(id)arg5 smartListSectionChangeItems:(id)arg6 templateChangeItems:(id)arg7 templateSectionChangeItems:(id)arg8 reminderChangeItems:(id)arg9 author:(id)arg10 replicaManagerProvider:(id)arg11 queue:(id)arg12 completion:(id /* block */)arg13;
- (void)setAssertOnMainThreadFetches:(bool)arg1;
- (void)setDaemonController:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setNonUserInteractiveStore:(id)arg1;
- (id)sharedGroceryListForFamilyChecklistWithCommonParticipants:(id)arg1 error:(id*)arg2;
- (void)stopShare:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)storeContainerToken;
- (unsigned long long)storeGeneration;
- (void)test_handleIncompleteGroceryOperationQueueItemsImmediatelyWithTimeout:(double)arg1;
- (void)test_handleIncompleteTemplateOperationQueueItemsImmediately;
- (id)test_immediatelyCreateOrUpdatePublicLinkOfTemplateWithTemplateObjectID:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)test_immediatelyRevokePublicLinkOfTemplateWithTemplateObjectID:(id)arg1 error:(id*)arg2;
- (void)test_refreshHashtagLabelsImmediately;
- (bool)test_revertImageAttachmentsToUnDeduped:(id)arg1 error:(id*)arg2;
- (void)test_setupForManualHashtagLabelRefreshing;
- (void)triggerCloudKitOnlySyncWithReason:(id)arg1 discretionary:(bool)arg2 completion:(id /* block */)arg3;
- (void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1;
- (void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateAccountWithAccountID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAccountWithAccountID:(id)arg1 restartDA:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateAccountsAndSync:(bool)arg1 completion:(id /* block */)arg2;
- (void)updateShare:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal

- (void)clearGroceryLocalCorrectionsOfListsOwnedByCurrentUserWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end