/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DialogEngineSchemaDLGENGClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _dialogEngineId;
    bool  _hasDialogEngineId;
    bool  _hasRequestId;
    bool  _hasSubRequestId;
    SISchemaUUID * _requestId;
    SISchemaUUID * _subRequestId;
}

@property (nonatomic, retain) SISchemaUUID *dialogEngineId;
@property (nonatomic) bool hasDialogEngineId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasSubRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, retain) SISchemaUUID *subRequestId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDialogEngineId;
- (void)deleteRequestId;
- (void)deleteSubRequestId;
- (id)dialogEngineId;
- (id)dictionaryRepresentation;
- (bool)hasDialogEngineId;
- (bool)hasRequestId;
- (bool)hasSubRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setDialogEngineId:(id)arg1;
- (void)setHasDialogEngineId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasSubRequestId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSubRequestId:(id)arg1;
- (id)subRequestId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end