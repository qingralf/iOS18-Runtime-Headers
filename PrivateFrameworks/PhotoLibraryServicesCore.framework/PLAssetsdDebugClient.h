/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLAssetsdDebugClient : PLAssetsdBaseClient

- (bool)allMomentsMetadataWithOutputPath:(id)arg1 metadataDictionary:(id*)arg2 error:(id*)arg3;
- (bool)archiveComputeCacheWithError:(id*)arg1;
- (id)assetContainmentLargeFaceThresholdUserDefaultWithError:(id*)arg1;
- (id)assetContainmentSmallFaceThresholdUserDefaultWithError:(id*)arg1;
- (id)assetContainmentSmallTorsoThresholdUserDefaultWithError:(id*)arg1;
- (bool)backgroundMigrationWithError:(id*)arg1;
- (bool)cleanupEmptyHighlightsWithError:(id*)arg1;
- (void)clearPrefetchState;
- (void)closeSearchIndexWithCompletionHandler:(id /* block */)arg1;
- (void)coalesceJournalsForManagerName:(id)arg1 payloadClassIDs:(id)arg2 withChangeJournalOverThreshold:(float)arg3 completionHandler:(id /* block */)arg4;
- (id)computeCacheStatusWithError:(id*)arg1;
- (bool)debugSidecarFileURLsForAsset:(id)arg1 debugSidecarFileURLs:(id*)arg2 error:(id*)arg3;
- (void)dropSearchIndexWithCompletionHandler:(id /* block */)arg1;
- (bool)dumpMetadataForMomentsWithOutputPath:(id)arg1 metadataDirectory:(id*)arg2 error:(id*)arg3;
- (void)enqueuePrefetch;
- (id)getCPLStateForDebug:(bool)arg1;
- (id)getStatus;
- (id)getTaskConstraintStatus;
- (id)getXPCTransactionStatus;
- (void)identifyAssetsWithInconsistentCloudState;
- (bool)indexAssetsWithUUIDs:(id)arg1 error:(id*)arg2;
- (bool)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(id*)arg1;
- (bool)locationOfInterestUpdateWithError:(id*)arg1;
- (id)momentGenerationStatus;
- (void)prefetchResourcesForHighlights:(id)arg1;
- (void)prefetchResourcesForMemories:(id)arg1;
- (void)prefetchResourcesWithMode:(long long)arg1;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)processRecentHighlightsWithError:(id*)arg1;
- (bool)processUnprocessedMomentLocationsWithError:(id*)arg1;
- (void)pruneAssets:(id)arg1 resourceTypes:(id)arg2;
- (void)rebuildAllThumbnails;
- (void)rebuildCloudFeed;
- (bool)rebuildHighlightsDeletingExistingHighlights:(bool)arg1 error:(id*)arg2;
- (bool)rebuildMomentsDeletingExistingMoments:(bool)arg1 error:(id*)arg2;
- (bool)rebuildSearchIndexWithError:(id*)arg1;
- (void)rebuildTableThumbs;
- (void)recoverAssetsInInconsistentCloudState;
- (long long)removeAllThumbnailsForDryRun:(bool)arg1 count:(unsigned long long*)arg2;
- (id)requestSearchDebugInformationForAssetUUID:(id)arg1 error:(id*)arg2;
- (bool)resetBackgroundMigrationClassName:(id)arg1 error:(id*)arg2;
- (bool)resetComputeCacheWithError:(id*)arg1;
- (bool)resetDrawAssetPersonEdgesBackgroundMigrationActionWithError:(id*)arg1;
- (bool)resetMaintenanceTasksWithError:(id*)arg1;
- (bool)restoreComputeCacheWithError:(id*)arg1;
- (bool)revertToOriginalForAsset:(id)arg1 error:(id*)arg2;
- (id)runAssetContainmentOnAllSocialGroupsWithCompletion:(id /* block */)arg1;
- (id)runAssetContainmentOnSocialGroupWithUUID:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)runMaintenanceTask:(id)arg1 error:(id*)arg2;
- (bool)setAssetContainmentLargeFaceThreshold:(double)arg1 error:(id*)arg2;
- (bool)setAssetContainmentSmallFaceThreshold:(double)arg1 error:(id*)arg2;
- (bool)setAssetContainmentSmallTorsoThreshold:(double)arg1 error:(id*)arg2;
- (void)snapshotJournalsForManagerName:(id)arg1 payloadClassIDs:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)synchronouslySetSearchIndexPaused:(bool)arg1 reason:(id)arg2 error:(id*)arg3;
- (id)syndicationIngestMutexStateDescriptionWithError:(id*)arg1;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(id /* block */)arg3;
- (id)updateAndSaveAssetPersonEdgesWithCompletion:(id /* block */)arg1;
- (bool)updateHighlightTitlesWithError:(id*)arg1;
- (void)waitForMomentGeneration;

@end