/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsageLQMUserSample : WiFiUsageLQMSample {
    unsigned long long  _beaconPer;
    unsigned long long  _bspAvgMuteMS;
    unsigned long long  _bspErrorPercentage;
    unsigned long long  _bspMaxConsecutiveFails;
    unsigned long long  _bspMaxMuteMS;
    unsigned long long  _bspMutePercentage;
    unsigned long long  _bspRejectOrFailPercentageOfTriggers;
    unsigned long long  _bspTimeOutPercentageOfTriggers;
    unsigned long long  _bspTimeToTST;
    unsigned long long  _bspTriggerCount;
    WiFiUsageBssDetails * _bssDetails;
    WiFiUsageInterfaceCapabilities * _capabilities;
    unsigned long long  _chanQualScore;
    unsigned long long  _decodingAttempts;
    long long  _diff_noise_core0;
    long long  _diff_noise_core1;
    long long  _diff_noisecore1_noisecore0;
    long long  _diff_rssi_core0;
    long long  _diff_rssi_core1;
    long long  _diff_rssicore1_rssicore0;
    unsigned long long  _driverRoamRecommended;
    unsigned long long  _driverTDrecommended;
    unsigned long long  _duration;
    NSString * _fgApp;
    NSString * _interfaceName;
    unsigned long long  _interference;
    bool  _isAnyAppInFG;
    bool  _isBSPActive;
    bool  _isFTactive;
    bool  _isP2PActiveBSP;
    bool  _isScanActiveBSP;
    bool  _isTimeSensitiveAppRunning;
    unsigned long long  _linkTheoreticalMaxRate;
    NSMutableArray * _mloSamples;
    NSString * _motionState;
    WiFiUsageNetworkDetails * _networkDetails;
    long long  _noise;
    long long  _noise_core0;
    long long  _noise_core1;
    unsigned long long  _otherCca;
    unsigned long long  _perCoreRssiInUse;
    long long  _rssi;
    long long  _rssi_core0;
    long long  _rssi_core1;
    unsigned long long  _rxBadPlcpOverDecodingAttemptsPercentage;
    unsigned long long  _rxBytes;
    unsigned long long  _rxBytesOverRxFrames;
    unsigned long long  _rxBytesOverRxL3Packets;
    unsigned long long  _rxBytesSecondary;
    unsigned long long  _rxCrsGlitchOverDecodingAttemptsPercentage;
    unsigned long long  _rxFrames;
    unsigned long long  _rxL3Packets;
    unsigned long long  _rxLatencyScore;
    unsigned long long  _rxLossScore;
    unsigned long long  _rxRate;
    unsigned long long  _rxRateOverDeviceTheoreticalMaxPercentage;
    unsigned long long  _rxRateOverLinkTheoreticalMaxPercentage;
    unsigned long long  _rxRetriesOverRxFrames;
    unsigned long long  _rxStartOverDecodingAttemptsPercentage;
    unsigned long long  _selfCca;
    long long  _snr;
    NSDate * _timestamp;
    unsigned long long  _totalReportedCca;
    unsigned long long  _trafficState;
    unsigned long long  _txBytes;
    unsigned long long  _txBytesOverTxFrames;
    unsigned long long  _txBytesOverTxL3Packets;
    unsigned long long  _txBytesSecondary;
    unsigned long long  _txFailsOverTxFrames;
    unsigned long long  _txFrames;
    unsigned long long  _txL3Packets;
    unsigned long long  _txLatencyP95;
    unsigned long long  _txLatencyScore;
    unsigned long long  _txLossScore;
    unsigned long long  _txMpduDensity;
    unsigned long long  _txRTS;
    unsigned long long  _txRTSFailOvertxRTS;
    unsigned long long  _txRate;
    unsigned long long  _txRateOverDeviceTheoreticalMaxPercentage;
    unsigned long long  _txRateOverLinkTheoreticalMaxPercentage;
    unsigned long long  _txRetriesOverTxFrames;
}

