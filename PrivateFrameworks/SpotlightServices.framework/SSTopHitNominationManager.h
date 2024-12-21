/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSTopHitNominationManager : NSObject

+ (bool)_bundleExcludedForTopHit:(id)arg1;
+ (id)_dropSection:(id)arg1 targetSection:(id)arg2 reasonString:(id)arg3;
+ (bool)_freshnessCheck:(id)arg1;
+ (bool)_hideUnderShowMoreCheck:(id)arg1;
+ (bool)_imporantPropertyMatch:(id)arg1;
+ (bool)_isLikelihoodSpecialCase:(id)arg1;
+ (bool)_keywordMatchCheck:(id)arg1;
+ (bool)_likelihoodCheck:(id)arg1;
+ (float)_likelihoodThresholdForBundle:(id)arg1;
+ (bool)_minimumKeywordMatch:(id)arg1;
+ (bool)_needImportantPropertyMatch:(id)arg1;
+ (bool)_needQUIntentCheck:(id)arg1;
+ (bool)_nominateServerTopHitCandidate:(id)arg1;
+ (bool)_recentEngagementOvertakeCheck:(id)arg1;
+ (bool)_safariCheck:(id)arg1;
+ (void)_setImportantPropertiesPrefixMatched:(id)arg1 value:(unsigned long long)arg2;
+ (void)_setImportantPropertiesWordMatched:(id)arg1 value:(unsigned long long)arg2;
+ (bool)_settingsCheck:(id)arg1;
+ (bool)_spellCorrectedAppPass:(id)arg1;
+ (bool)_stricterFreshnessTopicalityEngagementCheck:(id)arg1;
+ (bool)_topicalityCheck:(id)arg1;
+ (void)clearTopHit:(id)arg1;
+ (void)clearTopHitCandidate:(id)arg1;
+ (void)finalizeTopHitSection:(id)arg1;
+ (void)finalizeTopHitsInSections:(id)arg1 withTopHitSection:(id)arg2;
+ (float)getTopHitThreshold:(id)arg1;
+ (bool)isTopHit:(id)arg1;
+ (bool)isTopHitCandidate:(id)arg1;
+ (void)nominateTopHitCandidate:(id)arg1;
+ (bool)passLikelihoodForTopHitCandidate:(id)arg1;
+ (id)postProcessSectionsBasedOnTopHitSection:(id)arg1 withTopHitSection:(id)arg2;
+ (void)setTopHitCandidate:(id)arg1;
+ (void)setTopHitMustBe:(id)arg1;
+ (void)setTopHitShouldBe:(id)arg1;
+ (void)topHitCandidacyThresholdingForAppSection:(id)arg1;

@end