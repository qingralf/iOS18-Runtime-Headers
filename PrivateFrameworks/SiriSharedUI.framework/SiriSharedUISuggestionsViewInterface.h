/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSharedUI.framework/SiriSharedUI
 */

@interface SiriSharedUISuggestionsViewInterface : NSObject {
    _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider * suggestionsViewProvider;
}

- (void).cxx_destruct;
- (void)fetchAutoCompletionSuggestionsViewsWithQuery:(id)arg1 deviceLocked:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchAutoCompletionSuggestionsViewsWithQuery:(id)arg1 deviceLocked:(bool)arg2 turnId:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchConversationContinuerViewsWithRequestId:(id)arg1 currentMode:(id)arg2 deviceLocked:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchConversationStarterViewsWithDeviceLocked:(bool)arg1 isVoiceTrigger:(bool)arg2 invocationSource:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchConversationStarterViewsWithDeviceLocked:(bool)arg1 isVoiceTrigger:(bool)arg2 invocationSource:(long long)arg3 isFirstInvocationSinceOSInstalled:(bool)arg4 completion:(id /* block */)arg5;
- (id)getInitialSuggestionViews;
- (id)getSuggestionsViews:(id)arg1;
- (id)initWithPressDownHandler:(id /* block */)arg1 pressUpHandler:(id /* block */)arg2;
- (id)initWithTapHandler:(id /* block */)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)startNewTypingSession;
- (void)suggestionsWereShownForCallback;

@end
