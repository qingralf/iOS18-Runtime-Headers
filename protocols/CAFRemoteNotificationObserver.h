/* Generated by RuntimeBrowser.
 */

@protocol CAFRemoteNotificationObserver <CAFServiceObserver>

@required

- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateDisplayPanelIdentifier:(NSString *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateDisplayZoneIdentifier:(NSString *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateIdentifier:(NSString *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateName:(NSString *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateNotificationUserActions:(CAFNotificationUserActions *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateSymbolNameAndColor:(CAFSymbolImageWithColor *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateUserAction:(unsigned char)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateUserVisibleDescription:(NSString *)arg2;
- (void)remoteNotificationService:(CAFRemoteNotification *)arg1 didUpdateUserVisibleLabel:(NSString *)arg2;

@end
