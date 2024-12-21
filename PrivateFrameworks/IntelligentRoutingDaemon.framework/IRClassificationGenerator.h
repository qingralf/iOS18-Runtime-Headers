/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRClassificationGenerator : NSObject {
    IRCandidateClassificationDetectorFiltered * _detectorFiltered;
    IRCandidateClassificationDetectorSameSpace * _detectorSameSpace;
    NSMutableDictionary * _internalContexts;
    NSMutableDictionary * _internalPolicyInspections;
    IRCandidateSelector * _selector;
}

@property (nonatomic, readonly) NSDictionary *contexts;
@property (nonatomic, retain) IRCandidateClassificationDetectorFiltered *detectorFiltered;
@property (nonatomic, retain) IRCandidateClassificationDetectorSameSpace *detectorSameSpace;
@property (nonatomic, retain) NSMutableDictionary *internalContexts;
@property (nonatomic, retain) NSMutableDictionary *internalPolicyInspections;
@property (nonatomic, readonly) NSDictionary *policyInspections;
@property (nonatomic, retain) IRCandidateSelector *selector;

- (void).cxx_destruct;
- (void)_adjustAdditionalFieldsForCandidate:(id)arg1 selectedCandidateIdentifier:(id)arg2 historyEvents:(id)arg3 systemState:(id)arg4;
- (void)_adjustClassificationForCandidate:(id)arg1 selectedCandidateIdentifier:(id)arg2 systemState:(id)arg3 andDate:(id)arg4;
- (void)_fillInspectionIfNeeded:(bool)arg1 withCandidates:(id)arg2 selectedCandidate:(id)arg3 negativeInputs:(id)arg4 stateMachineClassification:(long long)arg5;
- (void)_setCallToActionForCandidate:(id)arg1 withHistoryEventsAsc:(id)arg2 andSystemState:(id)arg3;
- (void)_setConservativeFilteredForCandidate:(id)arg1 andSystemState:(id)arg2;
- (void)_setLockScreenControlForCandidate:(id)arg1;
- (void)_setSortingHintForCandidate:(id)arg1;
- (id)contexts;
- (id)detectorFiltered;
- (id)detectorSameSpace;
- (bool)generateClassificationsWithCandiatesContainer:(id)arg1 systemState:(id)arg2 historyEventsContainer:(id)arg3 miloPrediction:(id)arg4 nearbyDeviceContainer:(id)arg5 fillInspection:(bool)arg6 date:(id)arg7;
- (id)init;
- (id)internalContexts;
- (id)internalPolicyInspections;
- (id)policyInspections;
- (id)selector;
- (void)setDetectorFiltered:(id)arg1;
- (void)setDetectorSameSpace:(id)arg1;
- (void)setInternalContexts:(id)arg1;
- (void)setInternalPolicyInspections:(id)arg1;
- (void)setSelector:(id)arg1;

@end