/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMIStyleEngineCoefficientConverter : NSObject <CMIStyleEngineProcessingStage> {
    <MTLBuffer> * _inputBuffer;
    <MTLComputePipelineState> * _kernel;
    unsigned long long  _numberOfCoefficients;
    <MTLBuffer> * _outputBuffer;
    NSString * _shaderName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLBuffer> *inputBuffer;
@property (nonatomic, readonly) unsigned long long numberOfCoefficients;
@property (nonatomic, retain) <MTLBuffer> *outputBuffer;
@property (nonatomic, readonly) NSString *shaderName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (int)enqueueToCommandBuffer:(id)arg1;
- (id)initWithMetalContext:(id)arg1;
- (id)inputBuffer;
- (unsigned long long)numberOfCoefficients;
- (id)outputBuffer;
- (void)setInputBuffer:(id)arg1;
- (void)setOutputBuffer:(id)arg1;
- (id)shaderName;

@end