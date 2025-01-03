/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsageMonitor : NSObject {
    bool  _airplaneModeEnabled;
    AnalyticsProcessor * _analyticsProcessor;
    NSNumber * _bootToIPv4;
    NSNumber * _bootToIPv6;
    NSNumber * _bootToLastJoin;
    NSNumber * _bootToLastLinkUp;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _cellularFallbackEnabled;
    bool  _cellularOutrankingEnabled;
    bool  _companionConnected;
    bool  _compatibilityModeEnabled;
    void * _completionContext;
    id /* block */  _completionHandler;
    bool  _controlCenterEnabled;
    bool  _curBTAudioBand;
    NSString * _currentCellularStatus;
    WiFiUsageNetworkDetails * _currentNetworkDetails;
    bool  _detectedJoinAfterIPConfig;
    bool  _deviceCharging;
    bool  _deviceLocked;
    bool  _displayOn;
    WAMessage * _dummyWAMessage;
    id /* block */  _faultEventHandler;
    NSNumber * _firstUnlockToIPv4;
    NSNumber * _firstUnlockToIPv6;
    NSNumber * _firstUnlockToLastJoin;
    NSNumber * _firstUnlockToLastLinkUp;
    unsigned long long  _hidCount;
    WiFiUsageInterfaceStats * _ifStatsAtLastLqmUpdate;
    bool  _inActiveA2dp;
    bool  _inActiveAwdl;
    bool  _inActiveBiAoS;
    bool  _inActiveCall;
    bool  _inActiveRoam;
    bool  _inActiveScan;
    bool  _inActiveSco;
    bool  _inActiveUniAoS;
    bool  _inMediaPlayback;
    NSMutableDictionary * _interfaceLqmWindows;
    NSMutableDictionary * _interfacesCapabilities;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isAnyUsbInserted;
    bool  _isBSPActive;
    bool  _isSystemAwake;
    NSDate * _lastCallStarted;
    NSArray * _lastChannelInfoList;
    NSDate * _lastInCallAnalysis;
    NSNumber * _lastJoinToIPv4;
    NSNumber * _lastJoinToIPv6;
    NSNumber * _lastJoinToLastLinkUp;
    NSDate * _lastLQMAnalysisForSlowWiFiDNSFailureTime;
    NSNumber * _lastLinkUpToIPv4;
    NSNumber * _lastLinkUpToIPv6;
    NSDictionary * _lastScanData;
    NSDictionary * _lastScanRequest;
    NSString * _lastTDConfirmedDisplayStr;
    bool  _lastTDEvalConfirmed;
    bool  _lastTDEvalExecuted;
    NSString * _lastTDEvalStartedBy;
    NSMutableDictionary * _linkSessions;
    id /* block */  _lqmAnalysisCompletionHandler;
    NSString * _motionState;
    long long  _noiseDeltaUponUSBInsertion;
    unsigned long long  _numberOfJoins;
    NSMutableArray * _pendingLqmAnalysis;
    unsigned long long  _pid;
    bool  _poweredOn;
    bool  _privacyRestrictionDisabled;
    NSDate * _processInitTime;
    WiFiUsageRangingSession * _rangingSession;
    WiFiSoftError * _rnfSoftError;
    WiFiUsageInterfaceStats * _secondaryIfStatsAtLastLqmUpdate;
    NSString * _secondaryInterfaceName;
    long long  _tdLogic_badRssiThreshold;
    long long  _tdLogic_goodRssiThreshold;
    WiFiSoftError * _tdSoftError;
    NSDate * _timeOfFirstUnlockAfterBoot;
    NSDate * _timeOfIPv4;
    NSDate * _timeOfIPv6;
    NSDate * _timeOfLastJoin;
    NSDate * _timeOfLastLinkUp;
    NSMutableDictionary * _usageSessions;
    NSArray * _usbDevices;
    bool  _xctest;
    bool  _xctest_disableSampling;
}

