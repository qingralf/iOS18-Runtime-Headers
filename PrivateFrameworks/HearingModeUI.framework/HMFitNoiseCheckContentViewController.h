/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeUI.framework/HearingModeUI
 */

@interface HMFitNoiseCheckContentViewController : HMHearingTitle2BaseWelcomeController {
    NSString * _addressOrUUID;
    CXCallObserver * _callObserver;
    UIBarButtonItem * _cancelButton;
    unsigned long long  _currentStep;
    bool  _debugMode;
    BluetoothDevice * _device;
    float  _fitCheckConfidenceThreshold;
    unsigned int  _fitCheckFailureCount;
    bool  _fitCheckOngoing;
    NSDictionary * _fitCheckResultDict;
    unsigned long long  _fitCheckResultLeft;
    unsigned long long  _fitCheckResultOverall;
    unsigned long long  _fitCheckResultRight;
    float  _fitCheckSealThresholdBad;
    float  _fitCheckSealThresholdGood;
    unsigned int  _fitCheckTimerOngoing;
    <FitNoiseCheckDelegate> * _fitNoiseCheckDelegate;
    bool  _fitNoiseCheckOngoing;
    unsigned long long  _fitNoiseCheckResult;
    _TtC13HearingModeUI22HMFitNoiseCheckTopView * _fitNoiseCheckTopView;
    OBHeaderAccessoryButton * _headerAccessorybutton;
    OBTrayButton * _mainButton;
    bool  _noiseCheckOngoing;
    unsigned long long  _noiseCheckResult;
    _TtC13HearingModeUI19HMNoiseCheckService * _noiseCheckService;
    AVAudioPlayer * _player;
    UILabel * _resultDetailLabel;
    id  _systemVolumeObserver;
    float  _volumeBeforeFitCheck;
    bool  _volumeChanged;
}

@property (nonatomic) <FitNoiseCheckDelegate> *fitNoiseCheckDelegate;

+ (id)fitNoiseCheckTopTestingView;

- (void).cxx_destruct;
- (bool)_forceNoiseCheckNudging;
- (void)analyzeResult;
- (bool)audioRouteActive;
- (void)audioRouteChangedHandler:(id)arg1;
- (bool)budsInEar;
- (id)bulletedListLinkButton;
- (bool)callActive;
- (void)callCancelledHandler;
- (void)callCompletionHandlerWithStaus:(unsigned long long)arg1;
- (void)cancelFitNoiseCheck;
- (unsigned long long)categorizeFitCheckResultBud:(float)arg1;
- (unsigned long long)categorizeFitCheckResultWithLeftBud:(float)arg1 rightBud:(float)arg2;
- (void)clearDebugView;
- (void)deviceDisconnectionHandler:(id)arg1;
- (void)fitCheckStopped;
- (id)fitNoiseCheckDelegate;
- (void)generateFitCheckResult;
- (void)generateNoiseCheckResult:(long long)arg1;
- (id)getResultString:(unsigned long long)arg1;
- (id)getStepString:(unsigned long long)arg1;
- (float)getTargetVolume;
- (void)inEarStatusChangedHandler:(id)arg1;
- (id)initWithDeviceAddress:(id)arg1;
- (void)interruptionHandler:(id)arg1;
- (bool)isDebugModeEnabled;
- (bool)isForcedIgnoreFitCheckResultFromBuds;
- (void)mainButtonTapped;
- (void)moveToStep:(unsigned long long)arg1;
- (void)resetVolume;
- (bool)ringtoneActive;
- (void)sealValueChangedHandler:(id)arg1;
- (void)setFitNoiseCheckDelegate:(id)arg1;
- (void)setupButtonTray;
- (void)setupConstraints;
- (void)setupContentView;
- (void)setupDebugView;
- (void)setupNotifications;
- (void)setupPlayer;
- (void)showAirpodsFitSuggestionsController;
- (void)showDebugResult;
- (void)showImproveDisclosure;
- (void)startFitCheck;
- (void)startNoiseCheck;
- (void)startNoiseCheckNudging;
- (void)startPreCheck;
- (void)startVolumeObserver;
- (void)stopFitNoiseCheck;
- (void)stopNoiseCheck;
- (void)stopVolumeObserver;
- (void)udpateFitCheckThresholds;
- (void)updateFitCheckResult:(id)arg1;
- (void)updateForcedCheckResult;
- (void)updateHeaderButton:(id)arg1;
- (void)updateUIForFitCheckReady;
- (void)updateUIForFitCheckRetry;
- (void)updateUIForFitCheckTutorial;
- (void)updateUIForNoiseCheckNudgingStart;
- (void)updateUIForNoiseCheckNudgingStop;
- (void)updateUIForOngoingFitCheck;
- (void)updateUIForOngoingNoiseCheck;
- (void)updateUIForResultFail;
- (void)updateUIForResultPass;
- (void)updateVolume;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
