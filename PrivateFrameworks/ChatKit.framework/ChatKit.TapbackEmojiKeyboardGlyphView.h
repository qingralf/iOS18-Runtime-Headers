/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.TapbackEmojiKeyboardGlyphView : ChatKit.TapbackView <CKTapbackViewProtocol> {
    void attributionScaleFactor;
    void contentView;
    void delegate;
    void horizontalOffset;
    void isSelected;
    void platterEdgeInsets;
}

@property (nonatomic, readonly) double attributionScaleFactor;
@property (nonatomic, retain) <CKTapbackViewDelegate> *delegate;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } platterEdgeInsets;

- (void).cxx_destruct;
- (double)attributionScaleFactor;
- (void)configureForTapback:(id)arg1 isSelected:(bool)arg2;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interfaceStyleChanged;
- (bool)isSelected;
- (void)performViewControllerDismissingAnimation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })platterEdgeInsets;
- (void)setDelegate:(id)arg1;
- (void)setIsSelected:(bool)arg1;

@end
