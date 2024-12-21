/* Generated by RuntimeBrowser.
 */

@protocol CoreCECDeviceDelegate <CoreRCDeviceDelegate>

@optional

- (void)cecDevice:(CoreCECDevice *)arg1 activeSourceStatusHasChanged:(bool)arg2;
- (void)cecDevice:(CoreCECDevice *)arg1 audioStatusReceived:(unsigned long long)arg2 muteStatus:(bool)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 featureAbort:(NSError *)arg2;
- (void)cecDevice:(CoreCECDevice *)arg1 receivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 receivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg2 didFinishWithResult:(bool)arg3 error:(NSError *)arg4;
- (void)cecDevice:(CoreCECDevice *)arg1 requestSystemAudioModeStatusChangeTo:(unsigned long long)arg2 didFinishWithResult:(bool)arg3 error:(NSError *)arg4;
- (void)cecDevice:(CoreCECDevice *)arg1 standbyRequestHasBeenReceived:(CoreCECDevice *)arg2;
- (void)cecDeviceShouldAssertActiveSource:(CoreCECDevice *)arg1;

@end