/* Generated by RuntimeBrowser.
 */

@protocol ValidatePeopleRecommendationHandlesProtocol

@required

- (NSString *)getIDForBestGuessIDWithHandle:(NSString *)arg1;
- (NSString *)getIDForEmailAddressWithHandle:(NSString *)arg1;
- (NSString *)getIDForPhoneNumberWithPhoneNumber:(NSString *)arg1;
- (void)validateHandlesWithIdsDestinations:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end