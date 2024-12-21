/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriOnDeviceDigestExperimentMetrics : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    long long  _deploymentId;
    NSString * _deviceType;
    unsigned int  _digestType;
    NSArray * _digests;
    BMSiriOnDeviceDigestExperimentMetricsEventMetadata * _eventMetadata;
    NSString * _experimentId;
    bool  _hasDeploymentId;
    bool  _hasDigestType;
    bool  _hasProgramCode;
    unsigned int  _programCode;
    NSString * _treatmentIdUUID;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long deploymentId;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceType;
@property (nonatomic, readonly) unsigned int digestType;
@property (nonatomic, readonly) NSArray *digests;
@property (nonatomic, readonly) BMSiriOnDeviceDigestExperimentMetricsEventMetadata *eventMetadata;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasDigestType;
@property (nonatomic) bool hasProgramCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int programCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentIdUUID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_digestsJSONArray;
- (unsigned int)dataVersion;
- (long long)deploymentId;
- (id)description;
- (id)deviceType;
- (unsigned int)digestType;
- (id)digests;
- (id)eventMetadata;
- (id)experimentId;
- (bool)hasDeploymentId;
- (bool)hasDigestType;
- (bool)hasProgramCode;
- (id)initByReadFrom:(id)arg1;
- (id)initWithEventMetadata:(id)arg1 digestType:(id)arg2 experimentId:(id)arg3 treatmentIdUUID:(id)arg4 deploymentId:(id)arg5 deviceType:(id)arg6 programCode:(id)arg7 digests:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)programCode;
- (id)serialize;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setHasDigestType:(bool)arg1;
- (void)setHasProgramCode:(bool)arg1;
- (id)treatmentIdUUID;
- (void)writeTo:(id)arg1;

@end