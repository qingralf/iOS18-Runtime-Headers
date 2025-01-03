/* Generated by RuntimeBrowser.
 */

@protocol MDMPushServiceObserver <NSObject>

@required

- (void)pushServiceManager:(MDMPushServiceManager *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3 environment:(unsigned long long)arg4;
- (void)pushServiceManager:(MDMPushServiceManager *)arg1 didReceivePublicToken:(NSData *)arg2 forEnvironment:(unsigned long long)arg3;

@optional

- (void)pushServiceManager:(MDMPushServiceManager *)arg1 didReceiveAppToken:(NSData *)arg2 forTopic:(NSString *)arg3 environment:(unsigned long long)arg4;

@end
