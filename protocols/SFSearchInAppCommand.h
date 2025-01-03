/* Generated by RuntimeBrowser.
 */

@protocol SFSearchInAppCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (int)searchInAppType;
- (NSString *)searchString;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setSearchInAppType:(int)arg1;
- (void)setSearchString:(NSString *)arg1;

@end
