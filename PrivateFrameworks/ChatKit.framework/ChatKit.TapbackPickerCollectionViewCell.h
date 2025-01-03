/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.TapbackPickerCollectionViewCell : UICollectionViewCell <CKTapbackViewDelegate, UIPointerInteractionDelegate> {
    void edgeTransform;
    void gradientPadding;
    void gradientReferenceView;
    void gradientView;
    void scrollViewEdgeBlurFilterRadius;
    void scrollViewEdgeOpacity;
    void sectionHiddenBlurFilterRadius;
    void sectionHiddenOpacity;
    void selectedTapbackBackgroundColor;
    void selectionPlatter;
    void selectionStateScale;
    void tapbackBlurContainerView;
    void tapbackPickerCellDelegate;
    void tapbackView;
    void tapbackViewBottomConstraint;
    void tapbackViewLeadingConstraint;
    void tapbackViewTopConstraint;
    void tapbackViewTrailingConstraint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (struct CGPoint { double x1; double x2; })center;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelected:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tapbackContentContainerRect;

@end
