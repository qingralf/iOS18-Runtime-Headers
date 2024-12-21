/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTCallExpression : SISchemaInstrumentationMessage {
    bool  _hasToolId;
    NSString * _toolId;
}

@property (nonatomic) bool hasToolId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *toolId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteToolId;
- (id)dictionaryRepresentation;
- (bool)hasToolId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasToolId:(bool)arg1;
- (void)setToolId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)toolId;
- (void)writeTo:(id)arg1;

@end