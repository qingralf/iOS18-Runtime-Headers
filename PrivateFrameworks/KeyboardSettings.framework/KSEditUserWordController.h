/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSEditUserWordController : PSListController <UITextFieldDelegate> {
    KSUserWordsManager * _dictionaryController;
    NSString * _footerTitle;
    PSSpecifier * _groupSpecifier;
    UIAlertController * _keyboardAlertController;
    _KSTextReplacementEntry * _nextEntry;
    _KSTextReplacementEntry * _oldEntry;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) KSUserWordsManager *dictionaryController;
@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIAlertController *keyboardAlertController;
@property (nonatomic, copy) _KSTextReplacementEntry *nextEntry;
@property (nonatomic, copy) _KSTextReplacementEntry *oldEntry;
@property (nonatomic, copy) NSString *shortcut;
@property (nonatomic, readonly) UITextField *shortcutTextField;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *target;
@property (nonatomic, readonly) UITextField *targetTextField;

+ (id)propertyTitles;
+ (bool)wantsToDelegate:(id)arg1;

- (void)_dismiss;
- (void)_handleValidationWithError:(long long)arg1;
- (bool)_shouldSetDefaultFirstResponder;
- (void)_unpackTextReplacementError:(id)arg1;
- (void)dealloc;
- (id)dictionaryController;
- (id)footerTitle;
- (id)groupSpecifier;
- (id)init;
- (id)initWithUserWord:(id)arg1;
- (id)keyboardAlertController;
- (id)nextEntry;
- (id)oldEntry;
- (id)originalDelegateForTextField:(id)arg1;
- (void)save;
- (void)setDictionaryController:(id)arg1;
- (void)setFooterTitle:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setKeyboardAlertController:(id)arg1;
- (void)setNextEntry:(id)arg1;
- (void)setOldEntry:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)shortcut;
- (id)shortcutTextField;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)target;
- (id)targetTextField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)validationErrorStringFromError:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
