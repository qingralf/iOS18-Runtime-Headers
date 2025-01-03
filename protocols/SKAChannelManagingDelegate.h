/* Generated by RuntimeBrowser.
 */

@protocol SKAChannelManagingDelegate <NSObject>

@required

- (void)channelManager:(id <SKAChannelManaging>)arg1 didReceiveData:(NSData *)arg2 onChannel:(NSString *)arg3 identifier:(unsigned long long)arg4 dateReceived:(NSDate *)arg5 dateExpired:(NSDate *)arg6;
- (void)channelManager:(id <SKAChannelManaging>)arg1 failedToSubscribeToChannel:(NSString *)arg2 withError:(NSError *)arg3;

@end
