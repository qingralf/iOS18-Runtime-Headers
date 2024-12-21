/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTStatementResultPayload : SISchemaInstrumentationMessage {
    bool  _hasOutcome;
    bool  _hasResponse;
    IFTSchemaIFTStatementOutcome * _outcome;
    IFTSchemaIFTResponseManifest * _response;
}

@property (nonatomic) bool hasOutcome;
@property (nonatomic) bool hasResponse;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IFTSchemaIFTStatementOutcome *outcome;
@property (nonatomic, retain) IFTSchemaIFTResponseManifest *response;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOutcome;
- (void)deleteResponse;
- (id)dictionaryRepresentation;
- (bool)hasOutcome;
- (bool)hasResponse;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)outcome;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setHasOutcome:(bool)arg1;
- (void)setHasResponse:(bool)arg1;
- (void)setOutcome:(id)arg1;
- (void)setResponse:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end