/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMoment : PLManagedObject <PLGraphEdgeReferenceRecipient, PLMomentData> {
    CLLocation * _cachedApproximateLocation;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _cachedCoordinate;
    bool  _didCacheApproximateLocation;
    bool  _didCacheCoordinate;
    bool  _loadedNameInfo;
    bool  _waitingForSharedAssetContainerRecalc;
    bool  didRegisteredWithUserInterfaceContext;
    bool  isRegisteredForChanges;
}

@property (nonatomic) float aggregationScore;
@property (nonatomic) double approximateLatitude;
@property (nonatomic, retain) CLLocation *approximateLocation;
@property (nonatomic) double approximateLongitude;
@property (nonatomic, retain) NSSet *assets;
@property (nonatomic, readonly) int assetsCount;
@property (nonatomic, readonly) int assetsCountPrivate;
@property (nonatomic, readonly) int assetsCountShared;
@property (nonatomic, readonly, retain) NSArray *batchedAssets;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedCountShared;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisteredWithUserInterfaceContext;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) double gpsHorizontalAccuracy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PLPhotosHighlightData> *highlight;
@property (nonatomic) bool isRegisteredForChanges;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic) short originatorState;
@property (nonatomic, readonly) int photoAssetsSuggestedByPhotosCount; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_endDate;
@property (nonatomic, readonly) CLLocation *pl_location;
@property (nonatomic, readonly) unsigned short pl_locationType;
@property (nonatomic, readonly) unsigned long long pl_numberOfAssets;
@property (nonatomic, readonly) short pl_originatorState;
@property (nonatomic, readonly) NSDate *pl_startDate;
@property (nonatomic, readonly) NSString *pl_uuid;
@property (nonatomic) unsigned short processedLocation;
@property (nonatomic, retain) NSDate *representativeDate;
@property (nonatomic, readonly) short sharingComposition;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) int timeZoneOffset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly, retain) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) int videoAssetsSuggestedByPhotosCount; /* unknown property attribute: ? */

+ (void)_recalculateAssetCountsForMoment:(id)arg1;
+ (id)allAssetsInManagedObjectContext:(id)arg1 predicate:(id)arg2 IDsOnly:(bool)arg3 error:(id*)arg4;
+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(bool)arg2 error:(id*)arg3;
+ (id)allInvalidAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allInvalidMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentIDsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 predicate:(id)arg2 idsOnly:(bool)arg3 error:(id*)arg4;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)batchFetchMomentObjectIDsByAssetObjectIDsWithAssetObjectIDs:(id)arg1 andAssetPredicate:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)batchFetchMomentObjectIDsByAssetObjectIDsWithAssetObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (void)batchFetchMomentUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 completion:(id /* block */)arg3;
+ (id)batchMomentUUIDsByPhotosHighlightUUIDForPhotosHighlightUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithMomentUUID:(id)arg1 managedObjectContext:(id)arg2 libraryIdentifier:(long long)arg3 assetUUIDHandler:(id /* block */)arg4;
+ (id)fetchPredicateForExcludingOriginatorState:(short)arg1;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)momentIDsWithPersonIDs:(id)arg1 inContext:(id)arg2;
+ (id)momentsRequiringLocationProcessingWhenCoreRoutineIsAvailableInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)momentsRequiringLocationProcessingWhenFrequentLocationsAreAvailableInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)momentsWithLocationOfInterestInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)predicateForAssetsIncludedInMoments;
+ (id)predicateForInvalidAssets;
+ (id)predicateForInvalidMoments;
+ (id)sortByTimeSortDescriptors;

- (void).cxx_destruct;
- (int)_cachedSharedAssetContainerValueWithRecalcIfNeededForKey:(id)arg1;
- (id)approximateLocation;
- (int)assetsCount;
- (int)assetsCountPrivate;
- (int)assetsCountShared;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)batchedAssets;
- (id)bestAsset;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)delete;
- (bool)didRegisteredWithUserInterfaceContext;
- (void)didTurnIntoFault;
- (id)edgesIn;
- (id)edgesOut;
- (void)enumerateAssetSearchEntitiesWithBlock:(id /* block */)arg1;
- (unsigned long long)fetchedAssetsCount;
- (id)groupURL;
- (void)implementsPLGraphEdgeReferenceObjectRecipient;
- (void)insertAssetData:(id)arg1;
- (bool)isCloudSharedAlbum;
- (bool)isRegisteredForChanges;
- (id)localEndDate;
- (id)localStartDate;
- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_endDate;
- (id)pl_location;
- (unsigned short)pl_locationType;
- (unsigned long long)pl_numberOfAssets;
- (short)pl_originatorState;
- (id)pl_startDate;
- (id)pl_uuid;
- (struct CGImage { }*)posterImage;
- (void)prepareForDeletion;
- (void)recalculateSharedAssetContainerCachedValues;
- (void)registerForChanges;
- (void)removeAssetData:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)replaceObjectInAssets:(id)arg1 withObject:(id)arg2;
- (void)reportSharedAssetContainerIncrementalChange:(id)arg1 forAllAssetsCountKey:(id)arg2;
- (void)setApproximateLocation:(id)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(bool)arg1;
- (void)setIsRegisteredForChanges:(bool)arg1;
- (short)sharingComposition;
- (id)uniqueObjectID;
- (void)unregisterForChanges;
- (void)willSave;
- (void)willTurnIntoFault;

@end
