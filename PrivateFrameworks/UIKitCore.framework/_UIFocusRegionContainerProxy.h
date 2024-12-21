/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer> {
    bool  _allowsLazyLoading;
    _UIFocusEnvironmentContainerTuple * _environmentContainer;
    bool  _shouldCreateRegionForGuideBehavior;
    bool  _shouldCreateRegionForOwningItem;
}

@property (nonatomic) bool allowsLazyLoading;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction; /* unknown property attribute: ? */
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion; /* unknown property attribute: ? */
@property (nonatomic, retain) _UIFocusEnvironmentContainerTuple *environmentContainer;
@property (getter=_isFocusDirectionFlippedHorizontally, nonatomic, readonly) bool focusDirectionFlippedHorizontally; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (readonly) unsigned long long hash;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences; /* unknown property attribute: ? */
@property (nonatomic, readonly) <UIFocusEnvironment> *owningEnvironment;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView *preferredFocusedView; /* unknown property attribute: ? */
@property (nonatomic) bool shouldCreateRegionForGuideBehavior;
@property (nonatomic) bool shouldCreateRegionForOwningItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingRectInCoordinateSpace:(id)arg1;
- (void)_didUpdateFocusInContext:(id)arg1;
- (id)_focusSystem;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEligibleForFocusOcclusion;
- (id)_itemContainer;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (bool)_ui_isUIFocusRegionContainerProxy;
- (bool)allowsLazyLoading;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)environmentContainer;
- (id)focusItemContainer;
- (unsigned long long)hash;
- (id)initWithEnvironmentContainer:(id)arg1;
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)owningEnvironment;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setAllowsLazyLoading:(bool)arg1;
- (void)setEnvironmentContainer:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setShouldCreateRegionForGuideBehavior:(bool)arg1;
- (void)setShouldCreateRegionForOwningItem:(bool)arg1;
- (bool)shouldCreateRegionForGuideBehavior;
- (bool)shouldCreateRegionForOwningItem;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end