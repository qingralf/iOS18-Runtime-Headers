/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWSampleLogData : NSObject {
    bool  _activateMotionDetect;
    unsigned long long  _cumulativeSamplingTime;
    NSString * _identifier;
    bool  _pollingClient;
    bool  _sampleSucceeded;
    unsigned long long  _samplingInterval;
    unsigned long long  _samplingStartTime;
}

@property (nonatomic) bool activateMotionDetect;
@property (nonatomic) unsigned long long cumulativeSamplingTime;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool pollingClient;
@property (nonatomic) bool sampleSucceeded;
@property (nonatomic) unsigned long long samplingInterval;
@property (nonatomic) unsigned long long samplingStartTime;

- (void).cxx_destruct;
- (bool)activateMotionDetect;
- (unsigned long long)cumulativeSamplingTime;
- (id)identifier;
- (bool)pollingClient;
- (bool)sampleSucceeded;
- (unsigned long long)samplingInterval;
- (unsigned long long)samplingStartTime;
- (void)setActivateMotionDetect:(bool)arg1;
- (void)setCumulativeSamplingTime:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPollingClient:(bool)arg1;
- (void)setSampleSucceeded:(bool)arg1;
- (void)setSamplingInterval:(unsigned long long)arg1;
- (void)setSamplingStartTime:(unsigned long long)arg1;

@end
