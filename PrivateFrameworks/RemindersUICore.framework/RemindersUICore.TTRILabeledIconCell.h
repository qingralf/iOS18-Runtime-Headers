/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
 */

@interface RemindersUICore.TTRILabeledIconCell : NUIContainerStackView <NUIContainerViewDelegate> {
    void button;
    void cellDelegate;
    void debugViews;
    void index;
    void isDebugTitleFramesEnabled;
    void isSelected;
    void item;
    void itemWidth;
    void selectionView;
    void titleFont;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;

@end