/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.CKTapbackAttributionView : UIView {
    void delegate;
    void hostedView;
    void messagePartChatItem;
    void transitionController;
    void viewModel;
}

@property (nonatomic, retain) <_TtP7ChatKit32CKTapbackAttributionViewDelegate_> *delegate;
@property (nonatomic, readonly) CKMessagePartChatItem *messagePartChatItem;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismiss;
- (struct CGSize { double x1; double x2; })estimatedAttributionViewDismissalSizeForAnimationController:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMessagePartChatItem:(id)arg1;
- (void)layoutSubviews;
- (id)messagePartChatItem;
- (void)present;
- (void)setDelegate:(id)arg1;
- (void)tapbackAttributionViewModel:(id)arg1 didTapToSaveSticker:(id)arg2;

@end
