/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUISwooshPageComponent : SUUIPageComponent {
    NSArray * _bricks;
    long long  _fcKind;
    struct SUUILockupStyle { 
        long long artworkSize; 
        long long layoutStyle; 
        unsigned long long visibleFields; 
    }  _lockupStyle;
    NSArray * _lockups;
    NSArray * _mediaComponents;
    long long  _missingDataCount;
    NSString * _platformKeyProfile;
    long long  _seeAllStyle;
    NSString * _seeAllTitle;
    NSURL * _seeAllURL;
    bool  _showsIndexNumbers;
    bool  _showsItemTitles;
    long long  _swooshType;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *bricks;
@property (nonatomic, readonly) struct SUUILockupStyle { long long x1; long long x2; unsigned long long x3; } lockupStyle;
@property (nonatomic, readonly) NSArray *lockups;
@property (nonatomic, readonly) NSArray *mediaComponents;
@property (nonatomic, readonly) NSString *platformKeyProfile;
@property (nonatomic, readonly) long long seeAllStyle;
@property (nonatomic, readonly) NSString *seeAllTitle;
@property (nonatomic, readonly) NSURL *seeAllURL;
@property (nonatomic, readonly) bool showsBrickTitles;
@property (nonatomic, readonly) bool showsIndexNumbers;
@property (nonatomic, readonly) bool showsMediaTitles;
@property (nonatomic, readonly) long long swooshType;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_brickItemsWithChildren:(id)arg1 customPageContext:(id)arg2;
- (id)_brickItemsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (unsigned long long)_defaultVisibleFieldsForItemKind:(long long)arg1;
- (bool)_isBrickAvailable:(id)arg1 withPageContext:(id)arg2;
- (struct SUUILockupStyle { long long x1; long long x2; unsigned long long x3; })_lockupStyleWithLockups:(id)arg1;
- (id)_lockupWithItemIdentifier:(id)arg1 context:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 context:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (id)_mediaComponentsWithChildren:(id)arg1 context:(id)arg2;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SUUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (void)_reloadMissingDataCount;
- (void)_setSeeAllValuesWithLinkInfo:(id)arg1;
- (void)_updateBricksWithItems:(id)arg1;
- (void)_updateLockup:(id)arg1 withItem:(id)arg2;
- (id)_updateLockupItemsWithItems:(id)arg1;
- (void)_updateLockupItemsWithLookupResponse:(id)arg1;
- (id)bricks;
- (long long)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithItemList:(id)arg1;
- (id)initWithLockups:(id)arg1 swooshType:(long long)arg2 title:(id)arg3;
- (id)initWithRelatedContentContext:(id)arg1;
- (id)initWithRoomContext:(id)arg1;
- (bool)isMissingItemData;
- (struct SUUILockupStyle { long long x1; long long x2; unsigned long long x3; })lockupStyle;
- (id)lockups;
- (id)mediaComponents;
- (id)metricsElementName;
- (id)platformKeyProfile;
- (long long)seeAllStyle;
- (id)seeAllTitle;
- (id)seeAllURL;
- (bool)showsBrickTitles;
- (bool)showsIndexNumbers;
- (bool)showsMediaTitles;
- (long long)swooshType;
- (id)title;
- (id)valueForMetricsField:(id)arg1;

@end
