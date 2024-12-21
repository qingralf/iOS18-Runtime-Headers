/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSPETMessageBuilder : NSObject {
    _CDInteractionsStatistics * _interactionsStatistics;
    PeopleSuggesterShareEvent * _shareEvent;
}

- (void).cxx_destruct;
- (void)addFeedbackEvents:(id)arg1;
- (id)getPETMessage;
- (id)initWithInteractionsStatistics:(id)arg1 andConfig:(id)arg2 andContext:(id)arg3 andDeviceIdentifier:(id)arg4 andTrialIdentifier:(id)arg5 andDefaults:(id)arg6;
- (id)privacyMitigatedFeatureValueFromName:(id)arg1 forConversationId:(id)arg2;

@end