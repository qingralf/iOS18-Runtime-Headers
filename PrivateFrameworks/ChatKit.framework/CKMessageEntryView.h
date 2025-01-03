/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryView : UIView <CKAppSelectionInterface, CKAudioControllerDelegate, CKAudioMessageRecordingViewDelegate, CKAudioRecorderDelegate, CKBrowserSwitcherFooterViewDelegate, CKMessageEntryContentViewDelegate, CKMessageEntryRecordedAudioViewDelegate, CKMessageEntryViewStyleProtocol, TUIInputAccessoryViewTraits, UIGestureRecognizerDelegate> {
    bool  _animatingLayoutChange;
    CKBrowserSwitcherFooterView * _appStrip;
    UIView * _appStripBackgroundBlurContainerView;
    UIKBVisualEffectView * _appStripBackgroundBlurView;
    CKEntryViewButton * _arrowButton;
    CKEntryViewButton * _audioButton;
    CKComposition * _audioComposition;
    CKAudioController * _audioController;
    bool  _audioControllerWasPlayingBeforeScrubbing;
    UILabel * _audioHintLabel;
    <CKMessageEntryViewAudioMessageAppDelegate> * _audioMessageAppDelegate;
    NSTimer * _audioMessageButtonTimer;
    bool  _audioMessageRecordingAvailable;
    CKAudioMessageRecordingView * _audioRecordingView;
    NSString * _backdropGroupName;
    UIView<CKMessageEntryBackgroundViewProtocol> * _backgroundView;
    CKEntryViewButton * _browserButton;
    UIView * _buttonAndTextAreaContainerView;
    CKEntryViewButton * _cancelButton;
    bool  _characterCountHidden;
    UILabel * _characterCountLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _characterCountSize;
    <_UIClickInteractionDelegate> * _clickInteractionDelegate;
    UILabel * _collpasedPlaceholderLabel;
    bool  _composingRecipient;
    UIView * _contentClipView;
    CKMessageEntryContentView * _contentView;
    CKConversation * _conversation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _coverInsets;
    NSArray * _currentMentionSuggestions;
    unsigned long long  _currentTappedCharacterIndex;
    CAShapeLayer * _dashedContentClipViewLayer;
    <CKMessageEntryViewDelegate> * _delegate;
    CKEntryViewButton * _dictationButton;
    bool  _dictationEnabledForLanguage;
    id /* block */  _didSelectEntityCompletionHandler;
    bool  _disablePluginButtons;
    unsigned long long  _displayMode;
    double  _duration;
    UIButton * _emojiButton;
    NSMutableDictionary * _entityDictionary;
    NSMutableSet * _entityHandles;
    CKMentionEntityNode * _entityTree;
    bool  _entryFieldCollapsed;
    CKScheduledUpdater * _entryFieldCollapsedUpdater;
    bool  _entryFieldUpdaterAnimatedValue;
    bool  _entryFieldUpdaterCollapsedValue;
    UIKeyboardLayoutGuide * _entryViewKeyboardLayoutGuide;
    UITraitCollection * _entryViewTraitCollection;
    bool  _extendAppStripBlurToKeyplaneTop;
    bool  _failedRecipients;
    NSLayoutConstraint * _heightConstraint;
    CKMessageEntryHintView * _hintView;
    UIView * _inputButtonContainerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputButtonSize;
    <CKMessageEntryViewInputDelegate> * _inputDelegate;
    bool  _isTransitioningForBrowserSwitcher;
    bool  _isUpdatingMentionAttributedText;
    NSArray * _keyCommands;
    CKEntryViewButton * _keyboardButton;
    bool  _keyboardVisible;
    UIView * _knockoutView;
    UIVisualEffectView * _knockoutVisualEffectView;
    bool  _languageHasSpaces;
    <UITextInputTraits_Private> * _lastConfiguredInputDelegate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastFoundMentionRange;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    CKMentionSuggestionView * _mentionSuggestionView;
    _UISupplementalLexicon * _mentionsLexicon;
    UIVisualEffectView * _messageEditingBlurOverlayView;
    CKEntryViewButton * _photoButton;
    CKEntryViewPlusButton * _plusButton;
    UISelectionFeedbackGenerator * _plusButtonFeedbackGenerator;
    bool  _plusButtonFeedbackGeneratorIsActive;
    NSMutableArray * _powerLevels;
    CKComposition * _previousAudioComposition;
    double  _previousBottomSafeAreaInset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfTappedMention;
    CKMessageEntryRecordedAudioView * _recordedAudioView;
    CKAudioRecorder * _recorder;
    bool  _recordingStartedFromRaiseGesture;
    CKEntryViewButton * _sendAudioButton;
    CKEntryViewButton * _sendButton;
    _UIClickInteraction * _sendButtonClickInteraction;
    struct CGSize { 
        double width; 
        double height; 
    }  _sendButtonSize;
    UIActivityIndicatorView * _sendButtonSpinner;
    long long  _sendMenuPresentationState;
    bool  _sendingMessage;
    bool  _shouldAllowImpactSend;
    bool  _shouldBlurForMessageEditing;
    bool  _shouldCenterCharacterCount;
    bool  _shouldCoverViewBeShrunkenForSendMenu;
    bool  _shouldDisableAttachments;
    bool  _shouldShowAudioMessageHint;
    bool  _shouldShowCharacterCount;
    bool  _shouldShowDictationButton;
    bool  _shouldShowPluginButtons;
    bool  _shouldShowSendButton;
    bool  _shouldShowSendButtonSpinner;
    bool  _shouldShowSubject;
    bool  _shouldUseLinearResizeForAudioMessage;
    bool  _showAppStrip;
    bool  _showingMentionsSuggestions;
    CKEntryViewButton * _stopButton;
    long long  _style;
    UISwipeGestureRecognizer * _swipeGestureRecognizer;
    bool  _unreachableEmergencyRecipient;
    CKMessageEntryWaveformView * _waveformView;
    struct CGSize { 
        double width; 
        double height; 
    }  _waveformViewSize;
}

