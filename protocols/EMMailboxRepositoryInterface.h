/* Generated by RuntimeBrowser.
 */

@protocol EMMailboxRepositoryInterface <NSObject>

@required

- (void)cancelObservation:(EMObjectID *)arg1;
- (void)getAllMailboxObjectIDsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getMailboxesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)mailboxObjectIDsForMailboxType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)mailboxTypeForMailboxObjectID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: EMMailboxObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)performMailboxChangeAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: EMMailboxChangeAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)recordFrecencyEventWithMailboxesWithIDs:(NSArray *)arg1;
- (void)refreshMailboxList:(long long)arg1;
- (void)startObservingMailboxChangesWithChangeObserver:(id <EMMailboxChangeObserver>)arg1 observationIdentifier:(EMObjectID *)arg2;
- (void)testRecordFrecencyEventsForAllMailboxes;
- (void)testResetFrecencyForAllMailboxes;

@end
