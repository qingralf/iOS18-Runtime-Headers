/* Generated by RuntimeBrowser.
 */

@protocol PRSSessionController <NSObject>

@required

- (NSString *)applicationNameForUserAgent;
- (NSArray *)excludedDomainIdentifiers;
- (bool)isEnabled;
- (void)sessionReceivedBagWithEnabledDomains:(NSArray *)arg1;
- (double)sessionStartTime;
- (void)updateCorrectionDict:(NSFileHandle *)arg1;

@optional

- (void)sessionReceivedSuggestionsParameters:(NSArray *)arg1;

@end
