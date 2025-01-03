/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITabBarControllerSidebar : NSObject {
    _UITabSidebarTransaction * __activeTransaction;
    UIVisualEffect * __overrideBackgroundEffect;
    UIView<_UITabContentProviding> * __sidebarView;
    <_UITabOutlineViewDelegate> * __sidebarViewDelegate;
    UIView * _bottomBarView;
    <UITabBarControllerSidebarDelegate> * _delegate;
    struct { 
        unsigned int visibilityWillChange : 1; 
        unsigned int itemForRequest : 1; 
        unsigned int updateItem : 1; 
        unsigned int leadingSwipeActions : 1; 
        unsigned int trailingSwipeActions : 1; 
        unsigned int contextMenuConfiguration : 1; 
        unsigned int willBeginDisplayingTab : 1; 
        unsigned int didEndDisplayingTab : 1; 
    }  _delegateImplements;
    <UIContentConfiguration> * _footerContentConfiguration;
    <UIContentConfiguration> * _headerContentConfiguration;
    bool  _hidden;
    UIDeferredMenuElement * _navigationOverflowItems;
    _UITabOutlineView * _outlineView;
    long long  _preferredLayout;
    struct { 
        unsigned int hasCustomBottomBarView : 1; 
        unsigned int currentVisibilityAppliedByUser : 1; 
    }  _sidebarFlags;
    UITabBarController * _tabBarController;
    NSArray * _toolbarItems;
    struct { 
        unsigned int visibilityDidChange : 1; 
        unsigned int editingStateDidChange : 1; 
        unsigned int visibilityDidChangeForTabs : 1; 
        unsigned int configureSidebarItem : 1; 
        unsigned int updateSidebarItem : 1; 
        unsigned int leadingSwipeActions : 1; 
        unsigned int trailingSwipeActions : 1; 
        unsigned int contextMenuConfiguration : 1; 
        unsigned int itemsForBeginningSession : 1; 
        unsigned int itemsForAddingToSession : 1; 
        unsigned int operationForAcceptingIntoAction : 1; 
        unsigned int acceptItemsIntoAction : 1; 
        unsigned int willBeginDisplayingTab : 1; 
        unsigned int didEndDisplayingTab : 1; 
    }  _uip_delegateImplements;
}

@property (setter=_setDisplayedGroup:, nonatomic, retain) UITab<_UITabGroup> *_displayedGroup;
@property (nonatomic, readonly) _UITabOutlineView *_outlineView;
@property (nonatomic, retain) UIView<_UITabContentProviding> *_sidebarView;
@property (nonatomic, retain) UIView *bottomBarView;
@property (nonatomic) <UITabBarControllerSidebarDelegate> *delegate;
@property (nonatomic, copy) <UIContentConfiguration> *footerContentConfiguration;
@property (nonatomic, copy) <UIContentConfiguration> *headerContentConfiguration;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIDeferredMenuElement *navigationOverflowItems;
@property (nonatomic) long long preferredLayout;

- (void).cxx_destruct;
- (id)_bottomBarView;
- (id)_customizationIdentifier;
- (id)_delegate;
- (id)_displayedGroup;
- (id)_footerContentConfiguration;
- (id)_headerContentConfiguration;
- (bool)_isEditable;
- (bool)_isEditing;
- (bool)_isVisible;
- (id)_outlineView;
- (long long)_preferredLayout;
- (void)_scrollToHeaderAnimated:(bool)arg1;
- (void)_scrollToTab:(id)arg1 atPosition:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_setBottomBarView:(id)arg1;
- (void)_setCustomizationIdentifier:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_setDisplayedGroup:(id)arg1;
- (void)_setEditable:(bool)arg1;
- (void)_setEditing:(bool)arg1;
- (void)_setFooterContentConfiguration:(id)arg1;
- (void)_setHeaderContentConfiguration:(id)arg1;
- (void)_setPreferredLayout:(long long)arg1;
- (void)_setToolbarItems:(id)arg1;
- (void)_setVisible:(bool)arg1;
- (id)_sidebarView;
- (id)_toolbarItems;
- (id)bottomBarView;
- (id)delegate;
- (id)footerContentConfiguration;
- (id)headerContentConfiguration;
- (bool)isHidden;
- (id)navigationOverflowItems;
- (long long)preferredLayout;
- (void)reconfigureItemForTab:(id)arg1;
- (void)scrollToTarget:(id)arg1 animated:(bool)arg2;
- (void)setBottomBarView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterContentConfiguration:(id)arg1;
- (void)setHeaderContentConfiguration:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setNavigationOverflowItems:(id)arg1;
- (void)setPreferredLayout:(long long)arg1;
- (void)set_sidebarView:(id)arg1;

@end
