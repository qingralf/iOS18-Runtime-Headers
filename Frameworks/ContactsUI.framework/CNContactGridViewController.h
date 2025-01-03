/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactGridViewController : UICollectionViewController <CNAvatarViewDelegate, CNContactDataSourceDelegate, CNQuickActionsViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _avatarMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _avatarSize;
    UIColor * _backgroundColor;
    CNContactFormatter * _contactFormatter;
    NSObject<CNContactDataSource> * _dataSource;
    <CNContactGridViewControllerDelegate> * _delegate;
    CNContactGridViewLayout * _gridLayout;
    NSArray * _inlineActionsCategories;
    bool  _inlineActionsEnabled;
    long long  _monogrammerStyle;
    NSDictionary * _nameTextAttributes;
    long long  _numberOfColumns;
    NSMutableDictionary * _preloadedActionsManagers;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } avatarMargins;
@property (nonatomic) struct CGSize { double x1; double x2; } avatarSize;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNContactGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNKeyDescriptor> *descriptorForRequiredKeys;
@property (retain) CNContactGridViewLayout *gridLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indexOfContactWithExpandedInlineActions;
@property (copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
@property (nonatomic, copy) NSArray *inlineActionsCategories;
@property (nonatomic) bool inlineActionsEnabled;
@property (nonatomic) long long monogrammerStyle;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic, retain) NSMutableDictionary *preloadedActionsManagers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (void)_updateItemSize;
- (void)actionsView:(id)arg1 didPerformAction:(id)arg2;
- (void)actionsView:(id)arg1 willShowActions:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })avatarMargins;
- (struct CGSize { double x1; double x2; })avatarSize;
- (id)backgroundColor;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)contactFormatter;
- (id)dataSource;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (id)gridLayout;
- (long long)indexOfContactWithExpandedInlineActions;
- (id)indexPathOfContactWithExpandedInlineActions;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inlineActionsCategories;
- (bool)inlineActionsEnabled;
- (long long)monogrammerStyle;
- (id)nameTextAttributes;
- (long long)numberOfColumns;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preloadInlineActionsForContactsAtIndexes:(id)arg1;
- (id)preloadedActionsManagers;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAvatarMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAvatarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGridLayout:(id)arg1;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)arg1;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)arg1 animated:(bool)arg2;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1 animated:(bool)arg2;
- (void)setInlineActionsCategories:(id)arg1;
- (void)setInlineActionsEnabled:(bool)arg1;
- (void)setMonogrammerStyle:(long long)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setPreloadedActionsManagers:(id)arg1;
- (id)viewControllerForActionsView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;

@end
