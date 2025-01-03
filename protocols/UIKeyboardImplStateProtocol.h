/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardImplStateProtocol <NSObject, UITextInputDelegate>

@required

- (void)clearInputForMarkedText;
- (void)didChangeForwardingInputDelegate:(UIResponder<UIKeyInput> *)arg1;
- (TIDocumentState *)documentState;
- (TIKeyboardState *)keyboardState;
- (void)setDocumentState:(TIDocumentState *)arg1;
- (void)setShouldIgnoreTextInputChanges:(bool)arg1;
- (bool)shouldIgnoreTextInputChanges;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(UIView *)arg2;
- (void)syncDocumentStateToInputDelegate;
- (void)textSuggestionDidChange:(id <UITextInput>)arg1;
- (void)updateKeyboardStateForDeletion;
- (void)updateKeyboardStateForInsertion:(NSString *)arg1;
- (void)updateKeyboardStateForReplacingText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)updateTextInputKeyboardSource;

@end
