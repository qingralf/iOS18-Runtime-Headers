/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKObscurableBalloonView : CKBalloonView <SCUIMoreHelpMenuDelegate, SCUIReportToAuthoritiesDelegate> {
    UIVisualEffectView * _blurEffect;
    <CKObscurableBalloonViewDelegate> * _obscurableBalloonDelegate;
    UIImageView * _obscuredContentBadgeView;
    UIView * _obscuringView;
    UILabel * _sensitiveContentDescription;
    UIButton * _showButton;
    UIButton * _warningButton;
}

@property (nonatomic, retain) UIVisualEffectView *blurEffect;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CKObscurableBalloonViewDelegate> *obscurableBalloonDelegate;
@property (getter=isObscured, nonatomic, readonly) bool obscured;
@property (nonatomic, retain) UIImageView *obscuredContentBadgeView;
@property (nonatomic, retain) UIView *obscuringView;
@property (nonatomic, retain) UILabel *sensitiveContentDescription;
@property (nonatomic, retain) UIButton *showButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *warningButton;

- (void).cxx_destruct;
- (id)_containerView;
- (void)_presentGetHelpAlert:(id)arg1;
- (void)_setupForAdultsIn:(id)arg1 revealingContent:(bool)arg2;
- (void)_setupForChildrenIn:(id)arg1 withBadgeView:(id)arg2;
- (void)_setupObscuringView:(bool)arg1;
- (void)_setupWarningButtonIn:(id)arg1 forRevealing:(bool)arg2;
- (id)blurEffect;
- (id)blurVisualEffect;
- (void)didAskForMoreHelp:(id)arg1;
- (void)didBlockContact:(id)arg1;
- (void)evidenceToReportWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isObscured;
- (id)obscurableBalloonDelegate;
- (void)obscureSensitiveContent:(bool)arg1;
- (id)obscuredContentBadgeView;
- (id)obscuringView;
- (void)prepareForReuse;
- (void)revealSensitiveContent:(bool)arg1;
- (id)sensitiveContentDescription;
- (void)setBlurEffect:(id)arg1;
- (void)setObscurableBalloonDelegate:(id)arg1;
- (void)setObscuredContentBadgeView:(id)arg1;
- (void)setObscuringView:(id)arg1;
- (void)setSensitiveContentDescription:(id)arg1;
- (void)setShowButton:(id)arg1;
- (void)setWarningButton:(id)arg1;
- (id)showButton;
- (void)tapGestureRecognized:(id)arg1;
- (id)warningButton;

@end
