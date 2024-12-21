/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <BSDescriptionProviding, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    bool  _archiveSchedulingQueue_dirty;
    bool  _archiveSchedulingQueue_scheduled;
    NSMutableArray * _archiveSchedulingQueue_synchronizeCompletions;
    NSString * _baseLogIdentifier;
    unsigned long long  _clientCount;
    XBSnapshotContainerIdentity * _containerIdentity;
    XBSnapshotManifestIdentity * _identity;
    NSFileManager * _imageAccessFileManger;
    BSAtomicSignal * _invalidatedSignal;
    bool  _logContainerIdentifierDirty;
    NSString * _logIdentifier;
    unsigned long long  _pendingOperations;
    BSContinuousMachTimer * _reapingTimer;
    NSMutableDictionary * _snapshotGroupsByID;
}

@property (nonatomic, readonly, copy) XBSnapshotContainerIdentity *containerIdentity;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) XBSnapshotManifestIdentity *identity;
@property (readonly) Class superclass;

+ (void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3;
+ (long long)_outputFormatForSnapshot:(id)arg1;
+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (void)_workloop_noteManifestInvalidated:(id)arg1;
+ (id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(bool)arg3;
+ (void)initialize;
+ (bool)isUnderMemoryPressure;
+ (void)relinquishManifest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_access_accessSnapshotsWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_access_addSnapshotToGroup:(id)arg1;
- (id)_access_allSnapshotGroups;
- (void)_access_deletePaths:(id)arg1;
- (void)_access_deleteSnapshots:(id)arg1;
- (void)_access_doArchiveWithCompletions:(id)arg1;
- (void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_access_purgeSnapshotsWithProtectedContent;
- (id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(bool)arg2;
- (bool)_access_snapshotsConsideredUnpurgableByAPFS;
- (id)_access_snapshotsForGroupIDs:(id)arg1;
- (id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)_access_snapshotsMatchingPredicate:(id)arg1;
- (void)_access_updateSnapshotsAPFSPurgability:(bool)arg1;
- (bool)_access_validateWithContainerIdentity:(id)arg1;
- (void)_access_workloop_reapExpiredAndInvalidSnapshots;
- (void)_addSnapshotToGroup:(id)arg1;
- (id)_allSnapshotGroups;
- (void)_commonInit;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (id)_descriptionForStateCaptureWithMultilinePrefix:(id)arg1;
- (void)_didGenerateImage:(bool)arg1 imageGenerationSignal:(id)arg2 logIdentifier:(id)arg3 imageGeneratedHandler:(id /* block */)arg4 qos:(unsigned int)arg5;
- (void)_didGenerateImageData:(id)arg1 forSnapshot:(id)arg2 imageWasGenerated:(bool)arg3 imageDataGenerationSignal:(id)arg4 logIdentifier:(id)arg5 didSaveHandler:(id /* block */)arg6 qos:(unsigned int)arg7 writeToFileIfSupported:(bool)arg8;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (void)_handleMemoryPressure;
- (bool)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2;
- (id)_initWithContainerIdentity:(id)arg1;
- (bool)_invalidate;
- (void)_noteDirtied;
- (void)_reapExpiredAndInvalidSnapshots;
- (void)_scheduleArchivingIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_scheduleArchivingIfNecessaryWithDelay:(double)arg1 completion:(id /* block */)arg2;
- (void)_setContainerIdentity:(id)arg1;
- (id)_snapshotGroupsByID;
- (void)_synchronizeDataStoreWithCompletion:(id /* block */)arg1;
- (bool)_validateWithContainerIdentity:(id)arg1;
- (void)_workloop_checkClientCount;
- (void)_workloop_decrementClientCount;
- (void)_workloop_incrementClientCount;
- (void)_workloop_reallyCheckClientCount;
- (void)archive;
- (void)beginSnapshotAccessTransaction:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)beginTrackingImageDeletions;
- (id)bundleIdentifier;
- (id)containerIdentity;
- (id)containerPath;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (id)defaultGroupIdentifier;
- (void)deleteAllSnapshots;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(id /* block */)arg2;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingImageDeletions;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 imageGeneratedHandler:(id /* block */)arg4 imageDataSavedHandler:(id /* block */)arg5;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)purgeSnapshotsWithProtectedContent;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (bool)snapshotsConsideredUnpurgableByAPFS;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSnapshotsAPFSPurgability:(bool)arg1;

@end