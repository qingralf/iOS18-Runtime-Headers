/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRQuickActionEditingViewController : UIViewController {
    <PRQuickActionEditingViewControllerDelegate> * _delegate;
    CHSWidgetExtensionProvider * _extensionProvider;
    bool  _galleryPresented;
    CCUISConfiguredControl * _leadingControl;
    CSProminentButtonsView * _prominentButtonsView;
    CCUISConfiguredControl * _trailingControl;
}

@property (nonatomic) <PRQuickActionEditingViewControllerDelegate> *delegate;
@property (getter=isGalleryPresented, nonatomic) bool galleryPresented;
@property (nonatomic, retain) CCUISConfiguredControl *leadingControl;
@property (nonatomic, retain) CSProminentButtonsView *prominentButtonsView;
@property (nonatomic, retain) CCUISConfiguredControl *trailingControl;

- (void).cxx_destruct;
- (id)_configureEditingReticleViewWithTapGesture:(id)arg1;
- (id)_configureRemoveButtonWithAction:(id)arg1;
- (id)_controlViewForControl:(id)arg1;
- (void)_handleRemoveButtonActionForQuickActionPosition:(long long)arg1;
- (void)_leadingActionDidFire;
- (void)_presentWidgetIntentConfigurationForControlWithPosition:(long long)arg1;
- (void)_trailingActionDidFire;
- (void)_updateActiveReticleForPosition:(long long)arg1;
- (void)_updateButtonsVisibility;
- (id)_validateControl:(id)arg1;
- (id)delegate;
- (id)initWithQuickActionsConfiguration:(id)arg1;
- (bool)isGalleryPresented;
- (id)leadingControl;
- (id)prominentButtonsView;
- (void)setDelegate:(id)arg1;
- (void)setGalleryPresented:(bool)arg1;
- (void)setLeadingControl:(id)arg1;
- (void)setProminentButtonsView:(id)arg1;
- (void)setTrailingControl:(id)arg1;
- (id)trailingControl;
- (void)validateControls;
- (void)viewDidLoad;

@end
