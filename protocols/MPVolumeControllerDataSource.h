/* Generated by RuntimeBrowser.
 */

@protocol MPVolumeControllerDataSource <NSObject>

@required

- (float)EUVolumeLimit;
- (void)adjustVolumeValue:(float)arg1;
- (bool)applicationShouldOverrideHardwareVolumeBehavior;
- (<MPVolumeControllerDataSourceDelegate> *)delegate;
- (void)getVolumeValueWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)initializeVolume;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (void)reload;
- (void)setDelegate:(id <MPVolumeControllerDataSourceDelegate>)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (NSString *)volumeAudioCategory;
- (unsigned int)volumeControlCapabilities;
- (NSString *)volumeControlLabel;
- (bool)volumeWarningEnabled;
- (long long)volumeWarningState;

@optional

- (void)beginDecreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)endDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)reloadWarning;

@end
