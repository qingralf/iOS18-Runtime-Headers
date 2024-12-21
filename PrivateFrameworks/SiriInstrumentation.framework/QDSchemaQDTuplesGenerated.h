/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface QDSchemaQDTuplesGenerated : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numberOfTuples : 1; 
        unsigned int maximumTupleWidth : 1; 
        unsigned int wasToolTupleLimitReached : 1; 
    }  _has;
    unsigned int  _maximumTupleWidth;
    unsigned int  _numberOfTuples;
    bool  _wasToolTupleLimitReached;
}

@property (nonatomic) bool hasMaximumTupleWidth;
@property (nonatomic) bool hasNumberOfTuples;
@property (nonatomic) bool hasWasToolTupleLimitReached;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int maximumTupleWidth;
@property (nonatomic) unsigned int numberOfTuples;
@property (nonatomic) bool wasToolTupleLimitReached;

- (void)deleteMaximumTupleWidth;
- (void)deleteNumberOfTuples;
- (void)deleteWasToolTupleLimitReached;
- (id)dictionaryRepresentation;
- (bool)hasMaximumTupleWidth;
- (bool)hasNumberOfTuples;
- (bool)hasWasToolTupleLimitReached;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)maximumTupleWidth;
- (unsigned int)numberOfTuples;
- (bool)readFrom:(id)arg1;
- (void)setHasMaximumTupleWidth:(bool)arg1;
- (void)setHasNumberOfTuples:(bool)arg1;
- (void)setHasWasToolTupleLimitReached:(bool)arg1;
- (void)setMaximumTupleWidth:(unsigned int)arg1;
- (void)setNumberOfTuples:(unsigned int)arg1;
- (void)setWasToolTupleLimitReached:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)wasToolTupleLimitReached;
- (void)writeTo:(id)arg1;

@end