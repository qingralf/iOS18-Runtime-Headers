/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PEGASUSSchemaPEGASUSSortedScore : SISchemaInstrumentationMessage {
    bool  _hasSortedScoreBoosted;
    bool  _hasSortedScoreFinal;
    bool  _hasSortedScoreKnockOut;
    bool  _hasSortedScoreModelFinal;
    bool  _hasSortedScoreStage2;
    bool  _hasSortedScorelinearCombiner;
    NSString * _sortedScoreBoosted;
    NSString * _sortedScoreFinal;
    NSString * _sortedScoreKnockOut;
    NSString * _sortedScoreModelFinal;
    NSString * _sortedScoreStage2;
    NSString * _sortedScorelinearCombiner;
}

@property (nonatomic) bool hasSortedScoreBoosted;
@property (nonatomic) bool hasSortedScoreFinal;
@property (nonatomic) bool hasSortedScoreKnockOut;
@property (nonatomic) bool hasSortedScoreModelFinal;
@property (nonatomic) bool hasSortedScoreStage2;
@property (nonatomic) bool hasSortedScorelinearCombiner;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *sortedScoreBoosted;
@property (nonatomic, copy) NSString *sortedScoreFinal;
@property (nonatomic, copy) NSString *sortedScoreKnockOut;
@property (nonatomic, copy) NSString *sortedScoreModelFinal;
@property (nonatomic, copy) NSString *sortedScoreStage2;
@property (nonatomic, copy) NSString *sortedScorelinearCombiner;

- (void).cxx_destruct;
- (void)deleteSortedScoreBoosted;
- (void)deleteSortedScoreFinal;
- (void)deleteSortedScoreKnockOut;
- (void)deleteSortedScoreModelFinal;
- (void)deleteSortedScoreStage2;
- (void)deleteSortedScorelinearCombiner;
- (id)dictionaryRepresentation;
- (bool)hasSortedScoreBoosted;
- (bool)hasSortedScoreFinal;
- (bool)hasSortedScoreKnockOut;
- (bool)hasSortedScoreModelFinal;
- (bool)hasSortedScoreStage2;
- (bool)hasSortedScorelinearCombiner;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSortedScoreBoosted:(bool)arg1;
- (void)setHasSortedScoreFinal:(bool)arg1;
- (void)setHasSortedScoreKnockOut:(bool)arg1;
- (void)setHasSortedScoreModelFinal:(bool)arg1;
- (void)setHasSortedScoreStage2:(bool)arg1;
- (void)setHasSortedScorelinearCombiner:(bool)arg1;
- (void)setSortedScoreBoosted:(id)arg1;
- (void)setSortedScoreFinal:(id)arg1;
- (void)setSortedScoreKnockOut:(id)arg1;
- (void)setSortedScoreModelFinal:(id)arg1;
- (void)setSortedScoreStage2:(id)arg1;
- (void)setSortedScorelinearCombiner:(id)arg1;
- (id)sortedScoreBoosted;
- (id)sortedScoreFinal;
- (id)sortedScoreKnockOut;
- (id)sortedScoreModelFinal;
- (id)sortedScoreStage2;
- (id)sortedScorelinearCombiner;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
