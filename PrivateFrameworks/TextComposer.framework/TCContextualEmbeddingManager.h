/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCContextualEmbeddingManager : NSObject {
    NSMutableDictionary * _compileCacheForIdentifier;
    NLContextualEmbedding * _currentEmbedding;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)batchDataFromTokenVectorEmbeddingForStrings:(id)arg1 language:(id)arg2 identifier:(id)arg3 tokenDictionaries:(id*)arg4 error:(id*)arg5;
- (bool)compileEmbeddingForIdentifier:(id)arg1 error:(id*)arg2;
- (id)contextualEmbeddingWithIdentifier:(id)arg1;
- (id)dataFromSentenceVectorEmbeddingForString:(id)arg1 language:(id)arg2 identifier:(id)arg3 error:(id*)arg4;
- (id)dataFromTokenVectorEmbeddingForString:(id)arg1 language:(id)arg2 identifier:(id)arg3 tokenDictionaries:(id*)arg4 error:(id*)arg5;
- (bool)enableE5;
- (bool)loadTokenVectorEmbeddingForIdentifier:(id)arg1 error:(id*)arg2;
- (bool)shouldAbortCompileEmbeddingForIdentifier:(id)arg1;

@end