/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIFlickSelectorView : TUIKeyPopupView {
    long long  _flickDirection;
    bool  _topRowHasTrailingAlignment;
    unsigned long long  _totalVariants;
}

@property (nonatomic) long long flickDirection;
@property (nonatomic, readonly) double flickPopupOffset;
@property (nonatomic) bool topRowHasTrailingAlignment;
@property (nonatomic) unsigned long long totalVariants;

- (void)addVariantsForKey:(id)arg1 toView:(id)arg2 isNonVariantPaddle:(bool)arg3;
- (id)alignmentConstraintsForKey:(id)arg1;
- (id)backgroundBezierPath;
- (id)backgroundPathForFlick;
- (id)backgroundPathForLongPress;
- (id)cellViewsInSubtreeOrder;
- (id)cellViewsInTopDownLTROrder;
- (unsigned long long)countNonNullVariantEntriesForKey:(id)arg1;
- (long long)flickDirection;
- (double)flickPopupOffset;
- (id)initWithKey:(id)arg1 renderTraits:(id)arg2;
- (unsigned long long)maxVariantsPerRowForKey:(id)arg1;
- (id)orderedVariantIndicesForKey;
- (void)setFlickDirection:(long long)arg1;
- (void)setTopRowHasTrailingAlignment:(bool)arg1;
- (void)setTotalVariants:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackLayoutMargins;
- (bool)topRowHasTrailingAlignment;
- (unsigned long long)totalVariants;
- (void)updateVariantViewPropertiesForKey:(id)arg1 isNonVariantPaddle:(bool)arg2;
- (void)updateVariantsIfNeededForKey:(id)arg1;
- (id)variantCellWithString:(id)arg1 annotation:(id)arg2;
- (unsigned long long)variantRowLimitForLayout;
- (long long)variantViewAlignment;

@end