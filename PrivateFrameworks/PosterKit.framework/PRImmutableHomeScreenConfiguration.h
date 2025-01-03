/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRImmutableHomeScreenConfiguration : PRPosterHomeScreenConfiguration {
    PRPosterHomeScreenCustomizationConfiguration * _customizationConfiguration;
    PRPosterGradientHomeScreenAppearance * _gradientAppearance;
    PRPosterHomePosterHomeScreenAppearance * _homePosterAppearance;
    PRPosterLockPosterHomeScreenAppearance * _lockPosterAppearance;
    unsigned long long  _selectedAppearanceType;
    PRPosterSolidColorHomeScreenAppearance * _solidColorAppearance;
}

- (void).cxx_destruct;
- (id)customizationConfiguration;
- (id)gradientAppearance;
- (id)homePosterAppearance;
- (id)initWithSelectedAppearanceType:(unsigned long long)arg1 lockPosterAppearance:(id)arg2 solidColorAppearance:(id)arg3 gradientAppearance:(id)arg4 homePosterAppearance:(id)arg5 customizationConfiguration:(id)arg6;
- (id)lockPosterAppearance;
- (unsigned long long)selectedAppearanceType;
- (id)solidColorAppearance;

@end
