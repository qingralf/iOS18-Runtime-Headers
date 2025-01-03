/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosMutableResultRecord : PXPhotosResultRecord {
    PHFetchResult * _curatedFetchResult;
    NSSet * _curatedOids;
    id /* block */  _curatedRefetchCondition;
    long long  _curationLength;
    bool  _ensureKeyAssetAtBeginning;
    NSSet * _excludedOids;
    PHFetchResult * _fetchResult;
    PHFetchResult * _filteredFetchResult;
    bool  _filteredFetchResultIsValid;
    NSSet * _includedOids;
    NSPredicate * _inclusionPredicate;
    bool  _inclusionPredicateIsValid;
    long long  _keyAssetIndex;
    PHFetchResult * _keyAssetsFetchResult;
    bool  _preloadAssetTypeCounts;
    bool  _reverseSortOrder;
    NSArray * _sortDescriptors;
    bool  _wantsCuration;
}

@property (nonatomic, retain) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) NSSet *curatedOids;
@property (nonatomic, copy) id /* block */ curatedRefetchCondition;
@property (nonatomic) long long curationLength;
@property (nonatomic) bool ensureKeyAssetAtBeginning;
@property (nonatomic, readonly) NSSet *excludedOids;
@property (nonatomic, readonly) PHFetchResult *exposedFetchResult;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) PHFetchResult *filteredFetchResult;
@property (nonatomic, readonly) NSSet *includedOids;
@property (nonatomic, readonly) NSPredicate *inclusionPredicate;
@property (nonatomic, readonly) bool isCurated;
@property (nonatomic) long long keyAssetIndex;
@property (nonatomic, retain) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic) bool preloadAssetTypeCounts;
@property (nonatomic, readonly) bool reverseSortOrder;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic) bool wantsCuration;

- (void).cxx_destruct;
- (void)_invalidateFilteredFetchResult;
- (void)_invalidateInclusionPredicate;
- (void)_invalidateKeyAssetIndex;
- (void)_setIncludeOids:(id)arg1;
- (void)_updateFilteredFetchResultIfNeeded;
- (void)adoptPreparedFilteredFetchResultFromRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id /* block */)curatedRefetchCondition;
- (long long)curationLength;
- (bool)ensureKeyAssetAtBeginning;
- (void)excludeOids:(id)arg1;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)exposedFetchResultBeforeFiltering;
- (id)fetchResult;
- (id)filteredFetchResult;
- (void)includeOids:(id)arg1;
- (id)includedOids;
- (id)inclusionPredicate;
- (id)init;
- (void)invalidateFetchResultAssetCache;
- (bool)isCurated;
- (long long)keyAssetIndex;
- (id)keyAssetsFetchResult;
- (bool)preloadAssetTypeCounts;
- (bool)reverseSortOrder;
- (void)setCuratedFetchResult:(id)arg1;
- (void)setCuratedRefetchCondition:(id /* block */)arg1;
- (void)setCurationLength:(long long)arg1;
- (void)setEnsureKeyAssetAtBeginning:(bool)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1 reverseSortOrder:(bool)arg2;
- (void)setKeyAssetIndex:(long long)arg1;
- (void)setKeyAssetsFetchResult:(id)arg1;
- (void)setPreloadAssetTypeCounts:(bool)arg1;
- (void)setReverseSortOrder:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setWantsCuration:(bool)arg1;
- (id)sortDescriptors;
- (void)stopExcludingOids:(id)arg1;
- (void)stopIncludingAllOids;
- (bool)wantsCuration;

@end
