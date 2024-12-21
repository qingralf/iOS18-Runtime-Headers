/* Generated by RuntimeBrowser.
 */

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@optional

- (bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingRectInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (<UIFocusEnvironment> *)_focusFallbackScroller;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEligibleForFocusOcclusion;
- (bool)_isFocusDirectionFlippedHorizontally;
- (NSArray *)_linearFocusMovementSequences;
- (long long)_preferredFocusMovementStyle;
- (long long)_rotaryFocusMovementAxis;
- (void)_setNeedsNonDeferredFocusUpdate;

@end