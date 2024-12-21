/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DialogEngineSchemaDLGENGNamedEntitiesUsed : SISchemaInstrumentationMessage {
    int  _catId;
    struct { 
        unsigned int catId : 1; 
    }  _has;
    NSArray * _namedEntities;
}

@property (nonatomic) int catId;
@property (nonatomic) bool hasCatId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *namedEntities;

- (void).cxx_destruct;
- (void)addNamedEntities:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)catId;
- (void)clearNamedEntities;
- (void)deleteCatId;
- (void)deleteNamedEntities;
- (id)dictionaryRepresentation;
- (bool)hasCatId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (bool)readFrom:(id)arg1;
- (void)setCatId:(int)arg1;
- (void)setHasCatId:(bool)arg1;
- (void)setNamedEntities:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end