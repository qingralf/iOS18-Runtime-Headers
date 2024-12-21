/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface INFERENCESchemaINFERENCEEuclidServiceMetrics : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isAsrE3Invoked : 1; 
        unsigned int numEuclidCandidates : 1; 
    }  _has;
    bool  _isAsrE3Invoked;
    unsigned int  _numEuclidCandidates;
}

@property (nonatomic) bool hasIsAsrE3Invoked;
@property (nonatomic) bool hasNumEuclidCandidates;
@property (nonatomic) bool isAsrE3Invoked;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numEuclidCandidates;

- (void)deleteIsAsrE3Invoked;
- (void)deleteNumEuclidCandidates;
- (id)dictionaryRepresentation;
- (bool)hasIsAsrE3Invoked;
- (bool)hasNumEuclidCandidates;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAsrE3Invoked;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numEuclidCandidates;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAsrE3Invoked:(bool)arg1;
- (void)setHasNumEuclidCandidates:(bool)arg1;
- (void)setIsAsrE3Invoked:(bool)arg1;
- (void)setNumEuclidCandidates:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end