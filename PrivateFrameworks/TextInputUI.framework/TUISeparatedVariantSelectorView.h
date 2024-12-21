/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUISeparatedVariantSelectorView : TUIVariantSelectorView

+ (long long)hitTestingMode;
+ (double)minCellDimension;

- (void)decorateVariantView;
- (bool)drawsBackground;
- (bool)drawsShadows;
- (double)itemSpacing;
- (void)layoutSubviews;
- (unsigned long long)maxRows;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)shouldProvideDefaultSelection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackLayoutMargins;
- (void)updateBackgroundMaterialsForRenderConfig:(id)arg1;
- (id)variantCellWithString:(id)arg1 annotation:(id)arg2;
- (unsigned long long)variantRowLimitForLayout;
- (long long)variantViewAlignment;
- (double)variantViewBottomSpacing;
- (bool)wantsUserInteractionEnabled;
- (id)widthConstraintsForVariantCell:(id)arg1 previousCell:(id)arg2;

@end