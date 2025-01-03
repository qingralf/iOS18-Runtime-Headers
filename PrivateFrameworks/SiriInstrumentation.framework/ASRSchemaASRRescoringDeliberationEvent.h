/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRRescoringDeliberationEvent : SISchemaInstrumentationMessage {
    float  _eventDuration;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
        unsigned int eventDuration : 1; 
    }  _has;
}

@property (nonatomic) float eventDuration;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasEventDuration;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteEventDuration;
- (void)deleteEventType;
- (id)dictionaryRepresentation;
- (float)eventDuration;
- (int)eventType;
- (bool)hasEventDuration;
- (bool)hasEventType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEventDuration:(float)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventDuration:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
