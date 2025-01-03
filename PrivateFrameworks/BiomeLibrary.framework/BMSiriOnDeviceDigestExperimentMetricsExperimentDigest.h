/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriOnDeviceDigestExperimentMetricsExperimentDigest : BMEventBase <BMStoreData> {
    int  _asrLocation;
    NSString * _audioInterfaceProductId;
    NSString * _audioInterfaceVendorId;
    unsigned int  _clientErrorCount;
    NSString * _codePathIdUUID;
    int  _dataSharingOptInStatus;
    unsigned int  _dataVersion;
    int  _experimentAllocationStatus;
    unsigned int  _failureResponseCount;
    unsigned int  _fatalResponseCount;
    unsigned int  _flowTasksCompleted;
    unsigned int  _flowTasksStarted;
    bool  _hasAsrLocation;
    bool  _hasClientErrorCount;
    bool  _hasDataSharingOptInStatus;
    bool  _hasExperimentAllocationStatus;
    bool  _hasFailureResponseCount;
    bool  _hasFatalResponseCount;
    bool  _hasFlowTasksCompleted;
    bool  _hasFlowTasksStarted;
    bool  _hasInvocationSource;
    bool  _hasIsFirstTriggerOrAfterFirstTrigger;
    bool  _hasIsIntelligenceEngineRequest;
    bool  _hasIsTriggered;
    bool  _hasNlLocation;
    bool  _hasReliabilityRequestCount;
    bool  _hasReliabilityTurnCount;
    bool  _hasResponseCategory;
    bool  _hasSiriTasksCompleted;
    bool  _hasSiriTasksStarted;
    bool  _hasSiriUnavailableResponseCount;
    bool  _hasTotalTurnCount;
    bool  _hasUndesiredResponseCount;
    bool  _hasUsdxSessionCount;
    bool  _hasValidTurnCount;
    bool  _hasViewInterface;
    NSArray * _intelligenceEngineRouting;
    unsigned int  _invocationSource;
    bool  _isFirstTriggerOrAfterFirstTrigger;
    bool  _isIntelligenceEngineRequest;
    bool  _isTriggered;
    int  _nlLocation;
    unsigned int  _reliabilityRequestCount;
    unsigned int  _reliabilityTurnCount;
    int  _responseCategory;
    BMSiriOnDeviceDigestExperimentMetricsISOLocale * _siriInputLocale;
    unsigned int  _siriTasksCompleted;
    unsigned int  _siriTasksStarted;
    unsigned int  _siriUnavailableResponseCount;
    NSString * _subDomain;
    NSString * _systemBuild;
    unsigned int  _totalTurnCount;
    BMSiriOnDeviceDigestExperimentMetricsExperimentDigestExperimentTuples * _tuples;
    unsigned int  _undesiredResponseCount;
    unsigned int  _usdxSessionCount;
    unsigned int  _validTurnCount;
    int  _viewInterface;
}

