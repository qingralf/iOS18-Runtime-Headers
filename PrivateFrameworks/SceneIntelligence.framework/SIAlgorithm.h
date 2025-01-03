/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
 */

@interface SIAlgorithm : NSObject <SIVisualLoggerSupporting> {
    SIModel * _model;
    SINetworkConfiguration * _networkConfiguration;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SIModel *model;
@property (retain) SINetworkConfiguration *networkConfiguration;
@property (readonly) Class superclass;

+ (id)initWithNetworkConfiguration:(id)arg1;
+ (Class)inputDataClass;
+ (Class)outputDataClass;
+ (bool)supportsANE;

- (void).cxx_destruct;
- (long long)_inferenceWithInput:(id)arg1 output:(id)arg2;
- (long long)_postprocessingOutput:(id)arg1;
- (long long)_preprocessingInputData:(id)arg1;
- (long long)_runWithInput:(id)arg1 output:(id)arg2;
- (void)addPrewiringBuffersToStreamWithInputPools:(id)arg1 outputPools:(id)arg2;
- (id)createEmptyInputDataWithExpectedFormat;
- (struct CGSize { double x1; double x2; })getInputResolution;
- (struct CGSize { double x1; double x2; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)arg1;
- (id)model;
- (id)networkConfiguration;
- (id)networkVersion;
- (long long)runWithInput:(id)arg1 output:(id)arg2;
- (long long)runWithInput:(id)arg1 output:(id)arg2 resolutionConfiguration:(long long)arg3;
- (void)setNetworkConfiguration:(id)arg1;
- (id)subLoggers;
- (long long)switchConfiguration:(unsigned long long)arg1;

@end
