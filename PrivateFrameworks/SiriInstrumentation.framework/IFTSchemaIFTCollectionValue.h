/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTCollectionValue : SISchemaInstrumentationMessage {
    bool  _hasTypeIdentifier;
    IFTSchemaIFTTypeIdentifier * _typeIdentifier;
    NSArray * _values;
}

@property (nonatomic) bool hasTypeIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic, copy) NSArray *values;

- (void).cxx_destruct;
- (void)addValues:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearValues;
- (void)deleteTypeIdentifier;
- (void)deleteValues;
- (id)dictionaryRepresentation;
- (bool)hasTypeIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTypeIdentifier:(bool)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setValues:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)typeIdentifier;
- (id)values;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
