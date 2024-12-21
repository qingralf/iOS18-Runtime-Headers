/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUAmbientNowPlayingView : UIView <MRUSliderObserver, MRUVisualStylingProviderObserver> {
    MRUFlippingArtworkView * _artworkView;
    NSLayoutConstraint * _artworkViewBottomConstraint;
    NSLayoutConstraint * _artworkViewTopConstraint;
    UIView * _backgroundView;
    UILayoutGuide * _boundsLayoutGuide;
    NSLayoutConstraint * _boundsLayoutGuideLeadingConstraint;
    NSLayoutConstraint * _boundsLayoutGuideTrailingConstraint;
    MRUTransportButton * _centerButton;
    MRUNowPlayingLabelView * _labelView;
    UILayoutGuide * _labelViewLayoutGuide;
    NSLayoutConstraint * _labelViewLayoutGuideHeightConstraint;
    MRUTransportButton * _leftButton;
    UILayoutGuide * _leftButtonLayoutGuide;
    UIImageSymbolConfiguration * _leftRightTransportButtonsSymbolConfiguration;
    bool  _onScreen;
    MRUTransportButton * _rightButton;
    UILayoutGuide * _rightButtonLayoutGuide;
    MRUTransportButton * _routingButton;
    UIImageSymbolConfiguration * _routingButtonSymbolConfiguration;
    UIImageSymbolConfiguration * _routingButtonSymbolConfigurationSmall;
    UIView * _shadowView;
    MRUVisualStylingProvider * _stylingProvider;
    MRUNowPlayingTimeControlsView * _timeControlsView;
    UILayoutGuide * _transportControlsLayoutGuide;
    NSLayoutConstraint * _transportControlsLayoutGuideBottomConstraint;
    NSLayoutConstraint * _transportControlsLayoutGuideTopConstraint;
    MRUAmbientNowPlayingVolumeControlsView * _volumeControlsView;
}

@property (nonatomic, readonly) MRUFlippingArtworkView *artworkView;
@property (nonatomic, retain) NSLayoutConstraint *artworkViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *artworkViewTopConstraint;
@property (nonatomic) UIView *backgroundView;
@property (nonatomic, retain) UILayoutGuide *boundsLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *boundsLayoutGuideLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *boundsLayoutGuideTrailingConstraint;
@property (nonatomic, readonly) MRUTransportButton *centerButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUNowPlayingLabelView *labelView;
@property (nonatomic, retain) UILayoutGuide *labelViewLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *labelViewLayoutGuideHeightConstraint;
@property (nonatomic, readonly) MRUTransportButton *leftButton;
@property (nonatomic, retain) UILayoutGuide *leftButtonLayoutGuide;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, readonly) MRUTransportButton *rightButton;
@property (nonatomic, retain) UILayoutGuide *rightButtonLayoutGuide;
@property (nonatomic, readonly) MRUTransportButton *routingButton;
@property (nonatomic, retain) UIView *shadowView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MRUNowPlayingTimeControlsView *timeControlsView;
@property (nonatomic, retain) UILayoutGuide *transportControlsLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *transportControlsLayoutGuideBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *transportControlsLayoutGuideTopConstraint;
@property (nonatomic, readonly) MRUAmbientNowPlayingVolumeControlsView *volumeControlsView;

- (void).cxx_destruct;
- (id)artworkView;
- (id)artworkViewBottomConstraint;
- (id)artworkViewTopConstraint;
- (id)backgroundView;
- (id)boundsLayoutGuide;
- (id)boundsLayoutGuideLeadingConstraint;
- (id)boundsLayoutGuideTrailingConstraint;
- (id)centerButton;
- (void)createConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOnScreen;
- (id)labelView;
- (id)labelViewLayoutGuide;
- (id)labelViewLayoutGuideHeightConstraint;
- (void)layoutSubviews;
- (id)leftButton;
- (id)leftButtonLayoutGuide;
- (id)rightButton;
- (id)rightButtonLayoutGuide;
- (id)routingButton;
- (void)safeAreaInsetsDidChange;
- (void)setArtworkViewBottomConstraint:(id)arg1;
- (void)setArtworkViewTopConstraint:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBoundsLayoutGuide:(id)arg1;
- (void)setBoundsLayoutGuideLeadingConstraint:(id)arg1;
- (void)setBoundsLayoutGuideTrailingConstraint:(id)arg1;
- (void)setLabelViewLayoutGuide:(id)arg1;
- (void)setLabelViewLayoutGuideHeightConstraint:(id)arg1;
- (void)setLeftButtonLayoutGuide:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setRightButtonLayoutGuide:(id)arg1;
- (void)setRoutingButtonImage:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTransportControls:(id)arg1;
- (void)setTransportControlsLayoutGuide:(id)arg1;
- (void)setTransportControlsLayoutGuideBottomConstraint:(id)arg1;
- (void)setTransportControlsLayoutGuideTopConstraint:(id)arg1;
- (id)shadowView;
- (void)sliderInteractionWillExtend:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)stylingProvider;
- (id)timeControlsView;
- (id)transportControlsLayoutGuide;
- (id)transportControlsLayoutGuideBottomConstraint;
- (id)transportControlsLayoutGuideTopConstraint;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (id)volumeControlsView;

@end