@property (nonatomic) bool animatingLayoutChange;
@property (nonatomic, retain) CKBrowserSwitcherFooterView *appStrip;
@property (nonatomic, retain) UIView *appStripBackgroundBlurContainerView;
@property (nonatomic, retain) UIKBVisualEffectView *appStripBackgroundBlurView;
@property (nonatomic, retain) CKEntryViewButton *arrowButton;
@property (nonatomic, retain) CKEntryViewButton *audioButton;
@property (nonatomic, retain) CKComposition *audioComposition;
@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic) bool audioControllerWasPlayingBeforeScrubbing;
@property (nonatomic, retain) UILabel *audioHintLabel;
@property (nonatomic) <CKMessageEntryViewAudioMessageAppDelegate> *audioMessageAppDelegate;
@property (nonatomic, retain) NSTimer *audioMessageButtonTimer;
@property (getter=isAudioMessageRecordingAvailable, nonatomic) bool audioMessageRecordingAvailable;
@property (nonatomic, retain) CKAudioMessageRecordingView *audioRecordingView;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, retain) UIView<CKMessageEntryBackgroundViewProtocol> *backgroundView;
@property (nonatomic, retain) CKEntryViewButton *browserButton;
@property (nonatomic, retain) UIView *buttonAndTextAreaContainerView;
@property (nonatomic, retain) CKEntryViewButton *cancelButton;
@property (getter=isCharacterCountHidden, nonatomic) bool characterCountHidden;
@property (nonatomic, retain) UILabel *characterCountLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } characterCountSize;
@property (nonatomic) <_UIClickInteractionDelegate> *clickInteractionDelegate;
@property (nonatomic, retain) UILabel *collpasedPlaceholderLabel;
@property (getter=isComposingRecipient, nonatomic) bool composingRecipient;
@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, retain) UIView *contentClipView;
@property (nonatomic, retain) CKMessageEntryContentView *contentView;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } coverInsets;
@property (readonly) double coverViewWidth;
@property (nonatomic, retain) NSArray *currentMentionSuggestions;
@property (nonatomic) unsigned long long currentTappedCharacterIndex;
@property (nonatomic, retain) CAShapeLayer *dashedContentClipViewLayer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKMessageEntryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKEntryViewButton *dictationButton;
@property (nonatomic) bool dictationEnabledForLanguage;
@property (nonatomic, copy) id /* block */ didSelectEntityCompletionHandler;
@property (getter=shouldDisablePluginButtons, nonatomic) bool disablePluginButtons;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIButton *emojiButton;
@property (nonatomic, retain) NSMutableDictionary *entityDictionary;
@property (nonatomic, retain) NSMutableSet *entityHandles;
@property (nonatomic, retain) CKMentionEntityNode *entityTree;
@property (nonatomic) bool entryFieldCollapsed;
@property (nonatomic, retain) CKScheduledUpdater *entryFieldCollapsedUpdater;
@property (nonatomic) bool entryFieldUpdaterAnimatedValue;
@property (nonatomic) bool entryFieldUpdaterCollapsedValue;
@property (nonatomic, retain) UIKeyboardLayoutGuide *entryViewKeyboardLayoutGuide;
@property (nonatomic, retain) UITraitCollection *entryViewTraitCollection;
@property (nonatomic) bool extendAppStripBlurToKeyplaneTop;
@property (getter=hasFailedRecipients, nonatomic) bool failedRecipients;
@property (nonatomic, readonly) bool hasRecording;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) CKMessageEntryHintView *hintView;
@property (getter=isInPencilMode, nonatomic, readonly) bool inPencilMode;
@property (nonatomic, retain) UIView *inputButtonContainerView;
@property (nonatomic) struct CGSize { double x1; double x2; } inputButtonSize;
@property (nonatomic) <CKMessageEntryViewInputDelegate> *inputDelegate;
@property (nonatomic) bool isTransitioningForBrowserSwitcher;
@property (nonatomic) bool isUpdatingMentionAttributedText;
@property (nonatomic, copy) NSArray *keyCommands;
@property (nonatomic, retain) CKEntryViewButton *keyboardButton;
@property (getter=isKeyboardVisible, nonatomic) bool keyboardVisible;
@property (nonatomic, retain) UIView *knockoutView;
@property (nonatomic, retain) UIVisualEffectView *knockoutVisualEffectView;
@property (nonatomic) bool languageHasSpaces;
@property (nonatomic) <UITextInputTraits_Private> *lastConfiguredInputDelegate;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastFoundMentionRange;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) CKMentionSuggestionView *mentionSuggestionView;
@property (nonatomic, retain) _UISupplementalLexicon *mentionsLexicon;
@property (nonatomic, retain) UIVisualEffectView *messageEditingBlurOverlayView;
@property (nonatomic, retain) CKEntryViewButton *photoButton;
@property (nonatomic, retain) CKEntryViewPlusButton *plusButton;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *plusButtonFeedbackGenerator;
@property (nonatomic, readonly) bool plusButtonFeedbackGeneratorIsActive;
@property (nonatomic, retain) NSMutableArray *powerLevels;
@property (nonatomic, retain) CKComposition *previousAudioComposition;
@property (nonatomic) double previousBottomSafeAreaInset;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfTappedMention;
@property (nonatomic, retain) CKMessageEntryRecordedAudioView *recordedAudioView;
@property (nonatomic, retain) CKAudioRecorder *recorder;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic) bool recordingStartedFromRaiseGesture;
@property (nonatomic, retain) CKEntryViewButton *sendAudioButton;
@property (nonatomic, retain) CKEntryViewButton *sendButton;
@property (nonatomic, retain) _UIClickInteraction *sendButtonClickInteraction;
@property (nonatomic) struct CGSize { double x1; double x2; } sendButtonSize;
@property (nonatomic, retain) UIActivityIndicatorView *sendButtonSpinner;
@property (nonatomic, readonly) CKSendLaterPluginInfo *sendLaterPluginInfo;
@property (nonatomic) long long sendMenuPresentationState;
@property (nonatomic, readonly) UIView *sendMenuSourceView;
@property (getter=isSendingMessage, nonatomic) bool sendingMessage;
@property (nonatomic) bool shouldAllowImpactSend;
@property (nonatomic) bool shouldBlurForMessageEditing;
@property (nonatomic) bool shouldCenterCharacterCount;
@property (nonatomic) bool shouldCoverViewBeShrunkenForSendMenu;
@property (nonatomic) bool shouldDisableAttachments;
@property (nonatomic, readonly) bool shouldEntryViewBeExpandedLayout;
@property (nonatomic, readonly) bool shouldReloadBackgroundView;
@property (nonatomic, readonly) bool shouldShowAppStrip;
@property (nonatomic) bool shouldShowAudioMessageHint;
@property (nonatomic) bool shouldShowCharacterCount;
@property (nonatomic) bool shouldShowDictationButton;
@property (nonatomic) bool shouldShowPluginButtons;
@property (nonatomic) bool shouldShowSendButton;
@property (nonatomic) bool shouldShowSendButtonSpinner;
@property (nonatomic) bool shouldShowSubject;
@property (nonatomic) bool shouldUseLinearResizeForAudioMessage;
@property (nonatomic) bool showAppStrip;
@property (nonatomic) bool showingMentionsSuggestions;
@property (nonatomic, readonly) bool showsKeyboardPredictionBar;
@property (nonatomic, retain) CKEntryViewButton *stopButton;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISwipeGestureRecognizer *swipeGestureRecognizer;
@property (getter=hasUnreachableEmergencyRecipient, nonatomic) bool unreachableEmergencyRecipient;
@property (nonatomic, retain) CKMessageEntryWaveformView *waveformView;
@property (nonatomic) struct CGSize { double x1; double x2; } waveformViewSize;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsetsForMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 shouldShowPluginButtons:(bool)arg2 shouldShowCharacterCount:(bool)arg3 shouldCoverSendButton:(bool)arg4 isStewieMode:(bool)arg5;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverViewInsetsForMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 shouldShowPluginButtons:(bool)arg2 shouldShowCharacterCount:(bool)arg3 shouldCenterCharacterCount:(bool*)arg4 isStewieMode:(bool)arg5;
+ (id)currentEntryView;
+ (void)setCurrentEntryView:(id)arg1;
+ (id)sharedAppStripDatasource;

