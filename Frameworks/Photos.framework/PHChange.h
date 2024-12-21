/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChange : NSObject {
    NSObject<OS_dispatch_queue> * _changeDetailIsolation;
    NSMutableDictionary * _changeDetailsForObjects;
    NSMapTable * _changeHandlingMap;
    PHPersistentChangeToken * _changeToken;
    NSDictionary * _changedAttributesByOID;
    NSSet * _changedObjectIDs;
    NSDictionary * _changedRelationshipsByOID;
    PHPhotoLibraryCloudStatus * _cloudStatus;
    NSMutableDictionary * _collectionChangeDetailsForObjects;
    NSManagedObjectContext * _context;
    NSSet * _deletedObjectIDs;
    NSDictionary * _deletedPrimaryLabelCodesByObjectId;
    NSDictionary * _deletedUuidsByObjectId;
    PHPersistentChangeEnumerationContext * _enumerationContext;
    PHPersistentChangeFetchOptions * _fetchOptions;
    NSSet * _insertedObjectIDs;
    PHPhotoLibrary * _library;
    NSMutableDictionary * _objectIDsByLocalIdentifier;
    NSSet * _refetchedFetchResults;
    PLSortedChangedObjects * _sortedChangedObjectIDs;
    bool  _unknownMergeEvent;
    NSMutableDictionary * _updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary * _updatedObjectsChangedRelationshipsByEntityName;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;
@property (nonatomic, readonly) PHPhotoLibraryCloudStatus *cloudStatus;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) NSDictionary *deletedPrimaryLabelCodesByObjectId;
@property (nonatomic, readonly) NSDictionary *deletedUuidsByObjectId;
@property (nonatomic, readonly) PHPersistentChangeEnumerationContext *enumerationContext;
@property (nonatomic, readonly) PHPersistentChangeFetchOptions *fetchOptions;
@property (nonatomic, readonly) bool hasCloudStatusChanges;
@property (nonatomic, readonly) bool hasIncrementalChanges;
@property (nonatomic, readonly) PHPhotoLibrary *library;
@property (nonatomic, readonly) unsigned long long totalChangeCount;

+ (id)handlerQueue;
+ (bool)isPublicPHObjectChangeClass:(Class)arg1;
+ (id)mergePersistedChanges:(id)arg1;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 photoLibrary:(id)arg2 handler:(id /* block */)arg3;
+ (id)publicPHObjectChangeClasses;

