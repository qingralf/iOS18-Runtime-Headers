/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSKeyboardExtensionController : PSListController {
    KSAboutKeyboardPrivacyController * _aboutPrivacyController;
    KSAddExtensionKeyboardController * _addExtensionKeyboardController;
    PSSpecifier * _lastInputModeSpecifier;
}

@property (nonatomic, retain) KSAboutKeyboardPrivacyController *aboutPrivacyController;
@property (nonatomic, retain) KSAddExtensionKeyboardController *addExtensionKeyboardController;
@property (nonatomic, retain) PSSpecifier *lastInputModeSpecifier;

+ (id)keyboardsForBundleID:(id)arg1;

- (id)aboutPrivacyController;
- (id)addExtensionKeyboardController;
- (void)dealloc;
- (id)isKeyboardEnabled:(id)arg1;
- (id)lastInputModeSpecifier;
- (void)setAboutPrivacyController:(id)arg1;
- (void)setAddExtensionKeyboardController:(id)arg1;
- (void)setKeyboardEnabled:(id)arg1 specifier:(id)arg2;
- (void)setLastInputModeSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLoad;

@end
