/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    long long  _hearstRouteStatus;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_fetchHearstRouteStatusWithCompletion:(id /* block */)arg1;
- (void)_notifyHearstRouteStatus:(long long)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingAudioRouteChange;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (void)activeAudioRouteDidChange:(id)arg1;
- (bool)carPlayConnected;
- (void)getHearstOwnershipStatus:(id /* block */)arg1;
- (void)getHearstRouteStatus:(id /* block */)arg1;
- (void)getJarvisConnected:(id /* block */)arg1;
- (long long)hearstOwnership;
- (long long)hearstRouteStatus;
- (id)init;
- (bool)jarvisConnected;

@end
