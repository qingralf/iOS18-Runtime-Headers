/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIStoreItemRelationshipCounsellor : NSObject {
    NSRecursiveLock * _lock;
    NSMutableDictionary * _relationshipsDictionary;
}

@property (nonatomic, readonly) NSRecursiveLock *lock;
@property (nonatomic, retain) NSMutableDictionary *relationshipsDictionary;

- (void).cxx_destruct;
- (void)addChildren:(id)arg1 forParent:(id)arg2;
- (id)childItemsForItem:(id)arg1;
- (id)familyForItem:(id)arg1;
- (id)init;
- (bool)itemHasChildren:(id)arg1;
- (bool)itemHasParent:(id)arg1;
- (id)lock;
- (id)parentItemForItem:(id)arg1;
- (id)relationshipsDictionary;
- (void)removeAllRelationshipsForItem:(id)arg1;
- (void)setChildren:(id)arg1 forParent:(id)arg2;
- (void)setRelationshipsDictionary:(id)arg1;
- (id)siblingItemsForItem:(id)arg1;

@end
