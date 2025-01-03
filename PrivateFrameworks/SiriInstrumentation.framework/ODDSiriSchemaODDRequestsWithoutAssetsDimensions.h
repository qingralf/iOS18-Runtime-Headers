/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDRequestsWithoutAssetsDimensions : SISchemaInstrumentationMessage {
    NSArray * _assetFailureReasons;
    NSString * _assetSetId;
    NSString * _assetSetName;
    ODDSiriSchemaODDAssistantDimensions * _assistantDimensions;
    unsigned long long  _buildInstallationTimestampInSecondsSince1970;
    struct { 
        unsigned int buildInstallationTimestampInSecondsSince1970 : 1; 
    }  _has;
    bool  _hasAssetSetId;
    bool  _hasAssetSetName;
    bool  _hasAssistantDimensions;
    bool  _hasPreviousSystemBuild;
    NSString * _previousSystemBuild;
}

@property (nonatomic, copy) NSArray *assetFailureReasons;
@property (nonatomic, copy) NSString *assetSetId;
@property (nonatomic, copy) NSString *assetSetName;
@property (nonatomic, retain) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) unsigned long long buildInstallationTimestampInSecondsSince1970;
@property (nonatomic) bool hasAssetSetId;
@property (nonatomic) bool hasAssetSetName;
@property (nonatomic) bool hasAssistantDimensions;
@property (nonatomic) bool hasBuildInstallationTimestampInSecondsSince1970;
@property (nonatomic) bool hasPreviousSystemBuild;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *previousSystemBuild;

- (void).cxx_destruct;
- (void)addAssetFailureReason:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)assetFailureReasonAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetFailureReasonCount;
- (id)assetFailureReasons;
- (id)assetSetId;
- (id)assetSetName;
- (id)assistantDimensions;
- (unsigned long long)buildInstallationTimestampInSecondsSince1970;
- (void)clearAssetFailureReason;
- (void)deleteAssetFailureReason;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssistantDimensions;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deletePreviousSystemBuild;
- (id)dictionaryRepresentation;
- (bool)hasAssetSetId;
- (bool)hasAssetSetName;
- (bool)hasAssistantDimensions;
- (bool)hasBuildInstallationTimestampInSecondsSince1970;
- (bool)hasPreviousSystemBuild;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)previousSystemBuild;
- (bool)readFrom:(id)arg1;
- (void)setAssetFailureReasons:(id)arg1;
- (void)setAssetSetId:(id)arg1;
- (void)setAssetSetName:(id)arg1;
- (void)setAssistantDimensions:(id)arg1;
- (void)setBuildInstallationTimestampInSecondsSince1970:(unsigned long long)arg1;
- (void)setHasAssetSetId:(bool)arg1;
- (void)setHasAssetSetName:(bool)arg1;
- (void)setHasAssistantDimensions:(bool)arg1;
- (void)setHasBuildInstallationTimestampInSecondsSince1970:(bool)arg1;
- (void)setHasPreviousSystemBuild:(bool)arg1;
- (void)setPreviousSystemBuild:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