- (void).cxx_destruct;
- (double)_accessoryViewFadeDuration;
- (void)_animateExpandForManualToggle:(bool)arg1 completion:(id /* block */)arg2;
- (void)_animateMessageEditingBlurOverlayViewIn;
- (void)_animateMessageEditingBlurOverlayViewOut;
- (void)_animateToCompactLayoutCollapsing:(bool)arg1 completion:(id /* block */)arg2;
- (BOOL)_balloonColor;
- (bool)_canSend;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computedFinalCoverFrameRectForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_configureForDisplayModeRecorded;
- (void)_configureForDisplayModeRecording;
- (void)_configureForDisplayModeSending;
- (void)_configureForDisplayModeText;
- (void)_contactLimitsChanged:(id)arg1;
- (double)_coverFrameWidthForMaxCoverFrameWidth:(double)arg1 popoverLayoutMetrics:(id)arg2;
- (id)_currentInputDelegate;
- (void)_deleteTemporaryAudioFile;
- (void)_dictationAvailabilityDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_handlePlusButtonTouchInside:(id)arg1;
- (void)_handleSendAudioMessage;
- (bool)_isApplePayCashInShelf;
- (bool)_isDictationEnabled;
- (bool)_isExceedingByteLimitForService:(id)arg1;
- (bool)_isPresentingInPopover;
- (bool)_isRunningInMVS;
- (void)_keyboardsSettingsChanged:(id)arg1;
- (void)_overrideUserInterfaceStyleForEntryViewStyleIfNeeded:(long long)arg1;
- (void)_pausePlaying:(bool)arg1;
- (id)_placeholderTextForConversation:(id)arg1;
- (BOOL)_sendButtonColor;
- (id)_serviceForEntryViewForConversation:(id)arg1;
- (void)_setupAudioMessageRecordingView;
- (void)_setupWaveformView;
- (bool)_shouldEnablePlusButton;
- (bool)_shouldNotAnimateCollapseInteractive;
- (bool)_shouldUseDarkAppearanceFromTraitCollection:(id)arg1;
- (bool)_shouldUseKeyboardVisibleBottomInsetsForTextEffectsPicker;
- (void)_startPlaying:(bool)arg1;
- (void)_swipeDownGestureRecognized:(id)arg1;
- (void)_trackAudioMessageRecordingStarted;
- (void)_trackAudioMessageSentWithComposition:(id)arg1;
- (void)_updateSendMenuPresentationState:(long long)arg1;
- (void)_updateUIForEntryFieldCollapsedStateChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeKeyboardHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })adjustedCoverInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (bool)animatingLayoutChange;
- (void)appSelectionInterfaceSelectedItem:(id)arg1;
- (id)appStrip;
- (id)appStripBackgroundBlurContainerView;
- (id)appStripBackgroundBlurView;
- (void)applicationWillResignActive;
- (id)arrowButton;
- (void)arrowButtonTapped:(id)arg1;
- (id)audioButton;
- (void)audioButtonLongPressed:(id)arg1;
- (void)audioButtonTapped:(id)arg1;
- (void)audioButtonTappedInEntryView:(id)arg1;
- (id)audioComposition;
- (id)audioController;
- (void)audioController:(id)arg1 layoutViewsForScrubbingTime:(double)arg2 mediaObject:(id)arg3;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerPlayingDidChange:(id)arg1;
- (bool)audioControllerWasPlayingBeforeScrubbing;
- (id)audioHintLabel;
- (id)audioMessageAppDelegate;
- (id)audioMessageButtonTimer;
- (void)audioMessageRecordingViewDidCancel:(id)arg1;
- (void)audioMessageRecordingViewDidPause:(id)arg1;
- (void)audioMessageRecordingViewDidPlay:(id)arg1;
- (void)audioMessageRecordingViewDidResume:(id)arg1;
- (void)audioMessageRecordingViewDidSend:(id)arg1;
- (void)audioMessageRecordingViewDidStartScrubbing:(id)arg1;
- (void)audioMessageRecordingViewDidStop:(id)arg1;
- (void)audioMessageRecordingViewDidStopScrubbing:(id)arg1 atTime:(double)arg2;
- (void)audioMessageRecordingViewDidUpdateScrubbing:(id)arg1 atTime:(double)arg2;
- (void)audioRecorderDidStartRecording:(id)arg1;
- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidChange:(id)arg1;
- (void)audioRecorderRecordingDidFail:(id)arg1;
- (bool)audioRecordingIsInEntryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })audioRecordingPillViewFrameInThrowViewCoordinates;
- (id)audioRecordingPillViewSnapshot;
- (id)audioRecordingView;
- (id)backdropGroupName;
- (id)backgroundView;
- (double)balloonMaxWidthForMessageEntryRichTextView:(id)arg1;
- (void)beginDeferringEntryFieldCollapsedStateChanges;
- (void)beginSendMenuFullScreenPresentation;
- (void)beginSendMenuPopoverPresentation;
- (double)bottomInsetForAppStrip;
- (id)browserButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })browserButtonFrame;
- (void)browserButtonTapped:(id)arg1;
- (id)buttonAndTextAreaContainerView;
- (double)calculateOneLinePlaceHolderCenterY:(double)arg1;
- (void)cancelAudioMessage;
- (id)cancelButton;
- (void)cancelButtonTapped:(id)arg1;
- (id)characterCountLabel;
- (struct CGSize { double x1; double x2; })characterCountSize;
- (void)clearAppStripSelection;
- (void)clearAudioRecordingUI;
- (id)clickInteractionDelegate;
- (void)collapseGestureRecognized;
- (void)collapsedPlaceholderLabelTapped:(id)arg1;
- (id)collpasedPlaceholderLabel;
- (id)composition;
- (void)compositionWithAcceptedAutocorrection:(id /* block */)arg1;
- (void)configureAppStripBackgroundViewsIfNecessary;
- (void)configureAppStripOrMentionSuggestionsIfNeeded;
- (void)configureForDisplayMode:(unsigned long long)arg1;
- (void)configureTextViewWithInputContextHistoryFromTranscript;
- (id)contentClipView;
- (id)contentView;
- (id)conversation;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coverFrameThatFitsInSize:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverInsets;
- (double)coverViewWidth;
- (id)createDictationButton;
- (id)currentMentionSuggestions;
- (unsigned long long)currentTappedCharacterIndex;
- (id)dashedContentClipViewLayer;
- (void)dealloc;
- (void)deferredSetup;
- (id)delegate;
- (id)dictationButton;
- (void)dictationButtonTapped:(id)arg1;
- (bool)dictationEnabledForLanguage;
- (void)didMoveToWindow;
- (id /* block */)didSelectEntityCompletionHandler;
- (void)didSelectPlusButton:(id)arg1;
- (void)disableRotationWhileRecordingAudioMessage;
- (unsigned long long)displayMode;
- (double)duration;
- (id)emojiButton;
- (void)endDeferringEntryFieldCollapsedStateChanges;
- (void)endSendMenuPresentation;
- (id)entityDictionary;
- (id)entityHandles;
- (id)entityTree;
- (bool)entryFieldCollapsed;
- (id)entryFieldCollapsedUpdater;
- (bool)entryFieldUpdaterAnimatedValue;
- (bool)entryFieldUpdaterCollapsedValue;
- (id)entryViewKeyboardLayoutGuide;
- (id)entryViewTraitCollection;
- (void)expandAppStrip;
- (void)expandGestureRecongnized;
- (bool)extendAppStripBlurToKeyplaneTop;
- (void)finishBrowserSwitcherCompactTransition;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleContentViewChangeWithCompletion:(id /* block */)arg1;
- (void)handleLongPress:(id)arg1;
- (bool)hasFailedRecipients;
- (bool)hasRecording;
- (bool)hasUnreachableEmergencyRecipient;
- (id)heightConstraint;
- (id)hintView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldAllowImpact:(bool)arg3 shouldShowSendButton:(bool)arg4 shouldShowSubject:(bool)arg5 shouldShowPluginButtons:(bool)arg6 shouldShowCharacterCount:(bool)arg7 traitCollection:(id)arg8 shouldDisableAttachments:(bool)arg9 shouldUseNonEmojiKeyboard:(bool)arg10 shouldUseNonHandwritingKeyboard:(bool)arg11 shouldDisableKeyboardStickers:(bool)arg12;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldShowSendButton:(bool)arg3 shouldShowSubject:(bool)arg4 shouldShowPluginButtons:(bool)arg5 shouldShowCharacterCount:(bool)arg6 traitCollection:(id)arg7 shouldDisableAttachments:(bool)arg8 shouldDisableKeyboardStickers:(bool)arg9;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;
- (id)inputButtonContainerView;
- (struct CGSize { double x1; double x2; })inputButtonSize;
- (id)inputDelegate;
- (void)interruptAudioRecorder:(id)arg1;
- (void)invalidateCompositionForReason:(long long)arg1;
- (bool)is3rdPartyKeyboardVisible;
- (bool)isAudioMessageRecordingAvailable;
- (bool)isCharacterCountHidden;
- (bool)isComposingRecipient;
- (bool)isInPencilMode;
- (bool)isKeyboardVisible;
- (bool)isPredictionBarEnabled;
- (bool)isRecording;
- (bool)isRunningInNotificationExtension;
- (bool)isSendingMessage;
- (bool)isShowingAudioRecordingView;
- (bool)isTransitioningForBrowserSwitcher;
- (bool)isUpdatingMentionAttributedText;
- (void)keyCommandSend:(id)arg1;
- (id)keyCommands;
- (id)keyboardButton;
- (void)keyboardButtonTapped:(id)arg1;
- (id)knockoutView;
- (id)knockoutVisualEffectView;
- (bool)languageHasSpaces;
- (id)lastConfiguredInputDelegate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastFoundMentionRange;
- (bool)layoutIsCurrentlyCompact;
- (void)layoutSubviews;
- (void)loadRecordedAudioViewsIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)mentionSuggestionView;
- (id)mentionsLexicon;
- (id)messageEditingBlurOverlayView;
- (bool)messageEntryContentView:(id)arg1 canPerformDictationAction:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didAddPluginEntryViewControllerToViewHierarchy:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didRequestGenerativeContentForImageURL:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didStagePluginPayload:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
- (bool)messageEntryContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentView:(id)arg1 willAddPluginEntryViewControllerToViewHierarchy:(id)arg2;
- (void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1 wasAlreadyActive:(bool)arg2;
- (void)messageEntryContentViewDidChange:(id)arg1 isTextChange:(bool)arg2 isShelfChange:(bool)arg3;
- (void)messageEntryContentViewDidChangePencilMode:(id)arg1;
- (void)messageEntryContentViewDidDismissCustomizationPicker:(id)arg1;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidPresentCustomizationPicker:(id)arg1;
- (void)messageEntryContentViewDidReturn:(id)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryContentViewSendLaterPluginInfoUpdated:(id)arg1;
- (void)messageEntryContentViewShelfDidChange:(id)arg1;
- (bool)messageEntryContentViewShouldAllowLinkCustomization:(id)arg1;
- (bool)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (bool)messageEntryContentViewShouldResignFirstResponder:(id)arg1;
- (void)messageEntryContentViewTextFormattingAnimationsOptionsPresentationInProgress:(bool)arg1;
- (void)messageEntryContentViewWantsSendLaterPickerPresented:(id)arg1;
- (void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(bool)arg2;
- (void)messageEntryContentViewWillDismissCustomizationPicker:(id)arg1;
- (void)messageEntryContentViewWillPresentCustomizationPicker:(id)arg1;
- (void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)messageEntryRecordedAudioViewPlaybackDidStop;
- (void)messageEntryRecordedAudioViewPlaybackProgressDidChange:(double)arg1;
- (void)messageEntryRecordedAudioViewPressedDelete:(id)arg1;
- (void)messageEntryRecordedAudioViewPressedPause:(id)arg1;
- (void)messageEntryRecordedAudioViewPressedPlay:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)minifyAppStrip;
- (unsigned long long)numberOfSuggestionsInSuggestionView:(id)arg1 forSection:(unsigned long long)arg2;
- (void)optionDownArrowClicked:(id)arg1;
- (void)optionUpArrowClicked:(id)arg1;
- (id)pasteBoardTextFromComposition:(id)arg1;
- (void)pausePlaying;
- (id)photoButton;
- (bool)photoButtonEnabled;
- (void)photoButtonTapped:(id)arg1;
- (void)photoButtonTouchCancel:(id)arg1;
- (void)photoButtonTouchDown:(id)arg1;
- (void)photoButtonTouchUpOutside:(id)arg1;
- (double)placeholderHeight;
- (bool)pluginButtonsEnabled;
- (id)plusButton;
- (id)plusButtonFeedbackGenerator;
- (bool)plusButtonFeedbackGeneratorIsActive;
- (void)plusButtonLongPressed:(id)arg1;
- (void)plusButtonTouchCancel:(id)arg1;
- (void)plusButtonTouchDown:(id)arg1;
- (void)plusButtonTouchDragEnter:(id)arg1;
- (void)plusButtonTouchDragExit:(id)arg1;
- (void)plusButtonTouchUpOutside:(id)arg1;
- (id)plusButtonView;
- (double)powerLevelForAudioMessageRecordingView:(id)arg1;
- (id)powerLevels;
- (void)prepareForBrowserSwitcherCompactTransitionIsSnapshotting:(bool)arg1;
- (void)prepareForResizeAnimationIfNeeded;
- (void)presentAudioActionButtons;
- (id)previousAudioComposition;
- (double)previousBottomSafeAreaInset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTappedMention;
- (id)recordedAudioView;
- (id)recorder;
- (bool)recordingStartedFromRaiseGesture;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (void)selectPluginAtIndexPath:(id)arg1;
- (id)sendAudioButton;
- (void)sendAudioButtonTapped:(id)arg1;
- (void)sendAudioMessage;
- (id)sendButton;
- (id)sendButtonClickInteraction;
- (bool)sendButtonEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sendButtonFrameInScreenCoordinates;
- (struct CGSize { double x1; double x2; })sendButtonSize;
- (id)sendButtonSpinner;
- (void)sendCurrentLocationMessage;
- (void)sendEnableRotationAfterRecordingToDelegate;
- (id)sendLaterPluginInfo;
- (void)sendMenuPopoverMetricsDidChange:(id)arg1;
- (long long)sendMenuPresentationState;
- (id)sendMenuSourceView;
- (void)setAnimatingLayoutChange:(bool)arg1;
- (void)setAppStrip:(id)arg1;
- (void)setAppStripBackgroundBlurContainerView:(id)arg1;
- (void)setAppStripBackgroundBlurView:(id)arg1;
- (void)setArrowButton:(id)arg1;
- (void)setAudioButton:(id)arg1;
- (void)setAudioComposition:(id)arg1;
- (void)setAudioController:(id)arg1;
- (void)setAudioControllerWasPlayingBeforeScrubbing:(bool)arg1;
- (void)setAudioHintLabel:(id)arg1;
- (void)setAudioMessageAppDelegate:(id)arg1;
- (void)setAudioMessageButtonTimer:(id)arg1;
- (void)setAudioMessageRecordingAvailable:(bool)arg1;
- (void)setAudioRecordingView:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBrowserButton:(id)arg1;
- (void)setBrowserButtonEnabled:(bool)arg1;
- (void)setButtonAndTextAreaContainerView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCharacterCountHidden:(bool)arg1;
- (void)setCharacterCountLabel:(id)arg1;
- (void)setCharacterCountSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setClickInteractionDelegate:(id)arg1;
- (void)setCollpasedPlaceholderLabel:(id)arg1;
- (void)setComposingRecipient:(bool)arg1;
- (void)setComposition:(id)arg1;
- (void)setContentClipView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setCoverInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCurrentMentionSuggestions:(id)arg1;
- (void)setCurrentTappedCharacterIndex:(unsigned long long)arg1;
- (void)setDashedContentClipViewLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictationButton:(id)arg1;
- (void)setDictationEnabledForLanguage:(bool)arg1;
- (void)setDidSelectEntityCompletionHandler:(id /* block */)arg1;
- (void)setDisablePluginButtons:(bool)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setEmojiButton:(id)arg1;
- (void)setEntityDictionary:(id)arg1;
- (void)setEntityHandles:(id)arg1;
- (void)setEntityTree:(id)arg1;
- (void)setEntryFieldCollapsed:(bool)arg1;
- (void)setEntryFieldCollapsed:(bool)arg1 animated:(bool)arg2;
- (void)setEntryFieldCollapsedUpdater:(id)arg1;
- (void)setEntryFieldUpdaterAnimatedValue:(bool)arg1;
- (void)setEntryFieldUpdaterCollapsedValue:(bool)arg1;
- (void)setEntryViewKeyboardLayoutGuide:(id)arg1;
- (void)setEntryViewTraitCollection:(id)arg1;
- (void)setEntryViewTraitCollection:(id)arg1 resetStyle:(bool)arg2;
- (void)setExtendAppStripBlurToKeyplaneTop:(bool)arg1;
- (void)setFailedRecipients:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setHintView:(id)arg1;
- (void)setInputButtonContainerView:(id)arg1;
- (void)setInputButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setIsTransitioningForBrowserSwitcher:(bool)arg1;
- (void)setIsUpdatingMentionAttributedText:(bool)arg1;
- (void)setKeyCommands:(id)arg1;
- (void)setKeyboardButton:(id)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setKnockoutView:(id)arg1;
- (void)setKnockoutVisualEffectView:(id)arg1;
- (void)setLanguageHasSpaces:(bool)arg1;
- (void)setLastConfiguredInputDelegate:(id)arg1;
- (void)setLastFoundMentionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMentionSuggestionView:(id)arg1;
- (void)setMentionsLexicon:(id)arg1;
- (void)setMessageEditingBlurOverlayView:(id)arg1;
- (void)setPhotoButton:(id)arg1;
- (void)setPlusButton:(id)arg1;
- (void)setPowerLevels:(id)arg1;
- (void)setPreviousAudioComposition:(id)arg1;
- (void)setPreviousBottomSafeAreaInset:(double)arg1;
- (void)setRangeOfTappedMention:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRecordedAudioView:(id)arg1;
- (void)setRecorder:(id)arg1;
- (void)setRecordingStartedFromRaiseGesture:(bool)arg1;
- (void)setSendAudioButton:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setSendButtonClickInteraction:(id)arg1;
- (void)setSendButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSendButtonSpinner:(id)arg1;
- (void)setSendLaterPluginInfo:(id)arg1 animated:(bool)arg2;
- (void)setSendMenuPresentationState:(long long)arg1;
- (void)setSendingMessage:(bool)arg1;
- (void)setShouldAllowImpactSend:(bool)arg1;
- (void)setShouldBlurForMessageEditing:(bool)arg1;
- (void)setShouldCenterCharacterCount:(bool)arg1;
- (void)setShouldCoverViewBeShrunkenForSendMenu:(bool)arg1;
- (void)setShouldDisableAttachments:(bool)arg1;
- (void)setShouldHideBackgroundView:(bool)arg1;
- (void)setShouldShowAudioMessageHint:(bool)arg1;
- (void)setShouldShowCharacterCount:(bool)arg1;
- (void)setShouldShowDictationButton:(bool)arg1;
- (void)setShouldShowPluginButtons:(bool)arg1;
- (void)setShouldShowSendButton:(bool)arg1;
- (void)setShouldShowSendButtonSpinner:(bool)arg1;
- (void)setShouldShowSubject:(bool)arg1;
- (void)setShouldUseLinearResizeForAudioMessage:(bool)arg1;
- (void)setShowAppStrip:(bool)arg1;
- (void)setShowAppStrip:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setShowingMentionsSuggestions:(bool)arg1;
- (void)setStopButton:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSwipeGestureRecognizer:(id)arg1;
- (void)setTextEffectCoordinatorPaused:(bool)arg1 reason:(id)arg2;
- (void)setUnreachableEmergencyRecipient:(bool)arg1;
- (void)setWaveformView:(id)arg1;
- (void)setWaveformViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupAudioMessageQuickSendViewAndStopRecording;
- (bool)shouldAllowImpactSend;
- (bool)shouldAllowSendWhenSendButtonDisabled;
- (bool)shouldBlurForMessageEditing;
- (bool)shouldCenterCharacterCount;
- (bool)shouldCoverViewBeShrunkenForSendMenu;
- (bool)shouldDisableAttachments;
- (bool)shouldDisablePluginButtons;
- (bool)shouldEntryViewBeExpandedLayout;
- (bool)shouldHideBackgroundView;
- (bool)shouldRecordForService:(id)arg1;
- (bool)shouldReloadBackgroundView;
- (bool)shouldShowAppStrip;
- (bool)shouldShowAudioButton;
- (bool)shouldShowAudioMessageHint;
- (bool)shouldShowCharacterCount;
- (bool)shouldShowDictationButton;
- (bool)shouldShowPluginButtons;
- (bool)shouldShowSendButton;
- (bool)shouldShowSendButtonSpinner;
- (bool)shouldShowSubject;
- (bool)shouldUseLinearResizeForAudioMessage;
- (bool)showAppStrip;
- (void)showAudioHintWithReason:(long long)arg1;
- (void)showEffectPicker;
- (void)showHintWithText:(id)arg1 animatingReferenceButton:(bool)arg2;
- (void)showMessageEffectsHint;
- (bool)showingMentionsSuggestions;
- (bool)showsKeyboardPredictionBar;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotForCompactBrowserAnimation;
- (void)startPlaying;
- (void)startRecording;
- (void)startRecordingForAudioButtonInEntryView;
- (void)startRecordingForRaiseGesture;
- (id)stopButton;
- (void)stopButtonTapped:(id)arg1;
- (void)stopRecording;
- (void)stopRecordingForRaiseGestureWithFailure:(bool)arg1;
- (long long)style;
- (id)suggestionView:(id)arg1 entityAtIndex:(unsigned long long)arg2;
- (id)suggestionView:(id)arg1 indexPathOfEntityWithIdentifier:(id)arg2;
- (id)swipeGestureRecognizer;
- (void)switcherView:(id)arg1 didMagnify:(bool)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)textEffectsWindowOffsetDidChange:(id)arg1;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)updateAppStripFrame;
- (void)updateAppsMenu;
- (void)updateAudioMessageRecordingAvailability;
- (void)updateBackgroundView;
- (void)updateEntryView;
- (void)updateKnockoutView;
- (void)updateTextViewsForShouldHideCaret:(bool)arg1;
- (void)visiblePluginsChanged:(id)arg1;
- (id)waveformView;
- (struct CGSize { double x1; double x2; })waveformViewSize;

@end
