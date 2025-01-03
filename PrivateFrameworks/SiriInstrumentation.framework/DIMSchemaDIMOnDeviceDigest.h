/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DIMSchemaDIMOnDeviceDigest : SISchemaInstrumentationMessage {
    unsigned int  _daysWithTwoAssistantSpeechRequestsPerWeek;
    unsigned int  _daysWithTwoValidAssistantTurnsPerWeek;
    struct { 
        unsigned int daysWithTwoValidAssistantTurnsPerWeek : 1; 
        unsigned int daysWithTwoAssistantSpeechRequestsPerWeek : 1; 
    }  _has;
}

@property (nonatomic) unsigned int daysWithTwoAssistantSpeechRequestsPerWeek;
@property (nonatomic) unsigned int daysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) bool hasDaysWithTwoAssistantSpeechRequestsPerWeek;
@property (nonatomic) bool hasDaysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned int)daysWithTwoAssistantSpeechRequestsPerWeek;
- (unsigned int)daysWithTwoValidAssistantTurnsPerWeek;
- (void)deleteDaysWithTwoAssistantSpeechRequestsPerWeek;
- (void)deleteDaysWithTwoValidAssistantTurnsPerWeek;
- (id)dictionaryRepresentation;
- (bool)hasDaysWithTwoAssistantSpeechRequestsPerWeek;
- (bool)hasDaysWithTwoValidAssistantTurnsPerWeek;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDaysWithTwoAssistantSpeechRequestsPerWeek:(unsigned int)arg1;
- (void)setDaysWithTwoValidAssistantTurnsPerWeek:(unsigned int)arg1;
- (void)setHasDaysWithTwoAssistantSpeechRequestsPerWeek:(bool)arg1;
- (void)setHasDaysWithTwoValidAssistantTurnsPerWeek:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
