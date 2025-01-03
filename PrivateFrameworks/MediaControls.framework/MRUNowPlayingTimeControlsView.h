/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUNowPlayingTimeControlsView : UIView <MRUVisualStylingProviderObserver> {
    double  _contentScale;
    bool  _debugPreviousDisplayLinkPaused;
    bool  _dimmed;
    CADisplayLink * _displayLink;
    AVTimeFormatter * _elapsedTimeFormatter;
    UILabel * _elapsedTimeLabel;
    long long  _layout;
    bool  _leftAlignLive;
    UIView * _liveBackground;
    CAGradientLayer * _liveBackgroundMask;
    UILabel * _liveLabel;
    bool  _onScreen;
    NSRegularExpression * _regexNumberDecimalDigit;
    AVTimeFormatter * _remainingTimeFormatter;
    UILabel * _remainingTimeLabel;
    MRUSlider * _slider;
    double  _sliderExpansionFactor;
    double  _sliderHeight;
    MRUVisualStylingProvider * _stylingProvider;
    MRUTimeControls * _timeControls;
    MSVTimer * _updateElapsedTimeThrottleTimer;
}

@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) bool debugPreviousDisplayLinkPaused;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) AVTimeFormatter *elapsedTimeFormatter;
@property (nonatomic, retain) UILabel *elapsedTimeLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layout;
@property (nonatomic) bool leftAlignLive;
@property (nonatomic, retain) UIView *liveBackground;
@property (nonatomic, retain) CAGradientLayer *liveBackgroundMask;
@property (nonatomic, retain) UILabel *liveLabel;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) NSRegularExpression *regexNumberDecimalDigit;
@property (nonatomic, retain) AVTimeFormatter *remainingTimeFormatter;
@property (nonatomic, retain) UILabel *remainingTimeLabel;
@property (nonatomic, retain) MRUSlider *slider;
@property (nonatomic) double sliderExpansionFactor;
@property (nonatomic) double sliderHeight;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUTimeControls *timeControls;
@property (nonatomic, retain) MSVTimer *updateElapsedTimeThrottleTimer;

- (void).cxx_destruct;
- (double)accessibilityElapsedDuration;
- (double)accessibilityTotalDuration;
- (bool)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg1;
- (double)contentScale;
- (bool)debugPreviousDisplayLinkPaused;
- (id)displayLink;
- (id)elapsedTimeFormatter;
- (id)elapsedTimeLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDimmed;
- (bool)isOnScreen;
- (long long)labelStyle;
- (long long)layout;
- (void)layoutSubviews;
- (void)layoutSubviewsLive;
- (void)layoutTimeLabels;
- (bool)leftAlignLive;
- (id)liveBackground;
- (id)liveBackgroundMask;
- (id)liveLabel;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)regexNumberDecimalDigit;
- (id)remainingTimeFormatter;
- (id)remainingTimeLabel;
- (void)setContentScale:(double)arg1;
- (void)setDebugPreviousDisplayLinkPaused:(bool)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setElapsedTimeFormatter:(id)arg1;
- (void)setElapsedTimeLabel:(id)arg1;
- (void)setLayout:(long long)arg1;
- (void)setLeftAlignLive:(bool)arg1;
- (void)setLiveBackground:(id)arg1;
- (void)setLiveBackgroundMask:(id)arg1;
- (void)setLiveLabel:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setRegexNumberDecimalDigit:(id)arg1;
- (void)setRemainingTimeFormatter:(id)arg1;
- (void)setRemainingTimeLabel:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setSliderExpansionFactor:(double)arg1;
- (void)setSliderHeight:(double)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTimeControls:(id)arg1;
- (void)setTimeControls:(id)arg1 forPresentationInterval:(id)arg2;
- (void)setUpdateElapsedTimeThrottleTimer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)slider;
- (double)sliderExpansionFactor;
- (double)sliderHeight;
- (void)sliderTouchCancel:(id)arg1;
- (void)sliderTouchDown:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (id)stylingProvider;
- (id)timeControls;
- (double)timeLabelsAlpha;
- (void)updateBackgroundMask;
- (void)updateContentSizeCategory;
- (void)updateDisplayLink;
- (void)updateDisplayLinkPaused;
- (void)updateElapsedTime;
- (void)updateElapsedTimeForDate:(id)arg1;
- (void)updateElapsedTimeOnDisplayLinkTick:(id)arg1;
- (id)updateElapsedTimeThrottleTimer;
- (void)updateElapsedTimeWithElapsedTime:(double)arg1;
- (void)updateElapsedTimeWithThrottle;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (id)viewForLastBaselineLayout;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