@property bool airplaneModeEnabled;
@property (retain) AnalyticsProcessor *analyticsProcessor;
@property (retain) NSNumber *bootToIPv4;
@property (retain) NSNumber *bootToIPv6;
@property (retain) NSNumber *bootToLastJoin;
@property (retain) NSNumber *bootToLastLinkUp;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property bool cellularFallbackEnabled;
@property bool cellularOutrankingEnabled;
@property bool companionConnected;
@property (nonatomic) bool compatibilityModeEnabled;
@property void*completionContext;
@property (copy) id /* block */ completionHandler;
@property bool controlCenterEnabled;
@property bool curBTAudioBand;
@property (nonatomic, retain) NSString *currentCellularStatus;
@property (nonatomic, retain) WiFiUsageNetworkDetails *currentNetworkDetails;
@property bool detectedJoinAfterIPConfig;
@property bool deviceCharging;
@property bool deviceLocked;
@property bool displayOn;
@property (retain) WAMessage *dummyWAMessage;
@property (nonatomic, copy) id /* block */ faultEventHandler;
@property (retain) NSNumber *firstUnlockToIPv4;
@property (retain) NSNumber *firstUnlockToIPv6;
@property (retain) NSNumber *firstUnlockToLastJoin;
@property (retain) NSNumber *firstUnlockToLastLinkUp;
@property unsigned long long hidCount;
@property (retain) WiFiUsageInterfaceStats *ifStatsAtLastLqmUpdate;
@property bool inActiveA2dp;
@property bool inActiveAwdl;
@property bool inActiveBiAoS;
@property bool inActiveCall;
@property bool inActiveRoam;
@property bool inActiveScan;
@property bool inActiveSco;
@property bool inActiveUniAoS;
@property bool inMediaPlayback;
@property (retain) NSMutableDictionary *interfaceLqmWindows;
@property (retain) NSMutableDictionary *interfacesCapabilities;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool isAnyUsbInserted;
@property bool isBSPActive;
@property bool isSystemAwake;
@property (nonatomic, retain) NSDate *lastCallStarted;
@property (nonatomic, retain) NSArray *lastChannelInfoList;
@property (nonatomic, retain) NSDate *lastInCallAnalysis;
@property (retain) NSNumber *lastJoinToIPv4;
@property (retain) NSNumber *lastJoinToIPv6;
@property (retain) NSNumber *lastJoinToLastLinkUp;
@property (retain) NSDate *lastLQMAnalysisForSlowWiFiDNSFailureTime;
@property (retain) NSNumber *lastLinkUpToIPv4;
@property (retain) NSNumber *lastLinkUpToIPv6;
@property (nonatomic, retain) NSDictionary *lastScanData;
@property (nonatomic, retain) NSDictionary *lastScanRequest;
@property (nonatomic, retain) NSString *lastTDConfirmedDisplayStr;
@property bool lastTDEvalConfirmed;
@property bool lastTDEvalExecuted;
@property (nonatomic, retain) NSString *lastTDEvalStartedBy;
@property (retain) NSMutableDictionary *linkSessions;
@property (nonatomic, copy) id /* block */ lqmAnalysisCompletionHandler;
@property (nonatomic, retain) NSString *motionState;
@property (nonatomic) long long noiseDeltaUponUSBInsertion;
@property unsigned long long numberOfJoins;
@property (retain) NSMutableArray *pendingLqmAnalysis;
@property unsigned long long pid;
@property bool poweredOn;
@property (nonatomic) bool privacyRestrictionDisabled;
@property (nonatomic, retain) NSDate *processInitTime;
@property (retain) WiFiUsageRangingSession *rangingSession;
@property (retain) WiFiSoftError *rnfSoftError;
@property (retain) WiFiUsageInterfaceStats *secondaryIfStatsAtLastLqmUpdate;
@property (nonatomic, retain) NSString *secondaryInterfaceName;
@property (nonatomic) long long tdLogic_badRssiThreshold;
@property (nonatomic) long long tdLogic_goodRssiThreshold;
@property (retain) WiFiSoftError *tdSoftError;
@property (retain) NSDate *timeOfFirstUnlockAfterBoot;
@property (retain) NSDate *timeOfIPv4;
@property (retain) NSDate *timeOfIPv6;
@property (retain) NSDate *timeOfLastJoin;
@property (retain) NSDate *timeOfLastLinkUp;
@property (retain) NSMutableDictionary *usageSessions;
@property (nonatomic, retain) NSArray *usbDevices;
@property bool xctest;
@property bool xctest_disableSampling;

