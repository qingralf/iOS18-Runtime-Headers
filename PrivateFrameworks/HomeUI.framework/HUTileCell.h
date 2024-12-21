/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTileCell : UICollectionViewCell <HUDragItemConfiguring, HUQuickControlPresentationTransitionDelegate, HUReorderableCellProtocol, HUTileCellProtocol> {
    void _gridSize;
    void appContext;
    void backgroundDisplayStyle;
    void backgroundEffectGrouper;
    void borderStyle;
    void contentScale;
    void dynamicGridSizeCalculator;
    void hidesLabelsToFitAccessibilitySizeCategories;
    void isRearranging;
    void item;
    void materialStyle;
    void overrideLayout;
    void reorderable;
    void showPrefixLabel;
    void toggleable;
    void useMutedIconOffColors;
}

@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) unsigned long long backgroundDisplayStyle;
@property (nonatomic, retain) <HUBackgroundEffectViewGrouping> *backgroundEffectGrouper;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct HUGridSize { long long x1; long long x2; } gridSize;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) bool rearranging;
@property (nonatomic) bool reorderable;
@property (nonatomic) bool showPrefixLabel;
@property (nonatomic) bool toggleable;
@property (nonatomic) bool useMutedIconOffColors;

+ (double)minimumDescriptionScaleFactor;

- (void).cxx_destruct;
- (id)_bridgedConfigurationState;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (void)animateIconTouchDown;
- (void)animateIconTouchUp;
- (id)backgroundColor;
- (double)backgroundCornerRadius;
- (unsigned long long)backgroundDisplayStyle;
- (id)backgroundEffectGrouper;
- (id)baseIconViewConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)configureDragItem:(id)arg1;
- (id)createBackgroundBlurView;
- (struct HUGridSize { long long x1; long long x2; })gridSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewTileFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRearranging;
- (id)item;
- (void)layoutSubviews;
- (id)prefixLabelFont;
- (id)prefixLabelOffTextColor;
- (id)prefixLabelOnTextColor;
- (bool)prefixLabelShouldFeather;
- (id)prefixLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })prefixLabelTileFrame;
- (id)prefixString;
- (void)prepareForReuse;
- (id)primaryLabelFont;
- (id)primaryLabelOffTextColor;
- (id)primaryLabelOnTextColor;
- (bool)primaryLabelShouldFeather;
- (id)primaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryLabelTileFrame;
- (id)primaryString;
- (bool)recognizeDoubleClickGesture;
- (bool)reorderable;
- (id)secondaryAttributedString;
- (id)secondaryLabelFont;
- (id)secondaryLabelOffTextColor;
- (id)secondaryLabelOnTextColor;
- (bool)secondaryLabelShouldFeather;
- (id)secondaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryLabelTileFrame;
- (id)secondaryString;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundDisplayStyle:(unsigned long long)arg1;
- (void)setBackgroundEffectGrouper:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGridSize:(struct HUGridSize { long long x1; long long x2; })arg1;
- (void)setItem:(id)arg1;
- (void)setRearranging:(bool)arg1;
- (void)setReorderable:(bool)arg1;
- (void)setShowPrefixLabel:(bool)arg1;
- (void)setToggleable:(bool)arg1;
- (void)setUseMutedIconOffColors:(bool)arg1;
- (bool)showPrefixLabel;
- (id)tappableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileFrame;
- (bool)toggleable;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;
- (bool)useMutedIconOffColors;

@end