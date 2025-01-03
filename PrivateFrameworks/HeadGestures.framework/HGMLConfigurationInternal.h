/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadGestures.framework/HeadGestures
 */

@interface HGMLConfigurationInternal : NSObject {
    void maxNumBackgroundPredictionsNod;
    void maxNumBackgroundPredictionsShake;
    void minGateOpenConfScoreThresholdNod;
    void minGateOpenConfScoreThresholdShake;
    void minGestureConfScoreThresholdNod;
    void minGestureConfScoreThresholdShake;
    void minTimeBetweenPoolsNod;
    void minTimeBetweenPoolsShake;
    void modelType;
    void numConsecutivePredictionsNod;
    void numConsecutivePredictionsShake;
    void numWindowsInPoolNod;
    void numWindowsInPoolShake;
    void stride;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  testModelURL;
    void windowSize;
}

+ (id)defaultEmptyMLConfiguration;
+ (id)defaultMLConfiguration;
+ (id)defaultTestMLConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
