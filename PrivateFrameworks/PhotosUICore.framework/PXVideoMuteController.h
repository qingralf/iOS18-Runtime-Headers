/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXVideoMuteController : PXObservable {
    bool  _isAutoplayEnabled;
    bool  _isMuted;
    long long  _muteState;
}

@property (setter=setAutoplayEnabled:, nonatomic) bool isAutoplayEnabled;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic) long long muteState;

+ (id)sharedController;

- (void)_updateIsMuted;
- (void)applicationDidMoveToBackground;
- (void)autoplaySettingDidChange;
- (id)debugDescription;
- (id)init;
- (id)initWithAutoplaySetting:(bool)arg1;
- (bool)isAutoplayEnabled;
- (bool)isMuted;
- (long long)muteState;
- (void)resetMuteState;
- (void)setAutoplayEnabled:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setMuteState:(long long)arg1;
- (void)userDidMute;
- (void)userDidUnmute;

@end
