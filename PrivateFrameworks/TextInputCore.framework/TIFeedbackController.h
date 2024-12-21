/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIFeedbackController : NSObject {
    NSString * _preferenceName;
    NSString * _studyID;
}

- (void).cxx_destruct;
- (void)assessAndScheduleRetry;
- (id)computeRandomizedTimeIntervalFromTimestamp:(id)arg1;
- (id)currentInputModes;
- (bool)currentPreferenceValue;
- (void)dispatchScheduledEventsWithDelegate:(id)arg1 overrideSchedule:(bool)arg2;
- (void)dispatchScheduledInitiationAndCompletionEventsImmediatelyWithDelegate:(id)arg1;
- (void)dispatchScheduledInitiationAndTerminationEventsImmediatelyWithDelegate:(id)arg1;
- (bool)feedbackFeatureEnabled;
- (void)handleFeedbackActionsWithDelegate:(id)arg1;
- (void)handleFeedbackStateCompletionPendingWithDelegate:(id)arg1 isEligibleDevice:(bool)arg2;
- (void)handleFeedbackStateInitiatedWithDelegate:(id)arg1 isEligibleDevice:(bool)arg2 isPreferenceEnabled:(bool)arg3;
- (void)handleFeedbackStateNoneWithDelegate:(id)arg1 isEligibleDevice:(bool)arg2;
- (void)handleFeedbackStateResponsePendingWithDelegate:(id)arg1 isEligibleDevice:(bool)arg2;
- (void)handleFeedbackStateRetryPendingWithDelegate:(id)arg1 isEligibleDevice:(bool)arg2;
- (id)init;
- (void)initiateStudyWithInputModes:(id)arg1 initialPreferenceValue:(bool)arg2;
- (bool)isFCSBuild;
- (void)retrySurvey;
- (void)scheduleCompletionEvent;
- (void)scheduleInitiationEvent;
- (void)scheduleRetry;
- (void)scheduleSurveyRequestEvent;
- (void)setInitiationState;
- (void)setPreferenceValue:(bool)arg1;
- (void)setTerminationStateWithValue:(long long)arg1;
- (bool)wasSurveySubmitted;

@end