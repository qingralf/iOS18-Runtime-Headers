/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDelayedSaveActionsProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _coreDuetCallback;
    PLLibraryServicesManager * _libraryServicesManager;
}

- (void).cxx_destruct;
- (id)_assetIDsByContainingSocialGroupIDsFromAssetIDsNeedingContainmentUpdates:(id)arg1 inContext:(id)arg2;
- (id)_assetIDsByNodeIDFromAssetPersonEdgeDictionaries:(id)arg1 assetIDsNeedingContainmentUpdates:(id)arg2 inContext:(id)arg3;
- (id)_assetIDsByPersonUUIDWithAllPersonsFromAssetsNeedingContainmentUpdates:(id)arg1 assetIDsNeedingContainmentUpdates:(id)arg2 inContext:(id)arg3;
- (void)_deleteUUIDs:(id)arg1 fromCoreDuetStreams:(id)arg2 transaction:(id)arg3;
- (id)_personUUIDsByNodeIDFromAssetPersonDictionaries:(id)arg1 inContext:(id)arg2;
- (void)_processAssetContainmentUpdatesForSocialGroupsContainingMemberPersonIDs:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processAssetIDsByPersonUUIDNeedingContainmentUpdates:(id)arg1 assetIDsNeedingContainmentUpdates:(id)arg2 pendingMemberIDsOfSocialGroupsNeedingContainmentUpdates:(bool)arg3 library:(id)arg4 transaction:(id)arg5;
- (void)_processAssetsNeedingAssetPersonEdgeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumKeyAssetsUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumWidgetTimelineReload:(bool)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForDuetDelete:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForWallpaperFavoriteAlbumRemoval:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForWallpaperUserAlbumRemoval:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForWidgetFavoriteAlbumRemoval:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForWidgetUserAlbumRemoval:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)_processDelayedFeaturedContentUpdateAndWidgetTimelineReload:(bool)arg1 withPersonUUIDs:(id)arg2 shouldReloadWidgetTimeline:(bool)arg3 library:(id)arg4 transaction:(id)arg5;
- (void)_processDelayedForYouWidgetTimelineReload:(bool)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedImportSessionCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedLibraryScopeParticipantsUpdate:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedLibraryScopeRulesUpdate:(bool)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedMemoriesAssetUpdate:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedMemoriesForDuetDelete:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedWallpaperSuggestionReload:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processMembersOfSocialGroupsNeedingDeduplication:(id)arg1 pendingSocialGroupIDsNeedingDeduplication:(bool)arg2 library:(id)arg3 transaction:(id)arg4;
- (void)_processSocialGroupsNeedingDeduplication:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_runAssetContainmentForSocialGroup:(id)arg1 assetIDsToUpdate:(id)arg2;
- (void)_runContainmentOnAllGroupsNeedingContainmentUpdates:(id)arg1 inLibrary:(id)arg2;
- (id)_socialGroupNodeIDsContainingMember:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)processDelayedDeletionsFromChangeHubEvent:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg1;
- (void)processDelayedSaveActionsDetail:(id)arg1 withPhotoLibrary:(id)arg2 transaction:(id)arg3;

@end