/* Generated by RuntimeBrowser.
 */

@protocol AKBiometricRatchetProtocol <NSObject>

@required

- (void)armWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKBiometricRatchetContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKBiometricRatchetResult *, NSError *, void*
- (void)cancelWithReason:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (AKRatchetState *)currentRachetState;
- (void)isCriticalEditAllowedForAltDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isDTOEnabled;
- (void)stateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKRatchetState *, NSError *, void*

@end