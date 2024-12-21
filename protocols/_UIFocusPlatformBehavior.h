/* Generated by RuntimeBrowser.
 */

@protocol _UIFocusPlatformBehavior <_UIFocusBehavior>

@required

+ (<_UIFocusPlatformBehavior> *)sharedInstance;

- (bool)addsAccessibilityElementsToFocusEngine;
- (bool)allowsRestoringFocusForScreen:(UIScreen *)arg1;
- (bool)autoDismissesPopoverControllersOnFocusIntersection;
- (long long)buttonSelectionMode;
- (long long)cellFocusability;
- (bool)controlCanBecomeFocused:(UIControl *)arg1;
- (unsigned long long)defaultFocusScrollOffsetResolver;
- (bool)defaultValueForSelectionFollowsFocusInCollectionView:(UICollectionView *)arg1;
- (bool)defaultValueForSelectionFollowsFocusInTableView:(UITableView *)arg1;
- (long long)deliverKeyEventsToFocusEngine;
- (bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (long long)focusRingVisibility;
- (long long)focusSystemDeactivationMode;
- (bool)honorsFocusSystemEnabledInfoPlistKey;
- (bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (bool)includesContentScrollViewInPreferredFocusEnvironments;
- (long long)indirectMovementPriority;
- (long long)pageButtonScrollingStyle;
- (bool)preventsCellFocusabilityWhileEditing;
- (bool)refinesIndexBarTargetContentOffset;
- (long long)requiredInputDevices;
- (bool)requiresLegacyScreenBasedWindowLookup;
- (long long)scrollingMode;
- (bool)searchBarTextFieldCanBecomeFocused;
- (bool)shouldAdjustAnimationTimingForOffscreenDistance;
- (bool)shouldCallAccessibilityOverrides;
- (bool)shouldConvertIndirectTapsIntoArrowKeys;
- (bool)shouldEnableFocusOnSelect;
- (bool)shouldSupressIndirectMovementOnSelect;
- (bool)showsFocusRingForItem:(id <UIFocusItem>)arg1;
- (long long)skipKeyCommandsForKeyEvents;
- (bool)supportsArrowKeys;
- (bool)supportsFrameReporter;
- (bool)supportsGameControllers;
- (bool)supportsHaptics;
- (bool)supportsIndirectPanningMovement;
- (bool)supportsIndirectRotaryMovement;
- (bool)supportsLinearMovementDebugOverlay;
- (bool)supportsMultipleWindows;
- (bool)supportsParentFocusRings;
- (bool)supportsSounds;
- (bool)supportsTabKey;
- (bool)supportsViewTransparency;
- (bool)syncsFocusAndResponder;
- (bool)tabBarButtonCanBecomeFocused;
- (bool)tabBarCanBecomeFocused;
- (bool)tabBasedMovementLoops;
- (bool)textViewCanBecomeFocused:(UITextView *)arg1;
- (bool)viewControllerPresentationRestoresLastFocusedItem;
- (bool)wantsFocusSystemForScene:(UIScene *)arg1;

@end