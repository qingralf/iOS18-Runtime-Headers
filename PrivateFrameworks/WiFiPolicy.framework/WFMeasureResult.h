/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WFMeasureResult : NSObject <NSCopying> {
    bool  _backhaulResultsValid;
    double  _backhaulThroughput;
    bool  _dnsResultsValid;
    NSMutableSet * _dnsServers;
    bool  _dnsSuccess;
    NSError * _downloadError;
    NSString * _gatewayAddress;
    long long  _gatewayMaxRTT;
    long long  _gatewayMinRTT;
    long long  _gatewayPacketLoss;
    bool  _gatewayResultsValid;
    long long  _localDNSMaxRTT;
    long long  _localDNSMinRTT;
    long long  _localDNSPacketLoss;
    bool  _localResultsValid;
    unsigned long long  _options;
    long long  _publicDNSMaxRTT;
    long long  _publicDNSMinRTT;
    long long  _publicDNSPacketLoss;
    bool  _publicResultsValid;
    bool  _seenSpecificAcFailure;
    bool  _siriACEResultsValid;
    bool  _siriACESuccess;
    bool  _siriTCPResultsValid;
    bool  _siriTCPSuccess;
    bool  _siriTLSResultsValid;
    bool  _siriTLSSuccess;
    long long  _siriTrafficClass;
    long long  _trafficClassBEAttemptedLarge;
    long long  _trafficClassBEAttemptedSmall;
    long long  _trafficClassBESucceededLarge;
    long long  _trafficClassBESucceededSmall;
    long long  _trafficClassBKAttemptedLarge;
    long long  _trafficClassBKAttemptedSmall;
    long long  _trafficClassBKSucceededLarge;
    long long  _trafficClassBKSucceededSmall;
    long long  _trafficClassVIAttemptedLarge;
    long long  _trafficClassVIAttemptedSmall;
    long long  _trafficClassVISucceededLarge;
    long long  _trafficClassVISucceededSmall;
    long long  _trafficClassVOAttemptedLarge;
    long long  _trafficClassVOAttemptedSmall;
    long long  _trafficClassVOSucceededLarge;
    long long  _trafficClassVOSucceededSmall;
    unsigned long long  _type;
}

@property (nonatomic) bool backhaulResultsValid;
@property (nonatomic) double backhaulThroughput;
@property (nonatomic) bool dnsResultsValid;
@property (nonatomic, retain) NSMutableSet *dnsServers;
@property (nonatomic) bool dnsSuccess;
@property (nonatomic, copy) NSError *downloadError;
@property (nonatomic, retain) NSString *gatewayAddress;
@property (nonatomic) long long gatewayMaxRTT;
@property (nonatomic) long long gatewayMinRTT;
@property (nonatomic) long long gatewayPacketLoss;
@property (nonatomic) bool gatewayResultsValid;
@property (nonatomic) long long localDNSMaxRTT;
@property (nonatomic) long long localDNSMinRTT;
@property (nonatomic) long long localDNSPacketLoss;
@property (nonatomic) bool localResultsValid;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long publicDNSMaxRTT;
@property (nonatomic) long long publicDNSMinRTT;
@property (nonatomic) long long publicDNSPacketLoss;
@property (nonatomic) bool publicResultsValid;
@property (nonatomic) bool seenSpecificAcFailure;
@property (nonatomic) bool siriACEResultsValid;
@property (nonatomic) bool siriACESuccess;
@property (nonatomic) bool siriTCPResultsValid;
@property (nonatomic) bool siriTCPSuccess;
@property (nonatomic) bool siriTLSResultsValid;
@property (nonatomic) bool siriTLSSuccess;
@property (nonatomic) long long siriTrafficClass;
@property (nonatomic) long long trafficClassBEAttemptedLarge;
@property (nonatomic) long long trafficClassBEAttemptedSmall;
@property (nonatomic) long long trafficClassBESucceededLarge;
@property (nonatomic) long long trafficClassBESucceededSmall;
@property (nonatomic) long long trafficClassBKAttemptedLarge;
@property (nonatomic) long long trafficClassBKAttemptedSmall;
@property (nonatomic) long long trafficClassBKSucceededLarge;
@property (nonatomic) long long trafficClassBKSucceededSmall;
@property (nonatomic) long long trafficClassVIAttemptedLarge;
@property (nonatomic) long long trafficClassVIAttemptedSmall;
@property (nonatomic) long long trafficClassVISucceededLarge;
@property (nonatomic) long long trafficClassVISucceededSmall;
@property (nonatomic) long long trafficClassVOAttemptedLarge;
@property (nonatomic) long long trafficClassVOAttemptedSmall;
@property (nonatomic) long long trafficClassVOSucceededLarge;
@property (nonatomic) long long trafficClassVOSucceededSmall;
@property (nonatomic) unsigned long long type;

+ (void)initialize;

