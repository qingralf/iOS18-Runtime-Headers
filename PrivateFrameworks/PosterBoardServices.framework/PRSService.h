/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSService : NSObject {
    BSServiceConnection<BSServiceConnectionClient> * _serviceConnection;
}

- (void).cxx_destruct;
- (void)_refreshPosterDescriptorsForExtension:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)_selectConfigurationAndRefreshSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (id)_serviceInterfaceWithError:(id*)arg1;
- (void)associateConfigurationMatchingUUID:(id)arg1 focusModeActivityUUID:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)clearMigrationFlags:(id /* block */)arg1;
- (void)createAndSelectLegacyPosterConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)createPosterConfigurationForProviderIdentifier:(id)arg1 posterDescriptorIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)createPosterConfigurationForProviderIdentifier:(id)arg1 posterDescriptorIdentifier:(id)arg2 role:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (oneway void)deleteArchivedDataStoreNamed:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)deleteDataStoreWithCompletion:(id /* block */)arg1;
- (oneway void)deleteHostConfigurationForRole:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePosterConfigurationsMatchingUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)deletePosterDescriptorsForExtension:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)deleteSnapshots:(bool)arg1 completion:(id /* block */)arg2;
- (oneway void)deleteTransientDataWithCompletion:(id /* block */)arg1;
- (oneway void)exportArchivedDataStoreNamed:(id)arg1 completion:(id /* block */)arg2;
- (void)exportCurrentDataStoreToURL:(id)arg1 options:(id)arg2 sandboxToken:(id)arg3 error:(out id*)arg4;
- (void)exportPosterConfigurationMatchingUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchActiveConfiguration:(id /* block */)arg1;
- (void)fetchActivePosterConfiguration:(id /* block */)arg1;
- (oneway void)fetchActivePosterForRole:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchActivePosterForRole:(id)arg1 error:(out id*)arg2;
- (oneway void)fetchArchivedDataStoreNamesWithCompletion:(id /* block */)arg1;
- (void)fetchAssociatedHomeScreenPosterConfigurationUUID:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchChargerIdentifierRelationshipsWithCompletion:(id /* block */)arg1;
- (oneway void)fetchContentCutoutBoundsForActivePosterWithOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)fetchContentCutoutBoundsForPosterConfiguration:(id)arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)fetchContentObstructionBoundsForActivePosterWithOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)fetchContentObstructionBoundsForPosterConfiguration:(id)arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchExtensionIdentifiersWithCompletion:(id /* block */)arg1;
- (oneway void)fetchFocusUUIDForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchGallery:(id /* block */)arg1;
- (oneway void)fetchLimitedOcclusionBoundsForPosterConfiguration:(id)arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)fetchMaximalContentCutoutBoundsForOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)fetchObscurableBoundsForPosterConfiguration:(id)arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPosterConfigurations:(id /* block */)arg1;
- (void)fetchPosterConfigurationsForExtension:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchPosterConfigurationsForRole:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPosterDescriptorsForExtension:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchPosterFocusSnapshotsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPosterSnapshotsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchRuntimeAssertionState:(id /* block */)arg1;
- (void)fetchSelectedConfiguration:(id /* block */)arg1;
- (oneway void)fetchSelectedPosterForRole:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchStaticPosterDescriptorsForExtension:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)gatherDataFreshnessState:(id /* block */)arg1;
- (oneway void)ignoreExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)importPosterConfigurationFromArchiveData:(id)arg1 completion:(id /* block */)arg2;
- (void)importPosterConfigurationFromArchivedData:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)ingestSnapshotCollection:(id)arg1 forPosterConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (oneway void)notePosterConfigurationUnderlyingModelDidChange:(id)arg1;
- (void)notifyActiveChargerIdentifierDidUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyAvailableFocusModesDidChange:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyFocusModeDidChange:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)notifyPosterBoardOfApplicationUpdatesWithCompletion:(id /* block */)arg1;
- (oneway void)overnightUpdateWithCompletion:(id /* block */)arg1;
- (void)prewarmWithCompletion:(id /* block */)arg1;
- (void)pushPosterGalleryUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)pushToProactiveWithCompletion:(id /* block */)arg1;
- (void)refreshPosterConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshPosterConfiguration:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshPosterConfigurationMatchingUUID:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshPosterDescriptorsForExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshPosterDescriptorsForExtension:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)arg1 extensionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshSnapshotForPosterConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshSnapshotForPosterConfigurationMatchingUUID:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)removeAllFocusConfigurationsMatchingFocusUUID:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)resetRole:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)restoreArchivedDataStoreNamed:(id)arg1 backupExistingDataStore:(bool)arg2 completion:(id /* block */)arg3;
- (void)retrieveGallery:(id /* block */)arg1;
- (oneway void)runMigration:(bool)arg1 completion:(id /* block */)arg2;
- (oneway void)runMigration:(bool)arg1 migrationDescriptor:(id)arg2 completion:(id /* block */)arg3;
- (id)serviceNotificationCenterWithError:(id*)arg1;
- (oneway void)setHostConfiguration:(id)arg1 forRole:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)stashCurrentDataStoreWithName:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)triggerMessedUpDataProtectionWithCompletion:(id /* block */)arg1;
- (oneway void)unignoreExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePosterConfiguration:(id)arg1 update:(id)arg2 completion:(id /* block */)arg3;
- (void)updatePosterConfigurationMatchingUUID:(id)arg1 updates:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSelectedForRoleIdentifier:(id)arg1 newlySelectedConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)updateToSelectedConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)updateToSelectedConfiguration:(id)arg1 role:(id)arg2 completion:(id /* block */)arg3;
- (void)updateToSelectedConfigurationMatchingUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateToSelectedConfigurationMatchingUUID:(id)arg1 role:(id)arg2 completion:(id /* block */)arg3;

@end