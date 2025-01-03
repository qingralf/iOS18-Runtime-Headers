/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreConnectionMetrics : NSObject {
    NSNumber * _attemptCount;
    NSString * _carrierName;
    NSNumber * _cca;
    NSNumber * _connectedSubflowCount;
    NSNumber * _connectionDelay;
    NSString * _connectionEdgeID;
    NSString * _connectionEdgeType;
    NSNumber * _connectionEstablishmentTimeMsec;
    NSNumber * _connectionFallbackReason;
    NSString * _connectionMethod;
    NSArray * _connectionMethodHistory;
    NSNumber * _connectionStartTimeToConnectionEstablishmentTimeMsec;
    NSNumber * _connectionStartTimeToDNSResolutionTimeMsec;
    NSNumber * _connectionStartTimeToTLSHandshakeTimeMsec;
    NSNumber * _dnsResolutionTime;
    NSNumber * _firstTxByteDelay;
    NSDictionary * _flowNetworkInterfaceType;
    NSNumber * _idsLastMessageDelay;
    NSNumber * _idsLastSocketDelay;
    NSNumber * _idsLastSocketOpenError;
    NSNumber * _isCaptive;
    NSNumber * _meanPing;
    NSNumber * _metricsCount;
    NSNumber * _pingCount;
    NSString * _policyId;
    NSString * _primarySubflowInterfaceName;
    NSString * _providerStyle;
    SiriCoreConnectionMetrics * _remoteMetrics;
    NSNumber * _rssi;
    NSNumber * _signalStrengthBars;
    NSNumber * _simSubscriptions;
    NSNumber * _snr;
    NSNumber * _subflowCount;
    NSDictionary * _subflowSwitchCounts;
    NSDictionary * _symptomsBasedNetworkQuality;
    NSDictionary * _tcpInfoMetricsByInterfaceName;
    NSNumber * _timeUntilFirstByteRead;
    NSNumber * _timeUntilOpen;
    NSNumber * _tlsHandshakeTimeMsec;
    NSString * _tlsVersion;
    NSNumber * _unacknowledgedPingCount;
    NSString * _wifiChannelInfo;
    NSString * _wifiPhyMode;
}

@property (nonatomic, copy) NSNumber *attemptCount;
@property (nonatomic, copy) NSString *carrierName;
@property (nonatomic, copy) NSNumber *cca;
@property (nonatomic, copy) NSNumber *connectedSubflowCount;
@property (nonatomic, copy) NSNumber *connectionDelay;
@property (nonatomic, copy) NSString *connectionEdgeID;
@property (nonatomic, copy) NSString *connectionEdgeType;
@property (nonatomic, copy) NSNumber *connectionEstablishmentTimeMsec;
@property (nonatomic, copy) NSNumber *connectionFallbackReason;
@property (nonatomic, copy) NSString *connectionMethod;
@property (nonatomic, copy) NSArray *connectionMethodHistory;
@property (nonatomic, copy) NSNumber *connectionStartTimeToConnectionEstablishmentTimeMsec;
@property (nonatomic, copy) NSNumber *connectionStartTimeToDNSResolutionTimeMsec;
@property (nonatomic, copy) NSNumber *connectionStartTimeToTLSHandshakeTimeMsec;
@property (nonatomic, copy) NSNumber *dnsResolutionTime;
@property (nonatomic, copy) NSNumber *firstTxByteDelay;
@property (nonatomic, copy) NSDictionary *flowNetworkInterfaceType;
@property (nonatomic, copy) NSNumber *idsLastMessageDelay;
@property (nonatomic, copy) NSNumber *idsLastSocketDelay;
@property (nonatomic, copy) NSNumber *idsLastSocketOpenError;
@property (nonatomic, copy) NSNumber *isCaptive;
@property (nonatomic, copy) NSNumber *meanPing;
@property (nonatomic, copy) NSNumber *metricsCount;
@property (nonatomic, copy) NSNumber *pingCount;
@property (nonatomic, copy) NSString *policyId;
@property (nonatomic, copy) NSString *primarySubflowInterfaceName;
@property (nonatomic, copy) NSString *providerStyle;
@property (nonatomic, retain) SiriCoreConnectionMetrics *remoteMetrics;
@property (nonatomic, copy) NSNumber *rssi;
@property (nonatomic, copy) NSNumber *signalStrengthBars;
@property (nonatomic, copy) NSNumber *simSubscriptions;
@property (nonatomic, copy) NSNumber *snr;
@property (nonatomic, copy) NSNumber *subflowCount;
@property (nonatomic, copy) NSDictionary *subflowSwitchCounts;
@property (nonatomic, copy) NSDictionary *symptomsBasedNetworkQuality;
@property (setter=setTCPInfoMetricsByInterfaceName:, nonatomic, copy) NSDictionary *tcpInfoMetricsByInterfaceName;
@property (nonatomic, copy) NSNumber *timeUntilFirstByteRead;
@property (nonatomic, copy) NSNumber *timeUntilOpen;
@property (nonatomic, copy) NSNumber *tlsHandshakeTimeMsec;
@property (nonatomic, copy) NSString *tlsVersion;
@property (nonatomic, copy) NSNumber *unacknowledgedPingCount;
@property (nonatomic, copy) NSString *wifiChannelInfo;
@property (nonatomic, copy) NSString *wifiPhyMode;

