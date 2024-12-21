/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCellularAudioTap : VCObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate, VCMediaRecorderTransportDelegate> {
    NSMutableDictionary * _audioTapIOMap;
    VCAudioCaptionsCoordinator * _captionsCoordinator;
    <VCServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    VCMediaRecorder * _mediaRecorder;
    int  _processId;
    bool  _registeredForThermalNotifications;
    int  _reportingModuleID;
    NSObject<OS_dispatch_queue> * _stateQueue;
    long long  _tapToken;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) <VCServerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tapToken;

+ (unsigned int)audioIOTypeFromTapType:(unsigned int)arg1;
+ (id)stringFromTapType:(unsigned int)arg1;
+ (bool)validateAsynchronousActionContext:(const struct tagVCAsynchronousActionContext { unsigned char x1; void *x2; }*)arg1 withError:(id*)arg2;

- (bool)actionDidFinishForContext:(const struct tagVCAsynchronousActionContext { unsigned char x1; void *x2; }*)arg1 withError:(id*)arg2;
- (bool)actionWillBeginForContext:(const struct tagVCAsynchronousActionContext { unsigned char x1; void *x2; }*)arg1 withError:(id*)arg2;
- (bool)addAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2 enableAsyncTapStart:(bool)arg3 error:(id*)arg4;
- (struct tagVCAudioIOConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; unsigned int x10; unsigned int x11; bool x12; unsigned long long x13; unsigned int x14; long long x15; long long x16; unsigned long long x17; bool x18; bool x19; struct tagVCAudioIODelegateContext { id x_20_1_1; int (*x_20_1_2)(); void *x_20_1_3; long long x_20_1_4; id x_20_1_5; bool x_20_1_6; id x_20_1_7; } x20; struct tagVCAudioIODelegateContext { id x_21_1_1; int (*x_21_1_2)(); void *x_21_1_3; long long x_21_1_4; id x_21_1_5; bool x_21_1_6; id x_21_1_7; } x21; id x22; bool x23; bool x24; })audioIOConfigWithAudioType:(unsigned int)arg1 sinkDelegateContext:(const struct tagVCAudioIODelegateContext { id x1; int (*x2)(); void *x3; long long x4; id x5; bool x6; id x7; }*)arg2;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)cleanUpCaptionsCoordinator;
- (void)cleanUpMediaRecorder;
- (void)cleanUpPeriodicReporting;
- (struct __CFDictionary { }*)clientSpecificUserInfo;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)didResume;
- (void)didResumeAudioIO:(id)arg1;
- (void)didStart:(bool)arg1 error:(id)arg2;
- (void)didStop:(bool)arg1 error:(id)arg2;
- (void)didSuspend;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (void)handleThermalPressureNotification:(id)arg1;
- (id)initWithProcessId:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)initializeAudioTapIOForStreamToken:(long long)arg1 enableAsyncTapStart:(bool)arg2;
- (void)invalidate;
- (int)makeAudioIOForAudioTapIO:(id)arg1;
- (void)mediaRecorder:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (void)printAudioTapHealth;
- (int)registerAudioTapForStreamToken:(long long)arg1 tapType:(unsigned int)arg2;
- (void)registerForThermalNotifications;
- (bool)removeAudioTapForStreamToken:(long long)arg1 error:(id*)arg2;
- (void)serverDidDie;
- (void)setAudioTapIO:(id)arg1 forStreamToken:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (bool)setUpCallRecordingComponents;
- (bool)setUpCaptionsCoordinator;
- (bool)setUpDelegateQueue:(id)arg1;
- (bool)setUpMediaRecorder;
- (void)setUpPeriodicReporting;
- (bool)setUpReportingAgent;
- (struct tagVCAudioIODelegateContext { id x1; int (*x2)(); void *x3; long long x4; id x5; bool x6; id x7; })sinkDelegateContextWithTapType:(unsigned int)arg1 realtimeContext:(struct tagVCCellularAudioTapIORealtimeContext { long long x1; unsigned int x2; struct _VCAudioPowerSpectrumSourceRealtimeContext {} *x3; id x4; float x5; }*)arg2;
- (id)startAudioForStreamToken:(id)arg1 isInitialization:(bool)arg2;
- (id)stopAudioForStreamToken:(id)arg1 isDeinitialization:(bool)arg2;
- (long long)tapToken;
- (void)terminateProcessFromAssertionOverflow:(bool)arg1 onAudioTapIO:(id)arg2;
- (void)unregisterAudioTapForStreamToken:(long long)arg1;
- (void)unregisterForThermalNotifications;
- (int)validateAddAudioTapForStreamToken:(long long)arg1;

@end