/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PRSiriSchemaPRRequestEnded : SISchemaInstrumentationMessage {
    int  _eventName;
    struct { 
        unsigned int eventName : 1; 
    }  _has;
    bool  _hasTranscriptEventId;
    SISchemaUUID * _transcriptEventId;
}

@property (nonatomic) int eventName;
@property (nonatomic) bool hasEventName;
@property (nonatomic) bool hasTranscriptEventId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *transcriptEventId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEventName;
- (void)deleteTranscriptEventId;
- (id)dictionaryRepresentation;
- (int)eventName;
- (bool)hasEventName;
- (bool)hasTranscriptEventId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEventName:(int)arg1;
- (void)setHasEventName:(bool)arg1;
- (void)setHasTranscriptEventId:(bool)arg1;
- (void)setTranscriptEventId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)transcriptEventId;
- (void)writeTo:(id)arg1;

@end