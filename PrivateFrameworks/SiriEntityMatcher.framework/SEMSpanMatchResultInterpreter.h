/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMSpanMatchResultInterpreter : NSObject {
    SEMSpanMatchPolicy * _exactPolicy;
    SEMSpanMatchPolicy * _exactWithAliasPolicy;
    SEMSpanMatchPolicy * _fuzzyPolicy;
    SEMSpanMatchPolicy * _fuzzyWithAbsoluteThresholdPolicy;
    SEMSpanMatchPolicy * _fuzzyWithAliasPolicy;
    bool  _useMediaThresholdFiltering;
    bool  _useSensitiveLogging;
}

@property (nonatomic, readonly) SEMSpanMatchPolicy *exactPolicy;
@property (nonatomic, readonly) SEMSpanMatchPolicy *exactWithAliasPolicy;
@property (nonatomic, readonly) SEMSpanMatchPolicy *fuzzyPolicy;
@property (nonatomic, readonly) SEMSpanMatchPolicy *fuzzyWithAbsoluteThresholdPolicy;
@property (nonatomic, readonly) SEMSpanMatchPolicy *fuzzyWithAliasPolicy;

- (void).cxx_destruct;
- (void)_addScoredMatch:(id)arg1 toSortedArray:(id)arg2;
- (id)_applyRegionalSpanRankingToSortedGroupMatches:(id)arg1 regionalThresholdScalar:(float)arg2 globalThresholdScalar:(float)arg3 maximalScore:(float)arg4;
- (bool)_checkEligibilityOfSpanMatch:(id)arg1 allowPartialMatch:(bool)arg2 allowApproxMatch:(bool)arg3 allowAliasMatch:(bool)arg4 query:(id)arg5;
- (id)_filterRankAndThresholdCandidates:(id)arg1 ofQuery:(id)arg2 withPolicy:(id)arg3;
- (id)_groupKeyForCandidate:(id)arg1;
- (id)_groupKeyForCascadeCandidate:(id)arg1;
- (id)_rankerPolicyForGroupKey:(id)arg1;
- (float)_scoreSpanMatch:(id)arg1 policy:(id)arg2;
- (id)_sortCandidates:(id)arg1;
- (id)exactPolicy;
- (id)exactWithAliasPolicy;
- (id)fuzzyPolicy;
- (id)fuzzyWithAbsoluteThresholdPolicy;
- (id)fuzzyWithAliasPolicy;
- (id)init;
- (id)interpretSpanMatchResults:(id)arg1 ofQuery:(id)arg2;

@end
