/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PFAEventStatistics : SISchemaInstrumentationMessage {
    struct { 
        unsigned int ordinal : 1; 
        unsigned int messageCount : 1; 
    }  _has;
    unsigned int  _messageCount;
    unsigned int  _ordinal;
}

@property (nonatomic) bool hasMessageCount;
@property (nonatomic) bool hasOrdinal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) unsigned int ordinal;

- (void)deleteMessageCount;
- (void)deleteOrdinal;
- (id)dictionaryRepresentation;
- (bool)hasMessageCount;
- (bool)hasOrdinal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)messageCount;
- (unsigned int)ordinal;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageCount:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setMessageCount:(unsigned int)arg1;
- (void)setOrdinal:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end