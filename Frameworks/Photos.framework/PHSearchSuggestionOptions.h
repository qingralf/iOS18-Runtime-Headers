/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSearchSuggestionOptions : NSObject <NSCopying> {
    bool  _limitSuggestionsToExactTextMatches;
    NSIndexSet * _suggestionCategories;
    unsigned long long  _suggestionLimit;
    unsigned long long  _suggestionResultTypes;
    NSObject<OS_dispatch_queue> * _suggestionsHandlerQueue;
    bool  _wantsUnscopedSuggestions;
}

@property (nonatomic) bool limitSuggestionsToExactTextMatches;
@property (nonatomic, retain) NSIndexSet *suggestionCategories;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) unsigned long long suggestionResultTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *suggestionsHandlerQueue;
@property (nonatomic) bool wantsUnscopedSuggestions;

- (void).cxx_destruct;
- (id)_suggestionCategoriesTypeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)jsonDictionary;
- (bool)limitSuggestionsToExactTextMatches;
- (void)setLimitSuggestionsToExactTextMatches:(bool)arg1;
- (void)setSuggestionCategories:(id)arg1;
- (void)setSuggestionLimit:(unsigned long long)arg1;
- (void)setSuggestionResultTypes:(unsigned long long)arg1;
- (void)setSuggestionsHandlerQueue:(id)arg1;
- (void)setWantsUnscopedSuggestions:(bool)arg1;
- (id)suggestionCategories;
- (unsigned long long)suggestionLimit;
- (unsigned long long)suggestionResultTypes;
- (id)suggestionsHandlerQueue;
- (bool)wantsUnscopedSuggestions;

@end
