/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHBacklightOSInterfaceProvider : BLSHBacklightOSTimerProvider <BLSHBacklightOSInterfaceProviding, BLSHTransparentFlipbookProvider, BLSHWatchdogDelegate, BLSHWatchdogProviderDelegate, CBDisplayStateClientDelegate> {
    float  _backlightDimmedFactor;
    double  _caTransitionsDelayForTesting;
    double  _cbTransitionsDelayForTesting;
    BLSHCriticalAssertProvider * _criticalAssertProvider;
    bool  _deviceSupportsAlwaysOn;
    bool  _deviceSupportsAlwaysOnFlipbook;
    CBDisplayStateClient * _displayStateClient;
    bool  _displayStateClientSupported;
    CADisplayStateControl * _displayStateControl;
    <BLSDisplayStateDelegate> * _displayStateDelegate;
    unsigned long long  _flipbookDiagnosticHistoryFrameLimit;
    unsigned long long  _flipbookDiagnosticHistoryMemoryLimit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSHWatchdogInvalidatable> * _lock_CAWatchdogTimer;
    unsigned long long  _lock_CAWatchdogType;
    <BLSHWatchdogInvalidatable> * _lock_CBWatchdogTimer;
    unsigned long long  _lock_CBWatchdogType;
    long long  _lock_caDisplayState;
    long long  _lock_cbDisplayMode;
    long long  _lock_cbFlipbookState;
    bool  _lock_flipbookTransparent;
    bool  _lock_kernelSpecialMode;
    BLSHSuppressionEvent * _lock_lastSuppressionEvent;
    long long  _lock_notifiedCADisplayState;
    NSMutableDictionary * _lock_sceneObservers;
    NSMutableSet * _lock_sceneWorkspaces;
    bool  _lock_suppressionServiceActive;
    <BLSHBacklightPlatformProvider> * _platformProvider;
    BSContinuousMachTimer * _setCBDisplayModeTimer;
    CMSuppressionManager * _suppressionManager;
    BLSHWatchdogProvider * _watchdogProvider;
}

@property (nonatomic, readonly) long long caDisplayPowerState;
@property (nonatomic, readonly) long long caDisplayState;
@property (setter=setCATransitionsDelayForTesting:, nonatomic) double caTransitionsDelayForTesting; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long cbDisplayMode;
@property (nonatomic, readonly) long long cbFlipbookState;
@property (setter=setCBTransitionsDelayForTesting:, nonatomic) double cbTransitionsDelayForTesting; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceSupportsAlwaysOn;
@property (nonatomic, readonly) bool deviceSupportsAlwaysOnFlipbook;
@property (setter=setDisplayStateDelegate:, retain) <BLSDisplayStateDelegate> *displayStateDelegate;
@property (nonatomic, readonly) unsigned long long flipbookDiagnosticHistoryFrameLimit;
@property (nonatomic, readonly) unsigned long long flipbookDiagnosticHistoryMemoryLimit;
@property (getter=isFlipbookTransparent, nonatomic) bool flipbookTransparent;
@property (readonly) unsigned long long hash;
@property (getter=isKernelAlwaysOnMode, nonatomic) bool kernelAlwaysOnMode;
@property (nonatomic, readonly) BLSHSuppressionEvent *lastSuppressionEvent;
@property (nonatomic, readonly) unsigned long long mach_continuous_time;
@property (nonatomic, readonly) NSDate *now;
@property (getter=isShowingBlankingWindow, nonatomic, readonly) bool showingBlankingWindow;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFlipbookState;
@property (getter=isSuppressionServiceActive, nonatomic, readonly) bool suppressionServiceActive;
@property (getter=isTesting, nonatomic, readonly) bool testing; /* unknown property attribute: ? */

+ (void)setSharedProvider:(id)arg1;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)abortContextForTimer:(id)arg1;
- (void)abortForWatchdog:(unsigned long long)arg1 payload:(void*)arg2 payloadSize:(unsigned int)arg3 explanation:(id)arg4;
- (id)acquireDisplayPowerAssertionForReason:(long long)arg1;
- (id)addSceneObserver:(id)arg1 forSceneIdentityToken:(id)arg2;
- (long long)caDisplayPowerState;
- (long long)caDisplayState;
- (long long)cbDisplayMode;
- (long long)cbFlipbookState;
- (id)createDisplayPowerResourceHintWithState:(unsigned long long)arg1;
- (id)createFlipbook;
- (id)createPowerAssertionWithIdentifier:(id)arg1;
- (id)createSystemActivityAssertionWithIdentifier:(id)arg1 configurator:(id /* block */)arg2;
- (id)delegateQueue;
- (void)deregisterSceneWorkspace:(id)arg1;
- (bool)deviceSupportsAlwaysOn;
- (bool)deviceSupportsAlwaysOnFlipbook;
- (void)didCompleteSwitchToFlipbookState:(long long)arg1 withError:(id)arg2;
- (void)didCompleteTransitionToDisplayMode:(long long)arg1 withError:(id)arg2;
- (void)didDetectSignificantUserInteraction;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)arg1 identifier:(id)arg2 block:(id /* block */)arg3;
- (id)displayStateDelegate;
- (void)endSuppressionService;
- (unsigned long long)flipbookDiagnosticHistoryFrameLimit;
- (unsigned long long)flipbookDiagnosticHistoryMemoryLimit;
- (id)identifier;
- (id)initWithPlatformProvider:(id)arg1;
- (bool)isFlipbookTransparent;
- (bool)isKernelAlwaysOnMode;
- (bool)isShowingBlankingWindow;
- (bool)isSuppressionServiceActive;
- (bool)isTailspinAvailable;
- (id)lastSuppressionEvent;
- (id)observeSignificantTimeChangeWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)osInterfaceProvider;
- (void)panicForWatchdog:(id)arg1 withDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)registerHandlersForService:(id)arg1;
- (void)registerSceneWorkspace:(id)arg1;
- (id)removeSceneObserver:(id)arg1 forSceneIdentityToken:(id)arg2;
- (id)sceneWithIdentityToken:(id)arg1;
- (id)scheduleWatchdogWithDelegate:(id)arg1 explanation:(id)arg2 timeout:(double)arg3;
- (void)setCATransitionsDelayForTesting:(double)arg1;
- (void)setCBTransitionsDelayForTesting:(double)arg1;
- (void)setDisplayStateDelegate:(id)arg1;
- (void)setFlipbookTransparent:(bool)arg1;
- (void)setKernelAlwaysOnMode:(bool)arg1;
- (void)setShowingBlankingWindow:(bool)arg1 fadeDuration:(double)arg2;
- (void)startSuppressionServiceWithHandler:(id /* block */)arg1;
- (bool)supportsFlipbookState;
- (void)switchToFlipbookState:(long long)arg1;
- (id)systemSleepMonitor;
- (void)transitionToCADisplayState:(long long)arg1;
- (void)transitionToDisplayMode:(long long)arg1 withDuration:(double)arg2;
- (void)writeTailspinForWatchdog:(id)arg1 completion:(id /* block */)arg2;

@end