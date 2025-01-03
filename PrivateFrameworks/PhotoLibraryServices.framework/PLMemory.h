/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMemory : PLManagedObject <PLBackgroundUpdatesSharingComposition, PLCloudDeletable, PLFileSystemMetadataPersistence, PLSearchableManagedObject, PLUserFeedbackSupporting> {
    bool  _needsPersistenceUpdate;
}

@property (nonatomic, retain) NSData *assetListPredicate;
@property (nonatomic, retain) NSData *blacklistedFeature;
@property (nonatomic) short category;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) unsigned short creationType;
@property (nonatomic, retain) NSSet *curatedAssets;
@property (nonatomic, retain) NSOrderedSet *customUserAssets;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSSet *extendedCuratedAssets;
@property (nonatomic) bool favorite;
@property (nonatomic) short featuredState;
@property (nonatomic, retain) NSString *graphMemoryIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, retain) NSDate *lastEnrichmentDate;
@property (nonatomic, retain) NSDate *lastMoviePlayedDate;
@property (nonatomic, retain) NSDate *lastViewedDate;
@property (nonatomic, retain) NSDictionary *movieAssetState;
@property (nonatomic, retain) NSSet *movieCuratedAssets;
@property (nonatomic, retain) NSData *movieData;
@property (nonatomic) bool needsPersistenceUpdate;
@property (nonatomic) short notificationState;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) unsigned short pendingState;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic, retain) NSData *photosGraphData;
@property (nonatomic) long long photosGraphVersion;
@property (nonatomic) long long playCount;
@property (nonatomic) bool rejected;
@property (nonatomic, retain) NSSet *representativeAssets;
@property (nonatomic) double score;
@property (nonatomic) short searchIndexRebuildState;
@property (nonatomic) long long shareCount;
@property (nonatomic) short sharingComposition;
@property (nonatomic, retain) PLMemory *sourceGeneratedMemory;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) short storyColorGradeKind;
@property (nonatomic) short storySerializedTitleCategory;
@property (nonatomic) short subcategory;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short syndicatedContentState;
@property (nonatomic, retain) PLMemory *targetUserEditedMemory;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned short userActionOptions;
@property (nonatomic, retain) NSSet *userCuratedAssets;
@property (nonatomic, retain) NSSet *userFeedbacks;
@property (nonatomic, retain) NSSet *userRemovedAssets;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) long long viewCount;

+ (short)_calculateSharingCompositionForMemory:(id)arg1;
+ (id)_compiledUserEditedAssetsFromSourceMemory:(id)arg1 andTargetMemory:(id)arg2;
+ (void)_deepCopyFromMemory:(id)arg1 toMemory:(id)arg2;
+ (unsigned long long)_deleteMemoriesMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_findCollectionMostSimilarToCollectionWithAssets:(id)arg1 additionalPredicate:(id)arg2;
+ (bool)_isGenerativeMemoryWithUserActionOptions:(unsigned short)arg1;
+ (id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inPhotoLibrary:(id)arg4;
+ (id)_predicateForSourceGeneratedMemories;
+ (id)_predicateForTargetUserEditMemories;
+ (bool)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1 prefetchConfiguration:(id)arg2;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (unsigned long long)countOfMemoriesCreatedTodayWithNotificationStateRequestedOrSeenInPhotoLibrary:(id)arg1 excludingMemory:(id)arg2 error:(id*)arg3;
+ (void)deleteAllMemoriesInPhotoLibrary:(id)arg1;
+ (void)deleteMemoriesWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)entityName;
+ (id)fetchMemoriesForAssetObjectID:(id)arg1 libraryIdentifier:(long long)arg2 managedObjectContext:(id)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2;
+ (id)insertIntoContext:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5;
+ (id)isEligibleForSearchIndexingPredicateForLibraryIdentifier:(long long)arg1;
+ (bool)isUserCreatedMemoryWithUserActionOptions:(unsigned short)arg1;
+ (id)keyPathsForMemoriesBeingAssets;
+ (id)memoriesContainingAsset:(id)arg1;
+ (id)memoriesToPrefetchForWidgetInManagedObjectContext:(id)arg1;
+ (id)memoriesToPrefetchInPhotoLibrary:(id)arg1 prefetchConfiguration:(id)arg2;
+ (id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoryObjectIDsContainingAsset:(id)arg1;
+ (id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)predicateForPrivateOnlyCollectionsWithinSubset:(id)arg1;
+ (id)predicateForSharedOnlyCollectionsWithinSubset:(id)arg1;
+ (id)propertiesToFetch;
+ (id)relationshipKeyPathsToPrefetch;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;

- (bool)_attachGeneratedMemoryToNearestUserEditMemory;
- (bool)_attachUserEditToNearestSourceMemory;
- (void)_cacheMemoryPropertiesForUIPerformanceWithPhotosGraphData:(id)arg1;
- (void)_propagateRepresentativeAssetsToTargetUserEditMemory;
- (void)_recalculateSharingCompositionIfNeeded;
- (bool)_sharingCompositionNeedsUpdate;
- (void)_updateCompiledAssetsAfterUserRemovedAssetsChange;
- (id)allAvailableAssets;
- (id)calculateKeyAsset;
- (void)calculateSyndicatedContentState;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)cplFullRecord;
- (id)cplMemoryChange;
- (void)delete;
- (void)didSave;
- (bool)hasAnyAssets;
- (bool)isEligibleForSearchIndexing;
- (bool)isSyncableChange;
- (bool)isUserCreatedMemory;
- (bool)isValidForPersistence;
- (bool)needsPersistenceUpdate;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)prepareForDeletion;
- (bool)promoteToUserEditedMemoryWithError:(id*)arg1;
- (void)recalculateStartAndEndDates;
- (void)recalculateUserActionOptionsBit;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (id)scopeIdentifier;
- (id)scopedIdentifier;
- (id)searchIdentifier;
- (void)setKeyAsset:(id)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)setUserOrderedAssets:(id)arg1;
- (short)sharingComposition;
- (bool)supportsCloudUpload;
- (bool)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)userOrderedAssets;
- (bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (void)willSave;

@end
