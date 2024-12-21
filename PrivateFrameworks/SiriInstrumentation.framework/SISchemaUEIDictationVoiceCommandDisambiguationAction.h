/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUEIDictationVoiceCommandDisambiguationAction : SISchemaInstrumentationMessage {
    unsigned int  _disambiguationIndex;
    int  _disambiguationType;
    struct { 
        unsigned int disambiguationType : 1; 
        unsigned int disambiguationIndex : 1; 
        unsigned int totalDisambiguationAlternatives : 1; 
    }  _has;
    bool  _hasVoiceCommandId;
    unsigned int  _totalDisambiguationAlternatives;
    SISchemaUUID * _voiceCommandId;
}

@property (nonatomic) unsigned int disambiguationIndex;
@property (nonatomic) int disambiguationType;
@property (nonatomic) bool hasDisambiguationIndex;
@property (nonatomic) bool hasDisambiguationType;
@property (nonatomic) bool hasTotalDisambiguationAlternatives;
@property (nonatomic) bool hasVoiceCommandId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int totalDisambiguationAlternatives;
@property (nonatomic, retain) SISchemaUUID *voiceCommandId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDisambiguationIndex;
- (void)deleteDisambiguationType;
- (void)deleteTotalDisambiguationAlternatives;
- (void)deleteVoiceCommandId;
- (id)dictionaryRepresentation;
- (unsigned int)disambiguationIndex;
- (int)disambiguationType;
- (bool)hasDisambiguationIndex;
- (bool)hasDisambiguationType;
- (bool)hasTotalDisambiguationAlternatives;
- (bool)hasVoiceCommandId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationIndex:(unsigned int)arg1;
- (void)setDisambiguationType:(int)arg1;
- (void)setHasDisambiguationIndex:(bool)arg1;
- (void)setHasDisambiguationType:(bool)arg1;
- (void)setHasTotalDisambiguationAlternatives:(bool)arg1;
- (void)setHasVoiceCommandId:(bool)arg1;
- (void)setTotalDisambiguationAlternatives:(unsigned int)arg1;
- (void)setVoiceCommandId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)totalDisambiguationAlternatives;
- (id)voiceCommandId;
- (void)writeTo:(id)arg1;

@end