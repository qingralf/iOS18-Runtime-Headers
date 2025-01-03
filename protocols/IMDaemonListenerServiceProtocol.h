/* Generated by RuntimeBrowser.
 */

@protocol IMDaemonListenerServiceProtocol <NSObject>

@required

- (void)account:(NSString *)arg1 allowListChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 blockIdleStatusChanged:(bool)arg2;
- (void)account:(NSString *)arg1 blockListChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 blockingModeChanged:(unsigned int)arg2;
- (void)account:(NSString *)arg1 buddyPictureChanged:(NSString *)arg2 imageData:(NSData *)arg3 imageHash:(NSString *)arg4;
- (void)account:(NSString *)arg1 buddyProperties:(NSDictionary *)arg2 buddyPictures:(NSDictionary *)arg3;
- (void)account:(NSString *)arg1 buddyPropertiesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (void)account:(NSString *)arg1 defaults:(NSDictionary *)arg2 blockList:(NSArray *)arg3 allowList:(NSArray *)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(bool)arg6 status:(NSDictionary *)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned long long)arg9 loginStatusMessage:(NSString *)arg10;
- (void)account:(NSString *)arg1 defaultsChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 groupsChanged:(NSArray *)arg2 error:(NSError *)arg3;
- (void)account:(NSString *)arg1 handleSubscriptionRequestFrom:(NSDictionary *)arg2 withMessage:(NSString *)arg3;
- (void)account:(NSString *)arg1 loginStatusChanged:(unsigned long long)arg2 message:(NSString *)arg3 reason:(int)arg4 properties:(NSDictionary *)arg5;
- (void)account:(NSString *)arg1 postedError:(NSError *)arg2;
- (void)account:(NSString *)arg1 statusChanged:(NSDictionary *)arg2;
- (void)accountAdded:(NSString *)arg1 defaults:(NSDictionary *)arg2 service:(NSString *)arg3;
- (void)accountRemoved:(NSString *)arg1;
- (void)activeAccountsChanged:(NSArray *)arg1 forService:(NSString *)arg2;
- (void)defaultsChanged:(NSDictionary *)arg1 forService:(NSString *)arg2;
- (void)showForgotPasswordNotificationForAccount:(NSString *)arg1;
- (void)showInvalidCertNotificationForAccount:(NSString *)arg1;
- (void)updateNicknameData:(NSData *)arg1;

@end
