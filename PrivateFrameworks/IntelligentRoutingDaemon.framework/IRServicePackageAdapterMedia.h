/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRServicePackageAdapterMedia : NSObject <IRServicePackageAdapter> {
    IRClassificationGenerator * _generator;
}

@property (nonatomic, readonly) NSDictionary *contexts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IRClassificationGenerator *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *policyInspections;
@property (readonly) Class superclass;

+ (id)_getUniqueAirplayRoutsFromCandidateIdentifiers:(id)arg1 inCandiateContainer:(id)arg2;

- (void).cxx_destruct;
- (id)_getGeneralWeeklyAnalyticsWithWeeklyHistory:(id)arg1 withCandidatesContainer:(id)arg2;
- (id)_getUIWeeklyAnalyticsWithWeeklyHistory:(id)arg1;
- (id)_getWeeklyAnalyticsFromStatistics:(id)arg1 candidatesContainer:(id)arg2;
- (id)contexts;
- (id)filterHistory:(id)arg1 withCandidatesContainer:(id)arg2;
- (bool)generateClassificationsWithCandiatesContainer:(id)arg1 systemState:(id)arg2 historyEventsContainer:(id)arg3 miloPrediction:(id)arg4 nearbyDeviceContainer:(id)arg5 fillInspection:(bool)arg6 date:(id)arg7;
- (id)generator;
- (id)getSignificantBundlesWithCandidates:(id)arg1 fromHistory:(id)arg2;
- (id)init;
- (bool)outputRulesToContext:(id)arg1 candidatesContainer:(id)arg2 fillInspection:(bool)arg3;
- (id)policyInspections;
- (void)setGenerator:(id)arg1;
- (bool)shouldAskForLowLatencyMiLo:(id)arg1 historyEventsAsc:(id)arg2;
- (bool)shouldConsiderEventForSignificantBundles:(id)arg1;
- (bool)shouldRejectEvent:(id)arg1 withHistoryEventsContainer:(id)arg2 withSystemState:(id)arg3 forCandidate:(id)arg4 date:(id)arg5;
- (id)uiAnalyticsWithEvent:(id)arg1 forCandidateIdentifier:(id)arg2 systemStateManager:(id)arg3 candidatesContainer:(id)arg4 inspections:(id)arg5 statisticsManager:(id)arg6 service:(id)arg7 historyEventsContainer:(id)arg8;
- (id)weeklyAnalyticsWithServiceStore:(id)arg1 statistics:(id)arg2 service:(id)arg3;

@end
