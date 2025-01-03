/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEditingBalloonView : CKTextBalloonView <CKMessageEntryTextViewDelegate, CKMessageEntryTextViewTextFormattingDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _customTextViewLayoutBounds;
    <CKMessageEditingBalloonViewDelegate> * _editingBalloonViewDelegate;
    CKMessageEditingBalloonTextView * _messageEditingBalloonTextView;
    NSDictionary * _typingAttributes;
}

@property (nonatomic, readonly) NSAttributedString *currentCompositionText;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } customTextViewLayoutBounds;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKMessageEditingBalloonViewDelegate> *editingBalloonViewDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMessageEditingBalloonTextView *messageEditingBalloonTextView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *typingAttributes;

+ (bool)supportsAllowsTextAnimationChanges;

- (void).cxx_destruct;
- (void)applyTextEffect:(long long)arg1 toTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)applyTextStyle:(unsigned long long)arg1 toTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)currentCompositionText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })customTextViewLayoutBounds;
- (id)description;
- (id)editingBalloonViewDelegate;
- (bool)hasBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)messageEditingBalloonTextView;
- (void)messageEntryTextView:(id)arg1 applyStyleChangeOfType:(unsigned long long)arg2 add:(bool)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)messageEntryTextView:(id)arg1 didSetAnimationName:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)messageEntryTextView:(id)arg1 didUpdateForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 conversionHandler:(id /* block */)arg3;
- (void)messageEntryTextView:(id)arg1 replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withAttributedText:(id)arg3;
- (void)messageEntryTextViewDidChangePencilMode:(id)arg1;
- (void)messageEntryTextViewTextFormattingAnimationsOptionsPresentationInProgress:(bool)arg1;
- (void)modifySelectedTextByTogglingTextEffectType:(long long)arg1;
- (void)modifySelectedTextByTogglingTextStyle:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)setCustomTextViewLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEditingBalloonViewDelegate:(id)arg1;
- (void)setMessageEditingBalloonTextView:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (bool)shouldResignFirstResponderForPresses;
- (id)textEffectsEditMenuForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textView:(id)arg1 editMenuForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 suggestedActions:(id)arg3;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewWritingToolsDidEnd:(id)arg1;
- (void)textViewWritingToolsWillBegin:(id)arg1;
- (id)typingAttributes;

@end
