/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSearchQuery : NSObject {
    int  _batchIdentifier;
    NSDate * _endDate;
    bool  _isCancelled;
    PHPhotoLibrary * _photoLibrary;
    PSISuggestionQuery * _photosRetrievalSuggestionsQuery;
    PSISuggestionQuery * _photosSuggestionsQuery;
    int  _queryIdentifier;
    NSAttributedString * _queryStringSentToSpotlight;
    PHSearchQueryOptions * _searchOptions;
    NSAttributedString * _searchText;
    CSUserQuery * _spotlightQuery;
    CSUserQueryContext * _spotlightQueryContext;
    NSDate * _startDate;
    PHSearchSuggestionOptions * _suggestionOptions;
    int  _suggestionQueryIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) int batchIdentifier;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) bool isCancelled;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PSISuggestionQuery *photosRetrievalSuggestionsQuery;
@property (nonatomic, readonly) PSISuggestionQuery *photosSuggestionsQuery;
@property (nonatomic, readonly) int queryIdentifier;
@property (nonatomic, readonly, copy) NSAttributedString *queryStringSentToSpotlight;
@property (nonatomic, readonly) PHSearchQueryOptions *searchOptions;
@property (nonatomic, readonly) NSAttributedString *searchText;
@property (nonatomic, readonly) CSUserQuery *spotlightQuery;
@property (nonatomic, readonly) CSUserQueryContext *spotlightQueryContext;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) PHSearchSuggestionOptions *suggestionOptions;
@property (nonatomic, readonly) int suggestionQueryIdentifier;
@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)_searchResultTypesFromSearchQueryResultTypes:(unsigned long long)arg1;
+ (id)_spotlightQueryContextWithSearchOptions:(id)arg1;
+ (void)performSearch:(id)arg1 queryQueue:(id)arg2 resultsHandler:(id /* block */)arg3;
+ (void)performSuggestionsSearch:(id)arg1 queryQueue:(id)arg2 suggestionsHandler:(id /* block */)arg3;
+ (void)suggestionsForSearchQuery:(id)arg1 searchQueryResult:(id)arg2 rangeOfSuggestionText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 queryQueue:(id)arg4 suggestionsHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_executePhotosEntityStoreSearchWithAssetUUIDs:(id)arg1 collectionUUIDs:(id)arg2 rangeOfSuggestionText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)_executeSpotlightSearchWithResultsHandler:(id /* block */)arg1;
- (int)batchIdentifier;
- (void)cancel;
- (id)description;
- (id)endDate;
- (id)initWithSearchText:(id)arg1 searchOptions:(id)arg2 photoLibrary:(id)arg3 queryIdentifier:(int)arg4 batchIdentifier:(int)arg5;
- (id)initWithText:(id)arg1 suggestionOptions:(id)arg2 photoLibrary:(id)arg3 queryIdentifier:(int)arg4;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)photoLibrary;
- (id)photosRetrievalSuggestionsQuery;
- (id)photosSuggestionsQuery;
- (int)queryIdentifier;
- (id)queryStringSentToSpotlight;
- (id)searchOptions;
- (id)searchText;
- (void)setEndDate:(id)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)spotlightQuery;
- (id)spotlightQueryContext;
- (id)startDate;
- (id)suggestionOptions;
- (int)suggestionQueryIdentifier;
- (unsigned long long)type;

@end
