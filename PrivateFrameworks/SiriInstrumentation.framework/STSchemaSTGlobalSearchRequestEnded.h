/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface STSchemaSTGlobalSearchRequestEnded : SISchemaInstrumentationMessage {
    NSArray * _results;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearResult;
- (void)deleteResult;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultCount;
- (id)results;
- (void)setResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end