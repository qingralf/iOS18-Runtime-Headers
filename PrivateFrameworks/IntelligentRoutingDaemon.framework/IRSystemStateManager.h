/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRSystemStateManager : NSObject <IRAVOutputContextControllerObserverProtocol, IRBiomeProviderObserverProtocol, IRDeallocSync, IRDisplayMonitorObserverProtocol, IRMiLoProviderObserverProtocol, IRProximityProviderObserverProtocol> {
    IRTimer * _appInFocusWindowTimer;
    IRAVOutputContextController * _audioAVOutputContextController;
    IRBiomeProvider * _biomeProvider;
    <IRPolicyManagerContextObserver> * _contextObserver;
    IRDisplayMonitor * _displayMonitor;
    bool  _isBiomeRegistered;
    IRMiLoProvider * _miloProvider;
    IRMiloLslPredictionDO * _miloProviderLslPredictionResults;
    IRNearbyDeviceContainerDO * _nearbyDeviceContainer;
    IRCMPDRFenceBridge * _pdrFenceBridge;
    IRTimer * _pdrFenceTimer;
    IRProximityProvider * _proximityProvider;
    NSObject<OS_dispatch_queue> * _queue;
    IRServiceStore * _serviceStore;
    IRSystemStateDO * _systemState;
}

@property (nonatomic, retain) IRTimer *appInFocusWindowTimer;
@property (nonatomic, retain) IRAVOutputContextController *audioAVOutputContextController;
@property (nonatomic, retain) IRBiomeProvider *biomeProvider;
@property (nonatomic) <IRPolicyManagerContextObserver> *contextObserver;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IRDisplayMonitor *displayMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBiomeRegistered;
@property (nonatomic, retain) IRMiLoProvider *miloProvider;
@property (nonatomic, retain) IRMiloLslPredictionDO *miloProviderLslPredictionResults;
@property (nonatomic, retain) IRNearbyDeviceContainerDO *nearbyDeviceContainer;
@property (nonatomic, retain) IRCMPDRFenceBridge *pdrFenceBridge;
@property (nonatomic, retain) IRTimer *pdrFenceTimer;
@property (nonatomic, retain) IRProximityProvider *proximityProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IRServiceStore *serviceStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) IRSystemStateDO *systemState;

+ (bool)isObservedEventType:(long long)arg1;

- (void).cxx_destruct;
- (void)_cancelAppInFocusWindowTimer;
- (void)_checkAndStartPDRFenceLogicIfNeededWithEvent:(id)arg1 andCandidate:(id)arg2;
- (void)_checkAndStopPDRFenceLogicIfNeeded;
- (void)_checkAndUpdateLatestPickerChoiceDateIfNeededForEvent:(id)arg1;
- (void)_didUpdateContextWithReason:(id)arg1;
- (void)_initBiomeIfNeededUponAppInFocus;
- (id)_miloLslPredictionToDO:(id)arg1;
- (void)_registerToMiLo:(bool)arg1;
- (void)_startAppInFocusWindowTimer;
- (void)_unregisterForBiomeEvents;
- (void)_unregisterFromMiLo;
- (bool)_updateSystemStateWithAppInFocus:(id)arg1 andOpenWindowIfApplicable:(bool)arg2 isScreenUnlockEvent:(bool)arg3;
- (bool)_updateSystemStateWithAppInFocusWindowEnd;
- (bool)_updateSystemStateWithDeviceWiFi:(id)arg1;
- (bool)_updateSystemStateWithDisplayOn:(bool)arg1;
- (bool)_updateSystemStateWithIsContinuityDisplay:(bool)arg1;
- (bool)_updateSystemStateWithLOIType:(int)arg1 WithLOIIdentifier:(id)arg2;
- (bool)_updateSystemStateWithMediaRoute:(id)arg1;
- (bool)_updateSystemStateWithOutputDevice:(id)arg1;
- (bool)_updateSystemStateWithPredictedOutputDevice:(id)arg1;
- (void)addEvent:(id)arg1 forCandidate:(id)arg2;
- (id)appInFocusWindowTimer;
- (id)audioAVOutputContextController;
- (id)biomeProvider;
- (void)context:(id)arg1 didUpdateOutputDevice:(id)arg2;
- (void)context:(id)arg1 didUpdatePredicatedOutputDevice:(id)arg2;
- (id)contextObserver;
- (void)dealloc;
- (void)deallocSync;
- (void)deleteLegacyServiceIdentifier;
- (void)didSpotOnLocationCompleteWithError:(id)arg1;
- (id)displayMonitor;
- (void)endAppInFocusWindow;
- (id)initWithQueue:(id)arg1 contextObserver:(id)arg2 biomeProvider:(id)arg3 miloProvider:(id)arg4 proximityProvider:(id)arg5 serviceStore:(id)arg6 displayMonitor:(id)arg7 audioAVOutputContextController:(id)arg8 isLowLatencyMiLo:(bool)arg9;
- (bool)isBiomeRegistered;
- (void)logProviderState;
- (id)miloProvider;
- (id)miloProviderLslPredictionResults;
- (void)monitor:(id)arg1 didUpdateAppInFocus:(id)arg2 isScreenUnlockEvent:(bool)arg3;
- (void)monitor:(id)arg1 didUpdateDisplayOn:(bool)arg2;
- (void)monitor:(id)arg1 didUpdateIsContinuityDisplay:(bool)arg2;
- (id)nearbyDeviceContainer;
- (void)onPrediction:(id)arg1;
- (void)onUpdateLOIType:(int)arg1 WithLOIIdentifier:(id)arg2;
- (id)pdrFenceBridge;
- (id)pdrFenceTimer;
- (void)provider:(id)arg1 didUpdateDeviceWiFi:(id)arg2;
- (void)provider:(id)arg1 didUpdateMediaRoute:(id)arg2;
- (void)provider:(id)arg1 didUpdateNearbyDevices:(id)arg2;
- (id)proximityProvider;
- (id)queue;
- (void)restartLowLatencyMiLo:(bool)arg1;
- (id)serviceStore;
- (void)setAppInFocusWindowTimer:(id)arg1;
- (void)setAudioAVOutputContextController:(id)arg1;
- (void)setBiomeProvider:(id)arg1;
- (void)setContextObserver:(id)arg1;
- (void)setDisplayMonitor:(id)arg1;
- (void)setIsBiomeRegistered:(bool)arg1;
- (void)setMiloProvider:(id)arg1;
- (void)setMiloProviderLslPredictionResults:(id)arg1;
- (void)setNearbyDeviceContainer:(id)arg1;
- (void)setPdrFenceBridge:(id)arg1;
- (void)setPdrFenceTimer:(id)arg1;
- (void)setProximityProvider:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceStore:(id)arg1;
- (void)setSystemState:(id)arg1;
- (bool)startLowLatencyMiLo;
- (id)systemState;

@end