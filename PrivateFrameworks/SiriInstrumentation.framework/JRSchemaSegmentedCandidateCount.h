/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface JRSchemaSegmentedCandidateCount : SISchemaInstrumentationMessage {
    SISchemaUUID * _candidateId;
    unsigned int  _count;
    struct { 
        unsigned int count : 1; 
    }  _has;
    bool  _hasCandidateId;
}

@property (nonatomic, retain) SISchemaUUID *candidateId;
@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasCandidateId;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)candidateId;
- (unsigned int)count;
- (void)deleteCandidateId;
- (void)deleteCount;
- (id)dictionaryRepresentation;
- (bool)hasCandidateId;
- (bool)hasCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCandidateId:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCandidateId:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
