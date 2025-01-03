/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerMediaModuleController : HUItemModuleController <HUMediaSelectionViewControllerDelegate> {
    <HUTriggerMediaModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUTriggerMediaModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)mediaSelectionViewController:(id)arg1 messageForMediaPickerUnavailableReason:(long long)arg2;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end
