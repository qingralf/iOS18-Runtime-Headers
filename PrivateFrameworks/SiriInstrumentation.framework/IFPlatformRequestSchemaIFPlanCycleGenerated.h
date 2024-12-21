/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFPlatformRequestSchemaIFPlanCycleGenerated : SISchemaInstrumentationMessage {
    bool  _hasPlanCycleId;
    SISchemaUUID * _planCycleId;
}

@property (nonatomic) bool hasPlanCycleId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *planCycleId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePlanCycleId;
- (id)dictionaryRepresentation;
- (bool)hasPlanCycleId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)planCycleId;
- (bool)readFrom:(id)arg1;
- (void)setHasPlanCycleId:(bool)arg1;
- (void)setPlanCycleId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end