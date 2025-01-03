/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUNowPlayingTransportControlsView : UIView {
    MRUTransportButton * _centerButton;
    double  _contentScale;
    <MRUNowPlayingTransportControlsViewDelegate> * _delegate;
    bool  _dimmed;
    long long  _layout;
    MRUTransportButton * _leadingButton;
    MRUTransportButton * _leftButton;
    MRUTransportButton * _rightButton;
    MRUTransportButton * _routingButton;
    bool  _showRoutingButton;
    bool  _showTVRemoteButton;
    MRUVisualStylingProvider * _stylingProvider;
    MRUTransportControls * _transportControls;
}

@property (nonatomic, retain) MRUTransportButton *centerButton;
@property (nonatomic) double contentScale;
@property (nonatomic) <MRUNowPlayingTransportControlsViewDelegate> *delegate;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic) long long layout;
@property (nonatomic, retain) MRUTransportButton *leadingButton;
@property (nonatomic, retain) MRUTransportButton *leftButton;
@property (nonatomic, retain) MRUTransportButton *rightButton;
@property (nonatomic, readonly) MRUTransportButton *routingButton;
@property (nonatomic) bool showRoutingButton;
@property (nonatomic) bool showTVRemoteButton;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, retain) MRUTransportControls *transportControls;
@property (nonatomic) bool useColorFilter;

- (void).cxx_destruct;
- (id)centerButton;
- (void)configureLeadingButton;
- (double)contentScale;
- (id)delegate;
- (void)didSelectRoutingButton:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDimmed;
- (long long)layout;
- (void)layoutSubviews;
- (id)leadingButton;
- (id)leftButton;
- (id)rightButton;
- (id)routingButton;
- (void)setCenterButton:(id)arg1;
- (void)setContentScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setLayout:(long long)arg1;
- (void)setLeadingButton:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setShowRoutingButton:(bool)arg1;
- (void)setShowTVRemoteButton:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTransportControls:(id)arg1;
- (void)setUseColorFilter:(bool)arg1;
- (bool)showRoutingButton;
- (bool)showTVRemoteButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (id)transportControls;
- (void)updateImageConfiguration;
- (void)updateVisibility;
- (bool)useColorFilter;

@end
