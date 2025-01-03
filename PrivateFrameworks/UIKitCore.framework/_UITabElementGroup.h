/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITabElementGroup : _UITabElement <_UITabGroup> {
    bool  __allowsReordering;
    NSString * __defaultChildIdentifier;
    NSArray * __displayOrder;
    unsigned long long  __sidebarAppearance;
    NSArray * _children;
    <_UITabElementGroupDelegate> * _delegate;
    struct { 
        unsigned int didSelectElement : 1; 
        unsigned int didCustomizeDisplayOrder : 1; 
    }  _delegateImplements;
    _UITabElement * _selectedElement;
}

@property (setter=_setAllowsReordering:, nonatomic) bool _allowsReordering;
@property (setter=_setChildren:, nonatomic, copy) NSArray *_children;
@property (setter=_setDefaultChildIdentifier:, nonatomic, retain) NSString *_defaultChildIdentifier;
@property (setter=_setDelegate:, nonatomic) <_UITabElementGroupDelegate> *_delegate;
@property (setter=_setDisplayOrder:, nonatomic, copy) NSArray *_displayOrder;
@property (setter=_setSelectedElement:, nonatomic, retain) _UITabElement *_selectedElement;
@property (setter=_setSidebarAppearance:, nonatomic) unsigned long long _sidebarAppearance;
@property (nonatomic) bool allowsReordering;
@property (nonatomic, readonly, copy) NSArray *children;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITab *selectedChild;
@property (nonatomic, readonly) NSArray *sidebarActions;
@property (nonatomic, readonly) unsigned long long sidebarAppearance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowsReordering;
- (bool)_canBeReordered;
- (bool)_canReorderChild:(id)arg1;
- (id)_children;
- (id)_defaultChildElement;
- (id)_defaultChildForSelection;
- (id)_defaultChildIdentifier;
- (id)_delegate;
- (void)_didChangeTabModel:(id)arg1;
- (id)_displayOrder;
- (id)_filteredDisplayOrderIdentifiers;
- (bool)_isCustomizable;
- (bool)_isGroup;
- (void)_notifyObserversElementsChanged;
- (id)_orderedChildrenForDisplayOrder:(id)arg1;
- (void)_selectElement:(id)arg1 notifyOnReselection:(bool)arg2 performBeforeNotifyingDelegate:(id /* block */)arg3;
- (void)_selectElement:(id)arg1 notifyingDelegate:(bool)arg2 notifyOnReselection:(bool)arg3;
- (void)_selectElement:(id)arg1 notifyingDelegate:(bool)arg2 notifyOnReselection:(bool)arg3 performBeforeNotifyingDelegate:(id /* block */)arg4;
- (id)_selectedElement;
- (void)_setAllowsReordering:(bool)arg1;
- (void)_setChildren:(id)arg1;
- (void)_setDefaultChildIdentifier:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_setDisplayOrder:(id)arg1;
- (void)_setDisplayOrder:(id)arg1 notifyingDelegate:(bool)arg2;
- (bool)_setDisplayOrderIdentifiers:(id)arg1;
- (void)_setSelectedElement:(id)arg1;
- (void)_setSidebarAppearance:(unsigned long long)arg1;
- (unsigned long long)_sidebarAppearance;
- (id)_tabForIdentifier:(id)arg1;
- (void)_updateDescriptionWithBuilder:(id)arg1 recursive:(bool)arg2;
- (void)_updateForManagingNavigationStackChange;
- (void)_updateManagingNavigationStackUsingTransition:(unsigned long long)arg1;
- (bool)allowsReordering;
- (id)children;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 image:(id)arg3;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 image:(id)arg3 children:(id)arg4;
- (id)selectedChild;
- (void)setAllowsReordering:(bool)arg1;
- (id)sidebarActions;
- (unsigned long long)sidebarAppearance;
- (id)tabForIdentifier:(id)arg1;

@end
