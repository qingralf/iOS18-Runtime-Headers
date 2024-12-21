/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CMSchemaCMClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _cmId;
    bool  _hasCmId;
}

@property (nonatomic, retain) SISchemaUUID *cmId;
@property (nonatomic) bool hasCmId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cmId;
- (void)deleteCmId;
- (id)dictionaryRepresentation;
- (bool)hasCmId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCmId:(id)arg1;
- (void)setHasCmId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end