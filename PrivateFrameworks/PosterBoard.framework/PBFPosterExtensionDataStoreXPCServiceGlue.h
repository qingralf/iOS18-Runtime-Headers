/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFPosterExtensionDataStoreXPCServiceGlue : NSObject <PBFBehaviorAssertionProviding, PBFPosterExtensionDataStoreObserver, PBFWallpaperPublisherDelegate, PRSServerDelegate> {
    CSProminentLayoutController * _layoutController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PBFApplicationStateMonitor * _lock_applicationStateMonitor;
    PBFPosterExtensionDataStore * _lock_dataStore;
    PBFRuntimeAssertionManager * _lock_runtimeAssertionManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _publisherUpdateLock;
    PRSServer * _server;
    PBFWallpaperPublisher * _wallpaperPublisher;
}

@property (nonatomic, readonly) PBFApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, readonly) PBFPosterExtensionDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PBFRuntimeAssertionManager *runtimeAssertionManager;
@property (nonatomic, readonly) PRSServer *server;
@property (readonly) Class superclass;

+ (bool)_checkIfLanguageChangeOccurred:(id)arg1;
+ (bool)_clearMigrationFlagsWithError:(out id*)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_baseDataStoreURL;
- (id)_baseDataStoreURL:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cutoutBoundsForObstructionBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2;
- (id)_dataStoreWithError:(out id*)arg1;
- (void)_handleLaunchServicesUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)_hasComplicationsForPosterConfiguration:(id)arg1;
- (bool)_hasValidConfigurationForPoster:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)_lock_dataStoreWithError:(out id*)arg1;
- (void)_lock_fixFileProtections;
- (bool)_lock_performNecessaryMigrationsForDataStoreAtURL:(id)arg1 shouldForce:(bool)arg2 error:(out id*)arg3;
- (void)_lock_reapDescriptors;
- (void)_lock_reapEntirePosterBoardDataStore;
- (void)_lock_reapExtensionProviderInfo;
- (void)_lock_reapGallery;
- (bool)_lock_reapSnapshots:(bool)arg1;
- (void)_lock_reapTemporaryDirectory;
- (void)_lock_reapTransientData:(bool)arg1;
- (void)_lock_runLegacyMigration;
- (void)_lock_teardownDataStoreWithError:(out id*)arg1;
- (bool)_migrationIsPending;
- (void)_migration_updateStashedIdentifiers;
- (bool)_mutateDataStoreState:(unsigned long long)arg1 error:(out id*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2;
- (void)_performPublisherChangeForDataStore:(id)arg1 block:(id /* block */)arg2;
- (void)_postDidTearDownNotification;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_prominentObstructionForConfiguration:(id)arg1 orientation:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_prominentObstructionForOrientation:(long long)arg1 showingComplications:(bool)arg2;
- (void)_resetRole:(id)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_screenBoundsForOrientation:(long long)arg1;
- (void)_stashCurrentDataStoreWithName:(id)arg1 url:(id)arg2 options:(id)arg3 withError:(out id*)arg4;
- (id)acquireEditingSessionAssertionForProvider:(id)arg1 withReason:(id)arg2;
- (id)acquireSnapshotterDisabledAssertionForProvider:(id)arg1 withReason:(id)arg2;
- (id)acquireSnapshotterInUseAssertionWithReason:(id)arg1;
- (id)activeEditingSessionAssertionExtensionIdentifiers;
- (unsigned long long)activeSnapshotterInUseAssertionCount;
- (id)activeSnapshotterInUseAssertionReasons;
- (void)addBehaviorAssertionObserver:(id)arg1;
- (id)applicationStateMonitor;
- (id)buildDataStoreForURL:(id)arg1 runtimeAssertionProvider:(id)arg2 applicationStateMonitor:(id)arg3 observer:(id)arg4 wasMigrationJustPerformed:(bool)arg5 error:(out id*)arg6;
- (id)dataStore;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)posterExtensionDataStore:(id)arg1 activePostersWereUpdatedForRoles:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didInitializeActivePosters:(id)arg2 posterCollections:(id)arg3;
- (void)posterExtensionDataStore:(id)arg1 didInitializeWithSwitcherConfiguration:(id)arg2 withChanges:(bool)arg3;
- (void)posterExtensionDataStore:(id)arg1 didUpdateActiveConfiguration:(id)arg2 associatedConfiguration:(id)arg3 reason:(id)arg4;
- (void)posterExtensionDataStore:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateSelectedConfiguration:(id)arg2 associatedConfiguration:(id)arg3 reason:(id)arg4;
- (void)posterExtensionDataStore:(id)arg1 didUpdateSnapshotForPath:(id)arg2 forDefinition:(id)arg3;
- (void)posterExtensionDataStore:(id)arg1 posterCollectionsWereUpdatedForRoles:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 posterConfiguration:(id)arg2 didUpdateAssociatedHomeScreenPosterConfigurationTo:(id)arg3;
- (void)removeBehaviorAssertionObserver:(id)arg1;
- (id)runtimeAssertionManager;
- (id)server;
- (void)server:(id)arg1 associateConfigurationMatchingUUID:(id)arg2 focusModeActivityUUID:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 clearMigrationFlags:(id /* block */)arg2;
- (void)server:(id)arg1 createPosterConfigurationForProviderIdentifier:(id)arg2 posterDescriptorIdentifier:(id)arg3 role:(id)arg4 completion:(id /* block */)arg5;
- (void)server:(id)arg1 deleteArchivedDataStoreNamed:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 deleteDataStoreWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 deleteHostConfigurationForRole:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 deletePosterConfigurationsMatchingUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 deletePosterDescriptorsForExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 deleteSnapshots:(bool)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 deleteTransientDataWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 exportArchivedDataStoreNamed:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 exportCurrentDataStoreToURL:(id)arg2 options:(id)arg3 sandboxToken:(id)arg4 error:(out id*)arg5;
- (void)server:(id)arg1 exportPosterConfigurationMatchingUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchActivePosterForRole:(id)arg2 completion:(id /* block */)arg3;
- (id)server:(id)arg1 fetchActivePosterForRole:(id)arg2 error:(out id*)arg3;
- (void)server:(id)arg1 fetchArchivedDataStoreNamesWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 fetchAssociatedHomeScreenPosterConfigurationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchChargerIdentifierRelationshipsWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 fetchContentCutoutBoundsForPosterConfiguration:(id)arg2 orientation:(long long)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 fetchContentObstructionBoundsForPosterConfiguration:(id)arg2 orientation:(long long)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 fetchExtensionIdentifiersWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 fetchFocusUUIDForConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchGallery:(id /* block */)arg2;
- (void)server:(id)arg1 fetchLimitedOcclusionBoundsForPosterConfiguration:(id)arg2 orientation:(long long)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 fetchMaximalContentCutoutBoundsForOrientation:(long long)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchObscurableBoundsForPosterConfiguration:(id)arg2 orientation:(long long)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 fetchPosterConfigurationsForExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchPosterConfigurationsForRole:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchPosterDescriptorsForExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchPosterSnapshotsWithRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchRuntimeAssertionState:(id /* block */)arg2;
- (void)server:(id)arg1 fetchSelectedPosterForRole:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 fetchStaticPosterDescriptorsForExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 gatherDataFreshnessState:(id /* block */)arg2;
- (void)server:(id)arg1 ignoreExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 importPosterConfigurationFromArchiveData:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 ingestSnapshotCollection:(id)arg2 forPosterConfigurationUUID:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 invalidateDataStoreWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 notePosterConfigurationUnderlyingModelDidChange:(id)arg2;
- (void)server:(id)arg1 notifyActiveChargerIdentifierDidUpdate:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 notifyAvailableFocusModesDidChange:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 notifyFocusModeDidChange:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 notifyPosterBoardOfApplicationUpdatesWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 overnightUpdateWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 prewarmWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 pushPosterGalleryUpdate:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 pushToProactiveWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 refreshPosterConfigurationMatchingUUID:(id)arg2 sessionInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 refreshPosterDescriptorsForExtension:(id)arg2 sessionInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)arg2 extensionIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 refreshSnapshotForPosterConfigurationMatchUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 removeAllFocusConfigurationsMatchingFocusUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 resetRole:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 restoreArchivedDataStoreNamed:(id)arg2 backupExistingDataStore:(bool)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 retrieveGallery:(id /* block */)arg2;
- (void)server:(id)arg1 runMigration:(bool)arg2 migrationDescriptor:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 setHostConfiguration:(id)arg2 forRole:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 stashCurrentDataStoreWithName:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 triggerMessedUpDataProtectionWithCompletion:(id /* block */)arg2;
- (void)server:(id)arg1 unignoreExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 updatePosterConfiguration:(id)arg2 updates:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 updatePosterConfigurationMatchingUUID:(id)arg2 updates:(id)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 updateToSelectedConfigurationMatchingUUID:(id)arg2 role:(id)arg3 from:(id)arg4 completion:(id /* block */)arg5;
- (void)wallpaperPublisherDidReceiveObserverConnection;

@end