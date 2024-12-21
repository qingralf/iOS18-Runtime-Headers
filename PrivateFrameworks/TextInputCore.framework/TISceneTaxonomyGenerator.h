/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISceneTaxonomyGenerator : NSObject {
    NSArray * _notSupportingInputModes;
    NSSet * _phrases;
    NLTagger * _tagger;
    NSSet * _taxonomyIdentifiers;
    NSSet * _taxonomyIdentifiersAllowListSynonymExclusions;
}

@property (nonatomic, retain) NSArray *notSupportingInputModes;
@property (nonatomic, readonly) NSSet *phrases;
@property (nonatomic, readonly) NLTagger *tagger;
@property (nonatomic, readonly) NSSet *taxonomyIdentifiers;
@property (nonatomic, readonly) NSSet *taxonomyIdentifiersAllowListSynonymExclusions;

- (void).cxx_destruct;
- (id)_extractTokensForStickerComputation:(id)arg1;
- (id)_generateQueries:(id)arg1 tokenize:(bool)arg2;
- (id)_generateQueryTokens:(id)arg1;
- (id)_generateSearchableQueries:(id)arg1 disablePhraseListCheck:(bool)arg2;
- (id)_generateTokens:(id)arg1;
- (id)_generateTokensFromInputString:(id)arg1;
- (id)generateSearchableQueriesForText:(id)arg1 tokenize:(bool)arg2 generativeEmojiSearchQueries:(bool)arg3;
- (id)init;
- (id)notSupportingInputModes;
- (id)phrases;
- (void)setNotSupportingInputModes:(id)arg1;
- (id)tagger;
- (id)taxonomyIdentifiers;
- (id)taxonomyIdentifiersAllowListSynonymExclusions;

@end