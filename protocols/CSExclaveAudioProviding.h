/* Generated by RuntimeBrowser.
 */

@protocol CSExclaveAudioProviding <NSObject>

@required

- (bool)fetchAndStoreAudioBuffer;
- (bool)prepare;
- (void)requestHistoricalAudioBufferFor:(unsigned long long)arg1 startSample:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 hostTime:(unsigned long long)arg4;
- (void)setDelegate:(id <CSExclaveAudioProvidingDelegate>)arg1;
- (unsigned long long)startSensor;
- (unsigned long long)stopSensor;

@end