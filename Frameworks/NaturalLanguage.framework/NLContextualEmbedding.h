/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLContextualEmbedding : NSObject {
    NSString * _adapterIdentifier;
    NSDictionary * _catalogEntry;
    void * _embedding;
    NLE5Embedding * _embeddingE5;
    NSString * _identifier;
    bool  _isE5Enabled;
    NSString * _modelIdentifier;
    NLSentenceEmbeddingHead * _sentenceEmbeddingHead;
    NLTagger * _tagger;
    bool  _useANE;
}

@property (readonly) unsigned long long dimension;
@property (readonly) bool hasAvailableAssets;
@property (readonly, copy) NSArray *languages;
@property (readonly) unsigned long long maximumSequenceLength;
@property (readonly, copy) NSString *modelIdentifier;
@property (readonly) unsigned long long revision;
@property (readonly, copy) NSArray *scripts;

+ (id)contextualEmbeddingCatalog;
+ (id)contextualEmbeddingConfigurationCatalog;
+ (id)contextualEmbeddingForLanguage:(id)arg1;
+ (id)contextualEmbeddingForScript:(id)arg1;
+ (id)contextualEmbeddingWithIdentifier:(id)arg1;
+ (id)contextualEmbeddingWithIdentifier:(id)arg1 andOptions:(id)arg2;
+ (id)contextualEmbeddingWithLanguage:(id)arg1;
+ (id)contextualEmbeddingWithModelIdentifier:(id)arg1;
+ (id)contextualEmbeddingWithScript:(id)arg1;
+ (id)contextualEmbeddingsForValues:(id)arg1;
+ (id)contextualEmbeddingsWithValues:(id)arg1;
+ (unsigned long long)systemVersionForLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)_concatenatedEmbeddingDataForInputEmbeddingData:(id)arg1 tokenizedSentences:(id)arg2 batchComponentsCountArray:(id)arg3 batchComponentRangesArray:(id)arg4 maxTokens:(unsigned long long)arg5;
- (id)_getSentenceEmbeddingForString:(id)arg1 error:(id*)arg2;
- (id)_paddedEmbeddingDataForInputEmbeddingData:(id)arg1 tokenizedSentences:(id)arg2 batchComponentsCountArray:(id)arg3 batchComponentRangesArray:(id)arg4 maxTokens:(unsigned long long)arg5;
- (id)_taggerForString:(id)arg1 language:(id)arg2;
- (id)_tokenRangesForString:(id)arg1 language:(id)arg2;
- (id)_tokensForString:(id)arg1 tokenRanges:(id)arg2;
- (id)adapterIdentifier;
- (id)adapters;
- (id)assetLocale;
- (id)assetLocaleIdentifier;
- (bool)assetsAvailable;
- (id)bundleName;
- (id)bundlePath;
- (bool)compileWithError:(id*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)dimension;
- (id)embeddingResultForString:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (bool)enumerateTokensForString:(id)arg1 language:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
- (long long)getCompilationState;
- (bool)hasAvailableAssets;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (bool)isE5Enabled;
- (bool)isLoaded;
- (id)languages;
- (bool)load;
- (bool)loadSentenceEmbedding;
- (bool)loadSentenceEmbeddingWithError:(id*)arg1;
- (bool)loadSentenceEmbeddingWithOptions:(id)arg1 error:(id*)arg2;
- (bool)loadWithError:(id*)arg1;
- (bool)loadWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned long long)maximumBatchSize;
- (unsigned long long)maximumSequenceLength;
- (id)modelIdentifier;
- (unsigned long long)modelSystemVersion;
- (void)requestAssetsWithCompletionHandler:(id /* block */)arg1;
- (id)requestBackgroundBatchEmbeddingResultsForStrings:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (id)requestBackgroundEmbeddingResultForString:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (bool)requestBackgroundModelLoadingWithTimeout:(double)arg1 error:(id*)arg2;
- (bool)requestBackgroundModelLoadingWithWithError:(id*)arg1;
- (void)requestBatchEmbeddingResultsForStrings:(id)arg1 language:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestEmbeddingAssetsWithCompletionHandler:(id /* block */)arg1;
- (void)requestEmbeddingResultForString:(id)arg1 language:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestModelCompilationWithCompletionHandler:(id /* block */)arg1;
- (void)requestModelLoadingWithCompletionHandler:(id /* block */)arg1;
- (void)requestModelUnloading;
- (void)requestSentenceEmbeddingVectorForString:(id)arg1 language:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)requiresCompilation;
- (unsigned long long)revision;
- (id)scripts;
- (id)sentenceEmbeddingVectorDataForString:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (id)sentenceEmbeddingVectorForString:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (unsigned long long)sentenceVectorDimension;
- (id)subRangesWithinToken:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 offset:(unsigned long long)arg3;
- (id)subRangesWithinToken:(id)arg1 offset:(unsigned long long)arg2;
- (id)tokenDictionariesForString:(id)arg1 tokens:(id)arg2 tokenRanges:(id)arg3;
- (id)tokenDictionariesForString:(id)arg1 tokens:(id)arg2 tokenRanges:(id)arg3 componentRanges:(id)arg4 componentsCount:(unsigned long long)arg5;
- (unsigned long long)tokenVectorDimension;
- (void)unload;
- (void)unloadSentenceEmbedding;
- (bool)useANE;
- (id)vectorsForTokenizedSentences:(id)arg1 untokenizedSentences:(id)arg2 maxTokens:(unsigned long long)arg3;

@end
