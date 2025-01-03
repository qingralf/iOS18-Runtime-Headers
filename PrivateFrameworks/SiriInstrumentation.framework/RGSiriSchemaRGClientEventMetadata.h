/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RGSiriSchemaRGClientEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int postingSpanId : 1; 
    }  _has;
    bool  _hasIfRequestId;
    bool  _hasRgId;
    SISchemaUUID * _ifRequestId;
    unsigned long long  _postingSpanId;
    SISchemaUUID * _rgId;
}

@property (nonatomic) bool hasIfRequestId;
@property (nonatomic) bool hasPostingSpanId;
@property (nonatomic) bool hasRgId;
@property (nonatomic, retain) SISchemaUUID *ifRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic, retain) SISchemaUUID *rgId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIfRequestId;
- (void)deletePostingSpanId;
- (void)deleteRgId;
- (id)dictionaryRepresentation;
- (bool)hasIfRequestId;
- (bool)hasPostingSpanId;
- (bool)hasRgId;
- (unsigned long long)hash;
- (id)ifRequestId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)postingSpanId;
- (bool)readFrom:(id)arg1;
- (id)rgId;
- (void)setHasIfRequestId:(bool)arg1;
- (void)setHasPostingSpanId:(bool)arg1;
- (void)setHasRgId:(bool)arg1;
- (void)setIfRequestId:(id)arg1;
- (void)setPostingSpanId:(unsigned long long)arg1;
- (void)setRgId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
