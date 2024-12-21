/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNShotflowDetectorANODv3 : VNShotflowDetectorANODBase

+ (Class)VNShotflowNetworkClass;
+ (float)defaultFaceDetectionPrecisionRecallThreshold;
+ (id)defaultFilterThresholds;
+ (id)filterThresholdsArrayForFilterThresholds:(id)arg1 error:(id*)arg2;
+ (id)supportedLabelKeys;

- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;
- (id)initWithNetwork:(id)arg1;
- (id)nmsBoxes:(id)arg1 usingThresholds:(id)arg2;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 filterThresholds:(id)arg4;

@end