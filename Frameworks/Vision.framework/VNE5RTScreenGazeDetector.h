/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNE5RTScreenGazeDetector : VNE5RTBasedDetector

+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)modelFunctionName;
+ (id)modelInputImageName;
+ (id)modelOutputDeviceGazeProbabilitiesName;
+ (id)modelOutputXYName;
+ (id)modelURLForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedScaledFaceBoundingBox:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;

- (bool)needsMetalContext;
- (id)observationsFromE5RTExecutionOutputs:(id)arg1 forFunctionDescriptor:(id)arg2 originatingRequestSpecifier:(id)arg3 options:(id)arg4 error:(id*)arg5;

@end