/* Generated by RuntimeBrowser.
 */

@protocol LACDTOFeatureRequirementsDataSource <NSObject>

@required

- (bool)hasBiometricEnrollmentsForCurrentUser;
- (void)hasHSA2AccountWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)hasLocationServicesEnabledWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (bool)hasPasscodeSetForCurrentUser;
- (bool)isPhone;

@end
