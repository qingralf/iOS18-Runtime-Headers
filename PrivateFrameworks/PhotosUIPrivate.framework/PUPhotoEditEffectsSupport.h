/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoEditEffectsSupport : NSObject

+ (void)_clearPortraitEffectsWithCompositionController:(id)arg1;
+ (void)_clearStandardEffectsWithCompositionController:(id)arg1;
+ (void)_clearStylesWithCompositionController:(id)arg1;
+ (void)_setEffectFilterName:(id)arg1 withIntensity:(double)arg2 withVersion:(unsigned long long)arg3 forCompositionController:(id)arg4;
+ (void)_setPortraitEffectEnabled:(bool)arg1 forCompositionController:(id)arg2;
+ (void)_setPortraitEffectFilterName:(id)arg1 withVersion:(unsigned long long)arg2 forCompositionController:(id)arg3 portraitInfo:(id)arg4 spillMatteAllowed:(id)arg5;
+ (void)_setStyleWithCast:(id)arg1 tone:(double)arg2 color:(double)arg3 intensity:(double)arg4 forCompositionController:(id)arg5;
+ (id)identifierForLightingType:(long long)arg1 lightingVersion:(long long)arg2;
+ (long long)lightingEffectTypeForIdentifier:(id)arg1;
+ (id)lightingEffectTypesByIdentifier;
+ (void)updateCompositionController:(id)arg1 withDepthEnabled:(bool)arg2 livePortraitBehaviorController:(id)arg3;
+ (void)updateCompositionController:(id)arg1 withEffect:(id)arg2 intensity:(double)arg3 updateVersion:(bool)arg4;
+ (void)updateCompositionController:(id)arg1 withEffect:(id)arg2 updateVersion:(bool)arg3;
+ (void)updateCompositionController:(id)arg1 withLightingIdentifier:(id)arg2 portraitInfo:(id)arg3 spillMatteAllowed:(id)arg4;
+ (void)updateCompositionController:(id)arg1 withStyleCast:(id)arg2 tone:(double)arg3 color:(double)arg4 intensity:(double)arg5;

@end