@property (nonatomic) unsigned long long beaconPer;
@property (nonatomic) unsigned long long bspAvgMuteMS;
@property (nonatomic) unsigned long long bspErrorPercentage;
@property (nonatomic) unsigned long long bspMaxConsecutiveFails;
@property (nonatomic) unsigned long long bspMaxMuteMS;
@property (nonatomic) unsigned long long bspMutePercentage;
@property (nonatomic) unsigned long long bspRejectOrFailPercentageOfTriggers;
@property (nonatomic) unsigned long long bspTimeOutPercentageOfTriggers;
@property (nonatomic) unsigned long long bspTimeToTST;
@property (nonatomic) unsigned long long bspTriggerCount;
@property (nonatomic, retain) WiFiUsageBssDetails *bssDetails;
@property (nonatomic, retain) WiFiUsageInterfaceCapabilities *capabilities;
@property (nonatomic) unsigned long long chanQualScore;
@property (nonatomic) unsigned long long decodingAttempts;
@property (nonatomic) long long diff_noise_core0;
@property (nonatomic) long long diff_noise_core1;
@property (nonatomic) long long diff_noisecore1_noisecore0;
@property (nonatomic) long long diff_rssi_core0;
@property (nonatomic) long long diff_rssi_core1;
@property (nonatomic) long long diff_rssicore1_rssicore0;
@property (nonatomic) unsigned long long driverRoamRecommended;
@property (nonatomic) unsigned long long driverTDrecommended;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, retain) NSString *fgApp;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) unsigned long long interference;
@property (nonatomic) bool isAnyAppInFG;
@property (nonatomic) bool isBSPActive;
@property (nonatomic) bool isFTactive;
@property (nonatomic) bool isP2PActiveBSP;
@property (nonatomic) bool isScanActiveBSP;
@property (nonatomic) bool isTimeSensitiveAppRunning;
@property (nonatomic) unsigned long long linkTheoreticalMaxRate;
@property (nonatomic, retain) NSMutableArray *mloSamples;
@property (nonatomic, retain) NSString *motionState;
@property (nonatomic, retain) WiFiUsageNetworkDetails *networkDetails;
@property (nonatomic) long long noise;
@property (nonatomic) long long noise_core0;
@property (nonatomic) long long noise_core1;
@property (nonatomic) unsigned long long otherCca;
@property (nonatomic) unsigned long long perCoreRssiInUse;
@property (nonatomic) long long rssi;
@property (nonatomic) long long rssi_core0;
@property (nonatomic) long long rssi_core1;
@property (nonatomic) unsigned long long rxBadPlcpOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxBytesOverRxFrames;
@property (nonatomic) unsigned long long rxBytesOverRxL3Packets;
@property (nonatomic) unsigned long long rxBytesSecondary;
@property (nonatomic) unsigned long long rxCrsGlitchOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxFrames;
@property (nonatomic) unsigned long long rxL3Packets;
@property (nonatomic) unsigned long long rxLatencyScore;
@property (nonatomic) unsigned long long rxLossScore;
@property (nonatomic) unsigned long long rxRate;
@property (nonatomic) unsigned long long rxRateOverDeviceTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long rxRateOverLinkTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long rxRetriesOverRxFrames;
@property (nonatomic) unsigned long long rxStartOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long selfCca;
@property (nonatomic) long long snr;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) unsigned long long totalReportedCca;
@property (nonatomic) unsigned long long trafficState;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txBytesOverTxFrames;
@property (nonatomic) unsigned long long txBytesOverTxL3Packets;
@property (nonatomic) unsigned long long txBytesSecondary;
@property (nonatomic) unsigned long long txFailsOverTxFrames;
@property (nonatomic) unsigned long long txFrames;
@property (nonatomic) unsigned long long txL3Packets;
@property (nonatomic) unsigned long long txLatencyP95;
@property (nonatomic) unsigned long long txLatencyScore;
@property (nonatomic) unsigned long long txLossScore;
@property (nonatomic) unsigned long long txMpduDensity;
@property (nonatomic) unsigned long long txRTS;
@property (nonatomic) unsigned long long txRTSFailOvertxRTS;
@property (nonatomic) unsigned long long txRate;
@property (nonatomic) unsigned long long txRateOverDeviceTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long txRateOverLinkTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long txRetriesOverTxFrames;

+ (id)allLQMProperties;
+ (id)featureFromFieldName:(id)arg1;

