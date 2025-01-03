/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGuestsPinCodesViewController : HUItemTableViewController <HFPinCodeManagerObserver, HUPresentationDelegate, HUPresentationDelegateHost> {
    HFPinCodeManager * _pinCodeManager;
    unsigned long long  _settingsContext;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFPinCodeManager *pinCodeManager;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) unsigned long long settingsContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (void)hideSpinner;
- (id)initWithPinCodeManager:(id)arg1 settingsContext:(unsigned long long)arg2;
- (id)pinCodeManager;
- (id)presentationDelegate;
- (void)setPinCodeManager:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSettingsContext:(unsigned long long)arg1;
- (unsigned long long)settingsContext;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)showSpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
