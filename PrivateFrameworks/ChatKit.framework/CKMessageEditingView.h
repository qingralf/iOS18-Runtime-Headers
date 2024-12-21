/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEditingView : UIView <CKMessageEditingBalloonViewDelegate> {
    UIButton * _confirmButton;
    bool  _firstLayoutPassCompleted;
    CKMessageEditingBalloonView * _messageEditingBalloonView;
    <CKMessageEditingViewDelegate> * _messageEditingViewDelegate;
    long long  _messageEditingViewState;
    CKComposition * _originalComposition;
    UIButton * _rejectButton;
}

@property (nonatomic, readonly) UIView *balloonViewForAlignment;
@property (nonatomic, retain) UIButton *confirmButton;
@property (nonatomic, readonly) CKComposition *currentComposition;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool firstLayoutPassCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMessageEditingBalloonView *messageEditingBalloonView;
@property (nonatomic) <CKMessageEditingViewDelegate> *messageEditingViewDelegate;
@property (nonatomic) long long messageEditingViewState;
@property (nonatomic, retain) CKComposition *originalComposition;
@property (nonatomic, retain) UIButton *rejectButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyExpressiveTextFormattingToAttributedText:(id)arg1 forCompositionText:(id)arg2;
- (void)_confirmButtonSelected:(id)arg1;
- (void)_insertAdaptiveImageGlyphs:(id)arg1;
- (void)_rejectButtonSelected:(id)arg1;
- (void)_updateTextFieldWithOriginalComposition;
- (id)adaptiveImageGlyphForTransferGUID:(id)arg1;
- (void)applyGrammarCheckingIndication;
- (BOOL)balloonColorType;
- (id)balloonViewForAlignment;
- (bool)becomeFirstResponder;
- (id)confirmButton;
- (id)currentComposition;
- (bool)firstLayoutPassCompleted;
- (id)initWithMessageEditingViewDelegate:(id)arg1;
- (id)keyCommands;
- (void)layoutSubviews;
- (id)messageEditingBalloonView;
- (void)messageEditingBalloonView:(id)arg1 didChangeTextAnimationInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)messageEditingBalloonViewContentDidChange:(id)arg1;
- (void)messageEditingBalloonViewDidChangePencilMode:(id)arg1;
- (void)messageEditingBalloonViewWritingToolsDidEnd:(id)arg1;
- (void)messageEditingBalloonViewWritingToolsWillBegin:(id)arg1;
- (id)messageEditingViewDelegate;
- (long long)messageEditingViewState;
- (void)modifySelectedTextByTogglingTextEffectType:(long long)arg1;
- (void)modifySelectedTextByTogglingTextStyle:(unsigned long long)arg1;
- (id)originalComposition;
- (id)rejectButton;
- (void)resetMessageToOriginalContent;
- (void)setConfirmButton:(id)arg1;
- (void)setMessageEditingBalloonView:(id)arg1;
- (void)setMessageEditingViewDelegate:(id)arg1;
- (void)setMessageEditingViewState:(long long)arg1;
- (void)setOriginalComposition:(id)arg1;
- (void)setRejectButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)styledAttributedStringFromString:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)underlineWithProofreadingInfo:(id)arg1;
- (void)updateKeyboardActionButtonIfNeeded;

@end