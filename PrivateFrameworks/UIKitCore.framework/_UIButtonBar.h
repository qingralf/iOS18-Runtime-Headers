/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonBar : NSObject <NSCoding, UIPointerInteractionDelegate, _UIBarButtonItemGroupOwner, _UIBarButtonItemViewOwner, _UIButtonBarGroupOrderOwner> {
    <_UIButtonBarAppearanceDelegate> * __appearanceDelegate;
    _UIPointerInteractionAssistant * _assistant;
    NSArray * _barButtonGroups;
    struct { 
        unsigned int isInLayoutReentrancyGuard : 1; 
        unsigned int needsAppearanceUpdate : 1; 
        unsigned int plainAppearanceChanged : 1; 
        unsigned int doneAppearanceChanged : 1; 
        unsigned int denyPointerInteractions : 1; 
        unsigned int effectiveLayoutHasCriticalGroup : 1; 
    }  _buttonBarFlags;
    UIView * _centeredView;
    NSLayoutConstraint * _centeringConstraint;
    id /* block */  _defaultActionFilter;
    <_UIButtonBarDelegate> * _delegate;
    _UIBarButtonItemData * _doneItemAppearance;
    NSMutableArray * _effectiveLayout;
    NSArray * _fixedLeadingGroups;
    NSArray * _fixedTrailingGroups;
    NSLayoutDimension * _flexibleSpaceEqualSizeAnchor;
    bool  _forceFixedSpacing;
    NSMapTable * _groupLayoutMap;
    NSMutableArray * _groupLayouts;
    _UIButtonBarGroupOrderer * _groupOrderer;
    bool  _itemsInGroupUseSameSize;
    NSMutableArray * _layoutActiveConstraints;
    NSMutableArray * _layoutGuides;
    _UIButtonBarLayoutMetrics * _layoutMetrics;
    NSMutableArray * _layoutViews;
    double  _minimumInterItemSpace;
    NSLayoutDimension * _minimumInterItemSpaceAnchor;
    NSLayoutConstraint * _minimumInterItemSpaceConstraint;
    _UIBarButtonItemData * _plainItemAppearance;
    UIBarButtonItem * _popOverPresentingSourceItem;
    NSMapTable * _senderActionMap;
    _UIButtonBarStackView * _stackView;
    bool  _supportsAlwaysOverflowGroups;
    bool  _supportsOverflow;
    double  _targetLayoutWidth;
    id /* block */  _viewUpdater;
}

@property (nonatomic) <_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
@property (nonatomic, readonly) UIView *_viewForOverlayRects;
@property (nonatomic) bool allowsViewWrappers;
@property (nonatomic) _UIPointerInteractionAssistant *assistant;
@property (nonatomic, readonly) UIView<UIPointerInteractionDelegate> *assistantView;
@property (nonatomic, copy) NSArray *barButtonGroups;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ defaultActionFilter;
@property (nonatomic) <_UIButtonBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIBarButtonItemData *doneItemAppearance;
@property (nonatomic, readonly) bool doneItemAppearanceNeedsUpdate;
@property (nonatomic, readonly, copy) NSArray *elementsForOverflowMenu;
@property (nonatomic, readonly, copy) NSArray *elementsRepresentingOrderedGroups;
@property (nonatomic, copy) NSArray *fixedLeadingGroups;
@property (nonatomic, copy) NSArray *fixedTrailingGroups;
@property (nonatomic) bool forceFixedSpacing;
@property (nonatomic, retain) _UIButtonBarGroupOrderer *groupOrderer;
@property (nonatomic, readonly, copy) NSArray *groupRealizedOrder;
@property (nonatomic, readonly) bool hasAlwaysOverflowGroups;
@property (nonatomic, readonly) bool hasVisibleContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitTestDirectionalInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestInsets;
@property (nonatomic) long long itemDistribution;
@property (nonatomic) bool itemsInGroupUseSameSize;
@property (nonatomic, readonly) UIBarButtonItem *leadingVisibleItem;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic, readonly) bool needsLeadingSpacer;
@property (nonatomic, readonly) bool needsTrailingSpacer;
@property (nonatomic, retain) _UIBarButtonItemData *plainItemAppearance;
@property (nonatomic, readonly) bool plainItemAppearanceNeedsUpdate;
@property (nonatomic) UIBarButtonItem *popOverPresentingSourceItem;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAlwaysOverflowGroups;
@property (nonatomic) bool supportsOverflow;
@property (nonatomic) double targetLayoutWidth;
@property (nonatomic, readonly) UIBarButtonItem *trailingClippingItem;
@property (nonatomic, readonly) UIBarButtonItem *trailingVisibleItem;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, copy) id /* block */ viewUpdater;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } widthInfo;

