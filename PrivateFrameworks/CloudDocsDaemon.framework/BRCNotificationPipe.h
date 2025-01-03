/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationPipe : NSObject <BRCListOperationDelegate, BRItemNotificationSending> {
    id /* block */  _boostReply;
    BRCXPCClient * _client;
    <BRCNotificationPipeDelegate> * _delegate;
    NSMutableSet * _externalAppLibraries;
    NSObject<OS_dispatch_group> * _gatherGroup;
    BRCDataOrDocsScopeGatherer * _gatherer;
    bool  _hasProgressUpdatesInFlight;
    bool  _hasUpdatesInFlight;
    unsigned long long  _initialGatherMaxRank;
    BRCListDirectoryContentsOperation * _listOp;
    BRCNotificationManager * _manager;
    BRNotificationQueue * _notifs;
    BRCItemGlobalID * _oldWatchedAncestorItemGlobalID;
    NSMutableDictionary * _pendingProgressUpdatesByID;
    NSObject<OS_dispatch_queue> * _queue;
    <BRItemNotificationReceiving> * _receiver;
    NSHashTable * _recursiveScopeListOps;
    unsigned long long  _secondaryGatherMaxRank;
    bool  _volumeIsCaseSensitive;
    NSString * _watchForBundleID;
    unsigned short  _watchItemOptions;
    int  _watchKind;
    NSString * _watchNamePrefix;
    BRFileObjectID * _watchedAncestorFileObjectID;
    NSString * _watchedAncestorFilenameToItem;
    BRCItemGlobalID * _watchedAncestorItemGlobalID;
    NSSet * _watchedAppLibraries;
    unsigned long long  _watchedAppLibrariesFlags;
    NSSet * _watchedAppLibraryIDs;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <BRCNotificationPipeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCNotificationManager *manager;
@property (retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID;
@property (retain) NSString *watchedAncestorFilenameToItem;
@property (retain) BRCItemGlobalID *watchedAncestorItemGlobalID;

- (void).cxx_destruct;
- (void)__flush;
- (void)__performBlockafterDBAndNotifFlush:(id /* block */)arg1 session:(id)arg2 description:(id)arg3 error:(id)arg4;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (void)_flushProgressUpdates;
- (void)_gatherIfNeededAndFlushAsync;
- (id)_initWithManager:(id)arg1 startingRank:(unsigned long long)arg2;
- (int)_isInterestingUpdate:(id)arg1;
- (void)_performBlock:(id /* block */)arg1 whenNotifsAreFullyFlushedInAppLibrary:(id)arg2 description:(id)arg3;
- (void)_prepareForSecondGatherWithRank:(unsigned long long)arg1;
- (void)_processProgressUpdates:(id)arg1;
- (void)_registerAsWatcherIfNeeded;
- (void)_stopWatchingItems;
- (void)_triggerImmediateReadOfDocumentIfNeeded;
- (void)_watchItem:(id)arg1 options:(unsigned short)arg2 gatherReply:(id /* block */)arg3;
- (void)addDequeueCallback:(id /* block */)arg1;
- (void)addNotification:(id)arg1 asDead:(bool)arg2;
- (void)boostPriority:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2 startingRank:(unsigned long long)arg3;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3 startingRank:(unsigned long long)arg4;
- (oneway void)invalidate;
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;
- (bool)isWatchingGlobalItemID:(id)arg1;
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;
- (id)manager;
- (id)oldWatchedAncestorItemGlobalID;
- (void)processProgressUpdates:(id)arg1;
- (void)processUpdates:(id)arg1 withRank:(unsigned long long)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setOldWatchedAncestorItemGlobalID:(id)arg1;
- (void)setWatchedAncestorFileObjectID:(id)arg1;
- (void)setWatchedAncestorFilenameToItem:(id)arg1;
- (void)setWatchedAncestorItemGlobalID:(id)arg1;
- (void)watchItemAtURL:(id)arg1 lookup:(id)arg2 options:(unsigned short)arg3 gatherReply:(id /* block */)arg4;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(id /* block */)arg3;
- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(id /* block */)arg3;
- (void)watchItemWithFileObjectID:(id)arg1 options:(unsigned short)arg2 request:(id)arg3 gatherReply:(id /* block */)arg4;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(id /* block */)arg4;
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(id /* block */)arg3;
- (void)watchScopes:(unsigned short)arg1 gatherReply:(id /* block */)arg2;
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatherReply:(id /* block */)arg3;
- (id)watchedAncestorFileObjectID;
- (id)watchedAncestorFilenameToItem;
- (id)watchedAncestorItemGlobalID;

@end
