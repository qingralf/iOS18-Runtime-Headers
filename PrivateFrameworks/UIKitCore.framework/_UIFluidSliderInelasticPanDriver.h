/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFluidSliderInelasticPanDriver : NSObject <UIGestureRecognizerDelegate, _UIFluidSliderDirectDriving> {
    double  __previousTranslation;
    double  __previousValue;
    <_UIFluidSliderDirectDrivingDelegate> * _delegate;
    <_UIFluidSliderDrivable> * _drivable;
    bool  _enabled;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double  _stretchAmount;
    unsigned long long  _trackAxis;
    double  _velocityMultiplier;
    UIView * _view;
}

@property (nonatomic) double _previousTranslation;
@property (nonatomic) double _previousValue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UIFluidSliderDirectDrivingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_UIFluidSliderDrivable> *drivable;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double stretchAmount;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trackAxis;
@property (nonatomic) double velocityMultiplier;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleGesture:(id)arg1;
- (void)_issueUpdateWithValue:(double)arg1 isActive:(bool)arg2;
- (double)_previousTranslation;
- (double)_previousValue;
- (double)_trackLength;
- (void)cancel;
- (id)delegate;
- (id)drivable;
- (bool)enabled;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)name;
- (id)panGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setDrivable:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStretchAmount:(double)arg1;
- (void)setTrackAxis:(unsigned long long)arg1;
- (void)setVelocityMultiplier:(double)arg1;
- (void)setView:(id)arg1;
- (void)set_previousTranslation:(double)arg1;
- (void)set_previousValue:(double)arg1;
- (void)stop;
- (double)stretchAmount;
- (unsigned long long)trackAxis;
- (double)velocityMultiplier;
- (id)view;

@end
