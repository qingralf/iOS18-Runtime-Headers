/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFPlatformSchemaIFPlatformClientEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int postingSpanId : 1; 
    }  _has;
    bool  _hasIfSessionId;
    SISchemaUUID * _ifSessionId;
    unsigned long long  _postingSpanId;
}

@property (nonatomic) bool hasIfSessionId;
@property (nonatomic) bool hasPostingSpanId;
@property (nonatomic, retain) SISchemaUUID *ifSessionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long postingSpanId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIfSessionId;
- (void)deletePostingSpanId;
- (id)dictionaryRepresentation;
- (bool)hasIfSessionId;
- (bool)hasPostingSpanId;
- (unsigned long long)hash;
- (id)ifSessionId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)postingSpanId;
- (bool)readFrom:(id)arg1;
- (void)setHasIfSessionId:(bool)arg1;
- (void)setHasPostingSpanId:(bool)arg1;
- (void)setIfSessionId:(id)arg1;
- (void)setPostingSpanId:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
