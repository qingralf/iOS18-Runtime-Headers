/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHUserSpeakingContext : SISchemaInstrumentationMessage {
    MHSchemaMHUserSpeakingEnded * _ended;
    bool  _hasEnded;
    bool  _hasStartedOrChanged;
    bool  _hasTrpId;
    MHSchemaMHUserSpeakingStarted * _startedOrChanged;
    SISchemaUUID * _trpId;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) MHSchemaMHUserSpeakingEnded *ended;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHUserSpeakingStarted *startedOrChanged;
@property (nonatomic, retain) SISchemaUUID *trpId;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasEnded;
- (bool)hasStartedOrChanged;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end