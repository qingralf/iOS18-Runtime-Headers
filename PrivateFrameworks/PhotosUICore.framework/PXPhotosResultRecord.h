/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id /* block */)curatedRefetchCondition;
- (long long)curationLength;
- (id)description;
- (bool)ensureKeyAssetAtBeginning;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)exposedFetchResultBeforeFiltering;
- (id)fetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (bool)isCurated;
- (long long)keyAssetIndex;
- (id)keyAssetsFetchResult;
- (id)manualOrderUUIDs;
- (bool)reverseSortOrder;
- (bool)wantsCuration;

@end
