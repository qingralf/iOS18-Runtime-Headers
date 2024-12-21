/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMBindingStrategy : NSObject <IKDOMBindingStrategy> {
    IKJSDataSourceView * _dataSourceView;
    IKDOMBindingController * _domBindingController;
    IKChangeSet * _filteredChangeSet;
    NSString * _itemsBindingKey;
    IKChangeSet * _sourceItemsChangeSet;
    NSMutableSet * _updatedItemIDs;
}

@property (nonatomic, retain) IKJSDataSourceView *dataSourceView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKDOMBindingController *domBindingController;
@property (nonatomic, retain) IKChangeSet *filteredChangeSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly, copy) NSString *itemsBindingKey;
@property (nonatomic, retain) IKChangeSet *sourceItemsChangeSet;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *updatedItemIDs;

- (void).cxx_destruct;
- (id)_adjustedIndexTitlesFromDataSource:(id)arg1 filteredItems:(id)arg2 filteredChangeSet:(id)arg3;
- (void)_applyItemsValueWithDataSource:(id)arg1;
- (bool)applyValue:(id)arg1 forKey:(id)arg2;
- (id)dataSourceView;
- (void)didResolveKeys:(id)arg1;
- (id)domBindingController;
- (id)filteredChangeSet;
- (id)initWithDOMBindingController:(id)arg1 itemsBindingKey:(id)arg2;
- (id)items;
- (id)itemsBindingKey;
- (id)keysAffectingChildren;
- (id)prototypeDependentKeys;
- (void)setDataSourceView:(id)arg1;
- (void)setFilteredChangeSet:(id)arg1;
- (void)setSourceItemsChangeSet:(id)arg1;
- (void)setUpdatedItemIDs:(id)arg1;
- (id)sourceItemsChangeSet;
- (id)updatedItemIDs;
- (void)valueDidChangeForKey:(id)arg1 propertyPath:(id)arg2 extraInfo:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemsRange;

@end