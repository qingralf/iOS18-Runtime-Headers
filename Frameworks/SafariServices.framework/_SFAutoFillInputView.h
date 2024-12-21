/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillInputView : UIInputView <PMSafariStreamlinedAutoFillViewControllerDelegate, PMSafariStreamlinedStrongPasswordViewControllerDelegate> {
    NSString * _credentialSource;
    long long  _currentInterfaceOrientation;
    NSString * _customTitle;
    <_SFAutoFillInputViewDelegate> * _delegate;
    NSMutableArray * _dynamicConstraints;
    UILabel * _explanationLabel;
    UIButton * _fillCredentialButton;
    NSLayoutConstraint * _heightConstraint;
    NSString * _hostString;
    UIButton * _keyboardButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeKeyboardSize;
    UIButton * _otherPasswordsButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitKeyboardSize;
    PMSafariStreamlinedAutoFillViewController * _streamlinedAutoFillViewController;
    PMSafariStreamlinedStrongPasswordViewController * _streamlinedStrongPasswordViewController;
    PMSafariAutoFillStrongPasswordIntroductionViewController * _strongPasswordIntroductionViewController;
    _SFTextSuggestion * _suggestion;
}

@property (nonatomic) <_SFAutoFillInputViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize { double x1; double x2; })_currentKeyboardSize;
- (void)_fillCredential:(id)arg1;
- (id)_initWithViewController:(id)arg1;
- (void)_preferredContentSizeCategoryDidChange;
- (void)_replaceContentsOfViewWithViewController:(id)arg1;
- (void)_showMorePasswords:(id)arg1;
- (void)_showStandardKeyboard:(id)arg1;
- (void)_updateDynamicConstraints;
- (void)_updateFillCredentialButtonLabelMetrics;
- (void)_updateKeyboardHeight;
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (id)delegate;
- (id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3 customTitle:(id)arg4;
- (id)initWithIntroductionViewController:(id)arg1;
- (id)initWithStreamlinedAutoFillViewController:(id)arg1 suggestion:(id)arg2;
- (id)initWithStreamlinedStrongPasswordViewController:(id)arg1;
- (void)replaceContentsOfViewWithStreamlinedStrongPasswordViewController:(id)arg1;
- (void)replaceContentsOfViewWithStrongPasswordIntroductionViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)streamlinedAutoFillViewControllerFillCredential:(id)arg1;
- (void)streamlinedAutoFillViewControllerShowKeyboard:(id)arg1;
- (void)streamlinedAutoFillViewControllerShowOtherPasswords:(id)arg1;
- (void)streamlinedStrongPasswordViewController:(id)arg1 shouldFillStrongPasswordWithFormat:(unsigned long long)arg2;
- (void)streamlinedStrongPasswordViewControllerDeclinedStrongPassword:(id)arg1;
- (void)streamlinedStrongPasswordViewControllerShowKeyboard:(id)arg1;
- (void)streamlinedStrongPasswordViewControllerShowOtherPasswords:(id)arg1;
- (void)updateConstraints;
- (void)updateSuggestionIfNecessary:(id)arg1;

@end