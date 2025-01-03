/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRURouteRecommendationPlatterView : UIButton <MRUVisualStylingProviderObserver> {
    UIButton * _actionButton;
    unsigned long long  _actionType;
    MRUActivityRouteView * _activityRouteView;
    MRUNowPlayingLabelView * _labelView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic, readonly) MRUActivityRouteView *activityRouteView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUNowPlayingLabelView *labelView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLayoutConstraints;
- (id)actionButton;
- (unsigned long long)actionType;
- (id)activityRouteView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelView;
- (void)setActionType:(unsigned long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (id)stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
