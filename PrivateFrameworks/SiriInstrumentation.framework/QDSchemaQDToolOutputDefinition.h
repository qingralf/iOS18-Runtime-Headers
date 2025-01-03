/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface QDSchemaQDToolOutputDefinition : SISchemaInstrumentationMessage {
    QDSchemaQDEntityType * _entityType;
    bool  _hasEntityType;
}

@property (nonatomic, retain) QDSchemaQDEntityType *entityType;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEntityType;
- (id)dictionaryRepresentation;
- (id)entityType;
- (bool)hasEntityType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityType:(id)arg1;
- (void)setHasEntityType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
