/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFloatingTabBarItemView : UIView <_UIFloatingTabBarContentStateProviding> {
    UIView * _backgroundView;
    _UIFloatingTabBarItemBadgeView * _badgeView;
    bool  _dragged;
    bool  _editing;
    bool  _hasSelectionHighlight;
    bool  _highlighted;
    UIImageView * _imageView;
    UITab * _item;
    long long  _preferredDisplayMode;
    bool  _suppressEditing;
    bool  _suppressJiggleAnimation;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) _UIFloatingTabBarItemBadgeView *badgeView;
@property (nonatomic, readonly) double baselineOffsetFromTop;
@property (getter=isCustomizableItem, nonatomic, readonly) bool customizableItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (getter=isDragged, nonatomic) bool dragged;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) bool hasSelectionHighlight;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) bool isCustomizableItem;
@property (nonatomic, retain) UITab *item;
@property (nonatomic) long long preferredDisplayMode;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressEditing;
@property (nonatomic) bool suppressJiggleAnimation;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleOpacity;

+ (id)_jitterRotationAnimationWithAmount:(double)arg1;
+ (id)_jitterRotationAnimationWithStrength:(double)arg1;
+ (id)_jitterXTranslationAnimationWithAmount:(double)arg1;
+ (id)_jitterXTranslationAnimationWithStrength:(double)arg1;
+ (id)_jitterYTranslationAnimationWithAmount:(double)arg1;
+ (id)_jitterYTranslationAnimationWithStrength:(double)arg1;
+ (id)dragPreviewForItem:(id)arg1 userInterfaceStyle:(long long)arg2;

- (void).cxx_destruct;
- (void)_createViewHierarchy;
- (id)_currentPlatformMetrics;
- (bool)_hasValidCompactRepresentation;
- (struct CGSize { double x1; double x2; })_imageFittingSize;
- (bool)_isEffectivelyEditing;
- (bool)_showsImageView;
- (bool)_showsTitleLabel;
- (void)_updateFontAndColors;
- (void)_updateJigglingState;
- (bool)_wantsBackground;
- (id)accessibilityAttributedHint;
- (id)accessibilityAttributedLabel;
- (id)accessibilityAttributedValue;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)backgroundView;
- (id)badgeView;
- (double)baselineOffsetFromTop;
- (bool)hasSelectionHighlight;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCustomizableItem;
- (bool)isDisabled;
- (bool)isDragged;
- (bool)isEditing;
- (bool)isHighlighted;
- (id)item;
- (void)layoutSubviews;
- (long long)preferredDisplayMode;
- (void)reloadItemView;
- (void)setDragged:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHasSelectionHighlight:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setSuppressEditing:(bool)arg1;
- (void)setSuppressJiggleAnimation:(bool)arg1;
- (void)setTitleOpacity:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)suppressEditing;
- (bool)suppressJiggleAnimation;
- (id)titleLabel;
- (double)titleOpacity;

@end
