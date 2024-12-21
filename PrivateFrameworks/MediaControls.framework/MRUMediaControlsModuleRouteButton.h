/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUMediaControlsModuleRouteButton : MRUTransportButton {
    double  _contentScale;
    MPAVEndpointRoute * _route;
    MPRouteLabel * _routeLabel;
    bool  _showRouteLabel;
}

@property (nonatomic) double contentScale;
@property (nonatomic, retain) MPAVEndpointRoute *route;
@property (nonatomic, retain) MPRouteLabel *routeLabel;
@property (nonatomic) bool showRouteLabel;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)contentScale;
- (id)init;
- (void)layoutSubviews;
- (id)route;
- (id)routeLabel;
- (void)setContentScale:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteLabel:(id)arg1;
- (void)setShowRouteLabel:(bool)arg1;
- (bool)showRouteLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateContentSizeCategory;
- (void)updateLabel;
- (void)updateVisibility;
- (void)updateVisualStyling;

@end