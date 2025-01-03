/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSFCoreMLComputeBackend : NSObject <CSFModelComputeBackend> {
    MLModel * _coremlModel;
    NSDictionary * _inputSpecs;
    MLPredictionOptions * _options;
    NSDictionary * _outputSpecs;
}

@property (nonatomic, retain) MLModel *coremlModel;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *inputSpecs;
@property (nonatomic, retain) MLPredictionOptions *options;
@property (nonatomic, retain) NSDictionary *outputSpecs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_convertDataBufferToMLMultiArray:(id)arg1 error:(id*)arg2;
- (id)_convertInputToCoreMLInputs:(id)arg1 error:(id*)arg2;
- (id)_convertOuputsToNSArrayWithCoreMLOutputs:(id)arg1 error:(id*)arg2;
- (id)_fetchTensorPropertiesWithFeatDesc:(id)arg1;
- (unsigned long long)_getComputeDataTypeForMLType:(long long)arg1;
- (long long)_getMLMultiArrayDataTypeForComputeType:(unsigned long long)arg1;
- (bool)_populateModelInterfaceParameters;
- (id)coremlModel;
- (id)getExpectedInputTensors;
- (id)getExpectedOutputTensors;
- (id)initWithModelFile:(id)arg1 error:(id*)arg2;
- (id)inputSpecs;
- (id)options;
- (id)outputSpecs;
- (id)predictOutputWithInputs:(id)arg1 errOut:(id*)arg2;
- (void)setCoremlModel:(id)arg1;
- (void)setInputSpecs:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setOutputSpecs:(id)arg1;

@end
