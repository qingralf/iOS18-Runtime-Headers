/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CNVSchemaCNVClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _cnvId;
    bool  _hasCnvId;
    bool  _hasRequestId;
    bool  _hasResultCandidateId;
    bool  _hasSubRequestId;
    bool  _hasTrpId;
    SISchemaUUID * _requestId;
    NSString * _resultCandidateId;
    SISchemaUUID * _subRequestId;
    SISchemaUUID * _trpId;
}

@property (nonatomic, retain) SISchemaUUID *cnvId;
@property (nonatomic) bool hasCnvId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasSubRequestId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *subRequestId;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cnvId;
- (void)deleteCnvId;
- (void)deleteRequestId;
- (void)deleteResultCandidateId;
- (void)deleteSubRequestId;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (bool)hasCnvId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (bool)hasSubRequestId;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setCnvId:(id)arg1;
- (void)setHasCnvId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasSubRequestId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setSubRequestId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)subRequestId;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
