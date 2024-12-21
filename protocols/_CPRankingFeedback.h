/* Generated by RuntimeBrowser.
 */

@protocol _CPRankingFeedback <NSObject>

@required

- (void)addHiddenResults:(_CPSearchResultForFeedback *)arg1;
- (void)addSections:(_CPSectionRankingFeedback *)arg1;
- (double)blendingDuration;
- (void)clearHiddenResults;
- (void)clearSections;
- (NSArray *)hiddenResults;
- (_CPSearchResultForFeedback *)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)sections;
- (_CPSectionRankingFeedback *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setBlendingDuration:(double)arg1;
- (void)setHiddenResults:(NSArray *)arg1;
- (void)setSections:(NSArray *)arg1;
- (void)setSpotlightQueryIntent:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)spotlightQueryIntent;
- (unsigned long long)timestamp;

@end