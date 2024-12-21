/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDTurnCounts : SISchemaInstrumentationMessage {
    struct { 
        unsigned int totalTurnCount : 1; 
        unsigned int validTurnCount : 1; 
    }  _has;
    unsigned int  _totalTurnCount;
    unsigned int  _validTurnCount;
}

@property (nonatomic) bool hasTotalTurnCount;
@property (nonatomic) bool hasValidTurnCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int totalTurnCount;
@property (nonatomic) unsigned int validTurnCount;

- (void)deleteTotalTurnCount;
- (void)deleteValidTurnCount;
- (id)dictionaryRepresentation;
- (bool)hasTotalTurnCount;
- (bool)hasValidTurnCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTotalTurnCount:(bool)arg1;
- (void)setHasValidTurnCount:(bool)arg1;
- (void)setTotalTurnCount:(unsigned int)arg1;
- (void)setValidTurnCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)totalTurnCount;
- (unsigned int)validTurnCount;
- (void)writeTo:(id)arg1;

@end