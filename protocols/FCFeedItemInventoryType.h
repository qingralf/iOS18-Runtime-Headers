/* Generated by RuntimeBrowser.
 */

@protocol FCFeedItemInventoryType

@required

- (FCMapTable *)allFeedItemScoreProfilesForConfigurationSet:(long long)arg1 scoringVersion:(unsigned long long)arg2;
- (NSArray *)allFeedItems;
- (NSArray *)allFeedItemsWithTopic:(NSString *)arg1;
- (void)refreshIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end