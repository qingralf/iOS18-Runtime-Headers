/* Generated by RuntimeBrowser.
 */

@protocol REAudioPlaybackClientService <NSObject>

@required

- (void)didReceiveConnectionIdentifier:(unsigned long long)arg1;
- (void)mediaServicesLost;
- (void)mediaServicesReset;
- (void)streamToken:(unsigned long long)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;

@end
