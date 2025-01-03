/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeDeviceSetup.framework/HomeDeviceSetup
 */

@interface HDSSetupService : NSObject <SUControllerManagerDelegate, SignpostProviding> {
    bool  _activateCalled;
    bool  _advertiseFast;
    double  _amsOptimizationSecs;
    unsigned long long  _amsOptimizationStartTicks;
    NSData * _apcCapData;
    APCPlayer * _apcPlayer;
    CUAudioPlayer * _audioPlayer;
    bool  _canCompanionShowHomePodSU;
    SFDeviceOperationHandlerCNJSetup * _captiveNetworkHandler;
    SFDeviceOperationHandlerCDPSetup * _cdpSetupHandler;
    RPCompanionLinkClient * _companionLinkClient;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _errorForScanSUNoSetup;
    NSDate * _estFinishTimeSUNoSetup;
    double  _estTimeRemainingSUNoSetup;
    NSObject<OS_dispatch_source> * _finishApplyTimer;
    bool  _finishSessionEnded;
    NSObject<OS_dispatch_source> * _finishTimeoutTimer;
    bool  _finished;
    bool  _finished2;
    bool  _finishedEventSent;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    HMHomeManager * _homeManager;
    int  _homePodSUNoSetupState;
    int  _iTunesCloudCompleteToken;
    bool  _iTunesCloudCompleted;
    double  _iTunesCloudWaitSeconds;
    ICCloudClient * _icClient;
    bool  _identifyB238AsB520;
    bool  _invalidateCalled;
    NSString * _languageCode;
    NSString * _localeIdentifier;
    bool  _mediaSystemReady;
    double  _mediaSystemWaitSeconds;
    unsigned long long  _peerFeatureFlags;
    bool  _prefCDPEnabled;
    id /* block */  _progressHandler;
    bool  _scanFoundSUForSUNoSetup;
    NSObject<OS_dispatch_semaphore> * _semaForScanFoundSU;
    SFClient * _sfClient;
    SFService * _sfService;
    SFSession * _sfSession;
    bool  _shouldSetupAgentPlayBootTone;
    SFSiriClient * _siriClient;
    bool  _siriDataSharingDeviceIsValid;
    int  _siriDataSharingState;
    bool  _siriDidDeviceSetup;
    bool  _siriDisabled;
    SFSiriDeviceSetupGreetingDetails * _siriGreetingDetails;
    NSString * _siriListenLanguage;
    long long  _siriVoiceGender;
    NSString * _siriVoiceLanguage;
    NSString * _siriVoiceName;
    SUControllerManager * _suControllerManager;
    long long  _suUpdateState;
    SysDropService * _sysDropService;
    NSString * _temperatureUnit;
    int  _timeAuto;
    long long  _timeCycle;
    NSDate * _timeObj;
    NSString * _timeZone;
    int  _timeZoneAuto;
    SUICDefaultVoicePreviewer * _voicePreviewer;
    NSObject<OS_dispatch_queue> * _wifiDispatchQueue;
    struct __WiFiManagerClient { } * _wifiManager;
    bool  _wifiSetupEnabled;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (readonly) unsigned long long signpostID;
@property (nonatomic, retain) SUControllerManager *suControllerManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) SysDropService *sysDropService;

+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_activate;
- (void)_boostiTunesCloudDaemon;
- (void)_cleanup;
- (void)_handleAMSTokenImportActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleAuthActionAudioPasscodeInit:(id)arg1 response:(id)arg2;
- (void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg1;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleAuthActionSiriInit:(id)arg1;
- (void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(id /* block */)arg3;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleBasicConfigResponse:(id)arg1;
- (void)_handleCheckHomePodForJS:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleDeviceActivationRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishApply:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishDone2:(unsigned int)arg1 responseHandler:(id /* block */)arg2;
- (bool)_handleFinishDone2Ready;
- (void)_handleFinishDone:(unsigned int)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePurgeSUNoSetup:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleSUNoSetupScanRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_handleStartSysDrop:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleStartSysDropEnablementProfileTransfer:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleVoicePreviewRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidate;
- (void)_playReadyToSetupSound;
- (void)_printBitMask:(long long)arg1;
- (void)_runHomeKitSetupMode:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_setSiriInfo;
- (void)_sfServiceStart;
- (void)activate;
- (bool)canSendPeerUpdates;
- (void)configureSUControllerManagerToFinish;
- (void)connectionRegained:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (int)hdsSUStateForSUState;
- (bool)homePodNeedsSUNoSetup;
- (id)init;
- (id)installProfileData:(id)arg1;
- (void)invalidate;
- (bool)isHomePodSUNoSetup;
- (void)manager:(id)arg1 connectionError:(id)arg2;
- (void)manager:(id)arg1 didChangeProgressOnApply:(id)arg2 progress:(id)arg3;
- (void)manager:(id)arg1 didChangeProgressOnDownload:(id)arg2;
- (void)manager:(id)arg1 didFailDownload:(id)arg2 withError:(id)arg3;
- (void)manager:(id)arg1 didFailInstallation:(id)arg2 withError:(id)arg3;
- (void)manager:(id)arg1 didFinishDownload:(id)arg2;
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4;
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4 denialReasons:(id)arg5;
- (void)manager:(id)arg1 didFinishInstallation:(id)arg2;
- (void)manager:(id)arg1 scanRequestDidLocateUpdate:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 scanRequestPostponed:(id)arg2 error:(id)arg3;
- (id /* block */)progressHandler;
- (void)removeSysDropProfile;
- (void)sendSUNoSetupErrorPeerEvent:(long long)arg1;
- (void)sendSUNoSetupSUInstallDonePeerEvent;
- (void)sendSUNoSetupSUStatusPeerEvent;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setSuControllerManager:(id)arg1;
- (void)setSysDropService:(id)arg1;
- (unsigned long long)signpostID;
- (id)suControllerManager;
- (id)sysDropService;
- (void)wipeWifiConfig;

@end
