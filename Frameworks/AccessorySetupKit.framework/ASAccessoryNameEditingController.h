/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AccessorySetupKit.framework/AccessorySetupKit
 */

@interface ASAccessoryNameEditingController : PSListController <UITextFieldDelegate> {
    DADevice * _currentDevice;
    NSString * _deviceName;
    bool  _keyboardShownOnce;
    DASession * _session;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keyboardShownOnce;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getDeviceName:(id)arg1;
- (id)init;
- (bool)keyboardShownOnce;
- (void)keyboardWillShow:(id)arg1;
- (void)saveEditedName:(id)arg1 specifier:(id)arg2;
- (void)setKeyboardShownOnce:(bool)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
