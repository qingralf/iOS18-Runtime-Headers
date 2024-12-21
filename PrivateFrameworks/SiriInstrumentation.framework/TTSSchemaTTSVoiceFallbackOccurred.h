/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface TTSSchemaTTSVoiceFallbackOccurred : SISchemaInstrumentationMessage {
    TTSSchemaTTSVoiceContext * _context;
    SISchemaUUID * _contextId;
    bool  _hasContext;
    bool  _hasContextId;
    bool  _hasVoiceSettings;
    SISchemaVoiceSettings * _voiceSettings;
}

@property (nonatomic, retain) TTSSchemaTTSVoiceContext *context;
@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContext;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasVoiceSettings;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaVoiceSettings *voiceSettings;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)context;
- (id)contextId;
- (void)deleteContext;
- (void)deleteContextId;
- (void)deleteVoiceSettings;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasContextId;
- (bool)hasVoiceSettings;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setHasContext:(bool)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasVoiceSettings:(bool)arg1;
- (void)setVoiceSettings:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceSettings;
- (void)writeTo:(id)arg1;

@end