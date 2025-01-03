/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRLearningSessionProvider : CoreIRLearningSession {
    unsigned long long  _captureDoneTicks;
    NSObject<OS_dispatch_source> * _captureDoneTimer;
    NSObject<OS_dispatch_source> * _captureIdleTimer;
    NSObject<OS_dispatch_source> * _captureNoSignalTimer;
    unsigned long long  _captureStartTicks;
    int  _captureState;
    unsigned long long  _capturedCommands;
    unsigned long long  _capturedCount;
    unsigned char  _capturedProtocolID;
    unsigned char  _capturedProtocolOptions;
    unsigned long long  _currentCommand;
    NSMutableArray * _mappings;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long currentCommand;
@property (nonatomic, copy) NSMutableArray *mappings;

- (bool)_addMapping:(id)arg1;
- (unsigned long long)_findDuplicateIRCommand:(id)arg1 forCommand:(unsigned long long)arg2 device:(id*)arg3;
- (id)_newMappingWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2 commandToMap:(unsigned long long)arg3 commands:(unsigned long long*)arg4 commandCount:(unsigned long long)arg5 repeats:(unsigned long long*)arg6 repeatCount:(unsigned long long)arg7;
- (void)_removeMappingForCommand:(unsigned long long)arg1;
- (bool)addMappingWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2 commandToMap:(unsigned long long)arg3 commands:(unsigned long long*)arg4 commandCount:(unsigned long long)arg5 repeats:(unsigned long long*)arg6 repeatCount:(unsigned long long)arg7;
- (void)captureIRCommand:(id)arg1;
- (Class)classForCoder;
- (void)cleanup;
- (unsigned long long)currentCommand;
- (void)dealloc;
- (void)disableAllTimers;
- (void)endLearning;
- (void)enumerateMappingUsingBlock:(id /* block */)arg1;
- (void)handleDone;
- (void)handleIdle;
- (void)handleNoSignal;
- (void)initTimer:(id*)arg1 withTimeout:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (int)initTimers;
- (id)mappings;
- (void)processCapturedPattern;
- (void)processIRCommand:(id)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)setCaptureState:(int)arg1;
- (void)setMappings:(id)arg1;
- (bool)startLearningCommand:(unsigned long long)arg1;
- (void)updateProgress;
- (void)waitForIdle;

@end
