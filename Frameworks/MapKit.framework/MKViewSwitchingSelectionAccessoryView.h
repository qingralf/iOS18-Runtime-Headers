/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKViewSwitchingSelectionAccessoryView : MKSelectionAccessoryView <MKPlaceCardContentSizeDelegate> {
    bool  _error;
    MKMapItem * _mapItem;
    UIViewController * _parentViewController;
    UIView * _view;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createErrorView;
- (id)_createLoadingView;
- (id)_createMapItemViewController:(id)arg1;
- (void)_displayView:(id)arg1;
- (void)_displayViewController:(id)arg1;
- (void)_updateDisplay;
- (void)displayError;
- (void)displayLoading;
- (void)displayMapItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)parentViewController;
- (void)placeCardPreferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (void)setParentViewController:(id)arg1;

@end