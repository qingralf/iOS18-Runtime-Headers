/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTCandidate : SISchemaInstrumentationMessage {
    struct { 
        unsigned int source : 1; 
    }  _has;
    bool  _hasPromptStatus;
    bool  _hasStatementId;
    bool  _hasValue;
    IFTSchemaIFTCandidatePromptStatus * _promptStatus;
    int  _source;
    IFTSchemaIFTStatementId * _statementId;
    IFTSchemaIFTTypedValue * _value;
}

@property (nonatomic) bool hasPromptStatus;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasStatementId;
@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IFTSchemaIFTCandidatePromptStatus *promptStatus;
@property (nonatomic) int source;
@property (nonatomic, retain) IFTSchemaIFTStatementId *statementId;
@property (nonatomic, retain) IFTSchemaIFTTypedValue *value;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePromptStatus;
- (void)deleteSource;
- (void)deleteStatementId;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasPromptStatus;
- (bool)hasSource;
- (bool)hasStatementId;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)promptStatus;
- (bool)readFrom:(id)arg1;
- (void)setHasPromptStatus:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasStatementId:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setPromptStatus:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setStatementId:(id)arg1;
- (void)setValue:(id)arg1;
- (int)source;
- (id)statementId;
- (id)suppressMessageUnderConditions;
- (id)value;
- (void)writeTo:(id)arg1;

@end
