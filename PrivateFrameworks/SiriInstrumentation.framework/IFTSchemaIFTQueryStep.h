/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTQueryStep : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
    bool  _hasStatementId;
    NSArray * _queries;
    IFTSchemaIFTStatementId * _statementId;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasStatementId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *queries;
@property (nonatomic, retain) IFTSchemaIFTStatementId *statementId;

- (void).cxx_destruct;
- (void)addQueries:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearQueries;
- (void)deleteExists;
- (void)deleteQueries;
- (void)deleteStatementId;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasStatementId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)queries;
- (id)queriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)queriesCount;
- (bool)readFrom:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasStatementId:(bool)arg1;
- (void)setQueries:(id)arg1;
- (void)setStatementId:(id)arg1;
- (id)statementId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
