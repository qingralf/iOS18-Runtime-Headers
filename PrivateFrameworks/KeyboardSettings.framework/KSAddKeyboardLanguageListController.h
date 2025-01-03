/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSAddKeyboardLanguageListController : PSListController <UISearchBarDelegate, UITextViewDelegate> {
    KSAboutKeyboardPrivacyController * _aboutPrivacyController;
    bool  _returnSuggestedInputModes;
    NSOperationQueue * _searchQueue;
    NSString * _searchText;
    NSArray * _suggestedInputModes;
}

@property (nonatomic, retain) KSAboutKeyboardPrivacyController *aboutPrivacyController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool returnSuggestedInputModes;
@property (nonatomic, retain) NSOperationQueue *searchQueue;
@property (nonatomic, retain) NSString *searchText;
@property (nonatomic, readonly) NSArray *suggestedInputModes;
@property (readonly) Class superclass;

- (id)aboutPrivacyController;
- (void)cancelButtonTapped;
- (void)createAboutPrivacyControllerIfNeeded:(id)arg1;
- (void)dealloc;
- (void)dismissForDone;
- (void)emitNavigationEventForAddKeyboardLanguageListController;
- (id)generateSpecifiers;
- (void)handleSoleInputModeAddition:(id)arg1;
- (id)init;
- (bool)inputMode:(id)arg1 matchesPredicate:(id)arg2;
- (bool)returnSuggestedInputModes;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)searchQueue;
- (id)searchText;
- (void)setAboutPrivacyController:(id)arg1;
- (void)setReturnSuggestedInputModes:(bool)arg1;
- (void)setSearchQueue:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)showAddExtensionKeyboardSheet:(id)arg1;
- (void)showAddSystemKeyboardSheet:(id)arg1;
- (id)specifiers;
- (id)suggestedInputModes;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (long long)tableViewStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willResume;

@end
