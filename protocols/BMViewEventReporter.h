/* Generated by RuntimeBrowser.
 */

@protocol BMViewEventReporter

@required

- (bool)streamDeletionWithStreamIdentifier:(NSString *)arg1 remoteName:(NSString *)arg2 error:(id*)arg3;
- (bool)streamPrunedWithStreamIdentifier:(NSString *)arg1 remoteName:(NSString *)arg2 error:(id*)arg3;
- (bool)streamUpdatedWithStreamIdentifier:(NSString *)arg1 remoteName:(NSString *)arg2 error:(id*)arg3;

@end