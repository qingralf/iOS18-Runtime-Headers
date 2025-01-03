/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUActivityMirroringViewController : UIViewController <MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding> {
    long long  _activeLayoutMode;
    MRUMirroringController * _mirroringController;
    NSString * associatedScenePersistenceIdentifier;
}

@property (nonatomic) long long activeLayoutMode;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *associatedScenePersistenceIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool attachedMinimalViewRequiresZeroPadding; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesToSuppress; /* unknown property attribute: ? */
@property (nonatomic) bool canRequestAlertingAssertion; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentRole;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *elementIdentifier; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIColor *keyColor; /* unknown property attribute: ? */
@property (nonatomic, readonly) BSAction *launchAction; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSURL *launchURL; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long maximumLayoutMode;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long minimalViewLayoutAxis; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long minimumLayoutMode; /* unknown property attribute: ? */
@property (nonatomic, retain) MRUMirroringController *mirroringController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredCustomAspectRatio; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long preferredCustomLayout; /* unknown property attribute: ? */
@property (nonatomic, readonly) double preferredHeightForBottomSafeArea; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) bool prefersFixedPortraitOrientation; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long presentationBehaviors; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool preventsAutomaticDismissal; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool preventsInteractiveDismissal; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long statusBarStyleOverridesToSuppress; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBUISystemApertureElement> *systemApertureElement; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView; /* unknown property attribute: ? */
@property (nonatomic, retain) MRUActivityMirroringView *view;
@property (nonatomic, retain) MRUActivityMirroringView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)activeLayoutMode;
- (id)associatedScenePersistenceIdentifier;
- (id)backgroundActivitiesToSuppress;
- (long long)contentRole;
- (id)elementIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyColor;
- (id)leadingView;
- (void)loadView;
- (long long)maximumLayoutMode;
- (id)minimalView;
- (id)mirroringController;
- (void)mirroringController:(id)arg1 didChangeOutputDevice:(id)arg2;
- (double)preferredHeightForBottomSafeArea;
- (long long)preferredLayoutMode;
- (unsigned long long)presentationBehaviors;
- (void)setActiveLayoutMode:(long long)arg1;
- (void)setMirroringController:(id)arg1;
- (void)stopMirroring:(id)arg1;
- (id)systemApertureElementViewController;
- (id)trailingView;
- (void)updateState;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
