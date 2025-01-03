/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Scandium.framework/Scandium
 */

@interface SCDevice : NSObject {
    <SCDeviceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct __IOHIDDevice { } * _device;
    NSMutableArray * _featureReportQueue;
    void * _inputReportBuffer;
    NSObject<OS_dispatch_queue> * _inputReportQueue;
}

@property (nonatomic, readonly) <SCDeviceDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) struct __IOHIDDevice { }*device;
@property (nonatomic, retain) NSMutableArray *featureReportQueue;
@property (nonatomic, readonly) void*inputReportBuffer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *inputReportQueue;
@property (nonatomic, readonly) struct SCRTPTimestampReference { double x1; unsigned long long x2; unsigned int x3; } latestRTPTimestampReference;

- (void).cxx_destruct;
- (void)attemptToDrainFeatureReportQueue;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (struct __IOHIDDevice { }*)device;
- (void)enqueueFeatureReportAttempt:(id /* block */)arg1;
- (id)featureReportQueue;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithIOHIDDevice:(struct __IOHIDDevice { }*)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void*)inputReportBuffer;
- (id)inputReportQueue;
- (struct SCRTPTimestampReference { double x1; unsigned long long x2; unsigned int x3; })latestRTPTimestampReference;
- (void)reportBackgroundSessionOutcome:(bool)arg1 forTimestamp:(unsigned long long)arg2;
- (int)setFeatureReport:(const char *)arg1 ofLength:(unsigned long long)arg2;
- (void)setFeatureReportQueue:(id)arg1;
- (void)setOperatingMode:(unsigned char)arg1;

@end