- (void).cxx_destruct;
- (id)_changedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2;
- (id)_changedLocalIdentifiersWithPublicChangesForEntityClass:(Class)arg1 context:(id)arg2;
- (bool)_changedRelationshipsContainChangeForRelationshipNames:(id)arg1 objectID:(id)arg2;
- (id)_deletedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2;
- (id)_deletedObjectIDsMatchingEntities:(id)arg1;
- (id)_deletedObjectIDsMatchingGraphNodeContainerType:(Class)arg1;
- (id)_entityNamesForEntities:(id)arg1;
- (id)_fetchCombinedPublicResultsMapForEntityClass:(Class)arg1 predicate:(id)arg2 context:(id)arg3;
- (id)_fetchGraphNodeIDsWithRequiredPrimaryLabelCode:(Class)arg1 changedObjectIDs:(id)arg2;
- (id)_fetchUUIDMapForObjectIDs:(id)arg1 entityClass:(Class)arg2 context:(id)arg3;
- (id)_formatEncodedDictionary:(id)arg1 withDecodeBlock:(id /* block */)arg2;
- (id)_formatedDeletedUUidsByObjectId;
- (id)_insertedOrUpdatedObjectIDsMatchingEntities:(id)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)_predicateForPublicResultsWithEntityClass:(Class)arg1 objectIDs:(id)arg2;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_prepareCachedValuesForEntity:(id)arg1;
- (void)_propagatePropertyNamesToSubentityNames:(id)arg1 moc:(id)arg2;
- (id)_relationshipNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)_requiredLabelCodeNumberForContainerClass:(Class)arg1;
- (id)_retrieveLockingRestrictedUUIDsForUnresolvedAssetObjectIDsFrom:(id)arg1 minusResolved:(id)arg2;
- (bool)_shouldCreateChangeDetailsWithCurrentFetchResultForQuery:(id)arg1;
- (bool)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (bool)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (bool)assetCloudLocalStateChangedForAsset:(id)arg1;
- (bool)assetsOrDayGroupAssetsRelationshipChangedForHighlightWithLocalIdentifier:(id)arg1;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (id)changeToken;
- (id)changedAttributesByOID;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2;
- (id)changedPropertyNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)changedPropertyNamesForObject:(id)arg1;
- (id)changedPropertyNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)changedRelationshipNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)changedRelationshipNamesForObject:(id)arg1;
- (id)changedRelationshipsByOID;
- (id)cloudStatus;
- (bool)containsChangesForEntityClass:(Class)arg1;
- (bool)containsChangesForEntityWithManagedEntityName:(id)arg1;
- (bool)contentOrThumbnailChangedForAsset:(id)arg1;
- (bool)contentOrThumbnailChangedForPHAssetOID:(id)arg1;
- (id)context;
- (bool)customUserAssetsChangedForPHMemoryOID:(id)arg1;
- (bool)deferredProcessingNeededChangedForPHAssetOID:(id)arg1;
- (id)deletedLocalIdentifiersForEntityClass:(Class)arg1;
- (id)deletedObjectIDs;
- (id)deletedPrimaryLabelCodesByObjectId;
- (id)deletedUuidsByObjectId;
- (id)description;
- (id)enumerationContext;
- (bool)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg1;
- (bool)favoriteStateChangedForPHAssetOID:(id)arg1;
- (id)fetchOptions;
- (bool)hasCloudStatusChanges;
- (bool)hasIncrementalChanges;
- (bool)hasRelationshipChangesForLocalIdentifier:(id)arg1;
- (bool)hiddenStateChangedForPHAssetOID:(id)arg1;
- (bool)highlightGroupRelationshipChangedForHighlightWithLocalIdentifier:(id)arg1;
- (id)init;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(bool)arg2 changeToken:(id)arg3 library:(id)arg4;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(bool)arg2 library:(id)arg3;
- (id)initWithCloudStatus:(id)arg1 library:(id)arg2;
- (id)initWithInsertedObjectIDs:(id)arg1 updatedObjectIDs:(id)arg2 deletedObjectIDs:(id)arg3 deletedUuidsByObjectId:(id)arg4 deletedPrimaryLabelCodesByOID:(id)arg5 changedAttributesByOID:(id)arg6 changedRelationshipsByOID:(id)arg7 unknownMergeEvent:(bool)arg8 changeToken:(id)arg9 fetchOptions:(id)arg10 library:(id)arg11 managedObjectContext:(id)arg12 enumerationContext:(id)arg13;
- (id)insertedObjectIDs;
- (bool)intersectsWithDetectionCriteria:(id)arg1 managedObjectContext:(id)arg2;
- (bool)keyAssetPrivateOrDayGroupKeyAssetPrivateChangedForHighlightWithLocalIdentifier:(id)arg1;
- (bool)keyAssetSharedOrDayGroupKeyAssetSharedChangedForHighlightWithLocalIdentifier:(id)arg1;
- (bool)keyAssetsChangedForPHAssetCollectionOID:(id)arg1;
- (bool)keyFaceChangedForPersonOID:(id)arg1;
- (id)library;
- (bool)membersOrAssetContainmentForSocialGroupChangedWithLocalIdentifier:(id)arg1;
- (bool)momentRelationshipChangedForHighlightWithLocalIdentifier:(id)arg1;
- (bool)packedBadgeAttributesChangedForPHAssetOID:(id)arg1;
- (bool)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg1;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(id /* block */)arg3;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(id /* block */)arg2;
- (id)retrieveUUIDsForAssetObjectIDs:(id)arg1 filterPredicate:(id)arg2;
- (unsigned long long)totalChangeCount;
- (bool)trashedStateChangedForObjectID:(id)arg1;
- (bool)trashedStateChangedForPHAssetCollectionOID:(id)arg1;
- (bool)trashedStateChangedForPHAssetOID:(id)arg1;
- (bool)trashedStateChangedForPHCollectionListOID:(id)arg1;
- (id)updatedObjectIDs;
- (bool)userCuratedAssetsChangedForPHMemoryOID:(id)arg1;
- (bool)userFeedbackRelationshipChangedForObject:(id)arg1;
- (bool)wasFetchResultRefetched:(id)arg1;

@end