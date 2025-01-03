/* Generated by RuntimeBrowser.
 */

@protocol BLSHWatchdogDelegate <NSObject>

@required

- (<BLSHWatchdogAbortContext> *)abortContextForTimer:(id <BLSHWatchdogTiming>)arg1;
- (NSString *)identifier;
- (<BLSHOSInterfaceProviding> *)osInterfaceProvider;

@optional

- (double)caTransitionsDelayForTesting;
- (double)cbTransitionsDelayForTesting;
- (void)setCATransitionsDelayForTesting:(double)arg1;
- (void)setCBTransitionsDelayForTesting:(double)arg1;

@end
