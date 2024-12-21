/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHSubRequestStarted : SISchemaInstrumentationMessage {
    ORCHSchemaORCHNLRouterDecisionGenAIMetadata * _genAIMetadata;
    struct { 
        unsigned int subRequestType : 1; 
    }  _has;
    bool  _hasGenAIMetadata;
    bool  _hasTrpId;
    int  _subRequestType;
    SISchemaUUID * _trpId;
}

@property (nonatomic, retain) ORCHSchemaORCHNLRouterDecisionGenAIMetadata *genAIMetadata;
@property (nonatomic) bool hasGenAIMetadata;
@property (nonatomic) bool hasSubRequestType;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int subRequestType;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteGenAIMetadata;
- (void)deleteSubRequestType;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (id)genAIMetadata;
- (bool)hasGenAIMetadata;
- (bool)hasSubRequestType;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setGenAIMetadata:(id)arg1;
- (void)setHasGenAIMetadata:(bool)arg1;
- (void)setHasSubRequestType:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setSubRequestType:(int)arg1;
- (void)setTrpId:(id)arg1;
- (int)subRequestType;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end