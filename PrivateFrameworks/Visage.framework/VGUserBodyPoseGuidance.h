/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGUserBodyPoseGuidance : NSObject {
    VGBodyPoseGuidanceOptions * _options;
    NSArray * _poseTargets;
}

- (void).cxx_destruct;
- (float)calculateAggregatedScoreFromScores:(id)arg1;
- (id)calculatePoseGuidanceFromSkeleton:(id)arg1 andAtlasToDeviceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 atTimestamp:(double)arg3;
- (id)evaluatePoseValues:(id)arg1 atTimestamp:(double)arg2;
- (id)initWithOptions:(id)arg1;

@end
