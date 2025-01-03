/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PNRODSchemaPNRODIntelligenceFlowSessionSummary : SISchemaInstrumentationMessage {
    SISchemaUUID * _clientSessionId;
    PNRODSchemaPNRODFailureInfo * _failureInfo;
    PNRODSchemaPNRODMetricDuration * _fullPlannerServiceSetupTime;
    bool  _hasClientSessionId;
    bool  _hasFailureInfo;
    bool  _hasFullPlannerServiceSetupTime;
    bool  _hasPlanOverridesServiceSetupTime;
    bool  _hasPlanResolverServiceSetupTime;
    bool  _hasQueryDecorationServiceSetupTime;
    bool  _hasRawSessionId;
    bool  _hasResponseGenerationServiceSetupTime;
    bool  _hasStandardPlannerSetupTime;
    PNRODSchemaPNRODMetricDuration * _planOverridesServiceSetupTime;
    PNRODSchemaPNRODMetricDuration * _planResolverServiceSetupTime;
    PNRODSchemaPNRODMetricDuration * _queryDecorationServiceSetupTime;
    SISchemaUUID * _rawSessionId;
    PNRODSchemaPNRODMetricDuration * _responseGenerationServiceSetupTime;
    PNRODSchemaPNRODMetricDuration * _standardPlannerSetupTime;
}

@property (nonatomic, retain) SISchemaUUID *clientSessionId;
@property (nonatomic, retain) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *fullPlannerServiceSetupTime;
@property (nonatomic) bool hasClientSessionId;
@property (nonatomic) bool hasFailureInfo;
@property (nonatomic) bool hasFullPlannerServiceSetupTime;
@property (nonatomic) bool hasPlanOverridesServiceSetupTime;
@property (nonatomic) bool hasPlanResolverServiceSetupTime;
@property (nonatomic) bool hasQueryDecorationServiceSetupTime;
@property (nonatomic) bool hasRawSessionId;
@property (nonatomic) bool hasResponseGenerationServiceSetupTime;
@property (nonatomic) bool hasStandardPlannerSetupTime;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *planOverridesServiceSetupTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *planResolverServiceSetupTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *queryDecorationServiceSetupTime;
@property (nonatomic, retain) SISchemaUUID *rawSessionId;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *responseGenerationServiceSetupTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *standardPlannerSetupTime;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)clientSessionId;
- (void)deleteClientSessionId;
- (void)deleteFailureInfo;
- (void)deleteFullPlannerServiceSetupTime;
- (void)deletePlanOverridesServiceSetupTime;
- (void)deletePlanResolverServiceSetupTime;
- (void)deleteQueryDecorationServiceSetupTime;
- (void)deleteRawSessionId;
- (void)deleteResponseGenerationServiceSetupTime;
- (void)deleteStandardPlannerSetupTime;
- (id)dictionaryRepresentation;
- (id)failureInfo;
- (id)fullPlannerServiceSetupTime;
- (bool)hasClientSessionId;
- (bool)hasFailureInfo;
- (bool)hasFullPlannerServiceSetupTime;
- (bool)hasPlanOverridesServiceSetupTime;
- (bool)hasPlanResolverServiceSetupTime;
- (bool)hasQueryDecorationServiceSetupTime;
- (bool)hasRawSessionId;
- (bool)hasResponseGenerationServiceSetupTime;
- (bool)hasStandardPlannerSetupTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)planOverridesServiceSetupTime;
- (id)planResolverServiceSetupTime;
- (id)queryDecorationServiceSetupTime;
- (id)rawSessionId;
- (bool)readFrom:(id)arg1;
- (id)responseGenerationServiceSetupTime;
- (void)setClientSessionId:(id)arg1;
- (void)setFailureInfo:(id)arg1;
- (void)setFullPlannerServiceSetupTime:(id)arg1;
- (void)setHasClientSessionId:(bool)arg1;
- (void)setHasFailureInfo:(bool)arg1;
- (void)setHasFullPlannerServiceSetupTime:(bool)arg1;
- (void)setHasPlanOverridesServiceSetupTime:(bool)arg1;
- (void)setHasPlanResolverServiceSetupTime:(bool)arg1;
- (void)setHasQueryDecorationServiceSetupTime:(bool)arg1;
- (void)setHasRawSessionId:(bool)arg1;
- (void)setHasResponseGenerationServiceSetupTime:(bool)arg1;
- (void)setHasStandardPlannerSetupTime:(bool)arg1;
- (void)setPlanOverridesServiceSetupTime:(id)arg1;
- (void)setPlanResolverServiceSetupTime:(id)arg1;
- (void)setQueryDecorationServiceSetupTime:(id)arg1;
- (void)setRawSessionId:(id)arg1;
- (void)setResponseGenerationServiceSetupTime:(id)arg1;
- (void)setStandardPlannerSetupTime:(id)arg1;
- (id)standardPlannerSetupTime;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
