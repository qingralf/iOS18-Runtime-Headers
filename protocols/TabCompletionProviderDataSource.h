/* Generated by RuntimeBrowser.
 */

@protocol TabCompletionProviderDataSource <NSObject>

@required

- (NSUUID *)currentWindowUUIDForTabCompletionProvider:(TabCompletionProvider *)arg1;
- (TabDocument *)selectedTabDocumentForTabCompletionProvider:(TabCompletionProvider *)arg1;
- (NSSet *)tabGroupsForTabCompletionProvider:(TabCompletionProvider *)arg1;
- (NSDictionary *)windowUUIDsToTabsForTabCompletionProvider:(TabCompletionProvider *)arg1;

@end
