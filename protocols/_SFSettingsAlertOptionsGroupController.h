/* Generated by RuntimeBrowser.
 */

@protocol _SFSettingsAlertOptionsGroupController <NSObject>

@required

- (NSAttributedString *)attributedStringForValue:(id)arg1;
- (bool)isSelectedValue:(id)arg1;
- (void)prepareView:(id <_SFSettingsAlertOptionsGroupItemConfiguration>)arg1 forItem:(_SFSettingsAlertItem *)arg2 value:(id)arg3;
- (void)setSelectedValue:(id)arg1;
- (NSString *)textStyleForValue:(id)arg1;
- (NSArray *)values;

@optional

- (NSString *)accessibilityIdentifierForValue:(id)arg1;
- (bool)shouldSelectValue:(id)arg1 forItem:(_SFSettingsAlertItem *)arg2 groupItem:(_SFSettingsAlertItem *)arg3;

@end