- (void).cxx_destruct;
- (void)_setConnectionMetricsFromNSPControlConnection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setConnectionMetricsTCPInfo:(id)arg1;
- (id)attemptCount;
- (id)carrierName;
- (id)cca;
- (id)connectedSubflowCount;
- (id)connectionDelay;
- (id)connectionEdgeID;
- (id)connectionEdgeType;
- (id)connectionEstablishmentTimeMsec;
- (id)connectionFallbackReason;
- (id)connectionMethod;
- (id)connectionMethodHistory;
- (id)connectionStartTimeToConnectionEstablishmentTimeMsec;
- (id)connectionStartTimeToDNSResolutionTimeMsec;
- (id)connectionStartTimeToTLSHandshakeTimeMsec;
- (id)dnsResolutionTime;
- (id)firstTxByteDelay;
- (id)flowNetworkInterfaceType;
- (id)getConnectionMetricsDescription;
- (id)idsLastMessageDelay;
- (id)idsLastSocketDelay;
- (id)idsLastSocketOpenError;
- (id)isCaptive;
- (id)meanPing;
- (id)metricsCount;
- (id)pingCount;
- (id)policyId;
- (id)primarySubflowInterfaceName;
- (id)providerStyle;
- (id)remoteMetrics;
- (id)rssi;
- (void)setAttemptCount:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setCca:(id)arg1;
- (void)setConnectedSubflowCount:(id)arg1;
- (void)setConnectionDelay:(id)arg1;
- (void)setConnectionEdgeID:(id)arg1;
- (void)setConnectionEdgeType:(id)arg1;
- (void)setConnectionEstablishmentTimeMsec:(id)arg1;
- (void)setConnectionFallbackReason:(id)arg1;
- (void)setConnectionMethod:(id)arg1;
- (void)setConnectionMethodHistory:(id)arg1;
- (void)setConnectionMetricsForIDS:(double)arg1 messageDelay:(double)arg2 openErrorCode:(unsigned long long)arg3;
- (void)setConnectionMetricsFromConnection:(id)arg1 isPop:(bool)arg2 isMPTCP:(bool)arg3 attemptedEndpoints:(id)arg4 completion:(id /* block */)arg5;
- (void)setConnectionMetricsFromNWConnectionForDirect:(id)arg1 isMPTCP:(bool)arg2 attemptedEndpoints:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)setConnectionMetricsFromNWConnectionForPOP:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setConnectionMetricsFromStream:(id)arg1 isPop:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setConnectionMetricsFromStreamForDirect:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setConnectionMetricsFromStreamForPOP:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setConnectionStartTimeToConnectionEstablishmentTimeMsec:(id)arg1;
- (void)setConnectionStartTimeToDNSResolutionTimeMsec:(id)arg1;
- (void)setConnectionStartTimeToTLSHandshakeTimeMsec:(id)arg1;
- (void)setDnsResolutionTime:(id)arg1;
- (void)setFirstTxByteDelay:(id)arg1;
- (void)setFlowNetworkInterfaceType:(id)arg1;
- (void)setIdsLastMessageDelay:(id)arg1;
- (void)setIdsLastSocketDelay:(id)arg1;
- (void)setIdsLastSocketOpenError:(id)arg1;
- (void)setIsCaptive:(id)arg1;
- (void)setMeanPing:(id)arg1;
- (void)setMetricsCount:(id)arg1;
- (void)setPingCount:(id)arg1;
- (void)setPolicyId:(id)arg1;
- (void)setPrimarySubflowInterfaceName:(id)arg1;
- (void)setProviderStyle:(id)arg1;
- (void)setRemoteMetrics:(id)arg1;
- (void)setRssi:(id)arg1;
- (void)setSignalStrengthBars:(id)arg1;
- (void)setSimSubscriptions:(id)arg1;
- (void)setSnr:(id)arg1;
- (void)setSubflowCount:(id)arg1;
- (void)setSubflowSwitchCounts:(id)arg1;
- (void)setSymptomsBasedNetworkQuality:(id)arg1;
- (void)setTCPInfoMetricsByInterfaceName:(id)arg1;
- (void)setTimeUntilFirstByteRead:(id)arg1;
- (void)setTimeUntilOpen:(id)arg1;
- (void)setTlsHandshakeTimeMsec:(id)arg1;
- (void)setTlsVersion:(id)arg1;
- (void)setUnacknowledgedPingCount:(id)arg1;
- (void)setWifiChannelInfo:(id)arg1;
- (void)setWifiPhyMode:(id)arg1;
- (id)signalStrengthBars;
- (id)simSubscriptions;
- (id)snr;
- (id)subflowCount;
- (id)subflowSwitchCounts;
- (id)symptomsBasedNetworkQuality;
- (id)tcpInfoMetricsByInterfaceName;
- (id)timeUntilFirstByteRead;
- (id)timeUntilOpen;
- (id)tlsHandshakeTimeMsec;
- (id)tlsVersion;
- (id)unacknowledgedPingCount;
- (id)wifiChannelInfo;
- (id)wifiPhyMode;

@end
