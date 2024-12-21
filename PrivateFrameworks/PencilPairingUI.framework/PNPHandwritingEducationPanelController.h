/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

@interface PNPHandwritingEducationPanelController : PNPWelcomeController <PencilHandwritingEducationViewControllerDelegate> {
    bool  _didAdjustHeightForWidth;
    PencilHandwritingEducationViewController * _educationController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _forcedContentOffset;
    NSLayoutConstraint * _forcedHeightLayoutConstraint;
    bool  _isAnimating;
    NSTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAdjustHeightForWidth;
@property (nonatomic, retain) PencilHandwritingEducationViewController *educationController;
@property (nonatomic) struct CGPoint { double x1; double x2; } forcedContentOffset;
@property (nonatomic, retain) NSLayoutConstraint *forcedHeightLayoutConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimating;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *watchdogTimer;

+ (id)_controllerWithType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)cancelWatchdogTimer;
- (void)dealloc;
- (bool)didAdjustHeightForWidth;
- (id)educationController;
- (void)educationController:(id)arg1 didChangeAnimationState:(bool)arg2;
- (id)educationControllerButtonTray:(id)arg1;
- (void)educationControllerDidChangePanel:(id)arg1;
- (void)educationControllerRequestedDismissal:(id)arg1;
- (void)educationControllerWillReplay:(id)arg1;
- (struct CGPoint { double x1; double x2; })forcedContentOffset;
- (id)forcedHeightLayoutConstraint;
- (bool)isAnimating;
- (void)scheduleWatchdogTimer;
- (void)setDidAdjustHeightForWidth:(bool)arg1;
- (void)setEducationController:(id)arg1;
- (void)setForcedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setForcedHeightLayoutConstraint:(id)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setIsAnimating:(bool)arg1 animated:(bool)arg2;
- (void)setUpForIsAnimating:(bool)arg1;
- (void)setWatchdogTimer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)watchdogTimer;

@end