/* Generated by RuntimeBrowser.
 */

@protocol ProximityAppleIDSetup.PASExtensionInfoProvider

@required

- (void)authenticateWithAccount:(void *)arg1 with:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _TtC21ProximityAppleIDSetup25PASExtensionPickedAccount *, AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)didPerformLocalAuthenticationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchManifestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC21ProximityAppleIDSetup20PASExtensionManifest *, NSError *, void*
- (void)fetchViewDetailsWithDevicePair:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _TtC21ProximityAppleIDSetup22PASExtensionDevicePair *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC21ProximityAppleIDSetup31PASExtensionProvidedViewDetails *, NSError *, void*
- (void)shouldPerformLocalAuthenticationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)signInSucceededWithAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
