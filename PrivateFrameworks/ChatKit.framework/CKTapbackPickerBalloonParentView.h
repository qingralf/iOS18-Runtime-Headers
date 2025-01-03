/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTapbackPickerBalloonParentView : UIView <UITextViewDelegate> {
    void accessoryItemsContainer;
    void bottomPileContentContainer;
    void bottomPileMetaballContainer;
    void currentDisplayMode;
    void delegate;
    void displayConfiguration;
    void frontPileContentContainer;
    void frontPileMetaballContainer;
    void gradientBufferSize;
    void gradientReferenceView;
    void gradientView;
    void ignoreGyro;
    void inputController;
    void maskContainer;
    void messageBalloonContainer;
    void motionManager;
    void presentationTintColor;
    void primaryContainer;
    void tapbackPickerViewController;
    void timer;
}

@property (nonatomic) long long currentDisplayMode;
@property (nonatomic) <CKTapbackPickerBalloonParentViewDelegate> *delegate;
@property (nonatomic, retain) CKTapbackPickerBalloonDisplayConfiguration *displayConfiguration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic, retain) CKTapbackPickerViewController *tapbackPickerViewController;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (long long)currentDisplayMode;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)displayConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)gradientReferenceView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTapbackPickerPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)insertEmoji:(id)arg1;
- (void)insertSticker:(id)arg1;
- (void)insertTapback:(id)arg1;
- (void)interfaceStyleChanged;
- (void)layoutSubviews;
- (double)preferredOriginXWithBalloonSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 presentationBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 proposedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)returnToSelection;
- (void)setCurrentDisplayMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setTapbackPickerViewController:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)showEmojiKeyboard;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tapbackPickerViewController;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)tintColor;

@end
