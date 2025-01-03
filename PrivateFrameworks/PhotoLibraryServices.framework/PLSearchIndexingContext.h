/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingContext : NSObject {
    NSCalendar * _calendar;
    CSUSearchableKnowledgeObjectStore * _csuTaxonomyObjectStore;
    <PLSearchIndexingContextDelegate> * _delegate;
    NSLocale * _locale;
    CSCustomAttributeKey * _photosAlbumAssetCountsKey;
    CSCustomAttributeKey * _photosAlbumUUIDsKey;
    CSCustomAttributeKey * _photosEmbeddingCountKey;
    CSCustomAttributeKey * _photosHighlightAssetCountsKey;
    CSCustomAttributeKey * _photosHighlightUUIDsKey;
    CSCustomAttributeKey * _photosMemoryAssetCountsKey;
    CSCustomAttributeKey * _photosMemoryUUIDsKey;
    CSCustomAttributeKey * _photosReverseLocationDataIsValidKey;
    CSCustomAttributeKey * _photosSensitiveLocationKey;
    PLSearchIndexSceneTaxonomyProvider * _sceneTaxonomyProvider;
    PLSearchIndexDateFormatter * _searchIndexDateFormatter;
    NSDictionary * _seasonSynonymsBySeason;
    NSDictionary * _synonymsByIndexCategoryMask;
    PLUtilityAssetPool * _utilityAssetPool;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) CSUSearchableKnowledgeObjectStore *csuTaxonomyObjectStore;
@property (nonatomic, readonly) <PLSearchIndexingContextDelegate> *delegate;
@property (nonatomic, readonly) bool isSharedLibraryEnabled;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) CSCustomAttributeKey *photosAlbumAssetCountsKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosAlbumUUIDsKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosEmbeddingCountKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosHighlightAssetCountsKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosHighlightUUIDsKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosMemoryAssetCountsKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosMemoryUUIDsKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosReverseLocationDataIsValidKey;
@property (nonatomic, readonly) CSCustomAttributeKey *photosSensitiveLocationKey;
@property (nonatomic, readonly) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (nonatomic, readonly) PLSearchIndexDateFormatter *searchIndexDateFormatter;
@property (nonatomic, readonly, copy) NSDictionary *seasonSynonymsBySeason;
@property (nonatomic, readonly, copy) NSDictionary *synonymsByIndexCategoryMask;
@property (nonatomic, readonly) PLUtilityAssetPool *utilityAssetPool;

- (void).cxx_destruct;
- (id)calendar;
- (id)csuTaxonomyObjectStore;
- (id)delegate;
- (id)description;
- (id)initWithSceneTaxonomyProvider:(id)arg1 csuTaxonomyObjectStore:(id)arg2 locale:(id)arg3 calendar:(id)arg4 indexDateFormatter:(id)arg5 delegate:(id)arg6 seasonSynonyms:(id)arg7 synonymsByIndexCategoryMask:(id)arg8;
- (bool)isSharedLibraryEnabled;
- (id)locale;
- (id)photosAlbumAssetCountsKey;
- (id)photosAlbumUUIDsKey;
- (id)photosEmbeddingCountKey;
- (id)photosHighlightAssetCountsKey;
- (id)photosHighlightUUIDsKey;
- (id)photosMemoryAssetCountsKey;
- (id)photosMemoryUUIDsKey;
- (id)photosReverseLocationDataIsValidKey;
- (id)photosSensitiveLocationKey;
- (id)sceneTaxonomyProvider;
- (id)searchIndexDateFormatter;
- (id)seasonSynonymsBySeason;
- (id)synonymsByIndexCategoryMask;
- (id)utilityAssetPool;

@end