+ (id)LQMAnalysisReasonForFault:(unsigned long long)arg1;
+ (void)appendTDStateToDict:(id)arg1 from:(id)arg2;
+ (id)getTDConfirmedEventStringForDisplay:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; int x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; long long x16; })arg1;
+ (id)getTDEvalCompleteEventStringForDisplay:(int)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addFaultEvent:(unsigned long long)arg1 forInterface:(id)arg2;
- (void)addRangingRttSampleWithRssi:(long long)arg1 rtt:(long long)arg2 snr:(unsigned long long)arg3 flags:(unsigned long long)arg4 channel:(unsigned long long)arg5 coreId:(unsigned long long)arg6 bitErrorRate:(unsigned long long)arg7 phyError:(unsigned long long)arg8 andPeerSnr:(unsigned long long)arg9 andPeerCoreId:(unsigned long long)arg10 andPeerBitErrorRate:(unsigned long long)arg11 andPeerPhyError:(unsigned long long)arg12;
- (void)addSoftApClientEvent:(bool)arg1 identifier:(id)arg2 isAppleClient:(bool)arg3 isInstantHotspot:(bool)arg4 isAutoHotspot:(bool)arg5 isHidden:(bool)arg6;
- (void)addSoftApCoexEvent:(unsigned long long)arg1 deniedUnii1ChannelMap:(unsigned long long)arg2 deniedUnii2aChannelMap:(unsigned long long)arg3 deniedUnii2cChannelMap:(unsigned long long)arg4 deniedUnii3ChannelMap:(unsigned long long)arg5;
- (void)addTriggerDisconnectEvent:(id)arg1 isAlerted:(bool)arg2 isConfirmed:(bool)arg3 isExecuted:(bool)arg4;
- (bool)airplaneModeEnabled;
- (id)analyticsProcessor;
- (void)appendBTStatsToDict:(id)arg1;
- (void)appendUsbStatsToDict:(id)arg1;
- (id)bootToIPv4;
- (id)bootToIPv6;
- (id)bootToLastJoin;
- (id)bootToLastLinkUp;
- (void)brokenLinkDetected:(id)arg1;
- (id)callbackQueue;
- (id)canStartLQMAnalysisforTrigger:(id)arg1 andReason:(id)arg2 onWindow:(id)arg3;
- (bool)cellularFallbackEnabled;
- (bool)cellularOutrankingEnabled;
- (bool)companionConnected;
- (bool)compatibilityModeEnabled;
- (void*)completionContext;
- (id /* block */)completionHandler;
- (bool)controlCenterEnabled;
- (bool)curBTAudioBand;
- (id)currentCellularStatus;
- (id)currentNetworkDetails;
- (bool)detectedJoinAfterIPConfig;
- (bool)deviceCharging;
- (bool)deviceLocked;
- (bool)displayOn;
- (id)dummyWAMessage;
- (void)enableSubmitAnalyticsNoSampling:(bool)arg1;
- (void)enableXCTestNotifications;
- (void)faultEventDetected:(id)arg1;
- (id /* block */)faultEventHandler;
- (id)faultReasonCount:(unsigned long long)arg1 forInterface:(id)arg2;
- (id)firstUnlockToIPv4;
- (id)firstUnlockToIPv6;
- (id)firstUnlockToLastJoin;
- (id)firstUnlockToLastLinkUp;
- (void)getMobileAssets;
- (id)getProperty:(id)arg1 forAllSessionsOfInterface:(id)arg2;
- (unsigned long long)hidCount;
- (id)ifStatsAtLastLqmUpdate;
- (bool)inActiveA2dp;
- (bool)inActiveAwdl;
- (bool)inActiveBiAoS;
- (bool)inActiveCall;
- (bool)inActiveRoam;
- (bool)inActiveScan;
- (bool)inActiveSco;
- (bool)inActiveUniAoS;
- (bool)inMediaPlayback;
- (id)init;
- (void)initializeDeviceLockState:(bool)arg1 displayState:(bool)arg2 motionState:(id)arg3 callState:(bool)arg4 mediaState:(bool)arg5 chargingState:(bool)arg6 companionConnectionState:(bool)arg7 andSecondaryInterfaceName:(id)arg8 compatibilityMode:(bool)arg9 badLinkRssi:(long long)arg10 goodLinkRssi:(long long)arg11;
- (id)interfaceLqmWindows;
- (id)interfacesCapabilities;
- (id)internalQueue;
- (bool)isAnyUsbInserted;
- (bool)isBSPActive;
- (bool)isSystemAwake;
- (id)lastBssSessionInfoForInterface:(id)arg1;
- (id)lastCallStarted;
- (id)lastChannelInfoList;
- (id)lastInCallAnalysis;
- (id)lastJoinToIPv4;
- (id)lastJoinToIPv6;
- (id)lastJoinToLastLinkUp;
- (id)lastLQMAnalysisForSlowWiFiDNSFailureTime;
- (id)lastLinkUpToIPv4;
- (id)lastLinkUpToIPv6;
- (id)lastRangingSessionMetric;
- (id)lastScanData;
- (id)lastScanRequest;
- (id)lastTDConfirmedDisplayStr;
- (bool)lastTDEvalConfirmed;
- (bool)lastTDEvalExecuted;
- (id)lastTDEvalStartedBy;
- (id)linkSessions;
- (void)linkTestEvent:(id)arg1 withReason:(id)arg2 forInterface:(id)arg3;
- (id /* block */)lqmAnalysisCompletionHandler;
- (id)motionState;
- (long long)noiseDeltaUponUSBInsertion;
- (void)notifyDHCPChanges:(id)arg1;
- (void)notifyDriverAvailability:(id)arg1 available:(unsigned long long)arg2 version:(unsigned long long)arg3 flags:(unsigned long long)arg4 eventID:(unsigned long long)arg5 reason:(unsigned long long)arg6 subReason:(unsigned long long)arg7 minorReason:(unsigned long long)arg8 reasonString:(id)arg9;
- (void)notifyIPv4Changes:(id)arg1;
- (void)notifyIPv6Changes:(id)arg1;
- (void)notifyInterfaceRankingState:(bool)arg1 forInterface:(id)arg2;
- (void)notifyIpConfigurationStateWithMethod:(bool)arg1 dhcpLeaseDuration:(double)arg2 hasRoutableIpV4:(bool)arg3 hasRoutableIpV6:(bool)arg4;
- (void)notifyNetworkQualityResults:(id)arg1 forInterface:(id)arg2;
- (unsigned long long)numberOfJoins;
- (id)pendingLqmAnalysis;
- (unsigned long long)pid;
- (bool)poweredOn;
- (bool)privacyRestrictionDisabled;
- (id)processInitTime;
- (void)pushRNFEventToHUD:(bool)arg1;
- (void)pushTDEventToHUD:(id)arg1;
- (void)rangingCompletedWithValidCount:(unsigned long long)arg1 resultStatus:(long long)arg2 resultFlags:(unsigned long long)arg3;
- (id)rangingSession;
- (void)rangingSessionRequestedWithSelfPreferredChannel:(unsigned long long)arg1 selfMainChannel:(unsigned long long)arg2 selfChannelFlags:(unsigned long long)arg3 peerPreferredChannel:(unsigned long long)arg4 peerMainChannel:(unsigned long long)arg5 peerChannelFlags:(unsigned long long)arg6 requester:(id)arg7;
- (void)rangingStartedWithNumMeasurements:(unsigned long long)arg1;
- (void)receiveKernelLQMRollingWindow:(id)arg1 ForInterface:(id)arg2;
- (void)receivedBssTransitionRequest:(id)arg1 candidateListIncluded:(bool)arg2 isAbridged:(bool)arg3 disassociationImminent:(bool)arg4 bssTerminationIncluded:(bool)arg5 essDisassociationImminent:(bool)arg6;
- (void)resetDeviceSessionforInterface:(id)arg1;
- (id)rnfSoftError;
- (id)secondaryIfStatsAtLastLqmUpdate;
- (id)secondaryInterfaceName;
- (void)sendFaultToDB:(id)arg1;
- (void)sentBssTransitionResponse:(id)arg1 status:(long long)arg2 terminationDelayRequested:(bool)arg3;
- (void)setAirplaneModeEnabled:(bool)arg1;
- (void)setAnalyticsProcessor:(id)arg1;
- (void)setAwdlSequence:(id)arg1;
- (void)setAwdlState:(bool)arg1 inMode:(long long)arg2;
- (void)setBluetoothState:(bool)arg1 connectedDeviceCount:(unsigned long long)arg2 inA2dp:(bool)arg3 inSco:(bool)arg4 inUniAoS:(bool)arg5 inBiAoS:(bool)arg6 btAudioBand:(bool)arg7;
- (void)setBootToIPv4:(id)arg1;
- (void)setBootToIPv6:(id)arg1;
- (void)setBootToLastJoin:(id)arg1;
- (void)setBootToLastLinkUp:(id)arg1;
- (void)setCallState:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCellularDataStatus:(id)arg1 inAirplaneMode:(bool)arg2;
- (void)setCellularFallbackEnabled:(bool)arg1;
- (void)setCellularFallbackState:(bool)arg1 forInterface:(id)arg2;
- (void)setCellularOutrankingEnabled:(bool)arg1;
- (void)setCellularOutrankingState:(bool)arg1 forInterface:(id)arg2;
- (void)setCompanionConnected:(bool)arg1;
- (void)setCompanionConnectionState:(bool)arg1;
- (void)setCompatibilityModeEnabled:(bool)arg1;
- (void)setCompletionContext:(void*)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1 withContext:(void*)arg2 onQueue:(id)arg3;
- (void)setControlCenterEnabled:(bool)arg1;
- (void)setControlCenterState:(bool)arg1 withKnownLocation:(bool)arg2 forInterface:(id)arg3;
- (void)setCurBTAudioBand:(bool)arg1;
- (void)setCurrentApplicationName:(id)arg1 withAttributes:(id)arg2;
- (void)setCurrentCellularStatus:(id)arg1;
- (void)setCurrentNetworkDetails:(id)arg1;
- (void)setDetectedJoinAfterIPConfig:(bool)arg1;
- (void)setDeviceCharging:(bool)arg1;
- (void)setDeviceChargingState:(bool)arg1;
- (void)setDeviceInitializationFailureReason:(id)arg1 timeSinceBoot:(double)arg2;
- (void)setDeviceLockState:(bool)arg1;
- (void)setDeviceLocked:(bool)arg1;
- (void)setDisplayOn:(bool)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setDummyWAMessage:(id)arg1;
- (void)setFaultEventHandler:(id /* block */)arg1;
- (void)setFirstUnlockToIPv4:(id)arg1;
- (void)setFirstUnlockToIPv6:(id)arg1;
- (void)setFirstUnlockToLastJoin:(id)arg1;
- (void)setFirstUnlockToLastLinkUp:(id)arg1;
- (void)setForgetNetworkEvent:(id)arg1 forInterface:(id)arg2;
- (void)setHidCount:(unsigned long long)arg1;
- (void)setIfStatsAtLastLqmUpdate:(id)arg1;
- (void)setInActiveA2dp:(bool)arg1;
- (void)setInActiveAwdl:(bool)arg1;
- (void)setInActiveBiAoS:(bool)arg1;
- (void)setInActiveCall:(bool)arg1;
- (void)setInActiveRoam:(bool)arg1;
- (void)setInActiveScan:(bool)arg1;
- (void)setInActiveSco:(bool)arg1;
- (void)setInActiveUniAoS:(bool)arg1;
- (void)setInMediaPlayback:(bool)arg1;
- (void)setInterfaceLqmWindows:(id)arg1;
- (void)setInterfacesCapabilities:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setIsAnyUsbInserted:(bool)arg1;
- (void)setIsBSPActive:(bool)arg1;
- (void)setIsSystemAwake:(bool)arg1;
- (void)setJoinEvent:(bool)arg1 withReason:(unsigned long long)arg2 lastDisconnectReason:(unsigned long long)arg3 lastJoinFailure:(long long)arg4 andNetworkDetails:(id)arg5 forInterface:(id)arg6;
- (void)setLastCallStarted:(id)arg1;
- (void)setLastChannelInfoList:(id)arg1;
- (void)setLastInCallAnalysis:(id)arg1;
- (void)setLastJoinToIPv4:(id)arg1;
- (void)setLastJoinToIPv6:(id)arg1;
- (void)setLastJoinToLastLinkUp:(id)arg1;
- (void)setLastLQMAnalysisForSlowWiFiDNSFailureTime:(id)arg1;
- (void)setLastLinkUpToIPv4:(id)arg1;
- (void)setLastLinkUpToIPv6:(id)arg1;
- (void)setLastScanData:(id)arg1;
- (void)setLastScanRequest:(id)arg1;
- (void)setLastTDConfirmedDisplayStr:(id)arg1;
- (void)setLastTDEvalConfirmed:(bool)arg1;
- (void)setLastTDEvalExecuted:(bool)arg1;
- (void)setLastTDEvalStartedBy:(id)arg1;
- (void)setLinkEvent:(bool)arg1 isInvoluntary:(bool)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 forInterface:(id)arg6;
- (void)setLinkSessions:(id)arg1;
- (void)setLqmAnalysisCompletionHandler:(id /* block */)arg1;
- (void)setMediaState:(bool)arg1;
- (void)setMotionState:(id)arg1;
- (void)setNoiseDeltaUponUSBInsertion:(long long)arg1;
- (void)setNumberOfJoins:(unsigned long long)arg1;
- (void)setPendingLqmAnalysis:(id)arg1;
- (void)setPid:(unsigned long long)arg1;
- (void)setPowerBudget:(long long)arg1 andThermalIndex:(long long)arg2 forInterface:(id)arg3;
- (void)setPowerState:(bool)arg1 forInterface:(id)arg2;
- (void)setPoweredOn:(bool)arg1;
- (void)setPrivacyRestrictionDisabled:(bool)arg1;
- (void)setProcessInitTime:(id)arg1;
- (void)setRangingSession:(id)arg1;
- (void)setRnfSoftError:(id)arg1;
- (void)setRoamingARCriteria:(struct { bool x1; bool x2; bool x3; bool x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })arg1 forInterface:(id)arg2;
- (void)setRoamingConfiguration:(long long)arg1 withChannelList:(id)arg2 forInterface:(id)arg3;
- (void)setRoamingState:(bool)arg1 withReason:(unsigned long long)arg2 asString:(id)arg3 andStatus:(unsigned long long)arg4 asString:(id)arg5 andLatency:(unsigned long long)arg6 andRoamData:(id)arg7 andPingPongSequence:(id)arg8 forInterface:(id)arg9;
- (void)setScanningState:(bool)arg1 client:(unsigned long long)arg2 neighborBSS:(id)arg3 otherBSS:(id)arg4 withChannelInfoList:(id)arg5 withRequest:(id)arg6 forInterface:(id)arg7;
- (void)setSecondaryIfStatsAtLastLqmUpdate:(id)arg1;
- (void)setSecondaryInterfaceName:(id)arg1;
- (void)setSmartCoverState:(id)arg1;
- (void)setSoftApState:(bool)arg1 requester:(id)arg2 status:(id)arg3 changeReason:(id)arg4 channelNumber:(unsigned long long)arg5 countryCode:(unsigned long long)arg6 isHidden:(bool)arg7 isInfraConnected:(bool)arg8 isAwdlUp:(bool)arg9 lowPowerModeDuration:(double)arg10 compatibilityMode:(bool)arg11 requestToUpLatency:(double)arg12;
- (void)setSteeringRequest:(unsigned long long)arg1 preferredChannel:(unsigned long long)arg2 preferredBand:(int)arg3 preferredSSID:(id)arg4 targetSSIDDiffersFromCurrent:(bool)arg5 preferredBSS:(id)arg6 ssidIsSplit:(bool)arg7 transitionCandidates:(bool)arg8;
- (void)setSystemWakeState:(bool)arg1 wokenByWiFi:(bool)arg2;
- (void)setTdLogic_alertedBy:(int)arg1 forInterface:(id)arg2;
- (void)setTdLogic_badRssiThreshold:(long long)arg1;
- (void)setTdLogic_badRssiThreshold:(long long)arg1 goodRssiThreshold:(long long)arg2;
- (void)setTdLogic_decisionState:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; int x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; long long x16; })arg1 forInterface:(id)arg2;
- (void)setTdLogic_deferJoin:(unsigned long long)arg1 perBSSID:(unsigned long long)arg2;
- (void)setTdLogic_end:(int)arg1 evalTime:(double)arg2 rssi:(long long)arg3 roamTime:(double)arg4 forInterface:(id)arg5;
- (void)setTdLogic_execState:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; })arg1 forInterface:(id)arg2;
- (void)setTdLogic_fastTdState:(struct { unsigned long long x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; })arg1 forInterface:(id)arg2;
- (void)setTdLogic_goodRssiThreshold:(long long)arg1;
- (void)setTdLogic_waitForRoamTime:(double)arg1 forInterface:(id)arg2;
- (void)setTdSoftError:(id)arg1;
- (void)setTimeOfFirstUnlockAfterBoot:(id)arg1;
- (void)setTimeOfIPv4:(id)arg1;
- (void)setTimeOfIPv6:(id)arg1;
- (void)setTimeOfLastJoin:(id)arg1;
- (void)setTimeOfLastLinkUp:(id)arg1;
- (void)setUsageSessions:(id)arg1;
- (void)setUsbDevices:(id)arg1;
- (void)setUsbStatus:(bool)arg1 currentDevices:(id)arg2 currentNoiseDelta:(long long)arg3;
- (void)setXctest:(bool)arg1;
- (void)setXctest_disableSampling:(bool)arg1;
- (void)startLQMAnalysis:(id)arg1;
- (void)startMonitoringWiFiInterface:(id)arg1 withLinkSessionOnly:(bool)arg2;
- (bool)submitAnalytics:(id)arg1;
- (void)submitBootLatenciesToCA;
- (void)submitLqmToCA:(id)arg1 forInterface:(id)arg2;
- (void)submitScanResultWithNeighborBSS:(id)arg1 withOtherBSS:(id)arg2 withChannelInfoList:(id)arg3;
- (id)summaryForInterface:(id)arg1;
- (long long)tdLogic_badRssiThreshold;
- (long long)tdLogic_goodRssiThreshold;
- (id)tdSoftError;
- (id)timeOfFirstUnlockAfterBoot;
- (id)timeOfIPv4;
- (id)timeOfIPv6;
- (id)timeOfLastJoin;
- (id)timeOfLastLinkUp;
- (void)updateBeaconCache:(id)arg1 afterRoamAttempt:(id)arg2 whileCurrentBSSID:(id)arg3 forInterface:(id)arg4;
- (void)updateBeaconInfo:(id)arg1 andParsedIE:(id)arg2 forInterface:(id)arg3;
- (void)updateBssPerChannelWith:(id)arg1 into:(id)arg2 and:(id)arg3 withChannelInfoList:(id)arg4;
- (void)updateCurrentNetworkDetails:(id)arg1;
- (void)updateIsBSPActive:(bool)arg1;
- (void)updateKnownNetworksSupportingSeamless:(id)arg1 forBSS:(id)arg2 andSSID:(id)arg3 beaconCache:(id)arg4;
- (void)updateLQMWindowCriteria;
- (void)updateLinkQuality:(id)arg1 forInterface:(id)arg2 supportsLinkRecommendations:(bool)arg3;
- (void)updateLinkRecoveryDisabled:(bool)arg1;
- (void)updateLinkTestInterval:(unsigned long long)arg1;
- (void)updateRealTimeCoex:(bool)arg1 type:(unsigned long long)arg2 reasons:(id)arg3;
- (void)updateRoamCache:(id)arg1 forInterface:(id)arg2;
- (void)updateScanForwardStats:(id)arg1;
- (void)updateSleepPowerStats:(double)arg1 unassociatedDuration:(double)arg2 associatedDuration:(double)arg3 roamingDuration:(double)arg4;
- (void)updateWPSInfo:(id)arg1;
- (void)updateWithBspOverflowed:(bool)arg1 IsBSPActive:(bool)arg2 BspTimeToTST:(unsigned long long)arg3 BspSampleDurationMS:(unsigned long long)arg4 IsScanActiveBSP:(bool)arg5 IsP2PActiveBSP:(bool)arg6 BspTriggerCount:(unsigned long long)arg7 BspMutePercentage:(unsigned long long)arg8 BspMaxMuteMS:(unsigned long long)arg9 BspAvgMuteMS:(unsigned long long)arg10 BspErrorPercentage:(unsigned long long)arg11 BspTimeOutPercentageOfTriggers:(unsigned long long)arg12 BspRejectOrFailPercentageOfTriggers:(unsigned long long)arg13 bspMaxConsecutiveFails:(unsigned long long)arg14 supportsLinkRecommendation:(bool)arg15 forInterface:(id)arg16;
- (void)updateWithChQualScore:(unsigned long long)arg1 txLatencyScore:(unsigned long long)arg2 rxLatencyScore:(unsigned long long)arg3 txLossScore:(unsigned long long)arg4 rxLossScore:(unsigned long long)arg5 txLatencyP95:(unsigned long long)arg6 linkRecommendationFlags:(unsigned long long)arg7 rtTrafficStatus:(unsigned long long)arg8 forInterface:(id)arg9;
- (void)updateWithCompatibilityMode:(unsigned char)arg1;
- (void)updateWithMLORuntimeConfig:(struct { unsigned long long x1; int x2[3]; int x3; bool x4; })arg1 forInterface:(id)arg2;
- (void)updateWithRoamingSuppression:(unsigned char)arg1;
- (void)updateWowState:(bool)arg1 lpasState:(bool)arg2 lowPowerState:(bool)arg3 batterySaverState:(bool)arg4;
- (id)usageSessions;
- (id)usbDevices;
- (bool)xctest;
- (bool)xctest_disableSampling;

@end
