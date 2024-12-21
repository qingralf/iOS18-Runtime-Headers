/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUImageCaptioningDecoderConfiguration : NSObject {
    NSArray * _bridgeInputShape;
    bool  _bridgeIsPrecompiled;
    NSString * _bridgeNetworkPath;
    <MLComputeDeviceProtocol> * _computeDevice;
    NSArray * _decoderEmbeddingShape;
    NSArray * _decoderInputSeqShape;
    bool  _decoderIsPrecompiled;
    NSString * _decoderNetworkPath;
    int  _espressoExecutionEngine;
    NSString * _inputEncodedFeaturesTensorName;
    NSString * _inputEncodedFeaturesTensorNameOfBridge;
    NSString * _inputWordIdsTensorName;
    unsigned long long  _maxSeqLen;
    NSString * _outputTensorNameOfBridge;
    NSString * _outputWordProbsTensorName;
    long long  _revision;
    NSString * _runTimeParamsPath;
    long long  _runtimeEngine;
    bool  _saveDecoderFeatures;
    NSString * _vocabularyModelPath;
}

@property (nonatomic, copy) NSArray *bridgeInputShape;
@property (nonatomic) bool bridgeIsPrecompiled;
@property (nonatomic, copy) NSString *bridgeNetworkPath;
@property (nonatomic, retain) <MLComputeDeviceProtocol> *computeDevice;
@property (nonatomic, copy) NSArray *decoderEmbeddingShape;
@property (nonatomic, copy) NSArray *decoderInputSeqShape;
@property (nonatomic) bool decoderIsPrecompiled;
@property (nonatomic, copy) NSString *decoderNetworkPath;
@property int espressoExecutionEngine;
@property (nonatomic, copy) NSString *inputEncodedFeaturesTensorName;
@property (nonatomic, copy) NSString *inputEncodedFeaturesTensorNameOfBridge;
@property (nonatomic, copy) NSString *inputWordIdsTensorName;
@property (nonatomic) unsigned long long maxSeqLen;
@property (nonatomic, copy) NSString *outputTensorNameOfBridge;
@property (nonatomic, copy) NSString *outputWordProbsTensorName;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, copy) NSString *runTimeParamsPath;
@property (nonatomic, readonly) long long runtimeEngine;
@property (nonatomic) bool saveDecoderFeatures;
@property (nonatomic, readonly, copy) NSArray *supportedComputeDevices;
@property (nonatomic, copy) NSString *vocabularyModelPath;

+ (id)CSUImageCaptioningDecoderConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)CSUImageCaptioningDecoderConfigurationForRevision:(long long)arg1 saveDecoderFeatures:(bool)arg2 error:(id*)arg3;
+ (long long)_resolvedRevision:(long long)arg1;
+ (id)availableRevisions;
+ (id)createCSUImageCaptioningDecoderConfigurationWithConfigPath:(id)arg1 error:(id*)arg2;
+ (id)createCSUImageCaptioningDecoderConfigurationWithDecoderEspressoPath:(id)arg1 decoderNetworkParams:(id)arg2 bridgeNetworkPath:(id)arg3 bridgeNetworkParams:(id)arg4 vocabularyPath:(id)arg5 useRuntimeEngine:(long long)arg6 runtimeParamsPath:(id)arg7 error:(id*)arg8;

- (void).cxx_destruct;
- (id)bridgeInputShape;
- (bool)bridgeIsPrecompiled;
- (id)bridgeNetworkPath;
- (id)computeDevice;
- (id)decoderEmbeddingShape;
- (id)decoderInputSeqShape;
- (bool)decoderIsPrecompiled;
- (id)decoderNetworkPath;
- (int)espressoExecutionEngine;
- (id)initImageCaptioningDecoderConfigurationForRevision:(long long)arg1 runtimeEngine:(long long)arg2 espressoNetPath:(id)arg3 vocabularyModelPath:(id)arg4 inputEncodedFeaturesTensorName:(id)arg5 inputWordIdsTensorName:(id)arg6 outputWordProbsTensorName:(id)arg7 decoderEmbeddingShape:(id)arg8 decoderInputSeqShape:(id)arg9 decoderIsPrecompiled:(bool)arg10 saveDecoderFeatures:(bool)arg11 bridgeNetworkPath:(id)arg12 inputEncodedFeaturesTensorNameOfBridge:(id)arg13 outputTensorNameOfBridge:(id)arg14 bridgeInputShape:(id)arg15 bridgeIsPrecompiled:(bool)arg16 runtimeParamsPath:(id)arg17;
- (id)inputEncodedFeaturesTensorName;
- (id)inputEncodedFeaturesTensorNameOfBridge;
- (id)inputWordIdsTensorName;
- (unsigned long long)maxSeqLen;
- (id)outputTensorNameOfBridge;
- (id)outputWordProbsTensorName;
- (long long)revision;
- (id)runTimeParamsPath;
- (long long)runtimeEngine;
- (bool)saveDecoderFeatures;
- (void)setBridgeInputShape:(id)arg1;
- (void)setBridgeIsPrecompiled:(bool)arg1;
- (void)setBridgeNetworkPath:(id)arg1;
- (void)setComputeDevice:(id)arg1;
- (void)setDecoderEmbeddingShape:(id)arg1;
- (void)setDecoderInputSeqShape:(id)arg1;
- (void)setDecoderIsPrecompiled:(bool)arg1;
- (void)setDecoderNetworkPath:(id)arg1;
- (void)setEspressoExecutionEngine:(int)arg1;
- (void)setInputEncodedFeaturesTensorName:(id)arg1;
- (void)setInputEncodedFeaturesTensorNameOfBridge:(id)arg1;
- (void)setInputWordIdsTensorName:(id)arg1;
- (void)setMaxSeqLen:(unsigned long long)arg1;
- (void)setOutputTensorNameOfBridge:(id)arg1;
- (void)setOutputWordProbsTensorName:(id)arg1;
- (void)setRunTimeParamsPath:(id)arg1;
- (void)setSaveDecoderFeatures:(bool)arg1;
- (void)setVocabularyModelPath:(id)arg1;
- (id)supportedComputeDevices;
- (id)vocabularyModelPath;

@end