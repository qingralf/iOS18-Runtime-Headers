/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorView : UIView <HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlInteractiveView> {
    HUColorLinearPaletteView * _colorLinearPaletteView;
    HFColorPalette * _colorPalette;
    UISegmentedControl * _colorPickerModeSegmentedControl;
    HUColorPickerView * _colorPickerView;
    <HUQuickControlColorViewInteractionDelegate> * _interactionDelegate;
    HFColorPalette * _originalPalette;
    NSIndexPath * _originalSelectedColorIndexPath;
    id  _originalValue;
    HUQuickControlColorViewProfile * _profile;
    unsigned long long  _reachabilityState;
    HFColorPaletteColor * _selectedColor;
    bool  _showPickerModeControl;
    bool  _userInteractionActive;
}

@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *activeView;
@property (nonatomic, retain) HUColorLinearPaletteView *colorLinearPaletteView;
@property (nonatomic, retain) HFColorPalette *colorPalette;
@property (nonatomic, retain) UISegmentedControl *colorPickerModeSegmentedControl;
@property (nonatomic, retain) HUColorPickerView *colorPickerView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlColorViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, readonly) NSIndexPath *linearPaletteViewSelectedColorIndexPath;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) HFColorPalette *originalPalette;
@property (nonatomic, retain) NSIndexPath *originalSelectedColorIndexPath;
@property (nonatomic, retain) id originalValue;
@property (nonatomic, copy) HUQuickControlColorViewProfile *profile;
@property (nonatomic) unsigned long long reachabilityState; /* unknown property attribute: ? */
@property (nonatomic, retain) id secondaryValue; /* unknown property attribute: ? */
@property (nonatomic, retain) HFColorPaletteColor *selectedColor;
@property (getter=isSelectedColorInPalette, nonatomic, readonly) bool selectedColorInPalette;
@property (nonatomic) bool showPickerModeControl;
@property (readonly) Class superclass;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_updateColorPicker;
- (void)_updateLayout;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_updateVisibleViews;
- (id)activeView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)cancelColorPicking;
- (id)colorLinearPaletteView;
- (id)colorPalette;
- (id)colorPickerModeSegmentedControl;
- (id)colorPickerView;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(bool)arg2 forFirstTouch:(bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)interactionDelegate;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isSelectedColorInPalette;
- (bool)isUserInteractionActive;
- (void)layoutSubviews;
- (id)linearPaletteViewSelectedColorIndexPath;
- (unsigned long long)mode;
- (id)originalPalette;
- (id)originalSelectedColorIndexPath;
- (id)originalValue;
- (void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2;
- (id)profile;
- (unsigned long long)reachabilityState;
- (id)selectedColor;
- (void)setColorLinearPaletteView:(id)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setColorPickerModeSegmentedControl:(id)arg1;
- (void)setColorPickerView:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setOriginalPalette:(id)arg1;
- (void)setOriginalSelectedColorIndexPath:(id)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShowPickerModeControl:(bool)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (bool)showPickerModeControl;
- (void)storeCurrentColorInformationAsOriginalValues;
- (void)updateSelectedColorIndexPathToIndexPath:(id)arg1;
- (id)value;

@end
