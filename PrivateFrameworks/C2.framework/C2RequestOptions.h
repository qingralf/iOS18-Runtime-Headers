/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  __allowsExpensiveAccess;
    bool  __allowsPowerNapScheduling;
    bool  __allowsRetryForBackgroundDataTasks;
    NSString * __appleIDContextSessionIdentifier;
    bool  __optIntoDisableAPWakeOnIdleConnections;
    NSData * __sourceApplicationAuditTokenData;
    NSString * __sourceApplicationBundleIdentifier;
    NSString * __sourceApplicationSecondaryIdentifier;
    double  __timeoutIntervalForRequest;
    double  __timeoutIntervalForResource;
    bool  _allowExpiredDNSBehavior;
    bool  _allowRouting;
    bool  _allowsCellularAccess;
    NSURL * _c2MetricsEndpoint;
    unsigned long long  _c2MetricsReportFrequency;
    unsigned long long  _c2MetricsReportFrequencyBase;
    long long  _containerType;
    unsigned long long  _discretionaryNetworkBehavior;
    unsigned long long  _duetPreClearedMode;
    bool  _hasAllowsCellularAccess;
    NSString * _identifier;
    NSURL * _invokedURL;
    C2MetricOptions * _metricOptions;
    bool  _metricRequest;
    NSObject<C2NetworkingDelegate> * _networkingDelegate;
    NSString * _originalHost;
    bool  _outOfProcessDiscretionary;
    NSString * _outOfProcessPoolName;
    NSNumber * _privacyProxyFailClosedOverride;
    long long  _qualityOfService;
    bool  _redactRemoteEndpointFromNetworkMetrics;
    bool  _redactUniformResourceIdentifierFromNetworkMetrics;
    id /* block */  _testBehavior_sessionGroupCreated;
    bool  _tlsPinning;
    bool  _useAdaptiveTimeouts;
    NSNumber * _useNWLoaderOverride;
}

@property (nonatomic) bool _allowsExpensiveAccess;
@property (nonatomic) bool _allowsPowerNapScheduling;
@property (nonatomic) bool _allowsRetryForBackgroundDataTasks;
@property (nonatomic, copy) NSString *_appleIDContextSessionIdentifier;
@property (nonatomic) bool _optIntoDisableAPWakeOnIdleConnections;
@property (nonatomic, copy) NSData *_sourceApplicationAuditTokenData;
@property (nonatomic, copy) NSString *_sourceApplicationBundleIdentifier;
@property (nonatomic, copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (nonatomic) double _timeoutIntervalForRequest;
@property (nonatomic) double _timeoutIntervalForResource;
@property (nonatomic) bool allowExpiredDNSBehavior;
@property (nonatomic) bool allowRouting;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, copy) NSURL *c2MetricsEndpoint;
@property (nonatomic) unsigned long long c2MetricsReportFrequency;
@property (nonatomic) unsigned long long c2MetricsReportFrequencyBase;
@property (nonatomic) long long containerType;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic, readonly) double emptySessionExpiryInSeconds;
@property (nonatomic) bool hasAllowsCellularAccess;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSURL *invokedURL;
@property (nonatomic, copy) C2MetricOptions *metricOptions;
@property (nonatomic) bool metricRequest;
@property (nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (nonatomic, copy) NSString *originalHost;
@property (nonatomic, readonly) bool outOfProcess;
@property (nonatomic) bool outOfProcessDiscretionary;
@property (nonatomic, copy) NSString *outOfProcessPoolName;
@property (nonatomic, copy) NSNumber *privacyProxyFailClosedOverride;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) bool redactRemoteEndpointFromNetworkMetrics;
@property (nonatomic) bool redactUniformResourceIdentifierFromNetworkMetrics;
@property (nonatomic, readonly) double taskCallbackConsideredHangInSeconds;
@property (nonatomic, copy) id /* block */ testBehavior_sessionGroupCreated;
@property (nonatomic) bool tlsPinning;
@property (nonatomic) bool useAdaptiveTimeouts;
@property (nonatomic, copy) NSNumber *useNWLoaderOverride;

+ (void)initialize;
+ (void)setTestNetworkingDelegate:(id)arg1;
+ (id)stringForDiscretionaryNetworkBehavior:(unsigned long long)arg1;
+ (id)stringForDuetPreClearedMode:(unsigned long long)arg1;
+ (id)stringForQualityOfService:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)testNetworkingDelegate;
+ (bool)triesteMetricsEnabled;

