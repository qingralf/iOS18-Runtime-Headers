/* Generated by RuntimeBrowser.
 */

@protocol BMComputeSource <NSObject>

@required

- (void)eventsPrunedWithStreamIdentifier:(NSString *)arg1 account:(BMAccount *)arg2 remoteName:(NSString *)arg3 reason:(unsigned long long)arg4;
- (void)sendEventWithStreamIdentifier:(NSString *)arg1 timestamp:(NSNumber *)arg2 account:(BMAccount *)arg3 remoteName:(NSString *)arg4 storeEvent:(BMStoreEvent *)arg5;

@end
