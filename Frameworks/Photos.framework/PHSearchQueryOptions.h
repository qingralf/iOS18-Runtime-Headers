/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSearchQueryOptions : NSObject <NSCopying> {
    double  _collectionThreshold;
    unsigned long long  _completionSuggestionLimit;
    bool  _disableMetadataSearch;
    bool  _disableSafetyCheck;
    bool  _disableSemanticSearch;
    bool  _disableU2;
    long long  _embeddingGenerationTimeout;
    double  _embeddingRelevanceThreshold;
    bool  _enableEmbeddingOnlyResultsInExactMatches;
    bool  _enableNextTokenSuggestions;
    bool  _enableQueryMatchDetails;
    bool  _enableQueryUnderstanding;
    bool  _enableQueryUnderstandingGenericLocations;
    bool  _enableResultRanking;
    bool  _excludeOCRTextResultMatches;
    bool  _fastRanking;
    bool  _limitSuggestionsToExactTextMatches;
    unsigned long long  _locationInQueryStringForSuggestionGeneration;
    unsigned long long  _matchType;
    long long  _maxRankedAssetSearchResults;
    long long  _maxRankedCollectionSearchResults;
    long long  _maxSearchResults;
    unsigned long long  _minNumberOfResultsForNextTokenGeneration;
    unsigned long long  _nextEntitySuggestionLimit;
    NSObject<OS_dispatch_queue> * _resultsHandlerQueue;
    NSSet * _scopedIdentifiers;
    unsigned long long  _searchQueryResultTypes;
    double  _spotlightQueryTimeout;
    unsigned long long  _suggestionLimit;
}

@property (nonatomic) double collectionThreshold;
@property (nonatomic) unsigned long long completionSuggestionLimit;
@property (nonatomic) bool disableMetadataSearch;
@property (nonatomic) bool disableSafetyCheck;
@property (nonatomic) bool disableSemanticSearch;
@property (nonatomic) bool disableU2;
@property (nonatomic) long long embeddingGenerationTimeout;
@property (nonatomic) double embeddingRelevanceThreshold;
@property (nonatomic) bool enableEmbeddingOnlyResultsInExactMatches;
@property (nonatomic) bool enableNextTokenSuggestions;
@property (nonatomic) bool enableQueryMatchDetails;
@property (nonatomic) bool enableQueryUnderstanding;
@property (nonatomic) bool enableQueryUnderstandingGenericLocations;
@property (nonatomic) bool enableResultRanking;
@property (nonatomic) bool excludeOCRTextResultMatches;
@property (nonatomic) bool fastRanking;
@property (nonatomic) bool limitSuggestionsToExactTextMatches;
@property (nonatomic) unsigned long long locationInQueryStringForSuggestionGeneration;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) long long maxRankedAssetSearchResults;
@property (nonatomic) long long maxRankedCollectionSearchResults;
@property (nonatomic) long long maxSearchResults;
@property (nonatomic) unsigned long long minNumberOfResultsForNextTokenGeneration;
@property (nonatomic) unsigned long long nextEntitySuggestionLimit;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultsHandlerQueue;
@property (nonatomic, retain) NSSet *scopedIdentifiers;
@property (nonatomic) unsigned long long searchQueryResultTypes;
@property (nonatomic) double spotlightQueryTimeout;
@property (nonatomic) unsigned long long suggestionLimit;

- (void).cxx_destruct;
- (id)_rankingModeDescription;
- (double)collectionThreshold;
- (unsigned long long)completionSuggestionLimit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disableMetadataSearch;
- (bool)disableSafetyCheck;
- (bool)disableSemanticSearch;
- (bool)disableU2;
- (long long)embeddingGenerationTimeout;
- (double)embeddingRelevanceThreshold;
- (bool)enableEmbeddingOnlyResultsInExactMatches;
- (bool)enableNextTokenSuggestions;
- (bool)enableQueryMatchDetails;
- (bool)enableQueryUnderstanding;
- (bool)enableQueryUnderstandingGenericLocations;
- (bool)enableResultRanking;
- (bool)excludeOCRTextResultMatches;
- (bool)fastRanking;
- (id)init;
- (id)jsonDictionary;
- (bool)limitSuggestionsToExactTextMatches;
- (unsigned long long)locationInQueryStringForSuggestionGeneration;
- (unsigned long long)matchType;
- (long long)maxRankedAssetSearchResults;
- (long long)maxRankedCollectionSearchResults;
- (long long)maxSearchResults;
- (unsigned long long)minNumberOfResultsForNextTokenGeneration;
- (unsigned long long)nextEntitySuggestionLimit;
- (id)resultsHandlerQueue;
- (id)scopedIdentifiers;
- (unsigned long long)searchQueryResultTypes;
- (void)setCollectionThreshold:(double)arg1;
- (void)setCompletionSuggestionLimit:(unsigned long long)arg1;
- (void)setDisableMetadataSearch:(bool)arg1;
- (void)setDisableSafetyCheck:(bool)arg1;
- (void)setDisableSemanticSearch:(bool)arg1;
- (void)setDisableU2:(bool)arg1;
- (void)setEmbeddingGenerationTimeout:(long long)arg1;
- (void)setEmbeddingRelevanceThreshold:(double)arg1;
- (void)setEnableEmbeddingOnlyResultsInExactMatches:(bool)arg1;
- (void)setEnableNextTokenSuggestions:(bool)arg1;
- (void)setEnableQueryMatchDetails:(bool)arg1;
- (void)setEnableQueryUnderstanding:(bool)arg1;
- (void)setEnableQueryUnderstandingGenericLocations:(bool)arg1;
- (void)setEnableResultRanking:(bool)arg1;
- (void)setExcludeOCRTextResultMatches:(bool)arg1;
- (void)setFastRanking:(bool)arg1;
- (void)setLimitSuggestionsToExactTextMatches:(bool)arg1;
- (void)setLocationInQueryStringForSuggestionGeneration:(unsigned long long)arg1;
- (void)setMatchType:(unsigned long long)arg1;
- (void)setMaxRankedAssetSearchResults:(long long)arg1;
- (void)setMaxRankedCollectionSearchResults:(long long)arg1;
- (void)setMaxSearchResults:(long long)arg1;
- (void)setMinNumberOfResultsForNextTokenGeneration:(unsigned long long)arg1;
- (void)setNextEntitySuggestionLimit:(unsigned long long)arg1;
- (void)setResultsHandlerQueue:(id)arg1;
- (void)setScopedIdentifiers:(id)arg1;
- (void)setSearchQueryResultTypes:(unsigned long long)arg1;
- (void)setSpotlightQueryTimeout:(double)arg1;
- (void)setSuggestionLimit:(unsigned long long)arg1;
- (double)spotlightQueryTimeout;
- (unsigned long long)suggestionLimit;

@end