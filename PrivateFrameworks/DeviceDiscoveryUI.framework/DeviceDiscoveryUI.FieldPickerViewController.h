/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceDiscoveryUI.framework/DeviceDiscoveryUI
 */

@interface DeviceDiscoveryUI.FieldPickerViewController : UINavigationController <CNContactCardFieldPickerDelegate> {
    void dismissHandler;
    void fieldSaveHandler;
    void presentedContact;
    void selectionFromContact;
}

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)contactCardFieldPicker:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;

@end