/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTSystemStatus : NSObject {
    STMediaStatusDomainMicrophoneRecordingAttribution * _attribution;
    NSMutableSet * _deviceUIDs;
    ASDTCondition * _mutex;
    STMediaStatusDomainPublisher * _publisher;
}

@property (nonatomic, retain) STMediaStatusDomainMicrophoneRecordingAttribution *attribution;
@property (nonatomic, retain) NSMutableSet *deviceUIDs;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, retain) ASDTCondition *mutex;
@property (nonatomic, retain) STMediaStatusDomainPublisher *publisher;

+ (id)systemStatus;

- (void).cxx_destruct;
- (id)attribution;
- (id)deviceUIDs;
- (bool)enabled;
- (id)init;
- (id)mutex;
- (void)publishMicrophoneEnabled:(bool)arg1;
- (id)publisher;
- (void)recordingIsEnabled:(bool)arg1 forDeviceUID:(id)arg2;
- (void)setAttribution:(id)arg1;
- (void)setDeviceUIDs:(id)arg1;
- (void)setMutex:(id)arg1;
- (void)setPublisher:(id)arg1;

@end