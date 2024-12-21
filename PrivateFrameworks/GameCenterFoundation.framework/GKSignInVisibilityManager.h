/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSignInVisibilityManager : NSObject {
    GKLimitedPresentationManager * _bannerManager;
    GKLimitedPresentationManager * _fullscreenManager;
}

@property (retain) GKLimitedPresentationManager *bannerManager;
@property (retain) GKLimitedPresentationManager *fullscreenManager;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (void).cxx_destruct;
- (void)bannerDisabledWithConfig:(id)arg1 handler:(id /* block */)arg2;
- (void)bannerDisabledWithConfig:(id)arg1 scope:(long long)arg2 handler:(id /* block */)arg3;
- (id)bannerManager;
- (void)didShowBanner;
- (void)didShowFullscreen;
- (id)fullscreenManager;
- (id)initWithFullscreenDefaultsKey:(id)arg1 bannerDefaultsKey:(id)arg2;
- (id)initWithPersistence;
- (id)initWithoutPersistence;
- (void)loginDisabledWithConfig:(id)arg1 handler:(id /* block */)arg2;
- (void)loginDisabledWithConfig:(id)arg1 scope:(long long)arg2 handler:(id /* block */)arg3;
- (void)promptsDisabledWithConfig:(id)arg1 handler:(id /* block */)arg2;
- (void)promptsDisabledWithConfig:(id)arg1 scope:(long long)arg2 handler:(id /* block */)arg3;
- (void)reset;
- (void)setBannerManager:(id)arg1;
- (void)setFullscreenManager:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

+ (id)shared;
+ (id)sharedWithoutPersistence;

@end