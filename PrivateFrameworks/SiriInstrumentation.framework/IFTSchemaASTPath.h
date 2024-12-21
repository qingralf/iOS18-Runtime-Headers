/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaASTPath : SISchemaInstrumentationMessage {
    long long  _collectionIndex;
    struct { 
        unsigned int collectionIndex : 1; 
    }  _has;
    bool  _hasParameterName;
    NSString * _parameterName;
}

@property (nonatomic) long long collectionIndex;
@property (nonatomic) bool hasCollectionIndex;
@property (nonatomic) bool hasParameterName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *parameterName;

- (void).cxx_destruct;
- (long long)collectionIndex;
- (void)deleteCollectionIndex;
- (void)deleteParameterName;
- (id)dictionaryRepresentation;
- (bool)hasCollectionIndex;
- (bool)hasParameterName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parameterName;
- (bool)readFrom:(id)arg1;
- (void)setCollectionIndex:(long long)arg1;
- (void)setHasCollectionIndex:(bool)arg1;
- (void)setHasParameterName:(bool)arg1;
- (void)setParameterName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end