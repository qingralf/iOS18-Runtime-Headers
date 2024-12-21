/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
 */

@interface PosterKitUtilities : NSObject

+ (id)archiver;
+ (id)configurationIdentityWithProvider:(id)arg1 identifier:(id)arg2 posterUUID:(id)arg3 version:(unsigned long long)arg4 supplement:(unsigned long long)arg5;
+ (id)configurationWithPath:(id)arg1;
+ (id)configuredPropertiesWithTitleStyleConfiguration:(id)arg1 renderingConfiguration:(id)arg2;
+ (id)discreteColorsContentStyleForColors:(id)arg1 vibrant:(bool)arg2 supportsVariation:(bool)arg3 variation:(double)arg4;
+ (id)gradientContentStyleForColors:(id)arg1 gradientType:(unsigned long long)arg2 locations:(id)arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 endPoint:(struct CGPoint { double x1; double x2; })arg5;
+ (id)loadConfiguredPropertiesFromPosterConfiguration:(id)arg1 error:(out id*)arg2;
+ (id)posterColorWithColor:(struct CGColor { }*)arg1 preferredStyle:(unsigned long long)arg2 localizedName:(id)arg3;
+ (id)renderingConfigurationWithDepthEffectDisabled:(bool)arg1 parallaxEnabled:(bool)arg2;
+ (bool)saveCompoundLayerStack:(id)arg1 toWallpaperURL:(id)arg2 error:(id*)arg3;
+ (id)serverPathWithProviderURL:(id)arg1 identity:(id)arg2;
+ (bool)storeConfiguredPropertiesForPath:(id)arg1 configuredProperties:(id)arg2 error:(out id*)arg3;
+ (id)systemTimeFontConfigurationWithTimeFontIdentifier:(id)arg1 weight:(double)arg2 systemItem:(bool)arg3;
+ (id)titleStyleConfigurationWithTimeFontConfiguration:(id)arg1 preferredTitleAlignment:(unsigned long long)arg2 preferredTitleLayout:(unsigned long long)arg3 titleContentStyle:(id)arg4 timeNumberingSystem:(id)arg5 userConfigured:(bool)arg6 contentsLuminance:(double)arg7 alternateDateEnabled:(bool)arg8 groupName:(id)arg9;
+ (id)vibrantMaterialContentStyle;
+ (id)vibrantMonochromeContentStyle;

@end