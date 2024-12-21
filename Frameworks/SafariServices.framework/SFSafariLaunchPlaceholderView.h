/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate> {
    UIToolbar * _bottomToolbar;
    UIImageView * _browserIconView;
    UIBarButtonItem * _dismissButton;
    id /* block */  _dismissalHandler;
    bool  _forAuthentication;
    UIButton * _largeButton;
    UITextView * _linkCaptionTextView;
    UILabel * _linkTitleLabel;
    id /* block */  _openHandler;
    bool  _showContinueButton;
    double  _topLayoutGuideInset;
    UINavigationBar * _topNavigationBar;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showContinueButton;
@property (readonly) Class superclass;
@property (nonatomic) double topLayoutGuideInset;

+ (id)blankPlaceholder;
+ (id)compatibilityPlaceholderWithAppName:(id)arg1 destinationURL:(id)arg2 forAuthentication:(bool)arg3 dismissalHandler:(id /* block */)arg4 openHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_dismissTapped:(id)arg1;
- (void)_openTapped:(id)arg1;
- (void)layoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)setShowContinueButton:(bool)arg1;
- (void)setTopLayoutGuideInset:(double)arg1;
- (bool)showContinueButton;
- (double)topLayoutGuideInset;
- (void)updateBarTintColor:(id)arg1;
- (void)updateControlTintColor:(id)arg1;
- (void)updateDismissButtonStyle:(long long)arg1;

@end