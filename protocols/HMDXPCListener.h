/* Generated by RuntimeBrowser.
 */

@protocol HMDXPCListener <NSObject>

@required

- (<HMDXPCListenerDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setDelegate:(id <HMDXPCListenerDelegate>)arg1;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)start;
- (void)stop;

@end