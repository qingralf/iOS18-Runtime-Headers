/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSetupView : UIView {
    NSString * _appAgeRatingBadge;
    NSString * _appName;
    UIButton * _appsButton;
    NSString * _appsButtonTitle;
    UIButton * _beginButton;
    NSString * _beginButtonTitle;
    UIFont * _defaultSkipButtonFont;
    double  _defaultSkipButtonSpacing;
    <VSSetupViewDelegate> * _delegate;
    VSFontCenter * _fontCenter;
    NSString * _footer;
    NSString * _footnote;
    UIImage * _image;
    NSString * _message;
    bool  _shouldOverrideSkipButtonStyle;
    bool  _shouldShowAboutButton;
    bool  _shouldShowAppsButton;
    UIButton * _skipButton;
    UIFont * _skipButtonFont;
    NSString * _skipButtonTitle;
    UIStackView * _stackView;
    NSString * _title;
    UIView * _tvAppPrivacyButtonContainer;
    UIView * _tvProviderPrivacyButtonContainer;
}

@property (nonatomic, retain) NSString *appAgeRatingBadge;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) UIButton *appsButton;
@property (nonatomic, copy) NSString *appsButtonTitle;
@property (nonatomic, retain) UIButton *beginButton;
@property (nonatomic, copy) NSString *beginButtonTitle;
@property (nonatomic, retain) UIFont *defaultSkipButtonFont;
@property (nonatomic) double defaultSkipButtonSpacing;
@property (nonatomic) <VSSetupViewDelegate> *delegate;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, retain) NSString *footnote;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) bool shouldOverrideSkipButtonStyle;
@property (nonatomic) bool shouldShowAboutButton;
@property (nonatomic) bool shouldShowAppsButton;
@property (nonatomic, retain) UIButton *skipButton;
@property (nonatomic, retain) UIFont *skipButtonFont;
@property (nonatomic, copy) NSString *skipButtonTitle;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIView *tvAppPrivacyButtonContainer;
@property (nonatomic, readonly) UIView *tvProviderPrivacyButtonContainer;

- (void).cxx_destruct;
- (void)_appsButtonPressed:(id)arg1;
- (void)_beginButtonPressed:(id)arg1;
- (void)_skipButtonPressed:(id)arg1;
- (id)appAgeRatingBadge;
- (id)appName;
- (id)appsButton;
- (id)appsButtonTitle;
- (id)beginButton;
- (id)beginButtonTitle;
- (void)dealloc;
- (id)defaultSkipButtonFont;
- (double)defaultSkipButtonSpacing;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)fontCenter;
- (id)footer;
- (id)footnote;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)message;
- (void)setAppAgeRatingBadge:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppsButton:(id)arg1;
- (void)setAppsButtonTitle:(id)arg1;
- (void)setBeginButton:(id)arg1;
- (void)setBeginButtonTitle:(id)arg1;
- (void)setDefaultSkipButtonFont:(id)arg1;
- (void)setDefaultSkipButtonSpacing:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShouldOverrideSkipButtonStyle:(bool)arg1;
- (void)setShouldShowAboutButton:(bool)arg1;
- (void)setShouldShowAppsButton:(bool)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setSkipButtonFont:(id)arg1;
- (void)setSkipButtonTitle:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldOverrideSkipButtonStyle;
- (bool)shouldShowAboutButton;
- (bool)shouldShowAppsButton;
- (id)skipButton;
- (id)skipButtonFont;
- (id)skipButtonTitle;
- (id)stackView;
- (id)title;
- (id)tvAppPrivacyButtonContainer;
- (id)tvProviderPrivacyButtonContainer;

@end
