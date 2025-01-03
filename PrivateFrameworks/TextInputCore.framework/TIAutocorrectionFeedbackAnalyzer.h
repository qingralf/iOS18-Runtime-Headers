/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAutocorrectionFeedbackAnalyzer : NSObject <TIFeedbackControllerDelegate, TITypingSessionAnalyzing> {
    TITypingSessionAligned * _alignedSession;
    TIRevisionRateAnalysisSummary * _revisionRateAnalysisSummary;
    TITypingSession * _session;
    NSArray * _supportedLanguages;
    <TIUserModeling><TIMetricProviding> * _userModel;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedLanguages;
@property (nonatomic, retain) <TIUserModeling><TIMetricProviding> *userModel;

+ (id)analyzerForUserModel:(id)arg1 revisionRateAnalysisSummary:(id)arg2;

- (void).cxx_destruct;
- (void)accumulateWordCounts;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)initWithUserModel:(id)arg1 revisionRateAnalysisSummary:(id)arg2;
- (id)installedInputModesStringFromInputModes:(id)arg1;
- (void)registerEventSpec;
- (void)resetWordCounts;
- (void)sendCAEventForStudyStatus:(long long)arg1;
- (void)sendCompletionEventUsingStudyDataFromFeedbackController:(id)arg1;
- (void)sendInitiationEventUsingStudyDataFromFeedbackController:(id)arg1;
- (void)sendRequestSurveyEventUsingStudyDataFromFeedbackController:(id)arg1;
- (void)sendTerminationEventUsingStudyDataFromFeedbackController:(id)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setUserModel:(id)arg1;
- (long long)studyStatusFromState:(long long)arg1;
- (id)supportedLanguages;
- (id)userModel;

@end
