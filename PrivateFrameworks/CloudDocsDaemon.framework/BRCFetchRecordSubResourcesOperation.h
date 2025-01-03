/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {
    bool  _canSaveDirectly;
    bool  _canSaveDirectlyWithDeletes;
    bool  _contentRecordsFetchedInline;
    NSMutableArray * _deletedRecordIDs;
    NSMutableArray * _deletedShareIDs;
    NSObject<OS_dispatch_group> * _deserializeGroup;
    NSObject<OS_dispatch_source> * _deserializeSource;
    unsigned char  _deserializeState;
    NSError * _error;
    bool  _isDeltaSync;
    bool  _isDoneFetchingRecords;
    NSMutableOrderedSet * _loopDetectionCache;
    unsigned int  _loopDetectionCacheSize;
    NSMutableSet * _movedZoneNames;
    NSObject<OS_dispatch_group> * _operationGroup;
    BRCPendingChangesStream * _pendingChangesStream;
    id /* block */  _queryFinishedClientTruthCallback;
    id /* block */  _queryFinishedServerTruthCallback;
    NSMutableDictionary * _recordsByID;
    unsigned long long  _recordsRequested;
    unsigned long long  _recordsRequestedTotalMetadataSize;
    BRCServerZone * _serverZone;
    NSMutableDictionary * _subResourceRecordsByID;
    NSObject<OS_dispatch_group> * _xattrFetchingGroup;
    NSObject<OS_dispatch_source> * _xattrFetchingSource;
    unsigned long long  _xattrsFetchedTotalSize;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCPendingChangesStream *pendingChangesStream;
@property (nonatomic, copy) id /* block */ queryFinishedClientTruthCallback;
@property (nonatomic, copy) id /* block */ queryFinishedServerTruthCallback;
@property (nonatomic, readonly) unsigned long long recordsFetched;
@property (nonatomic, readonly) unsigned long long recordsFetchedTotalMetadataSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long xattrsFetchedTotalSize;

- (void).cxx_destruct;
- (void)_cleanUpAfterSavingRecords;
- (long long)_compareRecordsForSaveWithFirstRecord:(id)arg1 secondRecord:(id)arg2;
- (void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;
- (void)_dump;
- (void)_fetchRecordsBlockingSaveIfNecessary;
- (bool)_hasRecordsPendingSubResources;
- (bool)_markSubResourceRecordAsFetchedIfNecessary:(id)arg1;
- (void)_notifyWhenRecordsAreFetched:(id /* block */)arg1;
- (void)_prepareToSaveRecords;
- (void)_saveRecordsToPendingChangesWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2;
- (void)_scheduleDeserialize;
- (void)_scheduleXattrFetch;
- (void)_startWithParentOperation:(id)arg1;
- (bool)_willFetchRecordForDeserialize:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)addRecordIDToDeserialize:(id)arg1;
- (void)addRecordIDToDeserialize:(id)arg1 recordType:(long long)arg2;
- (void)cancel;
- (id)createActivity;
- (id)error;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initAndScheduleWithServerZone:(id)arg1 parentOperation:(id)arg2 pendingChangesStream:(id)arg3 contentRecordsFetchedInline:(bool)arg4 sessionContext:(id)arg5;
- (void)main;
- (id)movedZoneNames;
- (void)notifyWhenCaughtUp:(bool)arg1 whenRecordsAreFetchedAndFinish:(id /* block */)arg2;
- (void)notifyWhenRecordsAreFetchedAndFinish:(id /* block */)arg1;
- (id)pendingChangesStream;
- (id /* block */)queryFinishedClientTruthCallback;
- (id /* block */)queryFinishedServerTruthCallback;
- (void)recordIDWasDeleted:(id)arg1;
- (id)records;
- (unsigned long long)recordsFetched;
- (unsigned long long)recordsFetchedTotalMetadataSize;
- (bool)saveRecordsWithQueryCursor:(id)arg1;
- (bool)saveRecordsWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2 syncStatus:(long long)arg3;
- (void)setQueryFinishedClientTruthCallback:(id /* block */)arg1;
- (void)setQueryFinishedServerTruthCallback:(id /* block */)arg1;
- (void)shareIDWasDeleted:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (unsigned long long)xattrsFetchedTotalSize;

@end
