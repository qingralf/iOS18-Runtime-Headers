/* Generated by RuntimeBrowser.
 */

@protocol SOSInternalServerProtocol <SOSServerProtocol>

@required

- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissSOSWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateCurrentSOSButtonPressState:(SOSButtonPressState *)arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;

@end
