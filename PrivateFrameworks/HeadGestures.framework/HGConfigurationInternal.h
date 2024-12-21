/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadGestures.framework/HeadGestures
 */

@interface HGConfigurationInternal : NSObject {
    void audioFeedbackConfig;
    void enableRawDataLogging;
    void gesturePartAcceptableNodVelocity;
    void gesturePartAcceptableShakeVelocity;
    void gesturePartRepeatTimeout;
    void mlConfig;
    void requestPartGestures;
    void singleDelivery;
}

@property (nonatomic, retain) HGAudioFeedbackConfigurationInternal *audioFeedbackConfig;
@property (nonatomic) bool enableRawDataLogging;
@property (nonatomic) float gesturePartAcceptableNodVelocity;
@property (nonatomic) float gesturePartAcceptableShakeVelocity;
@property (nonatomic) float gesturePartRepeatTimeout;
@property (nonatomic, retain) HGMLConfigurationInternal *mlConfig;
@property (nonatomic) bool requestPartGestures;
@property (nonatomic) bool singleDelivery;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)audioFeedbackConfig;
- (bool)enableRawDataLogging;
- (float)gesturePartAcceptableNodVelocity;
- (float)gesturePartAcceptableShakeVelocity;
- (float)gesturePartRepeatTimeout;
- (id)init;
- (id)initWithML:(id)arg1 audioFeedbackConfig:(id)arg2;
- (id)initWithMlConfig:(id)arg1 audioFeedbackConfig:(id)arg2 requestPartGestures:(bool)arg3;
- (id)mlConfig;
- (bool)requestPartGestures;
- (void)setAudioFeedbackConfig:(id)arg1;
- (void)setEnableRawDataLogging:(bool)arg1;
- (void)setGesturePartAcceptableNodVelocity:(float)arg1;
- (void)setGesturePartAcceptableShakeVelocity:(float)arg1;
- (void)setGesturePartRepeatTimeout:(float)arg1;
- (void)setMlConfig:(id)arg1;
- (void)setRequestPartGestures:(bool)arg1;
- (void)setSingleDelivery:(bool)arg1;
- (bool)singleDelivery;

@end