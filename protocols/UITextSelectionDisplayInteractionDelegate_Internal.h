/* Generated by RuntimeBrowser.
 */

@protocol UITextSelectionDisplayInteractionDelegate_Internal <NSObject>

@optional

- (struct CGPoint { double x1; double x2; })_selectionViewManager:(UITextSelectionDisplayInteraction *)arg1 convertPointToRenderSpace:(struct CGPoint { double x1; double x2; })arg2 textRange:(UITextRange *)arg3;
- (<UITextCursorAssertion> *)_selectionViewManager:(UITextSelectionDisplayInteraction *)arg1 obtainBlinkSuppressionAssertionForReason:(NSString *)arg2;
- (<UITextCursorAssertion> *)_selectionViewManager:(UITextSelectionDisplayInteraction *)arg1 obtainGhostCursorAssertionForReason:(NSString *)arg2;
- (UITextSelection *)activeSelection;

@end
