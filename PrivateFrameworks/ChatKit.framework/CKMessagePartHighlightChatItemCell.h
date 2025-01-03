/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagePartHighlightChatItemCell : CKAssociatedMessageTranscriptCell

@property (nonatomic, retain) CKMessagePartHighlightBalloonView *highlightBalloonView;

- (id)accessibilityIdentifier;
- (void)configureForChatItem:(id)arg1 context:(id)arg2 animated:(bool)arg3 animationDuration:(double)arg4 animationCurve:(long long)arg5;
- (id)highlightBalloonView;
- (void)layoutSubviewsForAlignmentContents;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setHighlightBalloonView:(id)arg1;

@end
