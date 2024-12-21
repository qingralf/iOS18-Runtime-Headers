/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    unsigned long long  _commandEndTimeInNs;
    unsigned long long  _commandParserEndTimeInNs;
    unsigned long long  _commandParserStartTimeInNs;
    SISchemaUUID * _dictationVoiceCommandLinkId;
    struct { 
        unsigned int commandEndTimeInNs : 1; 
        unsigned int commandParserStartTimeInNs : 1; 
        unsigned int commandParserEndTimeInNs : 1; 
        unsigned int utteranceStartTimeInNs : 1; 
        unsigned int utteranceEndTimeInNs : 1; 
    }  _has;
    bool  _hasDictationVoiceCommandLinkId;
    bool  _hasRecognitionResultLinkId;
    bool  _hasVoiceCommandId;
    SISchemaUUID * _recognitionResultLinkId;
    unsigned long long  _utteranceEndTimeInNs;
    unsigned long long  _utteranceStartTimeInNs;
    SISchemaUUID * _voiceCommandId;
}

@property (nonatomic) unsigned long long commandEndTimeInNs;
@property (nonatomic) unsigned long long commandParserEndTimeInNs;
@property (nonatomic) unsigned long long commandParserStartTimeInNs;
@property (nonatomic, retain) SISchemaUUID *dictationVoiceCommandLinkId;
@property (nonatomic) bool hasCommandEndTimeInNs;
@property (nonatomic) bool hasCommandParserEndTimeInNs;
@property (nonatomic) bool hasCommandParserStartTimeInNs;
@property (nonatomic) bool hasDictationVoiceCommandLinkId;
@property (nonatomic) bool hasRecognitionResultLinkId;
@property (nonatomic) bool hasUtteranceEndTimeInNs;
@property (nonatomic) bool hasUtteranceStartTimeInNs;
@property (nonatomic) bool hasVoiceCommandId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *recognitionResultLinkId;
@property (nonatomic) unsigned long long utteranceEndTimeInNs;
@property (nonatomic) unsigned long long utteranceStartTimeInNs;
@property (nonatomic, retain) SISchemaUUID *voiceCommandId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned long long)commandEndTimeInNs;
- (unsigned long long)commandParserEndTimeInNs;
- (unsigned long long)commandParserStartTimeInNs;
- (void)deleteCommandEndTimeInNs;
- (void)deleteCommandParserEndTimeInNs;
- (void)deleteCommandParserStartTimeInNs;
- (void)deleteDictationVoiceCommandLinkId;
- (void)deleteRecognitionResultLinkId;
- (void)deleteUtteranceEndTimeInNs;
- (void)deleteUtteranceStartTimeInNs;
- (void)deleteVoiceCommandId;
- (id)dictationVoiceCommandLinkId;
- (id)dictionaryRepresentation;
- (bool)hasCommandEndTimeInNs;
- (bool)hasCommandParserEndTimeInNs;
- (bool)hasCommandParserStartTimeInNs;
- (bool)hasDictationVoiceCommandLinkId;
- (bool)hasRecognitionResultLinkId;
- (bool)hasUtteranceEndTimeInNs;
- (bool)hasUtteranceStartTimeInNs;
- (bool)hasVoiceCommandId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)recognitionResultLinkId;
- (void)setCommandEndTimeInNs:(unsigned long long)arg1;
- (void)setCommandParserEndTimeInNs:(unsigned long long)arg1;
- (void)setCommandParserStartTimeInNs:(unsigned long long)arg1;
- (void)setDictationVoiceCommandLinkId:(id)arg1;
- (void)setHasCommandEndTimeInNs:(bool)arg1;
- (void)setHasCommandParserEndTimeInNs:(bool)arg1;
- (void)setHasCommandParserStartTimeInNs:(bool)arg1;
- (void)setHasDictationVoiceCommandLinkId:(bool)arg1;
- (void)setHasRecognitionResultLinkId:(bool)arg1;
- (void)setHasUtteranceEndTimeInNs:(bool)arg1;
- (void)setHasUtteranceStartTimeInNs:(bool)arg1;
- (void)setHasVoiceCommandId:(bool)arg1;
- (void)setRecognitionResultLinkId:(id)arg1;
- (void)setUtteranceEndTimeInNs:(unsigned long long)arg1;
- (void)setUtteranceStartTimeInNs:(unsigned long long)arg1;
- (void)setVoiceCommandId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)utteranceEndTimeInNs;
- (unsigned long long)utteranceStartTimeInNs;
- (id)voiceCommandId;
- (void)writeTo:(id)arg1;

@end