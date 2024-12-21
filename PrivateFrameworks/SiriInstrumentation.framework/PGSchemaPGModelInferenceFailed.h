/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PGSchemaPGModelInferenceFailed : SISchemaInstrumentationMessage {
    IFTSchemaIFTIntelligenceFlowError * _criticalError;
    bool  _hasCriticalError;
    bool  _hasModelIdentifier;
    NSString * _modelIdentifier;
}

@property (nonatomic, retain) IFTSchemaIFTIntelligenceFlowError *criticalError;
@property (nonatomic) bool hasCriticalError;
@property (nonatomic) bool hasModelIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelIdentifier;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)criticalError;
- (void)deleteCriticalError;
- (void)deleteModelIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasCriticalError;
- (bool)hasModelIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCriticalError:(id)arg1;
- (void)setHasCriticalError:(bool)arg1;
- (void)setHasModelIdentifier:(bool)arg1;
- (void)setModelIdentifier:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end