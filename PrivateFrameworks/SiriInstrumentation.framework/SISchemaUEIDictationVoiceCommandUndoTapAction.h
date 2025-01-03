/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUEIDictationVoiceCommandUndoTapAction : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isUndoTapAlternativeSelection : 1; 
    }  _has;
    bool  _hasVoiceCommandId;
    bool  _isUndoTapAlternativeSelection;
    SISchemaUUID * _voiceCommandId;
}

@property (nonatomic) bool hasIsUndoTapAlternativeSelection;
@property (nonatomic) bool hasVoiceCommandId;
@property (nonatomic) bool isUndoTapAlternativeSelection;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *voiceCommandId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsUndoTapAlternativeSelection;
- (void)deleteVoiceCommandId;
- (id)dictionaryRepresentation;
- (bool)hasIsUndoTapAlternativeSelection;
- (bool)hasVoiceCommandId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUndoTapAlternativeSelection;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsUndoTapAlternativeSelection:(bool)arg1;
- (void)setHasVoiceCommandId:(bool)arg1;
- (void)setIsUndoTapAlternativeSelection:(bool)arg1;
- (void)setVoiceCommandId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceCommandId;
- (void)writeTo:(id)arg1;

@end
