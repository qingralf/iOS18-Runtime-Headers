/* Generated by RuntimeBrowser.
 */

@protocol CAFSingleSelectSettingObserver <CAFAutomakerSettingObserver>

@required

- (void)singleSelectSettingService:(CAFSingleSelectSetting *)arg1 didUpdateName:(NSString *)arg2;
- (void)singleSelectSettingService:(CAFSingleSelectSetting *)arg1 didUpdateSelectSettingEntryList:(CAFSelectSettingEntryList *)arg2;
- (void)singleSelectSettingService:(CAFSingleSelectSetting *)arg1 didUpdateSelectedEntryIndex:(unsigned char)arg2;

@end
