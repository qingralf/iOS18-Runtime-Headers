/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIFoundation.framework/PhotosUIFoundation
 */

@interface PXLumaTrackingView : UIView <_UILumaTrackingBackdropViewDelegate> {
    _UILumaTrackingBackdropView * _backdropView;
    <PXLumaTrackingViewDelegate> * _delegate;
    long long  _lumaLevel;
    bool  _lumaTrackingEnabled;
    double  _thresholdLuma;
}

@property (nonatomic) <PXLumaTrackingViewDelegate> *delegate;
@property (nonatomic, readonly) long long lumaLevel;
@property (nonatomic) bool lumaTrackingEnabled;
@property (nonatomic, readonly) double thresholdLuma;

- (void).cxx_destruct;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 threshold:(double)arg2;
- (id)initWithThreshold:(double)arg1;
- (void)layoutSubviews;
- (long long)lumaLevel;
- (bool)lumaTrackingEnabled;
- (void)setDelegate:(id)arg1;
- (void)setLumaLevel:(long long)arg1;
- (void)setLumaTrackingEnabled:(bool)arg1;
- (double)thresholdLuma;

@end
