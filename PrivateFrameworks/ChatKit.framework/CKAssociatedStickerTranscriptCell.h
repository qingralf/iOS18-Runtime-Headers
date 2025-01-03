/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell {
    long long  _cachedStickerReactionRandomizationSource;
    NSString * _chatItemGUID;
    bool  _gestureRecognizersEnabled;
    bool  _isReaction;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    IMSticker * _sticker;
    long long  _stickerReactionIndex;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) long long cachedStickerReactionRandomizationSource;
@property (nonatomic, retain) NSString *chatItemGUID;
@property (nonatomic) bool gestureRecognizersEnabled;
@property (nonatomic) bool isReaction;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) IMSticker *sticker;
@property (nonatomic) long long stickerReactionIndex;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (long long)cachedStickerReactionRandomizationSource;
- (id)chatItemGUID;
- (void)configureForChatItem:(id)arg1 context:(id)arg2 animated:(bool)arg3 animationDuration:(double)arg4 animationCurve:(long long)arg5;
- (void)doubleTapGestureRecognized:(id)arg1;
- (bool)gestureRecognizersEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isReaction;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)longPressGestureRecognized:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)performDroppedWiggle:(id /* block */)arg1;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performReveal:(id /* block */)arg1;
- (void)performRevealAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)performWiggleAnimationIfNeeded;
- (void)prepareForReuse;
- (double)rotation;
- (void)setAssociatedItemView:(id)arg1;
- (void)setCachedStickerReactionRandomizationSource:(long long)arg1;
- (void)setChatItemGUID:(id)arg1;
- (void)setGestureRecognizersEnabled:(bool)arg1;
- (void)setIsReaction:(bool)arg1;
- (void)setSticker:(id)arg1;
- (void)setStickerReactionIndex:(long long)arg1;
- (void)setStickerViewHidden:(bool)arg1;
- (id)sticker;
- (long long)stickerReactionIndex;
- (id)tapGestureRecognizer;

@end
