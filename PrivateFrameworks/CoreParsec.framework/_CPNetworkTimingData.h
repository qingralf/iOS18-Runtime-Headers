/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPNetworkTimingData : PBCodable <NSSecureCoding, _CPNetworkTimingData> {
    bool  _QUICWhitelistedDomain;
    bool  _TFOSuccess;
    unsigned int  _connectEnd;
    unsigned int  _connectStart;
    bool  _connectionRace;
    bool  _connectionReused;
    NSString * _connectionUUID;
    unsigned int  _domainLookupEnd;
    unsigned int  _domainLookupStart;
    unsigned int  _fetchStart;
    NSString * _interfaceIdentifier;
    NSString * _networkProtocolName;
    NSData * _peerAddress;
    unsigned int  _redirectCount;
    unsigned int  _redirectCountW3C;
    unsigned int  _redirectEnd;
    unsigned int  _redirectStart;
    unsigned int  _requestEnd;
    unsigned int  _requestHeaderSize;
    unsigned int  _requestStart;
    unsigned int  _responseBodyBytesDecoded;
    unsigned int  _responseBodyBytesReceived;
    unsigned int  _responseEnd;
    unsigned int  _responseHeaderSize;
    unsigned int  _responseStart;
    unsigned int  _secureConnectStart;
    _CPTCPInfo * _startTimeCounts;
    _CPTCPInfo * _stopTimeCounts;
    double  _timingDataInit;
}

@property (nonatomic) bool QUICWhitelistedDomain;
@property (nonatomic) bool TFOSuccess;
@property (nonatomic) unsigned int connectEnd;
@property (nonatomic) unsigned int connectStart;
@property (nonatomic) bool connectionRace;
@property (nonatomic) bool connectionReused;
@property (nonatomic, copy) NSString *connectionUUID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int domainLookupEnd;
@property (nonatomic) unsigned int domainLookupStart;
@property (nonatomic) unsigned int fetchStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interfaceIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *networkProtocolName;
@property (nonatomic, copy) NSData *peerAddress;
@property (nonatomic) unsigned int redirectCount;
@property (nonatomic) unsigned int redirectCountW3C;
@property (nonatomic) unsigned int redirectEnd;
@property (nonatomic) unsigned int redirectStart;
@property (nonatomic) unsigned int requestEnd;
@property (nonatomic) unsigned int requestHeaderSize;
@property (nonatomic) unsigned int requestStart;
@property (nonatomic) unsigned int responseBodyBytesDecoded;
@property (nonatomic) unsigned int responseBodyBytesReceived;
@property (nonatomic) unsigned int responseEnd;
@property (nonatomic) unsigned int responseHeaderSize;
@property (nonatomic) unsigned int responseStart;
@property (nonatomic) unsigned int secureConnectStart;
@property (nonatomic, retain) _CPTCPInfo *startTimeCounts;
@property (nonatomic, retain) _CPTCPInfo *stopTimeCounts;
@property (readonly) Class superclass;
@property (nonatomic) double timingDataInit;

+ (id)startMetricsForNormalization;

- (void).cxx_destruct;
- (bool)QUICWhitelistedDomain;
- (bool)TFOSuccess;
- (unsigned int)connectEnd;
- (unsigned int)connectStart;
- (bool)connectionRace;
- (bool)connectionReused;
- (id)connectionUUID;
- (unsigned int)domainLookupEnd;
- (unsigned int)domainLookupStart;
- (unsigned int)fetchStart;
- (unsigned long long)hash;
- (id)initWithTelemetryDictionary:(id)arg1;
- (id)interfaceIdentifier;
- (bool)isEqual:(id)arg1;
- (id)networkProtocolName;
- (id)peerAddress;
- (bool)readFrom:(id)arg1;
- (unsigned int)redirectCount;
- (unsigned int)redirectCountW3C;
- (unsigned int)redirectEnd;
- (unsigned int)redirectStart;
- (unsigned int)requestEnd;
- (unsigned int)requestHeaderSize;
- (unsigned int)requestStart;
- (unsigned int)responseBodyBytesDecoded;
- (unsigned int)responseBodyBytesReceived;
- (unsigned int)responseEnd;
- (unsigned int)responseHeaderSize;
- (unsigned int)responseStart;
- (unsigned int)secureConnectStart;
- (void)setConnectEnd:(unsigned int)arg1;
- (void)setConnectStart:(unsigned int)arg1;
- (void)setConnectionRace:(bool)arg1;
- (void)setConnectionReused:(bool)arg1;
- (void)setConnectionUUID:(id)arg1;
- (void)setDomainLookupEnd:(unsigned int)arg1;
- (void)setDomainLookupStart:(unsigned int)arg1;
- (void)setFetchStart:(unsigned int)arg1;
- (void)setInterfaceIdentifier:(id)arg1;
- (void)setNetworkProtocolName:(id)arg1;
- (void)setPeerAddress:(id)arg1;
- (void)setQUICWhitelistedDomain:(bool)arg1;
- (void)setRedirectCount:(unsigned int)arg1;
- (void)setRedirectCountW3C:(unsigned int)arg1;
- (void)setRedirectEnd:(unsigned int)arg1;
- (void)setRedirectStart:(unsigned int)arg1;
- (void)setRequestEnd:(unsigned int)arg1;
- (void)setRequestHeaderSize:(unsigned int)arg1;
- (void)setRequestStart:(unsigned int)arg1;
- (void)setResponseBodyBytesDecoded:(unsigned int)arg1;
- (void)setResponseBodyBytesReceived:(unsigned int)arg1;
- (void)setResponseEnd:(unsigned int)arg1;
- (void)setResponseHeaderSize:(unsigned int)arg1;
- (void)setResponseStart:(unsigned int)arg1;
- (void)setSecureConnectStart:(unsigned int)arg1;
- (void)setStartTimeCounts:(id)arg1;
- (void)setStopTimeCounts:(id)arg1;
- (void)setTFOSuccess:(bool)arg1;
- (void)setTimingDataInit:(double)arg1;
- (id)startTimeCounts;
- (id)stopTimeCounts;
- (double)timingDataInit;
- (void)writeTo:(id)arg1;

@end
