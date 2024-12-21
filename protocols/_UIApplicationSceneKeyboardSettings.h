/* Generated by RuntimeBrowser.
 */

@protocol _UIApplicationSceneKeyboardSettings

@required

- (NSString *)hardwareKeyboardExclusivityIdentifier;
- (bool)keyboardDockDisabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumKeyboardPadding;
- (void)setHardwareKeyboardExclusivityIdentifier:(NSString *)arg1;
- (void)setKeyboardDockDisabled:(bool)arg1;
- (void)setMinimumKeyboardPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSuppressKeyboardFocusRequests:(bool)arg1;
- (bool)suppressKeyboardFocusRequests;

@end