/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingDaemonCore.framework/ActivitySharingDaemonCore
 */

@interface ASRelationshipManager : NSObject <ASActivitySharingManagerReadyObserver, ASCloudKitManagerChangesObserver, ASFriendInviteBulletinManagerDelegate, ASGatewayManagerChangesObserver, ASIDSMessageCenterDelegate> {
    ASAchievementManager * _achievementManager;
    ASActivityDataManager * _activityDataManager;
    <ASBulletinPostingManager> * _bulletinPostingManager;
    ASCloudKitManager * _cloudKitManager;
    CNContactStore * _contactStore;
    ASContactsManager * _contactsManager;
    long long  _currentFetchType;
    ASRelationshipFinalizationStore * _finalizingStore;
    FIFitnessAppsStateObserver * _fitnessAppsStateObserver;
    ASFriendInviteBulletinManager * _friendInviteBulletinManager;
    ASFriendListManager * _friendListManager;
    ASGatewayManager * _gatewayManager;
    bool  _hasPendingContactsReconcile;
    bool  _isWatch;
    NSDictionary * _messageCenters;
    NSMutableDictionary * _placeholderFriendshipBeganTokens;
    NSMutableDictionary * _relationshipRecordsToReconcile;
    NSMutableDictionary * _remoteRelationshipRecordsToProcess;
    <ASRelationshipManagerSecureCloudDelegate> * _secureCloudDelegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
    ASAsyncTransactionQueue * _transactionQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadyToProcessChanges;
@property (nonatomic, retain) NSDictionary *messageCenters;
@property (nonatomic) <ASRelationshipManagerSecureCloudDelegate> *secureCloudDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_appIsInstalled;
- (void)_contactStoreDidChangeNotification:(id)arg1;
- (id)_contactWithIncomingHandshakeToken:(id)arg1;
- (id)_contactWithInviteRequest:(id)arg1 fromSender:(id)arg2;
- (id)_contactWithOutgoingHandshakeToken:(id)arg1;
- (id)_contactWithRemoteRelationshipRecordZoneID:(id)arg1;
- (id)_contactWithUUIDPreferringPlaceholders:(id)arg1;
- (id)_currentActivityDataPreview;
- (void)_insertInviteForContact:(id)arg1 destination:(id)arg2 serviceIdentifier:(id)arg3;
- (void)_performBlockWaitingForFriendshipBeganForFriendWithUUID:(id)arg1 block:(id /* block */)arg2;
- (void)_processActivityDataPreview:(id)arg1 friendUUID:(id)arg2;
- (void)_processPersistedMessagesIfNeeded;
- (void)_queue_acceptShares:(id)arg1 forRelationship:(id)arg2 contact:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_addPersonWithCloudKitAddress:(id)arg1 toShares:(id)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_fetchSharesForRelationship:(id)arg1 cloudKitGroup:(id)arg2 completion:(id /* block */)arg3;
- (id)_queue_handleSavedRecords:(id)arg1 forContact:(id)arg2;
- (void)_queue_insertPlaceholderFriendshipDidBeginForContactWithUUID:(id)arg1;
- (void)_queue_processEndRelationshipIfNeededForPreviousRemoteRelationship:(id)arg1 newRemoteRelationship:(id)arg2 contact:(id)arg3 xpcActivity:(id)arg4 cloudKitGroup:(id)arg5 processGroup:(id)arg6;
- (void)_queue_processRemoteRelationships:(id)arg1 activity:(id)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_reconcileCloudKitRelationships:(id)arg1;
- (void)_queue_removeFriendWithUUID:(id)arg1 eventType:(unsigned short)arg2 activity:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_removeLegacyFriendWithUUID:(id)arg1 eventType:(unsigned short)arg2 activity:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_removePlaceholderRelationshipBeganForContactWithUUID:(id)arg1 success:(bool)arg2;
- (void)_queue_saveRelationship:(id)arg1 contact:(id)arg2 activity:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_saveRelationship:(id)arg1 contact:(id)arg2 extraRecordsToSave:(id)arg3 extraRecordIDsToDelete:(id)arg4 activity:(id)arg5 cloudKitGroup:(id)arg6 completion:(id /* block */)arg7;
- (void)_queue_saveRelationship:(id)arg1 contact:(id)arg2 withExtraRecords:(id)arg3 activity:(id)arg4 cloudKitGroup:(id)arg5 completion:(id /* block */)arg6;
- (void)_queue_saveRelationshipAndFetchOrCreateShares:(id)arg1 contact:(id)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (id)_relationshipFromContact:(id)arg1;
- (id)_remoteRelationshipFromContact:(id)arg1;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptShares:(id)arg1 forRelationship:(id)arg2 contact:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)activitySharingManagerReady:(id)arg1;
- (void)beginReceivingMessages;
- (void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2;
- (void)cloudKitManager:(id)arg1 didReceiveNewRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(bool)arg4 changesProcessedHandler:(id /* block */)arg5;
- (void)cloudKitManager:(id)arg1 didReceiveNewRemoteRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(bool)arg4 activity:(id)arg5 cloudKitGroup:(id)arg6 changesProcessedHandler:(id /* block */)arg7;
- (void)dealloc;
- (void)endReceivingMessages;
- (void)friendInviteBulletinManagerDidReceiveActionResponse:(long long)arg1 fromContactWithUUID:(id)arg2;
- (void)gatewayManagerStatusDidChange;
- (void)handleSavedRecords:(id)arg1 forContact:(id)arg2 completion:(id /* block */)arg3;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithIsWatch:(bool)arg1;
- (id)insertPlaceholderRelationshipEvent:(unsigned short)arg1 friendUUID:(id)arg2;
- (bool)isReadyToProcessChanges;
- (void)messageCenter:(id)arg1 didReceiveFinalizeHandshake:(id)arg2 fromSenderAddress:(id)arg3 receiverAddress:(id)arg4 messageHandledCompletion:(id /* block */)arg5;
- (void)messageCenter:(id)arg1 didReceiveInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 receiverAddress:(id)arg4 messageHandledCompletion:(id /* block */)arg5;
- (void)messageCenter:(id)arg1 didReceiveInviteResponse:(id)arg2 fromSenderAddress:(id)arg3 receiverAddress:(id)arg4 messageHandledCompletion:(id /* block */)arg5;
- (void)messageCenter:(id)arg1 didReceiveWithdrawInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 receiverAddress:(id)arg4 messageHandledCompletion:(id /* block */)arg5;
- (id)messageCenters;
- (void)notificationManager:(id)arg1 didReceiveActionResponse:(long long)arg2 fromContactWithUUID:(id)arg3;
- (void)processRetryMessages;
- (void)removeFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeLegacyFriendWithUUID:(id)arg1 event:(unsigned short)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)removePlaceholderRelationshipEventWithToken:(id)arg1;
- (void)saveRelationship:(id)arg1 contact:(id)arg2 cloudKitGroup:(id)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)saveRelationship:(id)arg1 contact:(id)arg2 extraRecordsToSave:(id)arg3 extraRecordIDsToDelete:(id)arg4 cloudKitGroup:(id)arg5 activity:(id)arg6 completion:(id /* block */)arg7;
- (void)saveRelationshipAndFetchOrCreateShares:(id)arg1 contact:(id)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)saveRelationships:(id)arg1 extraRecordsToSave:(id)arg2 cloudKitGroup:(id)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (id)secureCloudDelegate;
- (void)sendInviteToPersonWithDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setActivityDataVisible:(bool)arg1 toFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setActivityDataVisible:(bool)arg1 toFriendWithUUID:(id)arg2 eventType:(unsigned short)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)setMessageCenters:(id)arg1;
- (void)setMuteEnabled:(bool)arg1 forFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setSecureCloudDelegate:(id)arg1;
- (void)updateRelationshipWithCompetitionEvent:(unsigned short)arg1 friendUUID:(id)arg2 activity:(id)arg3 cloudKitGroup:(id)arg4 completion:(id /* block */)arg5;
- (void)updateRelationshipsForCurrentFeatureSupportWithActivity:(id)arg1 cloudKitGroup:(id)arg2 completion:(id /* block */)arg3;

@end
