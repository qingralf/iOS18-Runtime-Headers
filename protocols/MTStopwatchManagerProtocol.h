/* Generated by RuntimeBrowser.
 */

@protocol MTStopwatchManagerProtocol

@required

- (NAFuture *)createStopwatch:(MTStopwatch *)arg1;
- (NAFuture *)didAddLap:(NSNumber *)arg1 forStopwatch:(MTStopwatch *)arg2 sender:(id <MTSource>)arg3;
- (NAFuture *)didClearAllLapsForStopwatch:(MTStopwatch *)arg1 sender:(id <MTSource>)arg2;
- (NAFuture *)didLapLapTimerForStopwatch:(MTStopwatch *)arg1 sender:(id <MTSource>)arg2;
- (NAFuture *)didPauseLapTimerForStopwatch:(MTStopwatch *)arg1 sender:(id <MTSource>)arg2;
- (NAFuture *)didResetLapTimerForStopwatch:(MTStopwatch *)arg1 sender:(id <MTSource>)arg2;
- (NAFuture *)didResumeLapTimerForStopwatch:(MTStopwatch *)arg1 sender:(id <MTSource>)arg2;
- (NAFuture *)didStartLapTimerForStopwatch:(MTStopwatch *)arg1 sender:(id <MTSource>)arg2;
- (NAFuture *)getStopwatches;
- (NAFuture *)removeStopwatch:(MTStopwatch *)arg1;
- (NAFuture *)updateStopwatch:(MTStopwatch *)arg1;

@end
