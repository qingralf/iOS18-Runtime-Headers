/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RFSchemaRFClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _aceViewId;
    bool  _hasAceViewId;
    bool  _hasRequestId;
    bool  _hasSubRequestId;
    bool  _hasTurnId;
    SISchemaUUID * _requestId;
    SISchemaUUID * _subRequestId;
    SISchemaUUID * _turnId;
}

@property (nonatomic, retain) SISchemaUUID *aceViewId;
@property (nonatomic) bool hasAceViewId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasSubRequestId;
@property (nonatomic) bool hasTurnId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, retain) SISchemaUUID *subRequestId;
@property (nonatomic, retain) SISchemaUUID *turnId;

- (void).cxx_destruct;
- (id)aceViewId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAceViewId;
- (void)deleteRequestId;
- (void)deleteSubRequestId;
- (void)deleteTurnId;
- (id)dictionaryRepresentation;
- (bool)hasAceViewId;
- (bool)hasRequestId;
- (bool)hasSubRequestId;
- (bool)hasTurnId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setAceViewId:(id)arg1;
- (void)setHasAceViewId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasSubRequestId:(bool)arg1;
- (void)setHasTurnId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSubRequestId:(id)arg1;
- (void)setTurnId:(id)arg1;
- (id)subRequestId;
- (id)suppressMessageUnderConditions;
- (id)turnId;
- (void)writeTo:(id)arg1;

@end
