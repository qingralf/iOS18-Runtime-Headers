/* Generated by RuntimeBrowser.
 */

@protocol EMInMemoryThreadCollectionDataSource

@required

- (NSArray *)collection:(EMInMemoryThreadCollection *)arg1 messagesInConversationIDs:(NSArray *)arg2 limit:(long long)arg3;
- (NSSet *)mailboxesInCollection:(EMInMemoryThreadCollection *)arg1;

@end