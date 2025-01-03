/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface QDSchemaQDRetrievedTool : SISchemaInstrumentationMessage {
    struct { 
        unsigned int subType : 1; 
        unsigned int similarityScore : 1; 
        unsigned int selectionCriteria : 1; 
    }  _has;
    bool  _hasSessionScopedUniqueId;
    bool  _hasToolDefinition;
    bool  _hasToolId;
    bool  _hasToolSource;
    int  _selectionCriteria;
    SISchemaUUID * _sessionScopedUniqueId;
    float  _similarityScore;
    int  _subType;
    QDSchemaQDToolDefinition * _toolDefinition;
    NSString * _toolId;
    QDSchemaQDToolSource * _toolSource;
}

@property (nonatomic) bool hasSelectionCriteria;
@property (nonatomic) bool hasSessionScopedUniqueId;
@property (nonatomic) bool hasSimilarityScore;
@property (nonatomic) bool hasSubType;
@property (nonatomic) bool hasToolDefinition;
@property (nonatomic) bool hasToolId;
@property (nonatomic) bool hasToolSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int selectionCriteria;
@property (nonatomic, retain) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) float similarityScore;
@property (nonatomic) int subType;
@property (nonatomic, retain) QDSchemaQDToolDefinition *toolDefinition;
@property (nonatomic, copy) NSString *toolId;
@property (nonatomic, retain) QDSchemaQDToolSource *toolSource;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSelectionCriteria;
- (void)deleteSessionScopedUniqueId;
- (void)deleteSimilarityScore;
- (void)deleteSubType;
- (void)deleteToolDefinition;
- (void)deleteToolId;
- (void)deleteToolSource;
- (id)dictionaryRepresentation;
- (bool)hasSelectionCriteria;
- (bool)hasSessionScopedUniqueId;
- (bool)hasSimilarityScore;
- (bool)hasSubType;
- (bool)hasToolDefinition;
- (bool)hasToolId;
- (bool)hasToolSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)selectionCriteria;
- (id)sessionScopedUniqueId;
- (void)setHasSelectionCriteria:(bool)arg1;
- (void)setHasSessionScopedUniqueId:(bool)arg1;
- (void)setHasSimilarityScore:(bool)arg1;
- (void)setHasSubType:(bool)arg1;
- (void)setHasToolDefinition:(bool)arg1;
- (void)setHasToolId:(bool)arg1;
- (void)setHasToolSource:(bool)arg1;
- (void)setSelectionCriteria:(int)arg1;
- (void)setSessionScopedUniqueId:(id)arg1;
- (void)setSimilarityScore:(float)arg1;
- (void)setSubType:(int)arg1;
- (void)setToolDefinition:(id)arg1;
- (void)setToolId:(id)arg1;
- (void)setToolSource:(id)arg1;
- (float)similarityScore;
- (int)subType;
- (id)suppressMessageUnderConditions;
- (id)toolDefinition;
- (id)toolId;
- (id)toolSource;
- (void)writeTo:(id)arg1;

@end