@property (nonatomic, readonly) int asrLocation;
@property (nonatomic, readonly) NSString *audioInterfaceProductId;
@property (nonatomic, readonly) NSString *audioInterfaceVendorId;
@property (nonatomic, readonly) unsigned int clientErrorCount;
@property (nonatomic, readonly) NSString *codePathIdUUID;
@property (nonatomic, readonly) int dataSharingOptInStatus;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int experimentAllocationStatus;
@property (nonatomic, readonly) unsigned int failureResponseCount;
@property (nonatomic, readonly) unsigned int fatalResponseCount;
@property (nonatomic, readonly) unsigned int flowTasksCompleted;
@property (nonatomic, readonly) unsigned int flowTasksStarted;
@property (nonatomic) bool hasAsrLocation;
@property (nonatomic) bool hasClientErrorCount;
@property (nonatomic) bool hasDataSharingOptInStatus;
@property (nonatomic) bool hasExperimentAllocationStatus;
@property (nonatomic) bool hasFailureResponseCount;
@property (nonatomic) bool hasFatalResponseCount;
@property (nonatomic) bool hasFlowTasksCompleted;
@property (nonatomic) bool hasFlowTasksStarted;
@property (nonatomic) bool hasInvocationSource;
@property (nonatomic) bool hasIsFirstTriggerOrAfterFirstTrigger;
@property (nonatomic) bool hasIsIntelligenceEngineRequest;
@property (nonatomic) bool hasIsTriggered;
@property (nonatomic) bool hasNlLocation;
@property (nonatomic) bool hasReliabilityRequestCount;
@property (nonatomic) bool hasReliabilityTurnCount;
@property (nonatomic) bool hasResponseCategory;
@property (nonatomic) bool hasSiriTasksCompleted;
@property (nonatomic) bool hasSiriTasksStarted;
@property (nonatomic) bool hasSiriUnavailableResponseCount;
@property (nonatomic) bool hasTotalTurnCount;
@property (nonatomic) bool hasUndesiredResponseCount;
@property (nonatomic) bool hasUsdxSessionCount;
@property (nonatomic) bool hasValidTurnCount;
@property (nonatomic) bool hasViewInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *intelligenceEngineRouting;
@property (nonatomic, readonly) unsigned int invocationSource;
@property (nonatomic, readonly) bool isFirstTriggerOrAfterFirstTrigger;
@property (nonatomic, readonly) bool isIntelligenceEngineRequest;
@property (nonatomic, readonly) bool isTriggered;
@property (nonatomic, readonly) int nlLocation;
@property (nonatomic, readonly) unsigned int reliabilityRequestCount;
@property (nonatomic, readonly) unsigned int reliabilityTurnCount;
@property (nonatomic, readonly) int responseCategory;
@property (nonatomic, readonly) BMSiriOnDeviceDigestExperimentMetricsISOLocale *siriInputLocale;
@property (nonatomic, readonly) unsigned int siriTasksCompleted;
@property (nonatomic, readonly) unsigned int siriTasksStarted;
@property (nonatomic, readonly) unsigned int siriUnavailableResponseCount;
@property (nonatomic, readonly) NSString *subDomain;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *systemBuild;
@property (nonatomic, readonly) unsigned int totalTurnCount;
@property (nonatomic, readonly) BMSiriOnDeviceDigestExperimentMetricsExperimentDigestExperimentTuples *tuples;
@property (nonatomic, readonly) unsigned int undesiredResponseCount;
@property (nonatomic, readonly) unsigned int usdxSessionCount;
@property (nonatomic, readonly) unsigned int validTurnCount;
@property (nonatomic, readonly) int viewInterface;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_intelligenceEngineRoutingJSONArray;
- (int)asrLocation;
- (id)audioInterfaceProductId;
- (id)audioInterfaceVendorId;
- (unsigned int)clientErrorCount;
- (id)codePathIdUUID;
- (int)dataSharingOptInStatus;
- (unsigned int)dataVersion;
- (id)description;
- (int)experimentAllocationStatus;
- (unsigned int)failureResponseCount;
- (unsigned int)fatalResponseCount;
- (unsigned int)flowTasksCompleted;
- (unsigned int)flowTasksStarted;
- (bool)hasAsrLocation;
- (bool)hasClientErrorCount;
- (bool)hasDataSharingOptInStatus;
- (bool)hasExperimentAllocationStatus;
- (bool)hasFailureResponseCount;
- (bool)hasFatalResponseCount;
- (bool)hasFlowTasksCompleted;
- (bool)hasFlowTasksStarted;
- (bool)hasInvocationSource;
- (bool)hasIsFirstTriggerOrAfterFirstTrigger;
- (bool)hasIsIntelligenceEngineRequest;
- (bool)hasIsTriggered;
- (bool)hasNlLocation;
- (bool)hasReliabilityRequestCount;
- (bool)hasReliabilityTurnCount;
- (bool)hasResponseCategory;
- (bool)hasSiriTasksCompleted;
- (bool)hasSiriTasksStarted;
- (bool)hasSiriUnavailableResponseCount;
- (bool)hasTotalTurnCount;
- (bool)hasUndesiredResponseCount;
- (bool)hasUsdxSessionCount;
- (bool)hasValidTurnCount;
- (bool)hasViewInterface;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSystemBuild:(id)arg1 dataSharingOptInStatus:(id)arg2 viewInterface:(id)arg3 audioInterfaceVendorId:(id)arg4 audioInterfaceProductId:(id)arg5 asrLocation:(id)arg6 nlLocation:(id)arg7 siriInputLocale:(id)arg8 subDomain:(id)arg9 responseCategory:(id)arg10 experimentAllocationStatus:(id)arg11 isTriggered:(id)arg12 isFirstTriggerOrAfterFirstTrigger:(id)arg13 codePathIdUUID:(id)arg14 totalTurnCount:(id)arg15 validTurnCount:(id)arg16 siriTasksStarted:(id)arg17 siriTasksCompleted:(id)arg18 flowTasksStarted:(id)arg19 flowTasksCompleted:(id)arg20 reliabilityRequestCount:(id)arg21 reliabilityTurnCount:(id)arg22 clientErrorCount:(id)arg23 undesiredResponseCount:(id)arg24 fatalResponseCount:(id)arg25 failureResponseCount:(id)arg26 siriUnavailableResponseCount:(id)arg27 usdxSessionCount:(id)arg28 tuples:(id)arg29;
- (id)initWithSystemBuild:(id)arg1 dataSharingOptInStatus:(id)arg2 viewInterface:(id)arg3 audioInterfaceVendorId:(id)arg4 audioInterfaceProductId:(id)arg5 asrLocation:(id)arg6 nlLocation:(id)arg7 siriInputLocale:(id)arg8 subDomain:(id)arg9 responseCategory:(id)arg10 experimentAllocationStatus:(id)arg11 isTriggered:(id)arg12 isFirstTriggerOrAfterFirstTrigger:(id)arg13 codePathIdUUID:(id)arg14 totalTurnCount:(id)arg15 validTurnCount:(id)arg16 siriTasksStarted:(id)arg17 siriTasksCompleted:(id)arg18 flowTasksStarted:(id)arg19 flowTasksCompleted:(id)arg20 reliabilityRequestCount:(id)arg21 reliabilityTurnCount:(id)arg22 clientErrorCount:(id)arg23 undesiredResponseCount:(id)arg24 fatalResponseCount:(id)arg25 failureResponseCount:(id)arg26 siriUnavailableResponseCount:(id)arg27 usdxSessionCount:(id)arg28 tuples:(id)arg29 isIntelligenceEngineRequest:(id)arg30 intelligenceEngineRouting:(id)arg31 invocationSource:(id)arg32;
- (id)intelligenceEngineRouting;
- (unsigned int)invocationSource;
- (bool)isEqual:(id)arg1;
- (bool)isFirstTriggerOrAfterFirstTrigger;
- (bool)isIntelligenceEngineRequest;
- (bool)isTriggered;
- (id)jsonDictionary;
- (int)nlLocation;
- (unsigned int)reliabilityRequestCount;
- (unsigned int)reliabilityTurnCount;
- (int)responseCategory;
- (id)serialize;
- (void)setHasAsrLocation:(bool)arg1;
- (void)setHasClientErrorCount:(bool)arg1;
- (void)setHasDataSharingOptInStatus:(bool)arg1;
- (void)setHasExperimentAllocationStatus:(bool)arg1;
- (void)setHasFailureResponseCount:(bool)arg1;
- (void)setHasFatalResponseCount:(bool)arg1;
- (void)setHasFlowTasksCompleted:(bool)arg1;
- (void)setHasFlowTasksStarted:(bool)arg1;
- (void)setHasInvocationSource:(bool)arg1;
- (void)setHasIsFirstTriggerOrAfterFirstTrigger:(bool)arg1;
- (void)setHasIsIntelligenceEngineRequest:(bool)arg1;
- (void)setHasIsTriggered:(bool)arg1;
- (void)setHasNlLocation:(bool)arg1;
- (void)setHasReliabilityRequestCount:(bool)arg1;
- (void)setHasReliabilityTurnCount:(bool)arg1;
- (void)setHasResponseCategory:(bool)arg1;
- (void)setHasSiriTasksCompleted:(bool)arg1;
- (void)setHasSiriTasksStarted:(bool)arg1;
- (void)setHasSiriUnavailableResponseCount:(bool)arg1;
- (void)setHasTotalTurnCount:(bool)arg1;
- (void)setHasUndesiredResponseCount:(bool)arg1;
- (void)setHasUsdxSessionCount:(bool)arg1;
- (void)setHasValidTurnCount:(bool)arg1;
- (void)setHasViewInterface:(bool)arg1;
- (id)siriInputLocale;
- (unsigned int)siriTasksCompleted;
- (unsigned int)siriTasksStarted;
- (unsigned int)siriUnavailableResponseCount;
- (id)subDomain;
- (id)systemBuild;
- (unsigned int)totalTurnCount;
- (id)tuples;
- (unsigned int)undesiredResponseCount;
- (unsigned int)usdxSessionCount;
- (unsigned int)validTurnCount;
- (int)viewInterface;
- (void)writeTo:(id)arg1;

@end
