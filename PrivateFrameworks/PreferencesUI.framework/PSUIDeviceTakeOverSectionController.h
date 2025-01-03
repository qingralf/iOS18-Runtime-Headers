/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIDeviceTakeOverSectionController : PSListController {
    PSUIDeviceTakeOverController * _dtoController;
    bool  _isFindMyEnabled;
}

@property (nonatomic, retain) PSUIDeviceTakeOverController *dtoController;
@property (nonatomic) bool isFindMyEnabled;

- (void).cxx_destruct;
- (void)addSpecifiers:(id)arg1 toExistingSpecifiers:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)disableDTO;
- (id)dtoController;
- (void)enableDTO;
- (void)ensureAccountSecurityIsSufficientWithCompletion:(id /* block */)arg1;
- (id)getSpecifiersForSecurityOptionsGroup:(id)arg1;
- (id)getSpecifiersForToggleGroup:(id)arg1;
- (id)getStatus;
- (id)init;
- (bool)isFindMyEnabled;
- (void)openLearnMoreLink;
- (void)performPreEnableDTOChecksWithCompletion:(id /* block */)arg1;
- (void)printSpecifiersDescription:(id)arg1;
- (void)proceedToDisableDTO;
- (void)proceedToEnableDTO;
- (void)reloadEntirePane;
- (void)reloadSpecifiersPostStatusToggle;
- (void)setDtoController:(id)arg1;
- (void)setIsFindMyEnabled:(bool)arg1;
- (void)setUpFindMyEnablementStatus;
- (bool)shouldIgnoreSecurityOptionsGroupRowSelectionFor:(id)arg1;
- (bool)shouldIgnoreToggleGroupRowSelectionFor:(id)arg1;
- (void)showAlertForFailedToUpdateSecurityDelay;
- (void)showAlertForFindMyIsDisabledWithCompletion:(id /* block */)arg1;
- (void)showDTOAlertForFailureToToggleToState:(bool)arg1 withRatchetError:(unsigned long long)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)toggleStatusTo:(id)arg1;
- (void)toggleToStrictMode:(bool)arg1;
- (void)updateFooterForSecurityOptionsGroupSpecifier:(id)arg1;
- (void)updateFooterForToggleGroupSpecifier:(id)arg1;
- (void)userUpdatedSecurityOptionTo:(id)arg1;

@end
