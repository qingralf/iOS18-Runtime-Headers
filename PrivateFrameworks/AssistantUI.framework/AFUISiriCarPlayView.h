/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriCarPlayView : UIView <AFUISiriContent, SUICEdgeLightController, SUICOrbViewControlling> {
    AFUITouchPassThroughView * _edgeLightBackgroundView;
    SUICEdgeLightMaskMetalLayer * _edgeLightMask;
    bool  _edgeLightMinimumPowerEnabled;
    bool  _edgeLightOffAndInitialized;
    SASRequestOptions * _lastRequestOptions;
    UIView * _latencyLightView;
    bool  _launchIntoEdgeLightAnimation;
    long long  _mode;
    UIView * _orbContainerView;
    SUICOrbView * _orbView;
    UIView * _remoteContentView;
    <AFUISiriContentDelegate> * _siriContentDelegate;
    long long  _siriSessionState;
    UIView * _siriXIndicatorView;
    CRSUIStatusBarStyleAssertion * _statusBarStyleAssertion;
    UIView * _systemLightView;
    <AFUISiriViewDelegate> * _viewDelegate;
    SRUIFPlatformHostingInstrumentationHandler * _viewHostingInstrumentationHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIView *remoteContentView;
@property (nonatomic) long long siriSessionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_SUICOrbViewModeGetDescription:(long long)arg1;
- (void)_animateEdgeLightToOffWithCompletion:(id /* block */)arg1;
- (void)_animateEdgeLightToOn;
- (void)_animateLatencyLightToOff;
- (void)_animateLatencyLightToOn;
- (bool)_deviceSupportsAI;
- (void)_orbHeldWithGestureRecognizer:(id)arg1;
- (void)_orbTappedWithGestureRecognizer:(id)arg1;
- (long long)_orbViewModeForCurrentSessionState;
- (void)_setupContentViews;
- (void)_setupEdgeLightView;
- (void)_setupLatencyLightView;
- (void)_setupOrbView;
- (void)_updateEdgeLightBackgroundColor:(id)arg1;
- (void)_updateEdgeLightToMatchSessionState:(long long)arg1;
- (void)_updateOrbViewModeToMatchSessionState;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)arg1;
- (void)animateOutEdgeLight;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewDelegate:(id)arg2 instrumentationHandler:(id)arg3;
- (void)initializeEdgeLightForRequest:(id)arg1;
- (void)layoutSubviews;
- (long long)mode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })orbViewRectInCarplayView;
- (id)remoteContentView;
- (void)removeFromSuperview;
- (void)resetOrbViewToSiriSessionState;
- (void)setAuxiliaryViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setInputPowerLevel:(float)arg1;
- (void)setMode:(long long)arg1;
- (void)setOutputPowerLevel:(float)arg1;
- (void)setRemoteContentView:(id)arg1;
- (void)setRequestHandlingStatus:(unsigned long long)arg1;
- (void)setSiriContentDelegate:(id)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (void)setupEdgeLightBackgroundView;
- (long long)siriSessionState;
- (id)siriXIndicatorView;
- (void)updateVolumeInputdB:(float)arg1;

@end