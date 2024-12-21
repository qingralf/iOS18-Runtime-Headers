/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRRescoringDeliberationResultTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    bool  _hasModifiedTranscript;
    bool  _hasOriginalTranscript;
    SISchemaUUID * _linkId;
    NSString * _modifiedTranscript;
    NSString * _originalTranscript;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasModifiedTranscript;
@property (nonatomic) bool hasOriginalTranscript;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *modifiedTranscript;
@property (nonatomic, copy) NSString *originalTranscript;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteModifiedTranscript;
- (void)deleteOriginalTranscript;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasModifiedTranscript;
- (bool)hasOriginalTranscript;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)modifiedTranscript;
- (id)originalTranscript;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasModifiedTranscript:(bool)arg1;
- (void)setHasOriginalTranscript:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setModifiedTranscript:(id)arg1;
- (void)setOriginalTranscript:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end