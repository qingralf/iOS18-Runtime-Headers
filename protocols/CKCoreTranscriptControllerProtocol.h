/* Generated by RuntimeBrowser.
 */

@protocol CKCoreTranscriptControllerProtocol <NSObject>

@required

- (NSString *)__CurrentTestName;
- (void)__setCurrentTestName:(NSString *)arg1;
- (void)addContentAnimationPauseReasons:(long long)arg1;
- (bool)allowsPluginPlayback;
- (CKAssociatedMessageChatItem *)associatedChatItemForGUID:(NSString *)arg1;
- (NSArray *)associatedChatItems;
- (double)balloonMaxWidth;
- (CKBalloonView *)balloonViewForChatItem:(CKChatItem *)arg1;
- (CKBalloonView *)balloonViewForIndexPath:(NSIndexPath *)arg1;
- (void)balloonViewTextViewDidChangeSelection:(CKBalloonView *)arg1 selectedText:(NSString *)arg2 textView:(CKBalloonTextView *)arg3;
- (void)beginHidingStickerWithGUIDDuringAddStickerAnimation:(NSString *)arg1;
- (void)beginPresentingChatItemForKeyboardPresentation:(void *)arg1 layoutAreaContentInsets:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CKMessagePartChatItem *, struct UIEdgeInsets { double x1; double x2; double x3; double x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)canRaiseToListen;
- (bool)canRaiseToTalk;
- (UICollectionViewCell<CKTranscriptCellProtocol> *)cellForAssociatedChatItem:(CKAssociatedMessageChatItem *)arg1;
- (UICollectionViewCell<CKTranscriptCellProtocol> *)cellForChatItem:(CKChatItem *)arg1;
- (IMChat *)chat;
- (CKChatItem *)chatItemAtIndexPath:(NSIndexPath *)arg1;
- (CKChatItem *)chatItemForCell:(UICollectionViewCell<CKTranscriptCellProtocol> *)arg1;
- (CKChatItem *)chatItemForGUID:(NSString *)arg1;
- (NSArray *)chatItems;
- (void)clearRecentPluginTouch;
- (CKTranscriptCollectionView *)collectionView;
- (void)configureCell:(UICollectionViewCell<CKTranscriptCellProtocol> *)arg1 forCKChatItem:(CKChatItem *)arg2 atIndexPath:(NSIndexPath *)arg3 animated:(bool)arg4 animationDuration:(double)arg5 animationCurve:(long long)arg6;
- (long long)contentAnimationPauseReasons;
- (CKConversation *)conversation;
- (void)copyChatItemsToPasteboard:(NSArray *)arg1;
- (void)copySelectedChatItemsToPasteboard;
- (<CKTranscriptCollectionViewControllerDelegate> *)delegate;
- (void)deleteChatItems:(NSArray *)arg1 sender:(id)arg2;
- (void)deleteSelectedChatItems:(id)arg1;
- (void)deselectAllBalloons;
- (<UIDragInteractionDelegate> *)dragInteractionDelegate;
- (void)endHidingStickerWithGUIDDuringAddStickerAnimation:(NSString *)arg1;
- (void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
- (void)endPresentingChatItemForKeyboardPresentation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: CKMessagePartChatItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enforceTranscriptScrollIntentWithAnimationProperties:(CKScrollViewAnimationProperties *)arg1;
- (CKFullScreenEffectManager *)fullscreenEffectManager;
- (NSString *)generatedSummary;
- (NSMutableArray *)generativeContextHistory;
- (UIView<CKGradientReferenceView> *)gradientReferenceView;
- (bool)hasRecentTouchForSendingPlugin:(NSString *)arg1;
- (NSIndexSet *)hiddenAssociatedItems;
- (NSIndexSet *)hiddenAssociatedItemsForMessageEditing;
- (NSIndexSet *)hiddenBalloonViews;
- (NSIndexSet *)hiddenItems;
- (void)highlightItemAtIndexPathWhenDisplayed:(NSIndexPath *)arg1 autoDismiss:(bool)arg2;
- (CKImpactEffectManager *)impactEffectManager;
- (NSIndexPath *)indexPathForBalloonView:(CKBalloonView *)arg1;
- (id)initWithConversation:(CKConversation *)arg1 delegate:(id <CKTranscriptCollectionViewControllerDelegate>)arg2 balloonMaxWidth:(double)arg3 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (id)initWithConversation:(CKConversation *)arg1 delegate:(id <CKTranscriptCollectionViewControllerDelegate>)arg2 balloonMaxWidth:(double)arg3 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 collectionViewSize:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithConversation:(CKConversation *)arg1 delegate:(id <CKTranscriptCollectionViewControllerDelegate>)arg2 notifications:(NSArray *)arg3 balloonMaxWidth:(double)arg4 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (id)initWithConversation:(CKConversation *)arg1 delegate:(id <CKTranscriptCollectionViewControllerDelegate>)arg2 notifications:(NSArray *)arg3 balloonMaxWidth:(double)arg4 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 collectionViewSize:(struct CGSize { double x1; double x2; })arg6;
- (UIInputContextHistory *)inputContextHistory;
- (void)invalidateChatItemLayoutWithNewBalloonMaxWidth:(double)arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 traitCollection:(UITraitCollection *)arg3;
- (bool)isTranscriptUpdateAnimated;
- (bool)isVisiblePlugin:(NSString *)arg1;
- (CKMessagePartChatItem *)lastMessagePartChatItem;
- (UITapGestureRecognizer *)loggingTapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (CKTranscriptLayoutMessageEditingContext *)messageEditingContext;
- (double)pluginPlaybackDelay;
- (NSString *)poppedBalloonGUIDHiddenUntilNextChatItemUpdate;
- (void)raiseGestureRecognized:(CKRaiseGesture *)arg1;
- (void)reloadData;
- (void)removeContentAnimationPauseReasons:(long long)arg1;
- (void)removeEmphasisFromCurrentMessage;
- (void)scrollTranscriptToEntryViewInsertionTimeWithAnimation:(bool)arg1;
- (void)selectChatItem:(CKChatItem *)arg1;
- (NSArray *)selectedChatItems;
- (NSIndexSet *)selectedItems;
- (void)setAllowsPluginPlayback:(bool)arg1;
- (void)setContentAnimationPauseReasons:(long long)arg1;
- (void)setDelegate:(id <CKTranscriptCollectionViewControllerDelegate>)arg1;
- (void)setDragInteractionDelegate:(id <UIDragInteractionDelegate>)arg1;
- (void)setFullscreenEffectManager:(CKFullScreenEffectManager *)arg1;
- (void)setGeneratedSummary:(NSString *)arg1;
- (void)setGenerativeContextHistory:(NSMutableArray *)arg1;
- (void)setGradientReferenceView:(UIView<CKGradientReferenceView> *)arg1;
- (void)setHiddenAssociatedItems:(NSIndexSet *)arg1;
- (void)setHiddenAssociatedItemsForMessageEditing:(NSIndexSet *)arg1;
- (void)setHiddenBalloonViews:(NSIndexSet *)arg1;
- (void)setHiddenItems:(NSIndexSet *)arg1;
- (void)setImpactEffectManager:(CKImpactEffectManager *)arg1;
- (void)setInputContextHistory:(UIInputContextHistory *)arg1;
- (void)setLoggingTapGestureRecognizer:(UITapGestureRecognizer *)arg1;
- (void)setMessageEditingContext:(CKTranscriptLayoutMessageEditingContext *)arg1;
- (void)setPluginPlaybackDelay:(double)arg1;
- (void)setPoppedBalloonGUIDHiddenUntilNextChatItemUpdate:(NSString *)arg1;
- (void)setScrollAnchor:(double)arg1;
- (void)setSelectedItems:(NSIndexSet *)arg1;
- (void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(bool)arg1;
- (void)setTranscriptUpdateAnimated:(bool)arg1;
- (void)setTransitionedFromComposing:(bool)arg1;
- (void)setTransitioningFromComposing:(bool)arg1;
- (bool)shouldLoadDefaultConversationViewingMessageCountOnAppear;
- (void)showGridForChatItem:(CKAttachmentMessagePartChatItem *)arg1;
- (void)sizeFullTranscriptIfNecessary;
- (void)startPluginPlaybackAfterDelay:(double)arg1;
- (void)stopPlayingAudio;
- (void)stopPluginPlayback;
- (void)textEffectsEndTransitionSetReady;
- (NSString *)transcriptIdentifier;
- (bool)transitionedFromComposing;
- (bool)transitioningFromComposing;
- (NSObject<OS_dispatch_group> *)updateAnimationGroup;
- (void)updateEffectViewMessageRects;
- (void)updateTargetAlphaForVisibleChatItems;
- (void)updateTranscript:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, id /* block */, void*, void, id /* block */, void*
- (void)updateTranscriptScrollIntentToBottomOrHistoryBasedOnCurrentContentOffset;
- (void)verticallyScrollTranscriptByAmount:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)verticallyScrollTranscriptByAmount:(void *)arg1 animated:(void *)arg2 duration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: double, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (UIView *)quickReplySnapshotInView:(UIView *)arg1;
- (void)updateTranscriptScrollIntentForSendAnimationContext:(id <CKSendAnimationContext>)arg1;

@end
