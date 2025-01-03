/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPencilSqueezeController : NSObject <PKImageWandOnboardingControllerDelegate, PKPencilSqueezeAnalyticsControllerDelegate, UIGestureRecognizerDelegate, UIPencilInteractionDelegatePrivate, UIPopoverPresentationControllerDelegate> {
    PKPencilSqueezeAnalyticsController * __analyticsController;
    PKAutoRefineSettingsObserver * _autoRefineSettingsObserver;
    double  _azimuth;
    UIView * _containerView;
    PKPencilSqueezeContainerViewOverlay * _containerViewOverlay;
    UILayoutGuide * _contentLayoutGuide;
    NSLayoutConstraint * _contentLayoutGuideHeightConstraint;
    NSLayoutConstraint * _contentLayoutGuideWidthConstraint;
    <PKPencilSqueezeControllerDelegate> * _delegate;
    double  _hidePaletteDelay;
    UIHoverGestureRecognizer * _hoverGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hoverLocation;
    PKHoverSettings * _hoverSettings;
    bool  _hovering;
    PKImageWandOnboardingController * _imageWandOnboardingController;
    bool  _isHidingPaletteAfterDelay;
    double  _lastHoverLocationSavedTimestamp;
    PKSqueezePaletteView * _paletteView;
    NSLayoutConstraint * _paletteViewCenterXConstraint;
    NSLayoutConstraint * _paletteViewCenterYConstraint;
    PKPencilSqueezeControllerPaletteViewDelegateProxy * _paletteViewDelegateProxy;
    PKSqueezePaletteViewPresentationHandle * _paletteViewPresentationHandle;
    struct CGSize { 
        double width; 
        double height; 
    }  _paletteViewSize;
    bool  _paletteViewVisible;
    bool  _paletteViewVisibleBeforeSqueezeBegan;
    PKPencilInteraction * _pencilInteraction;
    PKUIPencilInteractionObserver * _pencilInteractionObserver;
    UIViewController * _rootViewController;
    bool  _squeezeBeganOnPalette;
    PKTextEffectsWindowObserver * _textEffectsWindowObserver;
    PKPencilSqueezeUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleHandwritingEducationPaneSettingsDidChange:(id)arg1;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (void)_handleSceneDidEnterBackgroundNotification:(id)arg1;
- (void)_handleSceneWillEnterForegroundNotification:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)imageWandOnboardingControllerDidHideView:(id)arg1;
- (void)pencilInteraction:(id)arg1 didReceiveSqueeze:(id)arg2;
- (void)pencilInteraction:(id)arg1 didReceiveTap:(id)arg2;
- (id)pencilSqueezeAnalyticsControllerHoverSettings:(id)arg1;
- (double)pencilSqueezeAnalyticsControllerHoverZOffset:(id)arg1;
- (bool)pencilSqueezeAnalyticsControllerIsHovering:(id)arg1;

@end
