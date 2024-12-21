/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate> {
    NSArray * _alternateConstraintsForAXLargerTextSizes;
    UIBarButtonItem * _cancelButton;
    id /* block */  _completionHandler;
    NSArray * _defaultConstraints;
    bool  _didAttemptToSubmitWithoutHint;
    bool  _didAuthenticateWithBiometrics;
    UIBarButtonItem * _doneButton;
    UIView * _headerBackground;
    UILabel * _headerLabel;
    UILabel * _hintLabel;
    UITextField * _hintTextField;
    long long  _incorrectPasswordAttempts;
    bool  _isInSettings;
    bool  _isSettingInitialPassword;
    bool  _isSetupForChangePassword;
    NSLayoutConstraint * _oldPasswordHeightConstraint;
    UILabel * _oldPasswordLabel;
    UITextField * _oldPasswordTextField;
    NSArray * _orderedTextFields;
    ICAccountPassphraseManager * _passphraseManager;
    UILabel * _passwordLabel;
    UITextField * _passwordTextField;
    ICPasswordUtilities * _passwordUtilities;
    UIScrollView * _scrollView;
    ICScrollViewKeyboardResizer * _scrollViewResizer;
    NSArray * _textBackgroundViews;
    bool  _usingLargerAXSizes;
    UILabel * _verifyLabel;
    UITextField * _verifyTextField;
    UILabel * _warningLabel;
}

@property (nonatomic, retain) NSArray *alternateConstraintsForAXLargerTextSizes;
@property (nonatomic) UIBarButtonItem *cancelButton;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSArray *defaultConstraints;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAttemptToSubmitWithoutHint;
@property (nonatomic) bool didAuthenticateWithBiometrics;
@property (nonatomic) UIBarButtonItem *doneButton;
@property (nonatomic, readonly) UITextField *firstResponderTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *headerBackground;
@property (nonatomic) UILabel *headerLabel;
@property (nonatomic) UILabel *hintLabel;
@property (nonatomic) UITextField *hintTextField;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (nonatomic) bool isInSettings;
@property (nonatomic) bool isSettingInitialPassword;
@property (nonatomic) bool isSetupForChangePassword;
@property (nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint;
@property (nonatomic) UILabel *oldPasswordLabel;
@property (nonatomic) UITextField *oldPasswordTextField;
@property (nonatomic, retain) NSArray *orderedTextFields;
@property (nonatomic, retain) ICAccountPassphraseManager *passphraseManager;
@property (nonatomic, readonly) bool passwordAndVerifyTextFieldsMatch;
@property (nonatomic) UILabel *passwordLabel;
@property (nonatomic) UITextField *passwordTextField;
@property (nonatomic, retain) ICPasswordUtilities *passwordUtilities;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, retain) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *textBackgroundViews;
@property (nonatomic) bool usingLargerAXSizes;
@property (nonatomic) UILabel *verifyLabel;
@property (nonatomic) UITextField *verifyTextField;
@property (nonatomic) UILabel *warningLabel;

- (void).cxx_destruct;
- (id)alternateConstraintsForAXLargerTextSizes;
- (id)cancelButton;
- (void)cancelButtonPressed:(id)arg1;
- (id /* block */)completionHandler;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (id)defaultConstraints;
- (bool)didAttemptToSubmitWithoutHint;
- (bool)didAuthenticateWithBiometrics;
- (id)disclaimerAttributedString;
- (void)dismissKeyboardIfNeeded;
- (void)dismissWithResult:(unsigned long long)arg1;
- (id)doneButton;
- (void)doneButtonPressed:(id)arg1;
- (id)firstResponderTextField;
- (id)headerBackground;
- (id)headerLabel;
- (id)hintLabel;
- (id)hintTextField;
- (long long)incorrectPasswordAttempts;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)isInSettings;
- (bool)isSettingInitialPassword;
- (bool)isSetupForChangePassword;
- (id)keyboardResizerScrollView;
- (id)oldPasswordHeightConstraint;
- (id)oldPasswordLabel;
- (id)oldPasswordTextField;
- (id)orderedTextFields;
- (id)passphraseManager;
- (bool)passwordAndVerifyTextFieldsMatch;
- (id)passwordLabel;
- (id)passwordTextField;
- (id)passwordUtilities;
- (void)registerForTraitChanges;
- (void)resetTextFields;
- (id)scrollView;
- (id)scrollViewResizer;
- (void)setAlternateConstraintsForAXLargerTextSizes:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDefaultConstraints:(id)arg1;
- (void)setDidAttemptToSubmitWithoutHint:(bool)arg1;
- (void)setDidAuthenticateWithBiometrics:(bool)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setHeaderBackground:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHintLabel:(id)arg1;
- (void)setHintTextField:(id)arg1;
- (void)setIncorrectPasswordAttempts:(long long)arg1;
- (void)setIsInSettings:(bool)arg1;
- (void)setIsSettingInitialPassword:(bool)arg1;
- (void)setIsSetupForChangePassword:(bool)arg1;
- (void)setOldPasswordHeightConstraint:(id)arg1;
- (void)setOldPasswordLabel:(id)arg1;
- (void)setOldPasswordTextField:(id)arg1;
- (void)setOrderedTextFields:(id)arg1;
- (void)setPassphraseManager:(id)arg1;
- (void)setPasswordLabel:(id)arg1;
- (void)setPasswordTextField:(id)arg1;
- (void)setPasswordUtilities:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewResizer:(id)arg1;
- (void)setTextBackgroundViews:(id)arg1;
- (void)setUpForAddingPasswordWithAccount:(id)arg1;
- (void)setUpForChangePasswordWithAccount:(id)arg1 didAuthenticateWithBiometrics:(bool)arg2;
- (void)setUpNavigationBar;
- (void)setUsingLargerAXSizes:(bool)arg1;
- (void)setVerifyLabel:(id)arg1;
- (void)setVerifyTextField:(id)arg1;
- (void)setWarningLabel:(id)arg1;
- (void)setupAccessibility;
- (id)textBackgroundViews;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateFonts;
- (bool)usingLargerAXSizes;
- (bool)validateInput;
- (id)verifyLabel;
- (id)verifyTextField;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)warningLabel;

@end