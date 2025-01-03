/* Generated by RuntimeBrowser.
 */

@protocol SFCoreSpotlightRankingSignals <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (int)embeddingStatus;
- (NSNumber *)engagementScore;
- (NSNumber *)freshness;
- (bool)isExactMatchOfLaunchString;
- (bool)isSemanticMatch;
- (bool)isSyntacticMatch;
- (unsigned long long)itemAgeInDays;
- (NSData *)jsonData;
- (NSNumber *)pommesL2Score;
- (NSNumber *)predictedLikelihoodOfEngagement;
- (int)resultQueryRecency;
- (NSNumber *)semanticScore;
- (void)setEmbeddingStatus:(int)arg1;
- (void)setEngagementScore:(NSNumber *)arg1;
- (void)setFreshness:(NSNumber *)arg1;
- (void)setIsExactMatchOfLaunchString:(bool)arg1;
- (void)setIsSemanticMatch:(bool)arg1;
- (void)setIsSyntacticMatch:(bool)arg1;
- (void)setItemAgeInDays:(unsigned long long)arg1;
- (void)setPommesL2Score:(NSNumber *)arg1;
- (void)setPredictedLikelihoodOfEngagement:(NSNumber *)arg1;
- (void)setResultQueryRecency:(int)arg1;
- (void)setSemanticScore:(NSNumber *)arg1;
- (void)setSodiumL2Score:(NSNumber *)arg1;
- (void)setSyntacticScore:(NSNumber *)arg1;
- (void)setTopicalityScore:(NSNumber *)arg1;
- (void)setWasEngagedInSpotlight:(bool)arg1;
- (void)setWasNominatedAsTopHit:(bool)arg1;
- (NSNumber *)sodiumL2Score;
- (NSNumber *)syntacticScore;
- (NSNumber *)topicalityScore;
- (bool)wasEngagedInSpotlight;
- (bool)wasNominatedAsTopHit;

@end
