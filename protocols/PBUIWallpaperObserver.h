/* Generated by RuntimeBrowser.
 */

@protocol PBUIWallpaperObserver <NSObject>

@optional

- (void)hideDimmingLayerDidChange:(bool)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperDidUpdatePreferredProminentColor:(UIColor *)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(_UILegibilitySettings *)arg1 forVariant:(long long)arg2;
- (void)wallpaperWillChangeForVariant:(long long)arg1;

@end
