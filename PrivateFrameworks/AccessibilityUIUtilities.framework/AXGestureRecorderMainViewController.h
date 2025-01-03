/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

@interface AXGestureRecorderMainViewController : PSViewController <AXGestureRecorderControlsViewDelegate, AXGestureRecorderViewControllerDelegate, UITextFieldDelegate> {
    id  _appDidResignActiveNotificationHandlerToken;
    AXGestureRecorderControlsView * _controlsView;
    <AXGestureRecorderMainViewControllerDelegate> * _delegate;
    AXAssertion * _disableSystemGesturesAssertion;
    AXGestureRecorderViewController * _gestureRecorderViewController;
    double  _gestureRecordingDidStartTimeInterval;
    bool  _inReplayMode;
    UILabel * _instructionsLabel;
    bool  _isDisplayLinkInEffect;
    unsigned long long  _leftButtonIdentifier;
    UIView * _lineView;
    long long  _recorderType;
    unsigned long long  _rightButtonIdentifier;
    UIBarButtonItem * _saveButton;
    AXGestureRecorderStyleProvider * _styleProvider;
    UIView * _topView;
}

@property (nonatomic) id appDidResignActiveNotificationHandlerToken;
@property (nonatomic, retain) AXGestureRecorderControlsView *controlsView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AXGestureRecorderMainViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXAssertion *disableSystemGesturesAssertion;
@property (nonatomic, retain) AXGestureRecorderViewController *gestureRecorderViewController;
@property (nonatomic) double gestureRecordingDidStartTimeInterval;
@property (readonly) unsigned long long hash;
@property (getter=isInReplayMode, nonatomic) bool inReplayMode;
@property (nonatomic, retain) UILabel *instructionsLabel;
@property (nonatomic) bool isDisplayLinkInEffect;
@property (nonatomic) unsigned long long leftButtonIdentifier;
@property (nonatomic, retain) UIView *lineView;
@property (nonatomic) long long recorderType;
@property (nonatomic) unsigned long long rightButtonIdentifier;
@property (nonatomic, retain) UIBarButtonItem *saveButton;
@property (nonatomic, retain) AXGestureRecorderStyleProvider *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topView;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (bool)_canSaveGestureWithName:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_clearProgressView;
- (void)_commonInit;
- (id)_defaultInstructionalText;
- (void)_didSaveGestureWithName:(id)arg1;
- (void)_enterReplayMode;
- (void)_enterWaitingMode;
- (void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(bool)arg2 color:(int*)arg3 title:(id*)arg4;
- (void)_hide;
- (void)_hideChrome;
- (void)_hideChromeButtonTapped:(id)arg1;
- (bool)_ignoreAppSupportedOrientations;
- (bool)_isForRealTimeGesture;
- (void)_manageDisplayLinkManager:(bool)arg1;
- (void)_releaseOutlets;
- (void)_reset;
- (void)_saveButtonTapped:(id)arg1;
- (void)_savePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_saveReplayableGesture;
- (void)_saveWithMessage:(id)arg1;
- (void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(bool)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(bool)arg4 animate:(bool)arg5 completion:(id /* block */)arg6;
- (void)_unhideChrome;
- (void)_updateProgressView:(id)arg1;
- (id)appDidResignActiveNotificationHandlerToken;
- (id)controlsView;
- (void)dealloc;
- (id)delegate;
- (id)disableSystemGesturesAssertion;
- (void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (id)gestureRecorderViewController;
- (void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)gestureRecorderViewController:(id)arg1 setChromeVisible:(bool)arg2;
- (void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1;
- (void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1;
- (double)gestureRecordingDidStartTimeInterval;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)instructionsLabel;
- (bool)isChromeVisibleForGestureRecorderViewController:(id)arg1;
- (bool)isDisplayLinkInEffect;
- (bool)isInReplayMode;
- (unsigned long long)leftButtonIdentifier;
- (id)lineView;
- (void)loadView;
- (double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1;
- (long long)recorderType;
- (unsigned long long)rightButtonIdentifier;
- (id)saveButton;
- (void)setAppDidResignActiveNotificationHandlerToken:(id)arg1;
- (void)setControlsView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableSystemGesturesAssertion:(id)arg1;
- (void)setGestureRecorderViewController:(id)arg1;
- (void)setGestureRecordingDidStartTimeInterval:(double)arg1;
- (void)setInReplayMode:(bool)arg1;
- (void)setInstructionsLabel:(id)arg1;
- (void)setIsDisplayLinkInEffect:(bool)arg1;
- (void)setLeftButtonIdentifier:(unsigned long long)arg1;
- (void)setLineView:(id)arg1;
- (void)setRecorderType:(long long)arg1;
- (void)setRightButtonIdentifier:(unsigned long long)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTopView:(id)arg1;
- (id)styleProvider;
- (unsigned long long)supportedInterfaceOrientations;
- (id)topView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
