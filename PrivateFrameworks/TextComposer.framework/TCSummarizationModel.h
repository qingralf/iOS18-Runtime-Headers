/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCSummarizationModel : NSObject {
    struct MontrealNeuralNetwork { } * _decoderModel;
    void * _embeddingModel;
    unsigned long long  _maxDecoderSteps;
    unsigned long long  _sequenceLength;
    NLTagger * _tagger;
}

- (void).cxx_destruct;
- (id)_decoderPredictions:(float*)arg1;
- (id)_tokensForString:(id)arg1;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 options:(id)arg2;
- (id)summarizationForString:(id)arg1;
- (bool)useANEWithOptions:(id)arg1;

@end