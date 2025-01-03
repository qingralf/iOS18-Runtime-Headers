/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITab : NSObject <_UIPopoverPresentationControllerSourceItem_Internal> {
    NSString * __clusterIdentifier;
    <_UITabAlternateRepresentation> * __compactRepresentation;
    NSString * _accessibilityIdentifier;
    bool  _allowsHiding;
    NSString * _badgeValue;
    bool  _disabled;
    NSArray * _displayedViewControllers;
    bool  _hidden;
    bool  _hiddenByDefault;
    NSString * _identifier;
    UIImage * _image;
    UITabGroup * _parent;
    long long  _preferredPlacement;
    bool  _springLoaded;
    NSString * _subtitle;
    _UITabModel * _tabModel;
    NSString * _title;
    id  _userInfo;
    UIViewController * _viewController;
    id /* block */  _viewControllerProvider;
}

@property (setter=_setClusterIdentifier:, nonatomic, retain) NSString *_clusterIdentifier;
@property (setter=_setCompactRepresentation:, nonatomic, retain) <_UITabAlternateRepresentation> *_compactRepresentation;
@property (setter=_setDisplayedViewControllers:, nonatomic, retain) NSArray *_displayedViewControllers;
@property (nonatomic, readonly) UITabBarItem *_linkedTabBarItem;
@property (setter=_setTabModel:, nonatomic) _UITabModel *_tabModel;
@property (nonatomic) bool allowsHiding;
@property (nonatomic, copy) NSString *badgeValue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, readonly) bool hasVisiblePlacement;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isHiddenByDefault, nonatomic) bool hiddenByDefault;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UITabGroup *managingTabGroup;
@property (nonatomic, readonly) UITabGroup *parent;
@property (nonatomic) long long preferredPlacement;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITabBarController *tabBarController;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canBeReordered;
- (id)_clusterIdentifier;
- (id)_compactRepresentation;
- (void)_contentDidChange;
- (void)_customizabilityDidChange;
- (id)_descriptionWithRecursion:(bool)arg1;
- (void)_didChangeTabModel:(id)arg1;
- (id)_displayedViewController;
- (id)_displayedViewControllers;
- (id)_existingDisplayedViewController;
- (id)_filledVariantImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInCoordinateSpace:(id)arg1 window:(id)arg2;
- (bool)_hasCustomizablePlacement;
- (bool)_hasParent;
- (bool)_isAction;
- (bool)_isAncestorOfTab:(id)arg1;
- (bool)_isBridgedItem;
- (bool)_isCustomizable;
- (bool)_isElement;
- (bool)_isGroup;
- (bool)_isMoreTab;
- (bool)_isUniquelySPI;
- (id)_linkedTabBarItem;
- (id)_nearestViewController;
- (id)_parentGroup;
- (id)_recursiveDescription;
- (void)_resetViewController;
- (id)_resolvedTabBarItemSourceItemForPopoverPresentationControllerSourceItem;
- (void)_setClusterIdentifier:(id)arg1;
- (void)_setCompactRepresentation:(id)arg1;
- (void)_setDisplayedViewControllers:(id)arg1;
- (void)_setParent:(id)arg1;
- (void)_setTabModel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPresentationInWindow:(id)arg1;
- (id)_sourceViewForPresentationInWindow:(id)arg1;
- (id)_tabModel;
- (long long)_tabPlacement;
- (void)_updateDescriptionWithBuilder:(id)arg1 recursive:(bool)arg2;
- (void)_updateLinkedTabBarItem;
- (void)_updateView;
- (void)_visibilityDidChange;
- (id)accessibilityIdentifier;
- (bool)allowsHiding;
- (id)badgeValue;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInView:(id)arg1;
- (bool)hasVisiblePlacement;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 viewControllerProvider:(id /* block */)arg4;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isHiddenByDefault;
- (bool)isSpringLoaded;
- (id)managingTabGroup;
- (id)parent;
- (long long)preferredPlacement;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityAttributedValue:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAllowsHiding:(bool)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHiddenByDefault:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPreferredPlacement:(long long)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subtitle;
- (id)tabBarController;
- (id)title;
- (id)userInfo;
- (id)viewController;

@end
