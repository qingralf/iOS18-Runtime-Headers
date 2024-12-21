/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSharedUI.framework/SiriSharedUI
 */

@interface SiriSharedUISAEViewModelController : NSObject {
    void conversation;
    void delegate;
    void immersiveExperienceOn;
    void inputType;
    void previousConversation;
    void serverUtteranceConversationIds;
    void storedTranscriptItems;
    void viewModel;
    void viewModelChangeObserver;
}

@property (nonatomic) <SiriSharedUISAEViewModelControllerDelegate> *delegate;
@property (nonatomic, retain) AFConversation *previousConversation;
@property (nonatomic) <SiriSharedUISAEViewModelChangeObserving> *viewModelChangeObserver;

- (void).cxx_destruct;
- (unsigned long long)_generateDiffFromViewModel:(id)arg1 toViewModel:(id)arg2;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)arg1;
- (void)_processInitialConversationItemsForConversation:(id)arg1;
- (void)_processInsertedConversationItemsForConversationItems:(id)arg1 forConversation:(id)arg2;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)arg1;
- (bool)alwaysShowRecognizedSpeech;
- (void)clearLatencySummary;
- (void)clearLatencySummaryWithoutViewUpdate;
- (void)conversationDidChangeWithTransaction:(id)arg1;
- (id)delegate;
- (void)didReceiveLatencyInformation:(id)arg1;
- (id)init;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;
- (long long)inputType;
- (void)inputTypeDidChange;
- (id)previousConversation;
- (void)resetViewsAndClearASR:(bool)arg1;
- (void)revealLatencyView;
- (void)revealUserUtterance:(id)arg1 backingAceObject:(id)arg2;
- (id)serverUtterancesToDisplayForConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviousConversation:(id)arg1;
- (void)setViewModelChangeObserver:(id)arg1;
- (void)updateCurrentRequestText:(id)arg1;
- (id)userUtteranceForConversationItem:(id)arg1;
- (id)viewModelChangeObserver;

@end