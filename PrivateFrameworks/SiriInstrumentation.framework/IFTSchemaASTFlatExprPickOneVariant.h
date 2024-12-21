/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaASTFlatExprPickOneVariant : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
    bool  _hasRawEventId;
    SISchemaUUID * _rawEventId;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasRawEventId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *rawEventId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteExists;
- (void)deleteRawEventId;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasRawEventId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)rawEventId;
- (bool)readFrom:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasRawEventId:(bool)arg1;
- (void)setRawEventId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end