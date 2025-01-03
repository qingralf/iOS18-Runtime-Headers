/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIPlayAudioButtonItem : SearchUIToggleButtonItem {
    bool  _gotNowPlayingChangedNotificationAfterPlaying;
    bool  _needsUpdate;
}

@property bool gotNowPlayingChangedNotificationAfterPlaying;
@property bool needsUpdate;
@property (retain) SFPlayAudioButtonItem *sfButtonItem;

+ (bool)isSingleItemMedia:(id)arg1;

- (bool)allowsContextMenu;
- (void)buttonPressed;
- (id)commandForStatus:(unsigned long long)arg1;
- (void)dealloc;
- (bool)gotNowPlayingChangedNotificationAfterPlaying;
- (bool)hasState;
- (id)initWithSFButtonItem:(id)arg1;
- (bool)needsUpdate;
- (void)newPlayButtonPressedWithNotification:(id)arg1;
- (void)nowPlayingItemDidChange;
- (id)offStateSymbolName;
- (id)onStateSymbolName;
- (void)playbackDidFinish;
- (void)playbackStateDidChange;
- (void)setGotNowPlayingChangedNotificationAfterPlaying:(bool)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (bool)shouldSkipUpdate;
- (unsigned long long)status;
- (void)toggleOff;
- (id)toggledTitle;
- (id)untoggledTitle;
- (void)updatePlayState;

@end
