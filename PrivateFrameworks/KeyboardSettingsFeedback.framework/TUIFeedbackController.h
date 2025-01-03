/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettingsFeedback.framework/KeyboardSettingsFeedback
 */

@interface TUIFeedbackController : NSObject

+ (id)controller;

- (void)_presentSurveyWithParentController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateStudyDataWithFinalPreferenceValue:(bool)arg1 finalTimestamp:(id)arg2;
- (void)_updateStudyDataWithSurveyOutcome:(long long)arg1 surveyError:(id)arg2 initialState:(long long)arg3;
- (id)build;
- (void)completeStudyWithFinalPreferenceValue:(bool)arg1 parentController:(id)arg2;
- (id)computeSurveyMetadata;
- (id)currentInputModes;
- (bool)feedbackFeatureEnabled;
- (id)model;
- (bool)shouldCompleteStudyWithPreferenceValue:(bool)arg1;

@end
