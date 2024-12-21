/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRServicePackageAdapterAppleTVControl : NSObject <IRServicePackageAdapter> {
    NSMutableDictionary * _internalContexts;
    NSMutableDictionary * _internalPolicyInspections;
}

@property (nonatomic, readonly) NSDictionary *contexts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *internalContexts;
@property (nonatomic, retain) NSMutableDictionary *internalPolicyInspections;
@property (nonatomic, readonly) NSDictionary *policyInspections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_autoRouteClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_autoRoutePositiveRulesClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (void)_classifyContext:(id)arg1;
- (void)_evaluateOutputRules:(id)arg1 contextWrapper:(id)arg2;
- (id)_filteredClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_oneTapClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (bool)_outputRulesToContext:(id)arg1 candidatesContainer:(id)arg2 fillInspection:(bool)arg3;
- (id)_reasonsForRejectingAutoRouteOrOneTapClassificationForCandidate:(id)arg1;
- (id)_rules;
- (id)_topOfListClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_topOfListClassificationPositiveRulesForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)contexts;
- (id)filterHistory:(id)arg1 withCandidatesContainer:(id)arg2;
- (bool)generateClassificationsWithCandiatesContainer:(id)arg1 systemState:(id)arg2 historyEventsContainer:(id)arg3 miloPrediction:(id)arg4 nearbyDeviceContainer:(id)arg5 fillInspection:(bool)arg6 date:(id)arg7;
- (id)getSignificantBundlesWithCandidates:(id)arg1 fromHistory:(id)arg2;
- (id)init;
- (id)internalContexts;
- (id)internalPolicyInspections;
- (id)policyInspections;
- (void)setInternalContexts:(id)arg1;
- (void)setInternalPolicyInspections:(id)arg1;
- (bool)shouldAskForLowLatencyMiLo:(id)arg1 historyEventsAsc:(id)arg2;
- (bool)shouldConsiderEventForSignificantBundles:(id)arg1;
- (bool)shouldRejectEvent:(id)arg1 withHistoryEventsContainer:(id)arg2 withSystemState:(id)arg3 forCandidate:(id)arg4 date:(id)arg5;
- (id)uiAnalyticsWithEvent:(id)arg1 forCandidateIdentifier:(id)arg2 systemStateManager:(id)arg3 candidatesContainer:(id)arg4 inspections:(id)arg5 statisticsManager:(id)arg6 service:(id)arg7 historyEventsContainer:(id)arg8;

@end