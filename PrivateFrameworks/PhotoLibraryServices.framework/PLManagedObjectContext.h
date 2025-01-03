/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObjectContext : NSManagedObjectContext {
    NSMutableSet * _avalancheUUIDsForUpdate;
    NSMutableSet * _backgroundWorkItemIdentifiers;
    PLChangeHandlingContainer * _changeHandlingContainer;
    int  _changeSource;
    PLDelayedFiledSystemDeletions * _delayedDeletions;
    PLDelayedSaveActions * _delayedSaveActions;
    bool  _initFinished;
    NSError * _invalidationReason;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationStateLock;
    bool  _isBackingALAssetsLibrary;
    bool  _isConnectedToChangeHandling;
    bool  _isInitializingSingletons;
    bool  _isObservingChangesForPTPNotificationDelegate;
    double  _lastResetTimestamp;
    bool  _localOnlyDelete;
    bool  _mergingChanges;
    bool  _needsBackgroundJobProcessing;
    bool  _nonCoalescing;
    PLPhotoLibraryPathManager * _pathManager;
    PLPhotoLibrary * _photoLibrary;
    PLManagedObjectContextDelegate * _photosDelegate;
    NSString * _pl_basename;
    bool  _pl_suppressUnhandledErrorDuringPerform;
    <PLManagedObjectContextPTPNotificationDelegate> * _ptpNotificationDelegate;
    bool  _regenerateVideoThumbnails;
    long long  _resetCloudLibraryMode;
    bool  _savingDuringMerge;
    bool  _syncChangeMarker;
    NSMutableDictionary * _updatedObjectsAttributes;
    NSMutableDictionary * _updatedObjectsRelationships;
    NSMutableDictionary * _uuidsForCloudDeletion;
}

@property (nonatomic) int changeSource;
@property (nonatomic, retain) PLDelayedFiledSystemDeletions *delayedDeletions;
@property (nonatomic, readonly) PLDelayedSaveActions *delayedSaveActions;
@property (nonatomic) bool isBackingALAssetsLibrary;
@property (nonatomic) bool isInitializingSingletons;
@property (nonatomic, readonly) bool isUserInterfaceContext;
@property (getter=isLocalOnlyDelete, nonatomic) bool localOnlyDelete;
@property (nonatomic, readonly) bool mergingChanges;
@property (nonatomic) bool nonCoalescing;
@property (nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic, copy) NSString *pl_basename;
@property (nonatomic) bool pl_suppressUnhandledErrorDuringPerform;
@property (nonatomic) <PLManagedObjectContextPTPNotificationDelegate> *ptpNotificationDelegate;
@property (nonatomic) bool regenerateVideoThumbnails;
@property (nonatomic) long long resetCloudLibraryMode;
@property (nonatomic, readonly) bool savingDuringMerge;

+ (bool)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (void)_pl_megamoc_contextPerformDepthPop;
+ (void)_pl_megamoc_contextPerformDepthPush;
+ (bool)_pl_megamoc_isInPLMocPerform;
+ (void)_pl_megamoc_runWithPerformWarningsSuppressed:(id /* block */)arg1;
+ (void)_setupInitialQueryGenerationForContext:(id)arg1;
+ (void)_setupNameForContext:(id)arg1 withLibrary:(id)arg2;
+ (bool)_shouldRetryNewPersistentStoreCoordinatorWithError:(id)arg1;
+ (bool)assetsLibraryLoggingEnabled;
+ (bool)canMergeRemoteChanges;
+ (id)changeNotificationObjectIDKeys;
+ (id)changeNotificationObjectIDMutationKeys;
+ (id)changeNotificationObjectKeys;
+ (id)changeNotificationObjectMutationKeys;
+ (id)contextForRepairingSingletonObjectsWithReason:(id)arg1 libraryURL:(id)arg2 error:(id*)arg3;
+ (id)contextForUninitializedPhotoLibrary:(id)arg1 automaticallyMerges:(bool)arg2 automaticallyPinToFirstFetch:(bool)arg3;
+ (void)getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (id)newContextForPhotoLibrary:(id)arg1 automaticallyMerges:(bool)arg2;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (id)sanitizedErrorFromError:(id)arg1;
+ (bool)shouldHavePhotoLibrary;

