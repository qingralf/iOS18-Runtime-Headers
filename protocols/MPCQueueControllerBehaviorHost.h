/* Generated by RuntimeBrowser.
 */

@protocol MPCQueueControllerBehaviorHost <NSObject>

@required

- (MPCQueueControllerEdit *)beginEditWithReason:(NSString *)arg1;
- (void)behaviorDidChange;
- (NSString *)engineID;
- (MPCPlaybackEngineEventStream *)eventStream;
- (MPCPlaybackIntent *)fallbackPlaybackIntent;
- (NSString *)playerID;
- (void)upNextBehaviorDidChange;

@end