/* Generated by RuntimeBrowser.
 */

@protocol CompletionProviderDelegate <NSObject>

@required

- (void)completionProvider:(CompletionProvider *)arg1 didFinishCompletingString:(NSString *)arg2;
- (void)completionProviderDidFail:(CompletionProvider *)arg1;
- (NSArray *)currentSearchEngineHostSuffixes;
- (UIWindow *)windowHostingCompletionProvider:(CompletionProvider *)arg1;

@end
