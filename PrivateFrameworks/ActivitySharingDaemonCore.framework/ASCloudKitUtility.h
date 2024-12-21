/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingDaemonCore.framework/ActivitySharingDaemonCore
 */

@interface ASCloudKitUtility : NSObject {
    CKContainer * _container;
    NSHashTable * _queue_executingFetchOperations;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) CKContainer *container;

+ (id)shareURLForShare:(id)arg1;

- (void).cxx_destruct;
- (void)_acceptShareMetadatas:(id)arg1 completion:(id /* block */)arg2;
- (void)_acceptSharesWithURLs:(id)arg1 operation:(id)arg2 cloudKitGroup:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchChangesInDatabase:(id)arg1 serverChangeTokenCache:(id)arg2 priority:(long long)arg3 activity:(id)arg4 group:(id)arg5 additionalZoneIDs:(id)arg6 zoneIDsToSkip:(id)arg7 fetchConfigurations:(id)arg8 completion:(id /* block */)arg9;
- (void)_fetchChangesInZones:(id)arg1 additionalZonesToFetch:(id)arg2 fetchConfigurations:(id)arg3 inDatabase:(id)arg4 serverChangeTokenCache:(id)arg5 priority:(long long)arg6 allowRetry:(bool)arg7 activity:(id)arg8 group:(id)arg9 completion:(id /* block */)arg10;
- (void)_fetchShareParticipantForLookupInfos:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchShareWithShareRecordID:(id)arg1 activity:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (id)_lookupInfoFromIdentifier:(id)arg1;
- (void)_retrieveZone:(id)arg1 database:(id)arg2 completion:(id /* block */)arg3;
- (void)_saveRecordsIntoPrivateDatabase:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3 priority:(long long)arg4 activity:(id)arg5 group:(id)arg6 completion:(id /* block */)arg7;
- (void)_saveRecordsIntoPrivateDatabaseCreatingZones:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3 priority:(long long)arg4 activity:(id)arg5 useZoneWideSharing:(bool)arg6 group:(id)arg7 completion:(id /* block */)arg8;
- (void)acceptSharesWithInvitationTokensByShareURL:(id)arg1 cloudKitGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)acceptSharesWithURLs:(id)arg1 cloudKitGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)addParticipant:(id)arg1 toShares:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelAllExecutingFetches;
- (id)container;
- (void)createRecordZonesWithIDs:(id)arg1 priority:(long long)arg2 useZoneWideSharing:(bool)arg3 group:(id)arg4 completion:(id /* block */)arg5;
- (void)createShareAndAssociatedZoneWithShareRecordID:(id)arg1 rootRecord:(id)arg2 otherRecordsToSave:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchChangesInPrivateDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 activity:(id)arg3 group:(id)arg4 additionalZoneIDs:(id)arg5 zoneIDsToSkip:(id)arg6 fetchConfigurations:(id)arg7 completion:(id /* block */)arg8;
- (void)fetchChangesInPrivateDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 activity:(id)arg3 group:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchChangesInSharedDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 activity:(id)arg3 group:(id)arg4 additionalZoneIDs:(id)arg5 zoneIDsToSkip:(id)arg6 fetchConfigurations:(id)arg7 completion:(id /* block */)arg8;
- (void)fetchChangesInSharedDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 activity:(id)arg3 group:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchShareParticipantForEmailAddress:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchShareParticipantForIdentifier:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchShareWithShareRecordID:(id)arg1 activity:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 recordIDsToDelete:(id)arg2 priority:(long long)arg3 activity:(id)arg4 group:(id)arg5 completion:(id /* block */)arg6;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 recordIDsToDelete:(id)arg2 priority:(long long)arg3 activity:(id)arg4 useZoneWideSharing:(bool)arg5 group:(id)arg6 completion:(id /* block */)arg7;
- (id)init;
- (id)initWithContainer:(id)arg1;
- (void)removeParticipantWithCloudKitAddress:(id)arg1 fromShares:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (void)retrieveZone:(id)arg1 completion:(id /* block */)arg2;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 priority:(long long)arg2 activity:(id)arg3 group:(id)arg4 completion:(id /* block */)arg5;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 recordIDsToDelete:(id)arg2 priority:(long long)arg3 activity:(id)arg4 group:(id)arg5 completion:(id /* block */)arg6;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 recordIDsToDelete:(id)arg2 priority:(long long)arg3 activity:(id)arg4 useZoneWideSharing:(bool)arg5 group:(id)arg6 completion:(id /* block */)arg7;
- (void)saveSubscriptions:(id)arg1 andDeleteSubscriptionsWithIdentifiers:(id)arg2 inDatabase:(id)arg3 completion:(id /* block */)arg4;
- (void)setContainer:(id)arg1;

@end