- (void).cxx_destruct;
- (bool)_allowsExpensiveAccess;
- (bool)_allowsPowerNapScheduling;
- (bool)_allowsRetryForBackgroundDataTasks;
- (id)_appleIDContextSessionIdentifier;
- (bool)_optIntoDisableAPWakeOnIdleConnections;
- (id)_sourceApplicationAuditTokenData;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (double)_timeoutIntervalForRequest;
- (double)_timeoutIntervalForResource;
- (bool)allowExpiredDNSBehavior;
- (bool)allowRouting;
- (bool)allowsCellularAccess;
- (id)c2MetricsEndpoint;
- (unsigned long long)c2MetricsReportFrequency;
- (unsigned long long)c2MetricsReportFrequencyBase;
- (long long)containerType;
- (id)copyAndDecorateRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorateTask:(id)arg1;
- (id)defaultSessionConfigurationWithName:(id)arg1;
- (unsigned long long)discretionaryNetworkBehavior;
- (unsigned long long)duetPreClearedMode;
- (double)emptySessionExpiryInSeconds;
- (void)encodeWithCoder:(id)arg1;
- (void)handleCallbackForSessionTask:(id)arg1 dataTask:(id)arg2 callback:(id /* block */)arg3;
- (bool)hasAllowsCellularAccess;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invokedURL;
- (bool)isEqual:(id)arg1;
- (id)metricOptions;
- (bool)metricRequest;
- (id)networkingDelegate;
- (id)originalHost;
- (bool)outOfProcess;
- (bool)outOfProcessDiscretionary;
- (id)outOfProcessPoolName;
- (id)privacyProxyFailClosedOverride;
- (long long)qualityOfService;
- (bool)redactRemoteEndpointFromNetworkMetrics;
- (bool)redactUniformResourceIdentifierFromNetworkMetrics;
- (id)sessionConfigurationNameWithRouteHost:(id)arg1;
- (id)sessionConfigurationWithName:(id)arg1;
- (void)setAllowExpiredDNSBehavior:(bool)arg1;
- (void)setAllowRouting:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setC2MetricsEndpoint:(id)arg1;
- (void)setC2MetricsReportFrequency:(unsigned long long)arg1;
- (void)setC2MetricsReportFrequencyBase:(unsigned long long)arg1;
- (void)setContainerType:(long long)arg1;
- (void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1;
- (void)setDuetPreClearedMode:(unsigned long long)arg1;
- (void)setHasAllowsCellularAccess:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvokedURL:(id)arg1;
- (void)setMetricOptions:(id)arg1;
- (void)setMetricRequest:(bool)arg1;
- (void)setNetworkingDelegate:(id)arg1;
- (void)setOriginalHost:(id)arg1;
- (void)setOutOfProcess:(bool)arg1;
- (void)setOutOfProcessDiscretionary:(bool)arg1;
- (void)setOutOfProcessPoolName:(id)arg1;
- (void)setPrivacyProxyFailClosedOverride:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRedactRemoteEndpointFromNetworkMetrics:(bool)arg1;
- (void)setRedactUniformResourceIdentifierFromNetworkMetrics:(bool)arg1;
- (void)setTestBehavior_sessionGroupCreated:(id /* block */)arg1;
- (void)setTlsPinning:(bool)arg1;
- (void)setUseAdaptiveTimeouts:(bool)arg1;
- (void)setUseNWLoaderOverride:(id)arg1;
- (void)set_allowsExpensiveAccess:(bool)arg1;
- (void)set_allowsPowerNapScheduling:(bool)arg1;
- (void)set_allowsRetryForBackgroundDataTasks:(bool)arg1;
- (void)set_appleIDContextSessionIdentifier:(id)arg1;
- (void)set_optIntoDisableAPWakeOnIdleConnections:(bool)arg1;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_timeoutIntervalForRequest:(double)arg1;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (double)taskCallbackConsideredHangInSeconds;
- (id /* block */)testBehavior_sessionGroupCreated;
- (bool)tlsPinning;
- (bool)useAdaptiveTimeouts;
- (id)useNWLoaderOverride;

@end