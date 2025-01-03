/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSafariBrowsingAssistantTrialExperiment : BMEventBase <BMStoreData> {
    int  _allocation_status;
    unsigned int  _compatibility_version;
    unsigned int  _dataVersion;
    long long  _deployment_id;
    NSString * _experiment_id;
    NSString * _experiment_namespace;
    bool  _hasCompatibility_version;
    bool  _hasDeployment_id;
    NSString * _treatment_id;
}

@property (nonatomic, readonly) int allocation_status;
@property (nonatomic, readonly) unsigned int compatibility_version;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long deployment_id;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *experiment_id;
@property (nonatomic, readonly) NSString *experiment_namespace;
@property (nonatomic) bool hasCompatibility_version;
@property (nonatomic) bool hasDeployment_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatment_id;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)allocation_status;
- (unsigned int)compatibility_version;
- (unsigned int)dataVersion;
- (long long)deployment_id;
- (id)description;
- (id)experiment_id;
- (id)experiment_namespace;
- (bool)hasCompatibility_version;
- (bool)hasDeployment_id;
- (id)initByReadFrom:(id)arg1;
- (id)initWithExperiment_namespace:(id)arg1 experiment_id:(id)arg2 treatment_id:(id)arg3 deployment_id:(id)arg4 allocation_status:(int)arg5 compatibility_version:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasCompatibility_version:(bool)arg1;
- (void)setHasDeployment_id:(bool)arg1;
- (id)treatment_id;
- (void)writeTo:(id)arg1;

@end