- (void).cxx_destruct;
- (id)allPrimitiveProperties;
- (bool)backhaulResultsValid;
- (double)backhaulThroughput;
- (id)binnedProperty:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dnsResultsValid;
- (id)dnsServers;
- (bool)dnsSuccess;
- (id)downloadError;
- (id)gatewayAddress;
- (long long)gatewayMaxRTT;
- (long long)gatewayMinRTT;
- (long long)gatewayPacketLoss;
- (bool)gatewayResultsValid;
- (id)initWithType:(unsigned long long)arg1;
- (long long)localDNSMaxRTT;
- (long long)localDNSMinRTT;
- (long long)localDNSPacketLoss;
- (bool)localResultsValid;
- (unsigned long long)numAcAttempted;
- (unsigned long long)numAcFailed;
- (unsigned long long)numAcSuccess;
- (unsigned long long)numLargePingPacketsAttempted;
- (unsigned long long)numLargePingPacketsFailed;
- (unsigned long long)numLargePingPacketsSuccess;
- (unsigned long long)numPingPacketsAttempted;
- (unsigned long long)numPingPacketsFailed;
- (unsigned long long)numPingPacketsSuccess;
- (unsigned long long)numSmallPingPacketsAttempted;
- (unsigned long long)numSmallPingPacketsFailed;
- (unsigned long long)numSmallPingPacketsSuccess;
- (unsigned long long)options;
- (long long)publicDNSMaxRTT;
- (long long)publicDNSMinRTT;
- (long long)publicDNSPacketLoss;
- (bool)publicResultsValid;
- (bool)seenSpecificAcFailure;
- (void)setBackhaulResultsValid:(bool)arg1;
- (void)setBackhaulThroughput:(double)arg1;
- (void)setDnsResultsValid:(bool)arg1;
- (void)setDnsServers:(id)arg1;
- (void)setDnsSuccess:(bool)arg1;
- (void)setDownloadError:(id)arg1;
- (void)setGatewayAddress:(id)arg1;
- (void)setGatewayMaxRTT:(long long)arg1;
- (void)setGatewayMinRTT:(long long)arg1;
- (void)setGatewayPacketLoss:(long long)arg1;
- (void)setGatewayResultsValid:(bool)arg1;
- (void)setLocalDNSMaxRTT:(long long)arg1;
- (void)setLocalDNSMinRTT:(long long)arg1;
- (void)setLocalDNSPacketLoss:(long long)arg1;
- (void)setLocalResultsValid:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPublicDNSMaxRTT:(long long)arg1;
- (void)setPublicDNSMinRTT:(long long)arg1;
- (void)setPublicDNSPacketLoss:(long long)arg1;
- (void)setPublicResultsValid:(bool)arg1;
- (void)setSeenSpecificAcFailure:(bool)arg1;
- (void)setSiriACEResultsValid:(bool)arg1;
- (void)setSiriACESuccess:(bool)arg1;
- (void)setSiriTCPResultsValid:(bool)arg1;
- (void)setSiriTCPSuccess:(bool)arg1;
- (void)setSiriTLSResultsValid:(bool)arg1;
- (void)setSiriTLSSuccess:(bool)arg1;
- (void)setSiriTrafficClass:(long long)arg1;
- (void)setTrafficClassBEAttemptedLarge:(long long)arg1;
- (void)setTrafficClassBEAttemptedSmall:(long long)arg1;
- (void)setTrafficClassBESucceededLarge:(long long)arg1;
- (void)setTrafficClassBESucceededSmall:(long long)arg1;
- (void)setTrafficClassBKAttemptedLarge:(long long)arg1;
- (void)setTrafficClassBKAttemptedSmall:(long long)arg1;
- (void)setTrafficClassBKSucceededLarge:(long long)arg1;
- (void)setTrafficClassBKSucceededSmall:(long long)arg1;
- (void)setTrafficClassVIAttemptedLarge:(long long)arg1;
- (void)setTrafficClassVIAttemptedSmall:(long long)arg1;
- (void)setTrafficClassVISucceededLarge:(long long)arg1;
- (void)setTrafficClassVISucceededSmall:(long long)arg1;
- (void)setTrafficClassVOAttemptedLarge:(long long)arg1;
- (void)setTrafficClassVOAttemptedSmall:(long long)arg1;
- (void)setTrafficClassVOSucceededLarge:(long long)arg1;
- (void)setTrafficClassVOSucceededSmall:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)siriACEResultsValid;
- (bool)siriACESuccess;
- (bool)siriTCPResultsValid;
- (bool)siriTCPSuccess;
- (bool)siriTLSResultsValid;
- (bool)siriTLSSuccess;
- (long long)siriTrafficClass;
- (id)statusForAcFailure;
- (id)statusForDNS;
- (id)statusForInternet;
- (id)statusForLocal;
- (id)statusForSiriTCP;
- (id)statusForSiriTLS;
- (long long)trafficClassBEAttemptedLarge;
- (long long)trafficClassBEAttemptedSmall;
- (long long)trafficClassBESucceededLarge;
- (long long)trafficClassBESucceededSmall;
- (long long)trafficClassBKAttemptedLarge;
- (long long)trafficClassBKAttemptedSmall;
- (long long)trafficClassBKSucceededLarge;
- (long long)trafficClassBKSucceededSmall;
- (long long)trafficClassVIAttemptedLarge;
- (long long)trafficClassVIAttemptedSmall;
- (long long)trafficClassVISucceededLarge;
- (long long)trafficClassVISucceededSmall;
- (long long)trafficClassVOAttemptedLarge;
- (long long)trafficClassVOAttemptedSmall;
- (long long)trafficClassVOSucceededLarge;
- (long long)trafficClassVOSucceededSmall;
- (unsigned long long)type;
- (id)typeAsString;

@end
