/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIMenuPageComponent : SUUIPageComponent {
    NSMutableArray * _childrenComponents;
    long long  _defaultSelectedIndex;
    long long  _menuStyle;
    NSString * _menuTitle;
    float  _menuTitleFontSize;
    long long  _menuTitleFontWeight;
    NSMutableArray * _sortURLStrings;
    NSString * _titleForMoreItem;
    NSMutableArray * _titles;
}

@property (nonatomic, readonly) NSArray *allTitles;
@property (nonatomic, readonly) long long defaultSelectedIndex;
@property (nonatomic, readonly) long long menuStyle;
@property (nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) float menuTitleFontSize;
@property (nonatomic, readonly) long long menuTitleFontWeight;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) NSString *titleForMoreItem;
@property (nonatomic, readonly) SUUISegmentedControlViewElement *viewElement;

- (void).cxx_destruct;
- (id)_componentWithContext:(id)arg1;
- (void)_setChildComponents:(id)arg1 forIndex:(long long)arg2;
- (id)allTitles;
- (id)childComponentsForIndex:(long long)arg1;
- (long long)componentType;
- (long long)defaultSelectedIndex;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithRoomSortData:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (long long)menuStyle;
- (id)menuTitle;
- (float)menuTitleFontSize;
- (long long)menuTitleFontWeight;
- (long long)numberOfItems;
- (id)sortURLForIndex:(long long)arg1;
- (id)titleForIndex:(long long)arg1;
- (id)titleForMoreItem;

@end
