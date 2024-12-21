/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration {
    NSArray * _outputVideoRequirements;
    NSDictionary * _sensorConfigurationsByPortType;
}

@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly) NSDictionary *sensorConfigurationsByPortType;

- (void)dealloc;
- (id)initWithMetalCommandQueue:(id)arg1 sensorConfigurationsByPortType:(id)arg2 inferenceType:(int)arg3 outputVideoRequirements:(id)arg4;
- (id)outputAttachedMediaKeyForInputDimensions:(struct { int x1; int x2; })arg1;
- (id)outputVideoRequirements;
- (id)sensorConfigurationsByPortType;

@end