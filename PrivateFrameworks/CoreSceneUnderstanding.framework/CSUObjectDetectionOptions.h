/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUObjectDetectionOptions : NSObject {
    float  _detectionForegroundThreshold;
    float  _nmsThresholdDetection;
    NSArray * _relevantClassNames;
}

@property float detectionForegroundThreshold;
@property float nmsThresholdDetection;
@property (copy) NSArray *relevantClassNames;

- (void).cxx_destruct;
- (float)detectionForegroundThreshold;
- (id)init;
- (float)nmsThresholdDetection;
- (id)relevantClassNames;
- (void)setDetectionForegroundThreshold:(float)arg1;
- (void)setNmsThresholdDetection:(float)arg1;
- (void)setRelevantClassNames:(id)arg1;

@end