- (void).cxx_destruct;
- (void)_appearanceChanged;
- (id)_appearanceDelegate;
- (void)_buttonBarStackViewDidLayoutSubviews:(id)arg1;
- (void)_confirmOwnershipOfFixedGroups;
- (void)_disablePointerInteractions;
- (void)_enablePointerInteractions;
- (void)_enumerateAllGroups:(id /* block */)arg1;
- (void)_enumerateLayoutGroups:(id /* block */)arg1;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_groupOrdererDidUpdate:(id)arg1;
- (id)_groupOrdererGroups:(id)arg1;
- (void)_invalidateAssistant:(id)arg1;
- (bool)_item:(id)arg1 addSymbolEffect:(id)arg2 options:(id)arg3 animated:(bool)arg4;
- (void)_item:(id)arg1 applyContentTransition:(id)arg2 options:(id)arg3;
- (bool)_item:(id)arg1 removeAllSymbolEffectsWithOptions:(id)arg2 animated:(bool)arg3;
- (bool)_item:(id)arg1 removeSymbolEffectOfType:(id)arg2 options:(id)arg3 animated:(bool)arg4;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (bool)_itemDidUpdateMenu:(id)arg1 fromMenu:(id)arg2;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_layoutBar;
- (id)_layoutForGroup:(id)arg1;
- (id)_overflowFallbackItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_preferredRegionRectForButton:(id)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setNeedsVisualUpdate;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_updateHitRects;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (void)_validateAllItems;
- (id)_viewForOverlayRects;
- (bool)allowsViewWrappers;
- (id)assistant;
- (id)assistantView;
- (id)barButtonGroups;
- (void)dealloc;
- (id /* block */)defaultActionFilter;
- (id)delegate;
- (id)description;
- (id)doneItemAppearance;
- (bool)doneItemAppearanceNeedsUpdate;
- (id)elementsForOverflowMenu;
- (id)elementsRepresentingOrderedGroups;
- (void)encodeWithCoder:(id)arg1;
- (id)fixedLeadingGroups;
- (id)fixedTrailingGroups;
- (bool)forceFixedSpacing;
- (id)groupOrderer;
- (id)groupRealizedOrder;
- (bool)hasAlwaysOverflowGroups;
- (bool)hasVisibleContent;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitTestDirectionalInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemAtPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (long long)itemDistribution;
- (bool)itemsInGroupUseSameSize;
- (id)leadingVisibleItem;
- (double)minimumInterItemSpace;
- (bool)needsLeadingSpacer;
- (bool)needsTrailingSpacer;
- (id)plainItemAppearance;
- (bool)plainItemAppearanceNeedsUpdate;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)popOverPresentingSourceItem;
- (void)setAllowsViewWrappers:(bool)arg1;
- (void)setAssistant:(id)arg1;
- (void)setBarButtonGroups:(id)arg1;
- (void)setDefaultActionFilter:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneItemAppearance:(id)arg1;
- (void)setFixedLeadingGroups:(id)arg1;
- (void)setFixedTrailingGroups:(id)arg1;
- (void)setForceFixedSpacing:(bool)arg1;
- (void)setGroupOrderer:(id)arg1;
- (void)setHitTestDirectionalInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHitTestInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItemDistribution:(long long)arg1;
- (void)setItemsInGroupUseSameSize:(bool)arg1;
- (void)setMinimumInterItemSpace:(double)arg1;
- (void)setNeedsHitTestUpdate;
- (void)setPlainItemAppearance:(id)arg1;
- (void)setPopOverPresentingSourceItem:(id)arg1;
- (void)setSupportsAlwaysOverflowGroups:(bool)arg1;
- (void)setSupportsOverflow:(bool)arg1;
- (void)setTargetLayoutWidth:(double)arg1;
- (void)setViewUpdater:(id /* block */)arg1;
- (void)set_appearanceDelegate:(id)arg1;
- (bool)supportsAlwaysOverflowGroups;
- (bool)supportsOverflow;
- (double)targetLayoutWidth;
- (id)trailingClippingItem;
- (id)trailingVisibleItem;
- (id)view;
- (id /* block */)viewUpdater;
- (struct { double x1; double x2; double x3; })widthInfo;

@end
