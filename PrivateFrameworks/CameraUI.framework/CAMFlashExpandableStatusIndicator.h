/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFlashExpandableStatusIndicator : CAMExpandingControl {
    bool  _flashActive;
}

@property (getter=isFlashActive, nonatomic) bool flashActive;
@property (nonatomic) long long flashMode;
@property (getter=isFlashUnavailable, nonatomic) bool flashUnavailable;

- (id)_axHUDSymbolNameForFlashStatus:(unsigned long long)arg1;
- (long long)_borderForStatus:(unsigned long long)arg1 flashActive:(bool)arg2;
- (id)_localizedSubtitleForStatus:(unsigned long long)arg1;
- (id)_localizedTitleForStatus:(unsigned long long)arg1;
- (id)_menuItemForFlashStatus:(unsigned long long)arg1;
- (bool)_shouldHideForStatus:(unsigned long long)arg1;
- (bool)_shouldTintForStatus:(unsigned long long)arg1 flashActive:(bool)arg2;
- (bool)_shouldUseSlashForStatus:(unsigned long long)arg1;
- (id)_symbolConfigurationForFlashStatus:(unsigned long long)arg1;
- (id)_systemImageForFlashStatus:(unsigned long long)arg1;
- (void)_updateMenu;
- (id)accessibilityIdentifier;
- (long long)flashMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFlashActive;
- (bool)isFlashUnavailable;
- (void)setFlashActive:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1 animated:(bool)arg2;
- (void)setFlashUnavailable:(bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;

@end