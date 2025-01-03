/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PFAPreprocessorExecutionMetrics : SISchemaInstrumentationMessage {
    unsigned long long  _executionTimeInNs;
    struct { 
        unsigned int executionTimeInNs : 1; 
        unsigned int stagedMessageCount : 1; 
        unsigned int processedMessageCount : 1; 
    }  _has;
    unsigned int  _processedMessageCount;
    unsigned int  _stagedMessageCount;
}

@property (nonatomic) unsigned long long executionTimeInNs;
@property (nonatomic) bool hasExecutionTimeInNs;
@property (nonatomic) bool hasProcessedMessageCount;
@property (nonatomic) bool hasStagedMessageCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int processedMessageCount;
@property (nonatomic) unsigned int stagedMessageCount;

- (void)deleteExecutionTimeInNs;
- (void)deleteProcessedMessageCount;
- (void)deleteStagedMessageCount;
- (id)dictionaryRepresentation;
- (unsigned long long)executionTimeInNs;
- (bool)hasExecutionTimeInNs;
- (bool)hasProcessedMessageCount;
- (bool)hasStagedMessageCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)processedMessageCount;
- (bool)readFrom:(id)arg1;
- (void)setExecutionTimeInNs:(unsigned long long)arg1;
- (void)setHasExecutionTimeInNs:(bool)arg1;
- (void)setHasProcessedMessageCount:(bool)arg1;
- (void)setHasStagedMessageCount:(bool)arg1;
- (void)setProcessedMessageCount:(unsigned int)arg1;
- (void)setStagedMessageCount:(unsigned int)arg1;
- (unsigned int)stagedMessageCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
