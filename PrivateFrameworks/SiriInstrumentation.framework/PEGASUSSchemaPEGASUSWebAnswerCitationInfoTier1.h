/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1 : SISchemaInstrumentationMessage {
    NSArray * _citationIndices;
    bool  _hasSubText;
    NSString * _subText;
}

@property (nonatomic, copy) NSArray *citationIndices;
@property (nonatomic) bool hasSubText;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *subText;

- (void).cxx_destruct;
- (void)addCitationIndices:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)citationIndices;
- (int)citationIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)citationIndicesCount;
- (void)clearCitationIndices;
- (void)deleteCitationIndices;
- (void)deleteSubText;
- (id)dictionaryRepresentation;
- (bool)hasSubText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCitationIndices:(id)arg1;
- (void)setHasSubText:(bool)arg1;
- (void)setSubText:(id)arg1;
- (id)subText;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end