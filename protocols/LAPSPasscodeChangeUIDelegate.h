/* Generated by RuntimeBrowser.
 */

@protocol LAPSPasscodeChangeUIDelegate <NSObject>

@required

- (void)passcodeChangeUI:(void *)arg1 verifyNewPasscode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <LAPSPasscodeChangeUI> *, LAPSPasscode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)passcodeChangeUI:(void *)arg1 verifyPasscode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <LAPSPasscodeChangeUI> *, LAPSPasscode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)passcodeChangeUIDidDisappear:(id <LAPSPasscodeChangeUI>)arg1;

@end