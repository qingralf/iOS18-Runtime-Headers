/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDTimeInterval : SISchemaInstrumentationMessage {
    struct { 
        unsigned int startTimestampInSecondsSince1970 : 1; 
        unsigned int numberOfSeconds : 1; 
    }  _has;
    unsigned int  _numberOfSeconds;
    unsigned long long  _startTimestampInSecondsSince1970;
}

@property (nonatomic) bool hasNumberOfSeconds;
@property (nonatomic) bool hasStartTimestampInSecondsSince1970;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numberOfSeconds;
@property (nonatomic) unsigned long long startTimestampInSecondsSince1970;

- (void)deleteNumberOfSeconds;
- (void)deleteStartTimestampInSecondsSince1970;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfSeconds;
- (bool)hasStartTimestampInSecondsSince1970;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numberOfSeconds;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfSeconds:(bool)arg1;
- (void)setHasStartTimestampInSecondsSince1970:(bool)arg1;
- (void)setNumberOfSeconds:(unsigned int)arg1;
- (void)setStartTimestampInSecondsSince1970:(unsigned long long)arg1;
- (unsigned long long)startTimestampInSecondsSince1970;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
