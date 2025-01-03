/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIDisambiguationQuery : NSObject {
    bool  _cancelled;
    NSArray * _disambiguations;
    PLPhotoLibrary * _photoLibrary;
    PSIDatabase * _photosEntityStore;
}

@property (nonatomic) bool cancelled;
@property (nonatomic, readonly) NSArray *disambiguations;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PSIDatabase *photosEntityStore;

+ (id)_consolidateDisambiguationIntermediateResults:(id)arg1;
+ (bool)_disambiguationQueryTextIsExactMatchOfGroup:(id)arg1 disambiguation:(id)arg2 normalizedQueryText:(id)arg3;
+ (bool)_disambiguationQueryTextIsSubstringMatchOfGroup:(id)arg1 disambiguation:(id)arg2 normalizedQueryText:(id)arg3;
+ (id)_disambiguationResultForDisambiguation:(id)arg1 sortedResults:(id)arg2;
+ (id)_fetchGroupsWithFTS5FormattedString:(id)arg1 indexingCategories:(id)arg2 delegate:(id)arg3;
+ (id)_sortedResultsForDisambiguation:(id)arg1 exactMatchResults:(id)arg2 fullTokenMatchResults:(id)arg3 wildcardMatchResults:(id)arg4;
+ (id)_sortedResultsForDisambiguationType:(unsigned long long)arg1 maxNumberOfResults:(unsigned long long)arg2 exactMatchResults:(id)arg3 fullTokenMatchResults:(id)arg4 wildcardMatchResults:(id)arg5;

- (void).cxx_destruct;
- (id)_disambiguationIntermediateResultWithDisambiguation:(id)arg1 delegate:(id)arg2;
- (id)_disambiguationResultWithDisambiguation:(id)arg1 delegate:(id)arg2;
- (id)_groupsForMatchType:(unsigned long long)arg1 fromGroups:(id)arg2 disambiguation:(id)arg3 normalizedQueryText:(id)arg4;
- (void)cancel;
- (bool)cancelled;
- (id)disambiguations;
- (id)initWithDisambiguation:(id)arg1 photoLibrary:(id)arg2 photosEntityStore:(id)arg3;
- (id)initWithDisambiguations:(id)arg1 photosEntityStore:(id)arg2;
- (id)performDisambiguationQuery;
- (id)photoLibrary;
- (id)photosEntityStore;
- (void)setCancelled:(bool)arg1;

@end
