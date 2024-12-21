/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingDaemonCore.framework/ActivitySharingDaemonCore
 */

@interface ASCompetitionManager : NSObject <ASActivityDataManagerObserver, ASActivitySharingManagerReadyObserver, ASCloudKitManagerChangesObserver, ASPeriodicUpdateRecordProvider, HDDatabaseProtectedDataObserver> {
    ASAchievementManager * _achievementManager;
    ASActivityDataManager * _activityDataManager;
    ASCloudKitManager * _cloudKitManager;
    ASCompetitionBulletinManager * _competitionBulletinManager;
    ASCompetitionStore * _competitionStore;
    ASContactsManager * _contactsManager;
    ASDatabaseClient * _databaseClient;
    bool  _deviceParticipatesInAutomaticCompetitionManagement;
    NSSet * _existingFriendUUIDsAwaitingMyCompetitionResponse;
    NSSet * _existingFriendUUIDsWithAcceptedCompetitionRequestsFromMe;
    NSSet * _existingFriendUUIDsWithCompletedCompetitions;
    ASFriendListManager * _friendListManager;
    NSSet * _friendUUIDsWithUpdatedCompetitions;
    bool  _hasFetchedProtectedData;
    NSSet * _legacyCompetitionListsToCleanUp;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    ASPeriodicUpdateManager * _periodicUpdateManager;
    ASRelationshipManager * _relationshipManager;
    NSNumber * _scoreCapCelebrationAnchor;
    NSSet * _secureCloudCompetitionListsToCleanUp;
    <ASCompetitionManagerSecureCloudDelegate> * _secureCloudDelegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
    ASAsyncTransactionQueue * _transactionQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadyToProcessChanges;
@property (nonatomic) <ASCompetitionManagerSecureCloudDelegate> *secureCloudDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_archivedCompetitionListByMergingCurrentCompetitionList:(id)arg1;
- (id)_competitionListsFromContacts:(id)arg1 withUpdatedScore:(id)arg2 cloudType:(unsigned long long)arg3;
- (id)_contactsWithActiveCompetitions;
- (void)_handleAcceptedCompetitionFromFriendWithUUID:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3;
- (void)_handleCompetitionRequestFromFriendWithUUID:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3;
- (void)_loadCachedCompetitionsAndNotifyObservers;
- (id)_loadOrCreateCurrentCompetitionListForFriendWithUUID:(id)arg1;
- (id)_localCompetitionForRemoteCompetition:(id)arg1 friendUUID:(id)arg2;
- (id)_localUserDefaultsDomain;
- (void)_queue_autoAcceptCompetitionRequestFromContact:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_cleanUpLegacyCompetitionLists:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3;
- (void)_queue_cleanUpSecureCloudCompetitionLists:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3;
- (id)_queue_competitionListsToSaveForCloudType:(unsigned long long)arg1;
- (void)_queue_completeCompetitionIfNecessaryForFriendWithUUID:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3;
- (void)_queue_handleNewRemoteCompetitionList:(id)arg1 contact:(id)arg2;
- (void)_queue_handleSavedCompetitionListRecords:(id)arg1;
- (void)_queue_handleSavedRecords:(id)arg1 activity:(id)arg2 group:(id)arg3;
- (id)_queue_legacyCompetitionListsToSave;
- (void)_queue_notifyObserversOfCompetitionUpdatesForFriendsWithUUIDs:(id)arg1;
- (id)_queue_rollCompetitionListForwardForContact:(id)arg1;
- (long long)_queue_rollIndexBackwards:(long long)arg1 calendar:(id)arg2;
- (id)_queue_secureCloudCompetitionListsToSave;
- (void)_queue_setActivityDataVisibleIfNecessaryForContact:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_showCompetitionAcceptedForFriendWithUUID:(id)arg1 competition:(id)arg2;
- (void)_queue_showCompetitionEndedWithFriendWithUUID:(id)arg1;
- (void)_queue_showCompetitionRequestFromFriendWithUUID:(id)arg1 competition:(id)arg2;
- (void)_queue_showScoreCapCelebrationForFriendsWithCappedInProgressCompetitions:(id)arg1;
- (void)_queue_updateLegacyCompetitionsWithScores:(id)arg1 forContacts:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_updateScoresWithTodaySummary:(id)arg1 yesterdaySummary:(id)arg2 activity:(id)arg3 cloudKitGroup:(id)arg4;
- (void)_queue_updateSecureCloudCompetitionsWithScores:(id)arg1 forContacts:(id)arg2 completion:(id /* block */)arg3;
- (void)_saveCurrentCompetitionList:(id)arg1 archivedCompetitionList:(id)arg2 contact:(id)arg3 activity:(id)arg4 cloudKitGroup:(id)arg5 completion:(id /* block */)arg6;
- (void)_saveLegacyCompetitionList:(id)arg1 archivedCompetitionList:(id)arg2 contact:(id)arg3 activity:(id)arg4 cloudKitGroup:(id)arg5 completion:(id /* block */)arg6;
- (void)_saveSecureCloudCompetitionList:(id)arg1 archivedCompetitionList:(id)arg2 contact:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (id)_scoreCapCelebrationAnchor;
- (void)_setScoreCapCelebrationAnchor:(id)arg1;
- (bool)_shouldSkipLocalLegacyCompetitionList:(id)arg1;
- (bool)_shouldSkipLocalSecureCloudCompetitionList:(id)arg1;
- (bool)_shouldSkipRemoteLegacyCompetitionList:(id)arg1 contact:(id)arg2;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)activityDataManager:(id)arg1 didUpdateTodaySummary:(id)arg2 yesterdaySummary:(id)arg3;
- (void)activitySharingManagerReady:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)archivedCompetitionListForFriendWithUUID:(id)arg1;
- (void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2;
- (void)cloudKitManager:(id)arg1 didEndUpdatesForFetchWithType:(long long)arg2 activity:(id)arg3 cloudKitGroup:(id)arg4 changesProcessedHandler:(id /* block */)arg5;
- (void)cloudKitManager:(id)arg1 didReceiveNewCompetitionLists:(id)arg2 moreComing:(bool)arg3 changesProcessedHandler:(id /* block */)arg4;
- (void)cloudKitManager:(id)arg1 didReceiveNewCompetitionListsForSelf:(id)arg2 moreComing:(bool)arg3 changesProcessedHandler:(id /* block */)arg4;
- (id)competitionsForFriendWithUUID:(id)arg1;
- (void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)currentCompetitionListForFriendWithUUID:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deleteCachedCompetitions;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDatabaseClient:(id)arg1 isWatch:(bool)arg2;
- (bool)isReadyToProcessChanges;
- (void)loadCachedCompetitions;
- (void)periodicUpdateManager:(id)arg1 didFailToSaveRecords:(id)arg2 activity:(id)arg3;
- (void)periodicUpdateManager:(id)arg1 didSaveRecords:(id)arg2 activity:(id)arg3;
- (id)recordForCurrentCompetitionList:(id)arg1 contact:(id)arg2;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (void)removeObserver:(id)arg1;
- (void)rollCompetitionWithFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)secureCloudCompetitionListsToSave;
- (id)secureCloudDelegate;
- (void)secureCloudDidFailToSaveRecords:(id)arg1;
- (void)secureCloudDidSaveRecords:(id)arg1;
- (void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setSecureCloudDelegate:(id)arg1;
- (void)storePushedCompetitionListRecords:(id)arg1;
- (void)updateAllActiveCompetitionsWithScores:(id)arg1 completion:(id /* block */)arg2;

@end