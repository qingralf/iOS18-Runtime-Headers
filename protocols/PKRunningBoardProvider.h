/* Generated by RuntimeBrowser.
 */

@protocol PKRunningBoardProvider <NSObject>

@required

- (void)plugInHandshakeComplete;
- (<PKProcessAssertionProxy> *)processAssertionWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(NSString *)arg4;
- (NSArray *)taskStatesForPID:(NSNumber *)arg1 error:(id*)arg2;

@end