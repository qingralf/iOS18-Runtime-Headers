/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUSystemSearchTextEncoderV1Configuration : NSObject <CSUCLIPTextEncoderConfiguration> {
    NSArray * _additionalLayerNames;
    <MLComputeDeviceProtocol> * _computeDevice;
    bool  _inputIsLowerCase;
    NSString * _inputTextIDTensorName;
    NSString * _inputTokenEmbeddingIDTensorName;
    NSString * _inputTokenEmbeddingMaskTensorName;
    unsigned long long  _maximumSequenceLength;
    NSString * _outputLastHiddenStateTensorName;
    NSString * _outputTextEmbeddingTensorName;
    NSString * _outputTokenEmbeddingIDTensorName;
    long long  _revision;
    NSString * _textEncoderNetworkPath;
    unsigned long long  _tokenEmbeddingLength;
    NSString * _tokenEmbeddingNetworkPath;
    NSString * _vocabularyModelPath;
}

@property (nonatomic, retain) NSArray *additionalLayerNames;
@property (nonatomic, retain) <MLComputeDeviceProtocol> *computeDevice;
@property int espressoExecutionEngine;
@property (nonatomic) bool inputIsLowerCase;
@property (nonatomic, copy) NSString *inputTextIDTensorName;
@property (nonatomic, copy) NSString *inputTokenEmbeddingIDTensorName;
@property (nonatomic, copy) NSString *inputTokenEmbeddingMaskTensorName;
@property (nonatomic) unsigned long long maximumSequenceLength;
@property (nonatomic, copy) NSString *outputLastHiddenStateTensorName;
@property (nonatomic, copy) NSString *outputTextEmbeddingTensorName;
@property (nonatomic, copy) NSString *outputTokenEmbeddingIDTensorName;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly, copy) NSArray *supportedComputeDevices;
@property (nonatomic, copy) NSString *textEncoderNetworkPath;
@property (nonatomic) unsigned long long tokenEmbeddingLength;
@property (nonatomic, copy) NSString *tokenEmbeddingNetworkPath;
@property (nonatomic, copy) NSString *vocabularyModelPath;

+ (id)SystemSearchTextEncoderV1ConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (long long)_resolvedRevision:(long long)arg1;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)additionalLayerNames;
- (id)computeDevice;
- (int)espressoExecutionEngine;
- (id)initSystemSearchTextEncoderV1ConfigurationForRevision:(long long)arg1 vocabularyModelPath:(id)arg2 tokenEmbeddingNetworkPath:(id)arg3 textEncoderNetworkPath:(id)arg4 encoderParams:(id)arg5;
- (bool)inputIsLowerCase;
- (id)inputTextIDTensorName;
- (id)inputTokenEmbeddingIDTensorName;
- (id)inputTokenEmbeddingMaskTensorName;
- (unsigned long long)maximumSequenceLength;
- (id)outputLastHiddenStateTensorName;
- (id)outputTextEmbeddingTensorName;
- (id)outputTokenEmbeddingIDTensorName;
- (long long)revision;
- (void)setAdditionalLayerNames:(id)arg1;
- (void)setComputeDevice:(id)arg1;
- (void)setEspressoExecutionEngine:(int)arg1;
- (void)setInputIsLowerCase:(bool)arg1;
- (void)setInputTextIDTensorName:(id)arg1;
- (void)setInputTokenEmbeddingIDTensorName:(id)arg1;
- (void)setInputTokenEmbeddingMaskTensorName:(id)arg1;
- (void)setMaximumSequenceLength:(unsigned long long)arg1;
- (void)setOutputLastHiddenStateTensorName:(id)arg1;
- (void)setOutputTextEmbeddingTensorName:(id)arg1;
- (void)setOutputTokenEmbeddingIDTensorName:(id)arg1;
- (void)setTextEncoderNetworkPath:(id)arg1;
- (void)setTokenEmbeddingLength:(unsigned long long)arg1;
- (void)setTokenEmbeddingNetworkPath:(id)arg1;
- (void)setVocabularyModelPath:(id)arg1;
- (id)supportedComputeDevices;
- (id)textEncoderNetworkPath;
- (unsigned long long)tokenEmbeddingLength;
- (id)tokenEmbeddingNetworkPath;
- (id)vocabularyModelPath;

@end
