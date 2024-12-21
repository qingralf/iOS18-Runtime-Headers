/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimerSupport.framework/MobileTimerSupport
 */

@interface MTStopwatchStorage : NSObject <MTStopwatchStorageProtocol> {
    _TtC18MobileTimerSupport23MTStopwatchStorageProxy * _storageProxy;
}

@property (nonatomic, retain) _TtC18MobileTimerSupport23MTStopwatchStorageProxy *storageProxy;

- (void).cxx_destruct;
- (void)createStopWatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)deleteStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)didAddLap:(id)arg1 forStopwatch:(id)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (void)didClearAllLapsForStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)didLapLapTimerForStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)didPauseLapTimerForStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)didResetLapTimerForStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)didResumeLapTimerForStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)didStartLapTimerForStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)getStopwatchesWitchCompletion:(id /* block */)arg1;
- (id)init;
- (void)localSetup;
- (void)registerObserver:(id)arg1;
- (void)setStorageProxy:(id)arg1;
- (void)setSystemReady;
- (id)storageProxy;
- (void)unregisterObserver:(id)arg1;
- (void)updateStopwatch:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;

@end