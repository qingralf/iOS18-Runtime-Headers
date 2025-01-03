/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInterfaceActionSeparatableSequenceView : UIView {
    NSArray * _arrangedContentSeparatorViews;
    NSArray * _arrangedContentViews;
    NSArray * _arrangedContentViewsDistributionConstraints;
    long long  _axis;
    long long  _distribution;
    UIStackView * _stackView;
    bool  _visualCornerForcedOverride;
    unsigned long long  _visualCornerPosition;
    UIInterfaceActionVisualStyle * _visualStyle;
}

@property (nonatomic, readonly) NSArray *arrangedContentSeparatorViews;
@property (nonatomic, retain) NSArray *arrangedContentViews;
@property (nonatomic, readonly) NSArray *arrangedContentViewsDistributionConstraints;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic) bool visualCornerForcedOverride;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;

- (void).cxx_destruct;
- (void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(bool)arg2;
- (long long)_dimensionAttributeToConstrainEqual;
- (bool)_isVerticalLayout;
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1;
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;
- (void)_reloadStackViewArrangement;
- (long long)_separatorConstantSizedAxis;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_stackViewFrameForViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingStackView:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
- (void)_updateActionSpacing;
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
- (void)_updateRoundedCornerPositionForActionRepViews;
- (void)_updateSeparatorConstantSizedAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewBoundsForStackViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(id /* block */)arg1;
- (id)arrangedContentSeparatorViews;
- (id)arrangedContentViews;
- (id)arrangedContentViewsDistributionConstraints;
- (long long)axis;
- (long long)distribution;
- (double)fittingWidthForLayoutAxis:(long long)arg1;
- (id)initWithVisualStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)reloadDisplayedContentVisualStyle;
- (void)setArrangedContentViews:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setDistribution:(long long)arg1;
- (void)setVisualCornerForcedOverride:(bool)arg1;
- (void)setVisualCornerPosition:(unsigned long long)arg1;
- (void)setVisualStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (bool)visualCornerForcedOverride;
- (unsigned long long)visualCornerPosition;
- (id)visualStyle;

@end
