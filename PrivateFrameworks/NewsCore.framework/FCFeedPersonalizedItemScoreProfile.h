/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedPersonalizedItemScoreProfile : NSObject {
    NTPBCoefficients * _coefficients;
    NTPBScoringCohort * _globalCohort;
    bool  _hasShadowScores;
    bool  _isCoread;
    NTPBScoreProfile * _pbScoreProfile;
}

@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic, retain) NTPBCoefficients *coefficients;
@property (nonatomic, retain) NSArray *cohortMemberships;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double contentTriggerDampener;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic, retain) NTPBScoreProfileDebug *debugFields;
@property (nonatomic) double embeddingScore;
@property (nonatomic) double featureCtr;
@property (nonatomic, retain) NTPBScoringCohort *globalCohort;
@property (nonatomic) bool hasShadowScores;
@property (nonatomic) bool isCoread;
@property (nonatomic) bool isEvergreen;
@property (nonatomic) double multiplier;
@property (nonatomic) double nicheContentMultiplier;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic, retain) NTPBScoreProfile *pbScoreProfile;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double publisherDampener;
@property (nonatomic) double publisherFavorability;
@property (nonatomic) double qualitativeMultiplier;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) unsigned long long scoringVersion;
@property (nonatomic) double serverScoreDemocratizationFactor;
@property (nonatomic) float shadowAgedPersonalizationScore;
@property (nonatomic) float shadowTabiScore;
@property (nonatomic, readonly) double sortingScore;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double tabiScore;
@property (nonatomic) double userFeedbackScore;

- (void).cxx_destruct;
- (id)coefficients;
- (id)debugFields;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)globalCohort;
- (bool)hasShadowScores;
- (id)init;
- (id)initWithPBScoreProfile:(id)arg1;
- (bool)isCoread;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)pbScoreProfile;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setCoefficients:(id)arg1;
- (void)setDebugFields:(id)arg1;
- (void)setGlobalCohort:(id)arg1;
- (void)setHasShadowScores:(bool)arg1;
- (void)setIsCoread:(bool)arg1;
- (void)setPbScoreProfile:(id)arg1;
- (double)sortingScore;

@end