- (void).cxx_destruct;
- (void)_addCloudUUID:(id)arg1 forDeletionType:(long long)arg2;
- (bool)_adjustmentTimestampChangedChangedAttribute:(id)arg1 from:(id)arg2;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_directPerformBlock:(id /* block */)arg1;
- (void)_directPerformBlockAndWait:(id /* block */)arg1;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 adjustedIDs:(id)arg4 ofEntityKind:(id)arg5 fromRemoteContextDidSaveObjectIDsNotification:(id)arg6;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_logDatabaseDirectoryDiagnosticInfo;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(bool)arg2;
- (id)_pl_executeFetchRequest:(id)arg1 error:(id*)arg2;
- (void)_pl_setupStalenessInterval;
- (void)_recordChangedKeys:(id)arg1 forObjectID:(id)arg2;
- (void)_resetName;
- (void)_setNameFromCurrentQoS;
- (bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (void)appendDelayedDeletionsToXPCMessage:(id)arg1;
- (int)changeSource;
- (void)connectToChangeHandling;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delayedDeletions;
- (id)delayedSaveActions;
- (void)disconnectFromChangeHandling;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (id)getAndClearRecordedObjectsForCloudDeletion;
- (bool)getAndClearSyncChangeMarker;
- (void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2;
- (bool)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (bool)hasRecordedBackgroundWorkItemWithIdentifier:(id)arg1 jobType:(short)arg2 jobFlags:(long long)arg3;
- (id)initWithConcurrencyType:(unsigned long long)arg1 libraryBundle:(id)arg2;
- (id)initWithConcurrencyType:(unsigned long long)arg1 libraryBundle:(id)arg2 changeHandlingContainer:(id)arg3 coordinator:(id)arg4;
- (void)invalidateWithReason:(id)arg1;
- (bool)isBackingALAssetsLibrary;
- (bool)isDatabaseCreationContext;
- (bool)isInitializingSingletons;
- (bool)isLocalOnlyDelete;
- (bool)isReadOnly;
- (bool)isUserInterfaceContext;
- (bool)isValidForSelector:(SEL)arg1 error:(id*)arg2;
- (double)lastResetTimestamp;
- (bool)mergingChanges;
- (bool)nonCoalescing;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)pathManager;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)photoLibrary;
- (id)pl_basename;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (id)pl_graphCache;
- (id)pl_libraryBundle;
- (bool)pl_performWithOptions:(unsigned long long)arg1 andBlock:(id /* block */)arg2;
- (bool)pl_suppressUnhandledErrorDuringPerform;
- (void)pl_wrapperForPerformBlock:(id /* block */)arg1;
- (id)ptpNotificationDelegate;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordBackgroundJobWorkItemCreated:(id)arg1;
- (void)recordChangesFromTriggerModifiedObjectIDs:(id)arg1;
- (void)recordCloudDeletionForObject:(id)arg1;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)recordNeedsBackgroundJobProcessing;
- (void)recordSyncChangeMarker;
- (void)refreshAllObjects;
- (bool)regenerateVideoThumbnails;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (void)reset;
- (void)resetAllFetchingAlbums;
- (long long)resetCloudLibraryMode;
- (bool)save:(id*)arg1;
- (bool)savingDuringMerge;
- (void)setChangeSource:(int)arg1;
- (void)setDelayedDeletions:(id)arg1;
- (void)setIsBackingALAssetsLibrary:(bool)arg1;
- (void)setIsInitializingSingletons:(bool)arg1;
- (void)setLocalOnlyDelete:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNonCoalescing:(bool)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPl_basename:(id)arg1;
- (void)setPl_suppressUnhandledErrorDuringPerform:(bool)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)setRegenerateVideoThumbnails:(bool)arg1;
- (void)setResetCloudLibraryMode:(long long)arg1;
- (void)setupDelegateWithBundle:(id)arg1;
- (void)setupLocalChangeNotifications;
- (bool)shouldMergeFromRemoteContextWithChanges:(id)arg1;
- (id)storeUUID;
- (void)tearDownLocalChangeNotifications;
- (void)updateTransactionAuthor;
- (void)withDispatchGroup:(id)arg1 performBlock:(id /* block */)arg2;

@end
