/* Generated by RuntimeBrowser.
 */

@protocol APSKAudioSender <NSObject>

@required

- (int)sendAudioData:(NSData *)arg1;
- (int)sendAudioDataWithTimestamps:(NSData *)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forSampleTime:(unsigned long long)arg3 forDiscontinuity:(bool)arg4;

@end
