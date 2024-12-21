/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosAssetsFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _queue_cachedFetchResultsByContainerByConfiguration;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (bool)_adjustedReverseSortOrderForCollection:(id)arg1 reverseSortOrder:(bool)arg2 fetcherOptions:(unsigned long long)arg3;
+ (bool)_shouldReverseDefaultSortDescriptorsForCollection:(id)arg1 fetcherOptions:(unsigned long long)arg2;
+ (id)sharedFetcherForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_cacheFetchResult:(id)arg1 forContainer:(id)arg2 configuration:(id)arg3;
- (id)_cachedFetchResultForContainer:(id)arg1 configuration:(id)arg2;
- (id)_existingAssetsInContainer:(id)arg1 curationKind:(long long)arg2 curationLength:(long long)arg3 options:(unsigned long long)arg4 sortDescriptors:(id)arg5 filterPredicate:(id)arg6 fetchPropertySets:(id)arg7 libraryFilter:(long long)arg8 includeOthersInSocialGroupAssets:(bool)arg9;
- (id)_existingCuratedAssetsFetchResultForAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 curationKind:(long long)arg4 curationLength:(long long)arg5 options:(unsigned long long)arg6 sortDescriptors:(id)arg7 reverseSortOrder:(bool)arg8 filterPredicate:(id)arg9 fetchPropertySets:(id)arg10 libraryFilter:(long long)arg11;
- (id)_existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 includeUnsavedSyndicatedAssets:(bool)arg4 includeAllBurstAssets:(bool)arg5 fetchLimit:(unsigned long long)arg6 options:(unsigned long long)arg7 sortDescriptors:(id)arg8 reverseSortOrder:(bool)arg9 hideHiddenAssets:(bool)arg10 fetchPropertySets:(id)arg11 libraryFilter:(long long)arg12;
- (id)_existingKeyAssetsFetchResultForAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 curated:(bool)arg4 options:(unsigned long long)arg5 libraryFilter:(long long)arg6;
- (id)_fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 includeUnsavedSyndicatedAssets:(bool)arg4 includeAllBurstAssets:(bool)arg5 fetchLimit:(unsigned long long)arg6 options:(unsigned long long)arg7 sortDescriptors:(id)arg8 reverseSortOrder:(bool)arg9 hideHiddenAssets:(bool)arg10 fetchPropertySets:(id)arg11 libraryFilter:(long long)arg12 includeOthersInSocialGroupAssets:(bool)arg13;
- (id)_fetchAssetsInContainer:(id)arg1 curationKind:(long long)arg2 curationLength:(long long)arg3 options:(unsigned long long)arg4 sortDescriptors:(id)arg5 filterPredicate:(id)arg6 fetchPropertySets:(id)arg7 libraryFilter:(long long)arg8 includeOthersInSocialGroupAssets:(bool)arg9;
- (id)_fetchConfigurationForCuratedAssetsWithCurationKind:(long long)arg1 curationLength:(long long)arg2 options:(unsigned long long)arg3 sortDescriptors:(id)arg4 filterPredicate:(id)arg5 fetchPropertySets:(id)arg6 libraryFilter:(long long)arg7 includeOthersInSocialGroupAssets:(bool)arg8;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)arg1 curationType:(long long)arg2 curationKind:(long long)arg3 curationLength:(long long)arg4 options:(unsigned long long)arg5 sortDescriptors:(id)arg6 reverseSortOrder:(bool)arg7 filterPredicate:(id)arg8 fetchPropertySets:(id)arg9 libraryFilter:(long long)arg10;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg1 referencePersons:(id)arg2 curated:(bool)arg3 options:(unsigned long long)arg4 libraryFilter:(long long)arg5;
- (id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 includeUnsavedSyndicatedAssets:(bool)arg3 includeAllBurstAssets:(bool)arg4 fetchLimit:(unsigned long long)arg5 options:(unsigned long long)arg6 sortDescriptors:(id)arg7 reverseSortOrder:(bool)arg8 hideHiddenAssets:(bool)arg9 fetchPropertySets:(id)arg10 libraryFilter:(long long)arg11;
- (id)_fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 curationKind:(long long)arg4 curationLength:(long long)arg5 options:(unsigned long long)arg6 sortDescriptors:(id)arg7 reverseSortOrder:(bool)arg8 filterPredicate:(id)arg9 fetchPropertySets:(id)arg10 libraryFilter:(long long)arg11 includeOthersInSocialGroupAssets:(bool)arg12;
- (id)_fetchCuratedKeyAssetsInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 options:(unsigned long long)arg4 libraryFilter:(long long)arg5;
- (id)_fetchKeyAssetsInAssetCollection:(id)arg1 curated:(bool)arg2 referenceAsset:(id)arg3 referencePersons:(id)arg4 options:(unsigned long long)arg5 libraryFilter:(long long)arg6;
- (id)_fetchKeyAssetsInAssetCollection:(id)arg1 options:(unsigned long long)arg2 libraryFilter:(long long)arg3;
- (id)_fetchKeyAssetsInContainer:(id)arg1 options:(id)arg2;
- (id)_fetchKeyCuratedAssetsInPhotosHighlight:(id)arg1 options:(id)arg2;
- (id)_fetchOptionsForAssetsInAssetCollection:(id)arg1 withFetcherOptions:(unsigned long long)arg2 filterPredicate:(id)arg3 inclusionPredicate:(id)arg4 fetchLimit:(unsigned long long)arg5 sortDescriptors:(id)arg6 reverseSortOrder:(bool)arg7 fetchPropertySets:(id)arg8 hideHiddenAssets:(bool)arg9 includeAllBurstAssets:(bool)arg10;
- (id)_fetchOptionsForContainer:(id)arg1 curationKind:(long long)arg2 options:(unsigned long long)arg3 sortDescriptors:(id)arg4 filterPredicate:(id)arg5 fetchPropertySets:(id)arg6 libraryFilter:(long long)arg7;
- (id)_fetchOptionsForCuratedAssetsInAssetCollection:(id)arg1 withFetcherOptions:(unsigned long long)arg2 curationKind:(long long)arg3 reverseSortOrder:(bool)arg4 filterPredicate:(id)arg5 fetchPropertySets:(id)arg6 libraryFilter:(long long)arg7;
- (id)_fetchResultForContainer:(id)arg1 configuration:(id)arg2 factory:(id /* block */)arg3;
- (id)_fetchResultForContainer:(id)arg1 configuration:(id)arg2 factory:(id /* block */)arg3 fallbackFactory:(id /* block */)arg4;
- (id)_importantFetchNameForCollectionSubtype:(long long)arg1;
- (void)clearFetchResultsForAssetCollection:(id)arg1;
- (void)clearFetchResultsForAssetCollections:(id)arg1;
- (void)dealloc;
- (id)existingAssetsFetchResultForContainer:(id)arg1 configuration:(id)arg2;
- (id)fetchAssetsInContainer:(id)arg1 configuration:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end