/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemModule : NSObject {
    HFReorderableHomeKitItemList * _clientReorderableHomeKitItemList;
    NSSet * _itemProviders;
    <HFItemUpdating> * _itemUpdater;
    NSString * _moduleIdentifier;
}

@property (nonatomic, readonly) NSSet *allItems;
@property (nonatomic, retain) HFReorderableHomeKitItemList *clientReorderableHomeKitItemList;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) <HFItemUpdating> *itemUpdater;
@property (nonatomic, readonly) NSString *moduleIdentifier;
@property (nonatomic, retain) HFReorderableHomeKitItemList *reorderableHomeKitItemList;
@property (nonatomic, readonly) bool supportsReordering;

- (void).cxx_destruct;
- (id /* block */)_itemComparator;
- (id)_reorderableHomeKitItemListKey;
- (id)allItems;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)clientReorderableHomeKitItemList;
- (bool)containsItem:(id)arg1;
- (id)init;
- (id)initWithItemUpdater:(id)arg1;
- (id)itemProviders;
- (id)itemUpdater;
- (void)itemUpdaterDidFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (id)moduleIdentifier;
- (void)registerForExternalUpdates;
- (id)reorderableHomeKitItemList;
- (void)reset;
- (void)setClientReorderableHomeKitItemList:(id)arg1;
- (void)setReorderableHomeKitItemList:(id)arg1;
- (bool)supportsReordering;
- (bool)supportsReorderingForItem:(id)arg1;
- (void)unregisterForExternalUpdates;
- (void)updateModuleIdentifierInItems;

@end