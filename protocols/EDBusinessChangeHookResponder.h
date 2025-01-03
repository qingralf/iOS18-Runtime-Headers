/* Generated by RuntimeBrowser.
 */

@protocol EDBusinessChangeHookResponder <NSObject>

@optional

- (void)persistenceDidChangeBusinessIDForAddressID:(NSNumber *)arg1 fromBusinessID:(long long)arg2;
- (void)persistenceDidChangeBusinessIDForMessages:(NSArray *)arg1 fromBusinessID:(long long)arg2;
- (void)persistenceDidFinishMergingBusinessesAfterJournalReconciliation;
- (void)persistenceIsCreatingBusinessID:(long long)arg1 withExternalBusinessID:(EMBusinessExternalID *)arg2;
- (void)persistenceIsMergingBusinessID:(long long)arg1 intoBusinessID:(long long)arg2;

@end