- (void).cxx_destruct;
- (void)appendBSSDetailsToDict:(id)arg1;
- (void)appendNetworkDetailsToDict:(id)arg1;
- (id)asDictionaryInto:(id)arg1;
- (unsigned long long)beaconPer;
- (unsigned long long)bspAvgMuteMS;
- (unsigned long long)bspErrorPercentage;
- (unsigned long long)bspMaxConsecutiveFails;
- (unsigned long long)bspMaxMuteMS;
- (unsigned long long)bspMutePercentage;
- (unsigned long long)bspRejectOrFailPercentageOfTriggers;
- (unsigned long long)bspTimeOutPercentageOfTriggers;
- (unsigned long long)bspTimeToTST;
- (unsigned long long)bspTriggerCount;
- (id)bssDetails;
- (id)capabilities;
- (unsigned long long)chanQualScore;
- (unsigned long long)decodingAttempts;
- (id)description;
- (long long)diff_noise_core0;
- (long long)diff_noise_core1;
- (long long)diff_noisecore1_noisecore0;
- (long long)diff_rssi_core0;
- (long long)diff_rssi_core1;
- (long long)diff_rssicore1_rssicore0;
- (unsigned long long)driverRoamRecommended;
- (unsigned long long)driverTDrecommended;
- (unsigned long long)duration;
- (id)fgApp;
- (id)initWithInterfaceName:(id)arg1;
- (id)interfaceName;
- (unsigned long long)interference;
- (bool)isAnyAppInFG;
- (bool)isBSPActive;
- (bool)isBspSampleDurationExpected:(unsigned long long)arg1;
- (bool)isFTactive;
- (bool)isP2PActiveBSP;
- (bool)isScanActiveBSP;
- (bool)isTimeSensitiveAppRunning;
- (unsigned long long)linkTheoreticalMaxRate;
- (id)mloSamples;
- (id)motionState;
- (id)networkDetails;
- (long long)noise;
- (long long)noise_core0;
- (long long)noise_core1;
- (unsigned long long)otherCca;
- (unsigned long long)perCoreRssiInUse;
- (void)populateWithBspOverflowed:(bool)arg1 IsBSPActive:(bool)arg2 BspTimeToTST:(unsigned long long)arg3 BspSampleDurationMS:(unsigned long long)arg4 IsScanActiveBSP:(bool)arg5 IsP2PActiveBSP:(bool)arg6 BspTriggerCount:(unsigned long long)arg7 BspMutePercentage:(unsigned long long)arg8 BspMaxMuteMS:(unsigned long long)arg9 BspAvgMuteMS:(unsigned long long)arg10 BspErrorPercentage:(unsigned long long)arg11 BspTimeOutPercentageOfTriggers:(unsigned long long)arg12 BspRejectOrFailPercentageOfTriggers:(unsigned long long)arg13 BspMaxConsecutiveFails:(unsigned long long)arg14;
- (void)populateWithMotionState:(id)arg1 andAppState:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg2;
- (void)populateWithPerMLOLinkStats:(struct apple_mlo_link_lqm { unsigned char x1; struct AppleChannelSpec_t { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 3; unsigned int x_2_1_3 : 3; unsigned int x_2_1_4 : 2; } x2; struct ether_addr { unsigned char x_3_1_1[6]; } x3; BOOL x4[2]; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg1;
- (void)populateWithRssi:(long long)arg1 noise:(long long)arg2 snr:(long long)arg3 selfCca:(unsigned long long)arg4 otherCca:(unsigned long long)arg5 interference:(unsigned long long)arg6 totalReportedCca:(unsigned long long)arg7 beaconPer:(unsigned long long)arg8 rxCrsGlitch:(unsigned long long)arg9 rxBadPLCP:(unsigned long long)arg10 rxStart:(unsigned long long)arg11 sampleDuration:(unsigned long long)arg12;
- (void)populateWithRssi:(long long)arg1 rssi0:(long long)arg2 rssi1:(long long)arg3 rssiMode:(unsigned long long)arg4 noise:(long long)arg5 noise0:(long long)arg6 noise1:(long long)arg7 snr:(long long)arg8 selfCca:(unsigned long long)arg9 otherCca:(unsigned long long)arg10 interference:(unsigned long long)arg11 totalReportedCca:(unsigned long long)arg12 beaconPer:(unsigned long long)arg13 rxCrsGlitch:(unsigned long long)arg14 rxBadPLCP:(unsigned long long)arg15 rxStart:(unsigned long long)arg16 rxBphyCrsGlitch:(unsigned long long)arg17 rxBphyBadPLCP:(unsigned long long)arg18 sampleDuration:(unsigned long long)arg19;
- (void)populateWithTxFrames:(unsigned long long)arg1 RxFrames:(unsigned long long)arg2 TxFails:(unsigned long long)arg3 TxRetries:(unsigned long long)arg4 RxRetries:(unsigned long long)arg5 TxRate:(unsigned long long)arg6 RxRate:(unsigned long long)arg7 txRTS:(unsigned long long)arg8 txRTSFail:(unsigned long long)arg9 txMpdu:(unsigned long long)arg10 txAMPDU:(unsigned long long)arg11;
- (long long)rssi;
- (long long)rssiForTD;
- (long long)rssi_core0;
- (long long)rssi_core1;
- (unsigned long long)rxBadPlcpOverDecodingAttemptsPercentage;
- (unsigned long long)rxBytes;
- (unsigned long long)rxBytesOverRxFrames;
- (unsigned long long)rxBytesOverRxL3Packets;
- (unsigned long long)rxBytesSecondary;
- (unsigned long long)rxCrsGlitchOverDecodingAttemptsPercentage;
- (unsigned long long)rxFrames;
- (unsigned long long)rxL3Packets;
- (unsigned long long)rxLatencyScore;
- (unsigned long long)rxLossScore;
- (unsigned long long)rxRate;
- (unsigned long long)rxRateOverDeviceTheoreticalMaxPercentage;
- (unsigned long long)rxRateOverLinkTheoreticalMaxPercentage;
- (unsigned long long)rxRetriesOverRxFrames;
- (unsigned long long)rxStartOverDecodingAttemptsPercentage;
- (unsigned long long)selfCca;
- (void)setBeaconPer:(unsigned long long)arg1;
- (void)setBspAvgMuteMS:(unsigned long long)arg1;
- (void)setBspErrorPercentage:(unsigned long long)arg1;
- (void)setBspMaxConsecutiveFails:(unsigned long long)arg1;
- (void)setBspMaxMuteMS:(unsigned long long)arg1;
- (void)setBspMutePercentage:(unsigned long long)arg1;
- (void)setBspRejectOrFailPercentageOfTriggers:(unsigned long long)arg1;
- (void)setBspTimeOutPercentageOfTriggers:(unsigned long long)arg1;
- (void)setBspTimeToTST:(unsigned long long)arg1;
- (void)setBspTriggerCount:(unsigned long long)arg1;
- (void)setBssDetails:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setChanQualScore:(unsigned long long)arg1;
- (void)setDecodingAttempts:(unsigned long long)arg1;
- (void)setDiff_noise_core0:(long long)arg1;
- (void)setDiff_noise_core1:(long long)arg1;
- (void)setDiff_noisecore1_noisecore0:(long long)arg1;
- (void)setDiff_rssi_core0:(long long)arg1;
- (void)setDiff_rssi_core1:(long long)arg1;
- (void)setDiff_rssicore1_rssicore0:(long long)arg1;
- (void)setDriverRoamRecommended:(unsigned long long)arg1;
- (void)setDriverTDrecommended:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setFgApp:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInterference:(unsigned long long)arg1;
- (void)setIsAnyAppInFG:(bool)arg1;
- (void)setIsBSPActive:(bool)arg1;
- (void)setIsFTactive:(bool)arg1;
- (void)setIsP2PActiveBSP:(bool)arg1;
- (void)setIsScanActiveBSP:(bool)arg1;
- (void)setIsTimeSensitiveAppRunning:(bool)arg1;
- (void)setLinkTheoreticalMaxRate:(unsigned long long)arg1;
- (void)setMloSamples:(id)arg1;
- (void)setMotionState:(id)arg1;
- (void)setNetworkDetails:(id)arg1;
- (void)setNoise:(long long)arg1;
- (void)setNoise_core0:(long long)arg1;
- (void)setNoise_core1:(long long)arg1;
- (void)setOtherCca:(unsigned long long)arg1;
- (void)setPerCoreRssiInUse:(unsigned long long)arg1;
- (void)setRssi:(long long)arg1;
- (void)setRssi_core0:(long long)arg1;
- (void)setRssi_core1:(long long)arg1;
- (void)setRxBadPlcpOverDecodingAttemptsPercentage:(unsigned long long)arg1;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setRxBytesOverRxFrames:(unsigned long long)arg1;
- (void)setRxBytesOverRxL3Packets:(unsigned long long)arg1;
- (void)setRxBytesSecondary:(unsigned long long)arg1;
- (void)setRxCrsGlitchOverDecodingAttemptsPercentage:(unsigned long long)arg1;
- (void)setRxFrames:(unsigned long long)arg1;
- (void)setRxL3Packets:(unsigned long long)arg1;
- (void)setRxLatencyScore:(unsigned long long)arg1;
- (void)setRxLossScore:(unsigned long long)arg1;
- (void)setRxRate:(unsigned long long)arg1;
- (void)setRxRateOverDeviceTheoreticalMaxPercentage:(unsigned long long)arg1;
- (void)setRxRateOverLinkTheoreticalMaxPercentage:(unsigned long long)arg1;
- (void)setRxRetriesOverRxFrames:(unsigned long long)arg1;
- (void)setRxStartOverDecodingAttemptsPercentage:(unsigned long long)arg1;
- (void)setSelfCca:(unsigned long long)arg1;
- (void)setSnr:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTotalReportedCca:(unsigned long long)arg1;
- (void)setTrafficState:(unsigned long long)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (void)setTxBytesOverTxFrames:(unsigned long long)arg1;
- (void)setTxBytesOverTxL3Packets:(unsigned long long)arg1;
- (void)setTxBytesSecondary:(unsigned long long)arg1;
- (void)setTxFailsOverTxFrames:(unsigned long long)arg1;
- (void)setTxFrames:(unsigned long long)arg1;
- (void)setTxL3Packets:(unsigned long long)arg1;
- (void)setTxLatencyP95:(unsigned long long)arg1;
- (void)setTxLatencyScore:(unsigned long long)arg1;
- (void)setTxLossScore:(unsigned long long)arg1;
- (void)setTxMpduDensity:(unsigned long long)arg1;
- (void)setTxRTS:(unsigned long long)arg1;
- (void)setTxRTSFailOvertxRTS:(unsigned long long)arg1;
- (void)setTxRate:(unsigned long long)arg1;
- (void)setTxRateOverDeviceTheoreticalMaxPercentage:(unsigned long long)arg1;
- (void)setTxRateOverLinkTheoreticalMaxPercentage:(unsigned long long)arg1;
- (void)setTxRetriesOverTxFrames:(unsigned long long)arg1;
- (long long)snr;
- (id)timestamp;
- (unsigned long long)totalReportedCca;
- (unsigned long long)trafficState;
- (unsigned long long)txBytes;
- (unsigned long long)txBytesOverTxFrames;
- (unsigned long long)txBytesOverTxL3Packets;
- (unsigned long long)txBytesSecondary;
- (unsigned long long)txFailsOverTxFrames;
- (unsigned long long)txFrames;
- (unsigned long long)txL3Packets;
- (unsigned long long)txLatencyP95;
- (unsigned long long)txLatencyScore;
- (unsigned long long)txLossScore;
- (unsigned long long)txMpduDensity;
- (unsigned long long)txRTS;
- (unsigned long long)txRTSFailOvertxRTS;
- (unsigned long long)txRate;
- (unsigned long long)txRateOverDeviceTheoreticalMaxPercentage;
- (unsigned long long)txRateOverLinkTheoreticalMaxPercentage;
- (unsigned long long)txRetriesOverTxFrames;
- (void)updateWithChQualScore:(unsigned long long)arg1 txLatencyScore:(unsigned long long)arg2 rxLatencyScore:(unsigned long long)arg3 txLossScore:(unsigned long long)arg4 rxLossScore:(unsigned long long)arg5 txLatencyP95:(unsigned long long)arg6 linkRecommendationFlags:(unsigned long long)arg7 rtTrafficStatus:(unsigned long long)arg8;
- (void)updateWithInterfaceCapabilities:(id)arg1 AndNetworkDetails:(id)arg2;
- (void)updateWithTxBytes:(unsigned long long)arg1 RxBytes:(unsigned long long)arg2 TxL3Packets:(unsigned long long)arg3 RxL3Packets:(unsigned long long)arg4 txBytesSecondary:(unsigned long long)arg5 rxBytesSecondary:(unsigned long long)arg6;

@end
