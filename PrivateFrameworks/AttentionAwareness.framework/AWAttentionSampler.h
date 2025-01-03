/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionSampler : NSObject {
    int  _currentState;
    float  _lastAttentionScore;
    double  _lastDistance;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFaceBounds;
    float  _lastFaceDetectionScore;
    bool  _lastFaceMetadataValid;
    unsigned long long  _lastFaceState;
    unsigned long long  _lastMetadataType;
    NSMutableArray * _lastMotionData;
    unsigned long long  _lastMotionResult;
    unsigned long long  _lastOrientation;
    unsigned long long  _lastPersonID;
    double  _lastPitch;
    unsigned long long  _lastPollTimeoutTime;
    unsigned long long  _lastPositiveDetectTime;
    double  _lastRoll;
    unsigned long long  _lastTriggerTime;
    double  _lastYaw;
    unsigned long long  _nextDeadline;
    id /* block */  _operationEndableCallback;
    NSObject<OS_dispatch_queue> * _queue;
    AWSampleLogger * _sampleLogger;
    unsigned long long  _samplingSuppressedMask;
    id /* block */  _stateChangedCallback;
    bool  _unitTestSampling;
}

@property (nonatomic) int currentState;
@property (nonatomic) float lastAttentionScore;
@property (nonatomic) double lastDistance;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastFaceBounds;
@property (nonatomic) float lastFaceDetectionScore;
@property (nonatomic) bool lastFaceMetadataValid;
@property (nonatomic) unsigned long long lastFaceState;
@property (nonatomic) unsigned long long lastMetadataType;
@property (nonatomic, retain) NSMutableArray *lastMotionData;
@property (nonatomic) unsigned long long lastMotionResult;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic) unsigned long long lastPersonID;
@property (nonatomic) double lastPitch;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) double lastYaw;
@property (copy) id /* block */ operationEndableCallback;
@property (nonatomic, retain) AWSampleLogger *sampleLogger;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (copy) id /* block */ stateChangedCallback;
@property (nonatomic, readonly) bool unitTestSampling;

- (void).cxx_destruct;
- (int)currentState;
- (id)description;
- (void)finishDeadlineComputationWithOptions:(struct { bool x1; bool x2; bool x3; })arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (float)lastAttentionScore;
- (double)lastDistance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastFaceBounds;
- (float)lastFaceDetectionScore;
- (bool)lastFaceMetadataValid;
- (unsigned long long)lastFaceState;
- (unsigned long long)lastMetadataType;
- (id)lastMotionData;
- (unsigned long long)lastMotionResult;
- (unsigned long long)lastOrientation;
- (unsigned long long)lastPersonID;
- (double)lastPitch;
- (unsigned long long)lastPollTimeoutTime;
- (unsigned long long)lastPositiveDetectTime;
- (double)lastRoll;
- (unsigned long long)lastTriggerTime;
- (double)lastYaw;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ignoreDisplayState:(bool)arg2;
- (id /* block */)operationEndableCallback;
- (id)sampleLogger;
- (unsigned long long)samplingSuppressedMask;
- (void)setCarPlayConnected:(bool)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setLastAttentionScore:(float)arg1;
- (void)setLastDistance:(double)arg1;
- (void)setLastFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastFaceDetectionScore:(float)arg1;
- (void)setLastFaceMetadataValid:(bool)arg1;
- (void)setLastFaceState:(unsigned long long)arg1;
- (void)setLastMetadataType:(unsigned long long)arg1;
- (void)setLastMotionData:(id)arg1;
- (void)setLastMotionResult:(unsigned long long)arg1;
- (void)setLastOrientation:(unsigned long long)arg1;
- (void)setLastPersonID:(unsigned long long)arg1;
- (void)setLastPitch:(double)arg1;
- (void)setLastPollTimeoutTime:(unsigned long long)arg1;
- (void)setLastPositiveDetectTime:(unsigned long long)arg1;
- (void)setLastRoll:(double)arg1;
- (void)setLastTriggerTime:(unsigned long long)arg1;
- (void)setLastYaw:(double)arg1;
- (void)setOperationEndableCallback:(id /* block */)arg1;
- (void)setSampleLogger:(id)arg1;
- (void)setSamplingSuppressedMask:(unsigned long long)arg1;
- (void)setSmartCoverClosed:(bool)arg1;
- (void)setStateChangedCallback:(id /* block */)arg1;
- (void)setUnitTestMode;
- (void)shouldSample:(bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(struct { bool x1; bool x2; bool x3; })arg3;
- (void)startDeadlineComputation;
- (id /* block */)stateChangedCallback;
- (bool)unitTestSampling;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;

@end
