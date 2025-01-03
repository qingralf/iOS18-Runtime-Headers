/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINPane : PSEditingPane <PSPINEntryViewDelegate, UIKeyInput, UITextInputTraits> {
    unsigned int  _PINLength;
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    bool  _isBlocked;
    long long  _keyboardAppearance;
    long long  _keyboardType;
    UIKeyboard * _keypad;
    bool  _keypadActive;
    DevicePINKeypadContainerView * _keypadContainerView;
    bool  _numericKeyboard;
    id /* block */  _passcodeOptionsHandler;
    NSString * _passcodeOptionsTitle;
    UIView<PINEntryView> * _pinView;
    bool  _playSound;
    bool  _simplePIN;
    UITransitionView * _transitionView;
    bool  _transitioning;
}

@property (nonatomic) unsigned int PINLength;
@property unsigned long long allowedWritingToolsResultOptions; /* unknown property attribute: ? */
@property (nonatomic) long long autocapitalizationType; /* unknown property attribute: ? */
@property (nonatomic) long long autocorrectionType; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType; /* unknown property attribute: ? */
@property (nonatomic) long long keyboardAppearance; /* unknown property attribute: ? */
@property (nonatomic) long long keyboardType; /* unknown property attribute: ? */
@property (retain) DevicePINKeypadContainerView *keypadContainerView;
@property (nonatomic) long long mathExpressionCompletionType; /* unknown property attribute: ? */
@property bool numericKeyboard;
@property (nonatomic, copy) id /* block */ passcodeOptionsHandler;
@property (nonatomic, copy) NSString *passcodeOptionsTitle;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules; /* unknown property attribute: ? */
@property (nonatomic, retain) UIView<PINEntryView> *pinView;
@property (nonatomic) long long returnKeyType; /* unknown property attribute: ? */
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry; /* unknown property attribute: ? */
@property (nonatomic) long long smartDashesType; /* unknown property attribute: ? */
@property (nonatomic) long long smartInsertDeleteType; /* unknown property attribute: ? */
@property (nonatomic) long long smartQuotesType; /* unknown property attribute: ? */
@property (nonatomic) long long spellCheckingType; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType; /* unknown property attribute: ? */
@property long long writingToolsBehavior; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (unsigned int)PINLength;
- (void)_setKeypadState:(bool)arg1 animated:(bool)arg2;
- (void)_setPlaysKeyboardClicks:(bool)arg1;
- (void)activateKeypadView;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)clearPassword;
- (void)deactivateKeypadView;
- (void)dealloc;
- (void)delayForTextEntryAnimationsWithCompletion:(id /* block */)arg1;
- (void)deleteBackward;
- (void)dismissKeypad;
- (bool)hasText;
- (void)hideError;
- (void)hideFailedAttempts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)keypadContainerView;
- (void)layoutSubviews;
- (bool)numericKeyboard;
- (void)okButtonPressed;
- (id /* block */)passcodeOptionsHandler;
- (id)passcodeOptionsTitle;
- (id)password;
- (id)pinView;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
- (void)pinView:(id)arg1 pinValueChanged:(id)arg2;
- (bool)requiresKeyboard;
- (bool)resignFirstResponder;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardIsNumeric:(bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setKeyboardUserInteractionEnabled:(bool)arg1;
- (void)setKeypadContainerView:(id)arg1;
- (void)setNumericKeyboard:(bool)arg1;
- (void)setPINLength:(unsigned int)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(bool)arg2;
- (void)setPasscodeOptionsHandler:(id /* block */)arg1;
- (void)setPasscodeOptionsTitle:(id)arg1;
- (void)setPinView:(id)arg1;
- (void)setSimplePIN:(bool)arg1 requiresKeyboard:(bool)arg2;
- (void)setSimplePIN:(bool)arg1 requiresKeyboard:(bool)arg2 numericOnly:(bool)arg3;
- (void)setSimplePIN:(bool)arg1 requiresKeyboard:(bool)arg2 numericOnly:(bool)arg3 showsOptions:(bool)arg4;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(bool)arg3 animate:(bool)arg4;
- (void)showFailedAttempts:(long long)arg1;
- (bool)simplePIN;
- (void)slideToNewPasscodeField:(bool)arg1 requiresKeyboard:(bool)arg2 numericOnly:(bool)arg3;
- (void)slideToNewPasscodeField:(bool)arg1 requiresKeyboard:(bool)arg2 numericOnly:(bool)arg3 transition:(int)arg4 showsOptionsButton:(bool)arg5;
- (void)slideToNewPasscodeField:(bool)arg1 withKeyboard:(bool)arg2;
- (id)specifierLabel;
- (id)text;
- (void)transitionToSimplePIN:(bool)arg1 requiresKeyboard:(bool)arg2 numericOnly:(bool)arg3 showsOptions:(bool)arg4;
- (void)transitionViewDidComplete:(id)arg1;

@end
