/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICarPlaySceneComponent : NSObject <_UIWindowSceneComponentProviding> {
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) UITraitCollection *_traitOverrides; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool blackWallpaperModeEnabled;
@property (nonatomic, readonly) UICarPlayApplicationSceneSettings *carPlaySceneSettings;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableFiveRowKeyboards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateTraitOverrides;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)_traitOverrides;
- (bool)blackWallpaperModeEnabled;
- (id)carPlaySceneSettings;
- (bool)disableFiveRowKeyboards;
- (id)initWithScene:(id)arg1;

@end
