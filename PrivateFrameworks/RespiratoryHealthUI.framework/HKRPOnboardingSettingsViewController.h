/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RespiratoryHealthUI.framework/RespiratoryHealthUI
 */

@interface HKRPOnboardingSettingsViewController : UIViewController <BPSMiniFlowStepController, UIScrollViewDelegate> {
    UIVisualEffectView * _blurView;
    UIView * _contentView;
    UILabel * _descriptionLabel;
    bool  _didLayoutSubviews;
    UIView * _footerView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _initialInsets;
    bool  _isInitialInsetsSet;
    bool  _isVisible;
    UILabel * _locationLabel;
    <HKRPOnboardingDelegate> * _onboardingDelegate;
    HKRPOxygenSaturationOnboardingManager * _onboardingManager;
    UIScrollView * _scrollView;
    HKRPOxygenSaturationSettings * _settings;
    OBLinkTrayButton * _setupLaterButton;
    long long  _style;
    OBBoldTrayButton * _suggestedChoiceButton;
    UILabel * _titleLabel;
    RespiratoryHealthHeroView * _watchView;
    <BPSSetupMiniFlowControllerDelegate> * miniFlowDelegate;
}

@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic) bool didLayoutSubviews;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } initialInsets;
@property (nonatomic) bool isInitialInsetsSet;
@property (nonatomic) bool isVisible;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic) <BPSSetupMiniFlowControllerDelegate> *miniFlowDelegate;
@property (nonatomic) <HKRPOnboardingDelegate> *onboardingDelegate;
@property (nonatomic, retain) HKRPOxygenSaturationOnboardingManager *onboardingManager;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) HKRPOxygenSaturationSettings *settings;
@property (nonatomic, retain) OBLinkTrayButton *setupLaterButton;
@property (nonatomic) long long style;
@property (nonatomic, retain) OBBoldTrayButton *suggestedChoiceButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) RespiratoryHealthHeroView *watchView;

- (void).cxx_destruct;
- (void)_askUserToInstallWatchAppWithCompletion:(id /* block */)arg1;
- (double)_calculateHeroHorizontalMarginForViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_headerTitleFont;
- (void)_installWatchAppIfNeededWithCompletion:(id /* block */)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (void)_onboardWithCompletion:(id /* block */)arg1;
- (void)_presentOnboardingError:(id)arg1 completion:(id /* block */)arg2;
- (id)backgroundColor;
- (id)blurView;
- (id)contentView;
- (void)createUI;
- (id)descriptionLabel;
- (bool)didLayoutSubviews;
- (id)footerView;
- (id)initWithStyle:(long long)arg1 settings:(id)arg2 onboardingManager:(id)arg3 onboardingDelegate:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialInsets;
- (bool)isInitialInsetsSet;
- (bool)isVisible;
- (id)labelColor;
- (void)layoutUI;
- (id)locationLabel;
- (id)miniFlowDelegate;
- (id)onboardingDelegate;
- (id)onboardingManager;
- (id)pillBackgroundColor;
- (id)pillBackgroundSelectedColor;
- (id)pillTitleColor;
- (id)pillTitleSelectedColor;
- (void)registerForTraitChanges;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDidLayoutSubviews:(bool)arg1;
- (void)setFooterView:(id)arg1;
- (void)setInitialInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInsetsIfNeeded;
- (void)setIsInitialInsetsSet:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setMiniFlowDelegate:(id)arg1;
- (void)setOnboardingDelegate:(id)arg1;
- (void)setOnboardingManager:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSuggestedChoiceButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setWatchView:(id)arg1;
- (id)settings;
- (id)setupLaterButton;
- (void)setupLaterButtonPressed:(id)arg1;
- (long long)style;
- (id)suggestedChoiceButton;
- (void)suggestedChoiceButtonPressed:(id)arg1;
- (id)titleLabel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (id)watchView;

@end
