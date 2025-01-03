/* Generated by RuntimeBrowser.
 */

@protocol EMCollectionChangeObserver <NSObject>

@required

- (void)collection:(id <EMCollection>)arg1 addedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(id <EMCollection>)arg1 addedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;
- (void)collection:(id <EMCollection>)arg1 changedItemIDs:(NSArray *)arg2;
- (void)collection:(id <EMCollection>)arg1 deletedItemIDs:(NSArray *)arg2;
- (void)collection:(id <EMCollection>)arg1 movedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(id <EMCollection>)arg1 movedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;
- (void)collection:(id <EMCollection>)arg1 replacedExistingItemID:(id <EMCollectionItemID>)arg2 withNewItemID:(id <EMCollectionItemID>)arg3;

@optional

- (void)collectionDidFinishInitialLoad:(id <EMCollection>)arg1;
- (void)didFinishRecoveryForCollection:(id <EMCollection>)arg1;
- (void)didFinishRemoteSearchForCollection:(id <EMCollection>)arg1;

@end
