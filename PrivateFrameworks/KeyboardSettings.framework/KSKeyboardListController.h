/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSKeyboardListController : PSListController <TIInputModeAssetStatusManagerListener> {
    KSAboutKeyboardPrivacyController * _aboutPrivacyController;
    PSSpecifier * _addNewInputModeSpecifier;
    bool  _emojiEnabled;
    PSSpecifier * _groupSeparator;
    NSMutableArray * _keyboardsArray;
    bool  _newKeyboardsAdded;
    unsigned long long  _numberOfEnabledKeyboards;
    unsigned long long  _totalKeyboardsCount;
    bool  deletingRow;
}

@property (nonatomic, retain) KSAboutKeyboardPrivacyController *aboutPrivacyController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *keyboardsArray;
@property (nonatomic) bool newKeyboardsAdded;
@property (readonly) Class superclass;

+ (id)attributedStringForSymbolName:(id)arg1;
+ (id)attributedTitleForSymbolName:(id)arg1 cellTitle:(id)arg2;
+ (id)availableInputModesForLanguage:(id)arg1;
+ (id)availableSoftwareLayoutsForBaseInputMode:(id)arg1;
+ (unsigned long long)count;
+ (id)displayNameForHardwareLayout:(id)arg1 inputMode:(id)arg2;
+ (id)inputModes;
+ (id)keyboardDisplayNameForIdentifier:(id)arg1;
+ (void)setInputModes:(id)arg1;
+ (bool)showAddNewKeyboardButton;
+ (id)softwareLayoutsForBaseInputMode:(id)arg1;
+ (id)supportedBaseInputModesForLanguage:(id)arg1;
+ (id)supportedInputModesForLanguage:(id)arg1;

- (void)_writeKeyboards;
- (id)aboutPrivacyController;
- (void)addNewKeyboards:(id)arg1;
- (bool)allKeyboardsEnabled;
- (void)dealloc;
- (void)emitNavigationEventForKeyboardListController;
- (id)init;
- (id)keyboardsArray;
- (void)manager:(id)arg1 didUpdateStatus:(long long)arg2 forInputMode:(id)arg3;
- (bool)newKeyboardsAdded;
- (void)reloadSpecifiers;
- (void)removeInputModeWithIdentifier:(id)arg1;
- (void)setAboutPrivacyController:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNewKeyboardsAdded:(bool)arg1;
- (id)specifierForExtensionInputMode:(id)arg1;
- (id)specifierForInputMode:(id)arg1;
- (id)specifierForMultilingualInputModes:(id)arg1;
- (id)specifiers;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (Class)tableViewClass;
- (void)updateEditButtonState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end