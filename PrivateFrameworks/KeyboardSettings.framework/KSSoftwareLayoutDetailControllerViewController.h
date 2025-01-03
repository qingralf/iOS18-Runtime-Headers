/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSSoftwareLayoutDetailControllerViewController : PSListController {
    NSString * _inputMode;
    NSArray * _multilingualSet;
    bool  _showingLanguagesSection;
}

@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic, retain) NSArray *multilingualSet;
@property (nonatomic) bool showingLanguagesSection;

- (void)dealloc;
- (id)inputMode;
- (id)multilingualSet;
- (id)newSpecifiers;
- (id)newSpecifiersForChineseShuangpin;
- (id)newSpecifiersForChineseWubi;
- (void)reloadKeyboardSpecifiers;
- (void)reloadSoftwareLayoutSpecifiersWithMultilingualSet:(id)arg1;
- (void)removeInputModeInMultilingualSet:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setMultilingualSet:(id)arg1;
- (void)setShowingLanguagesSection:(bool)arg1;
- (void)setShuangpinType:(id)arg1;
- (void)setSoftwareLayout:(id)arg1;
- (void)setWubiStandard:(int)arg1;
- (bool)showingLanguagesSection;
- (id)specifiers;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateTitle;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
