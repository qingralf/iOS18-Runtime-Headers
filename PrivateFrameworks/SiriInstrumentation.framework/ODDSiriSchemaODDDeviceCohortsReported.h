/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDDeviceCohortsReported : SISchemaInstrumentationMessage {
    NSArray * _cohorts;
}

@property (nonatomic, copy) NSArray *cohorts;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addCohorts:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearCohorts;
- (id)cohorts;
- (id)cohortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cohortsCount;
- (void)deleteCohorts;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCohorts:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
