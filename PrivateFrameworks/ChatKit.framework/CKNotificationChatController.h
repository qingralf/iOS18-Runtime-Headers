/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNotificationChatController : CKCoreChatController <CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate, UITextInputPayloadDelegate> {
    bool  _allowedByScreenTime;
    CKMessageEntryViewController * _entryViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownKeyboardFrame;
    STLockoutViewController * _lockoutViewController;
    CKMentionsController * _mentionsController;
    CKFullScreenBalloonViewController * _notificationFullScreenBalloonController;
    NSTimer * _notificationViewDismissalTimer;
    NSDate * _notificationViewWillAppearDate;
    CKRaiseGesture * _raiseGesture;
    bool  _shouldAllowReplyFromLockScreen;
    CKScheduledUpdater * _typingUpdater;
    NSExtensionContext * _urlOpenContext;
}

@property (nonatomic) bool allowedByScreenTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKNotificationChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKMessageEntryView *entryView;
@property (nonatomic, retain) CKMessageEntryViewController *entryViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property (nonatomic, retain) STLockoutViewController *lockoutViewController;
@property (nonatomic, retain) CKMentionsController *mentionsController;
@property (nonatomic) CKFullScreenBalloonViewController *notificationFullScreenBalloonController;
@property (nonatomic, retain) NSTimer *notificationViewDismissalTimer;
@property (nonatomic, retain) NSDate *notificationViewWillAppearDate;
@property (nonatomic, retain) CKRaiseGesture *raiseGesture;
@property (nonatomic) bool shouldAllowReplyFromLockScreen;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;
@property (nonatomic) NSExtensionContext *urlOpenContext;

- (void).cxx_destruct;
- (void)__raiseGestureRecognized:(id)arg1;
- (void)_allowedByScreenTimeChanged:(id)arg1;
- (bool)_canShowWhileLocked;
- (bool)_deviceIsPasscodeLocked;
- (void)_dismissFullScreenBubbleViewControllerAnimated:(bool)arg1 withSendAnimation:(bool)arg2 completion:(id /* block */)arg3;
- (void)_handleKeyboardDidChangeFrameNotification:(id)arg1;
- (void)_handleStickerTextInputPayload:(id)arg1;
- (void)_insertUIStickerAsAdaptiveImageGlyph:(id)arg1;
- (void)_launchMessagesForInputMode:(id)arg1;
- (double)_maxEntryViewHeight;
- (void)_messageReceivedInCurrentTranscript:(id)arg1;
- (void)_openMessagesForChat:(id)arg1;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_saveDraftForCurrentComposition;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_setupShouldShowReplyFromLockScreen;
- (void)_updateEntryViewFrameIfNeeded:(bool)arg1;
- (void)_updateTitleAnimated:(bool)arg1;
- (bool)allowedByScreenTime;
- (void)backgroundViewTapGestureRecognized:(id)arg1;
- (double)balloonMaxWidth;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)constrainToPresentingVCBounds;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveVisibleRectOfCollectionViewForTranscriptCollectionViewController:(id)arg1;
- (id)entryView;
- (id)entryViewController;
- (bool)forceWindowedPresentation;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(bool)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (id)initWithConversation:(id)arg1 entryViewTraitCollection:(id)arg2;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (bool)inputAccessoryViewControllerEnabled;
- (id)inputContextHistoryForMessageEntryView:(id)arg1;
- (void)insertUIStickerAsAdaptiveImageGlyph:(id)arg1;
- (bool)isSafeToMarkAsRead;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)launchAppFromExtensionWith:(id)arg1;
- (id)launchURLForInputMode:(id)arg1;
- (id)lockoutViewController;
- (Class)lockoutViewControllerClass;
- (id)mentionsController;
- (bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryView:(id)arg1 didInsertPluginPayload:(id)arg2;
- (void)messageEntryView:(id)arg1 didLongPressPlusButton:(id)arg2;
- (void)messageEntryView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)messageEntryView:(id)arg1 didSelectPlusButton:(id)arg2;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (id)messageEntryViewActiveSendMenuPresentation:(id)arg1;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewDidBeginEditingNotAlreadyActive:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1 isTextChange:(bool)arg2 isShelfChange:(bool)arg3;
- (void)messageEntryViewDidChangePencilMode:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (void)messageEntryViewInputDidTakeFocus:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (void)messageEntryViewPlusButtonHit:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSafeAreaInsetsDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendLaterPluginInfoUpdated:(id)arg1;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (bool)messageEntryViewShouldVerticallyInsetForPresentedAppCard:(id)arg1;
- (void)messageEntryViewTextFormattingAnimationsOptionsPresentationInProgress:(bool)arg1;
- (void)messageEntryViewWantsGenerativePlaygroundPluginPresented:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (void)messageEntryViewWantsSendLaterPickerPresented:(id)arg1;
- (bool)messageEntryViewWidth:(double*)arg1 andOffset:(double*)arg2;
- (id)notificationFullScreenBalloonController;
- (id)notificationViewDismissalTimer;
- (id)notificationViewWillAppearDate;
- (id)parentViewControllerForPluginViewControllerInMessageEntryView:(id)arg1;
- (bool)pluginButtonsEnabled;
- (bool)preserveModalPresentationStyle;
- (id)progressBar;
- (id)raiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)registerForTextInputPayloadHandling;
- (void)sendComposition:(id)arg1;
- (void)sendCurrentLocationMessage:(id)arg1;
- (void)setAllowedByScreenTime:(bool)arg1;
- (void)setConversation:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewController:(id)arg1;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLocalUserIsComposing:(bool)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)setLockoutViewController:(id)arg1;
- (void)setMentionsController:(id)arg1;
- (void)setNotificationFullScreenBalloonController:(id)arg1;
- (void)setNotificationViewDismissalTimer:(id)arg1;
- (void)setNotificationViewWillAppearDate:(id)arg1;
- (void)setRaiseGesture:(id)arg1;
- (void)setSendingMessage:(bool)arg1;
- (void)setShouldAllowReplyFromLockScreen:(bool)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setUrlOpenContext:(id)arg1;
- (bool)shouldAllowReplyFromLockScreen;
- (bool)shouldLaunchPhotosAppForPlusButtonLongPressInMessageEntryView:(id)arg1;
- (bool)shouldShowEntryView;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestReaderViewControllerForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewControllerDidSetChatItems:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (id)typingUpdater;
- (void)unregisterForTextInputPayloadHandling;
- (void)updateRaiseGesture;
- (void)updateTyping;
- (id)urlOpenContext;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviewsForTranscriptCollectionViewController:(id)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsReplyButton;
- (bool)wantsWindowedPresentation;

@end
