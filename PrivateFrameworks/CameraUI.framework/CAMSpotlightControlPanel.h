/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSpotlightControlPanel : UIView <CAMViewOrientable> {
    UIButton * __controlIconView;
    NSMutableDictionary * __openByControl;
    CEKApertureSlider * _apertureSlider;
    <CAMSpotlightControlPanelDelegate> * _delegate;
    CAMExposureSlider * _exposureSlider;
    long long  _orientation;
    long long  _spotlightControl;
}

@property (nonatomic, readonly) UIButton *_controlIconView;
@property (nonatomic, readonly) NSMutableDictionary *_openByControl;
@property (nonatomic, readonly) CEKApertureSlider *apertureSlider;
@property (getter=isApertureSliderOpen, nonatomic) bool apertureSliderOpen;
@property (getter=isApertureSliderVisible, nonatomic, readonly) bool apertureSliderVisible;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CAMSpotlightControlPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CAMExposureSlider *exposureSlider;
@property (getter=isExposureSliderOpen, nonatomic) bool exposureSliderOpen;
@property (getter=isExposureSliderVisible, nonatomic, readonly) bool exposureSliderVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic) long long spotlightControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_apertureSliderDidChangeValue;
- (void)_applyTextOrientation:(long long)arg1;
- (void)_configureAndInstallDiscreteSlider:(id)arg1;
- (id)_controlIconView;
- (void)_exposureSliderDidChangeValue;
- (void)_handleIconViewReleased:(id)arg1;
- (void)_layoutFullWidthCustomView:(id)arg1;
- (void)_loadApertureSliderIfNeeded;
- (void)_loadExposureSliderIfNeeded;
- (void)_loadSliderIfNeededForControlType:(long long)arg1;
- (id)_openByControl;
- (struct { double x1; double x2; })_scrubberGradientEdgeInsets;
- (void)_setControlType:(long long)arg1 open:(bool)arg2 animated:(bool)arg3 notifyDelegate:(bool)arg4;
- (unsigned long long)_sliderFontStyle;
- (void)_updateControlIcon;
- (void)_updateControlsVisibilityAnimated:(bool)arg1;
- (void)_updateTextOrientation;
- (id)apertureSlider;
- (id)delegate;
- (id)exposureSlider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isApertureSliderOpen;
- (bool)isApertureSliderVisible;
- (bool)isControlTypeOpen:(long long)arg1;
- (bool)isControlTypeVisible:(long long)arg1;
- (bool)isExposureSliderOpen;
- (bool)isExposureSliderVisible;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setApertureSliderOpen:(bool)arg1;
- (void)setApertureSliderOpen:(bool)arg1 animated:(bool)arg2;
- (void)setControlType:(long long)arg1 open:(bool)arg2 animated:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setExposureSliderOpen:(bool)arg1;
- (void)setExposureSliderOpen:(bool)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setSpotlightControl:(long long)arg1;
- (void)setSpotlightControl:(long long)arg1 animated:(bool)arg2;
- (long long)spotlightControl;

@end