/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HKOnboardingBaseViewController <HKAdaptiveModalPresented, HRLinkTextViewDelegate, HRStackedButtonViewDelegate> {
    HROnboardingElectrocardiogramResultView * _atrialFibrillationResultView;
    HROnboardingElectrocardiogramResultView * _bottomResultView;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UILabel * _disclaimerLabel;
    NSLayoutConstraint * _disclaimerLabelTopConstraint;
    HKElectrocardiogram * _electrocardiogram;
    HROnboardingElectrocardiogramResultView * _highOrLowHeartRateResultView;
    HROnboardingElectrocardiogramResultView * _inconclusiveResultView;
    HROnboardingElectrocardiogramResultView * _onlyResultView;
    HROnboardingElectrocardiogramResultView * _sinusRhythmResultReview;
    HRStackedButtonView * _stackedButtonView;
    UILabel * _titleLabel;
    NSLayoutAnchor * _viewTopAnchor;
}

@property (nonatomic, retain) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView;
@property (nonatomic, retain) HROnboardingElectrocardiogramResultView *bottomResultView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) UILabel *disclaimerLabel;
@property (nonatomic, retain) NSLayoutConstraint *disclaimerLabelTopConstraint;
@property (nonatomic, retain) HKElectrocardiogram *electrocardiogram;
@property (nonatomic, retain) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView;
@property (nonatomic, retain) HROnboardingElectrocardiogramResultView *inconclusiveResultView;
@property (nonatomic, retain) HROnboardingElectrocardiogramResultView *onlyResultView;
@property (nonatomic, retain) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutAnchor *viewTopAnchor;

- (void).cxx_destruct;
- (void)_adjustDisclaimerLabelConstraints;
- (void)_adjustStackedButtonViewLocationForViewContentHeight;
- (void)_pauseResultViewVideos;
- (void)_playResultViewVideos;
- (id)_resultViewForSample:(id)arg1 activeAlgorithmVersion:(long long)arg2;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpAllResultViewConstraints;
- (void)_setUpAllResultViews;
- (void)_setUpBottomResultViewConstraint;
- (void)_setUpDisclaimerLabel;
- (void)_setUpOnlyResultView;
- (void)_setUpOnlyResultViewConstraints;
- (void)_setUpStackedButtonView;
- (void)_setUpTitle;
- (void)_setUpTitleConstraints;
- (void)_updateForCurrentSizeCategory;
- (id)atrialFibrillationResultView;
- (id)bottomResultView;
- (id)contentViewBottomConstraint;
- (id)disclaimerLabel;
- (id)disclaimerLabelTopConstraint;
- (id)electrocardiogram;
- (id)highOrLowHeartRateResultView;
- (id)inconclusiveResultView;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (id)initWithSample:(id)arg1;
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)onlyResultView;
- (void)setAtrialFibrillationResultView:(id)arg1;
- (void)setBottomResultView:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setDisclaimerLabel:(id)arg1;
- (void)setDisclaimerLabelTopConstraint:(id)arg1;
- (void)setElectrocardiogram:(id)arg1;
- (void)setHighOrLowHeartRateResultView:(id)arg1;
- (void)setInconclusiveResultView:(id)arg1;
- (void)setOnlyResultView:(id)arg1;
- (void)setSinusRhythmResultReview:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)setViewTopAnchor:(id)arg1;
- (id)sinusRhythmResultReview;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewTopAnchor;
- (void)viewWillAppear:(bool)arg1;

@end
