/* Generated by RuntimeBrowser.
 */

@protocol CSLPRFPerApplicationSettingsModelObserver <NSObject>

@required

- (void)settingsModel:(CSLPRFPerApplicationSettingsModel *)arg1 didAddSettings:(NSArray *)arg2;
- (void)settingsModel:(CSLPRFPerApplicationSettingsModel *)arg1 didChangeGlobalSettings:(id <CSLPRFPerApplicationSettings>)arg2;
- (void)settingsModel:(CSLPRFPerApplicationSettingsModel *)arg1 didRemoveSettings:(NSArray *)arg2;
- (void)settingsModel:(CSLPRFPerApplicationSettingsModel *)arg1 didUpdateSettings:(NSArray *)arg2;

@end