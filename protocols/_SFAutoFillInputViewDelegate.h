/* Generated by RuntimeBrowser.
 */

@protocol _SFAutoFillInputViewDelegate <NSObject>

@required

- (void)autoFillInputViewShouldClose:(_SFAutoFillInputView *)arg1;
- (void)autoFillStrongPasswordWithFormat:(unsigned long long)arg1;
- (void)autoFillTextSuggestion:(_SFTextSuggestion *)arg1;

@optional

- (void)autoFillInputViewDidSelectMorePasswords:(_SFAutoFillInputView *)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(_SFAutoFillInputView *)arg1;

@end
