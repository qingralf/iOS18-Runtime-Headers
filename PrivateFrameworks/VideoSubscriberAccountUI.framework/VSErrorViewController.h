/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSErrorViewController : UIViewController {
    NSError * _error;
    VSFontCenter * _fontCenter;
    UILabel * _messageLabel;
    UIButton * _recoveryButton;
    bool  _recoveryDestructive;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UIButton *recoveryButton;
@property (getter=isRecoveryDestructive, nonatomic) bool recoveryDestructive;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_recoveryButtonPressed:(id)arg1;
- (void)_updateText;
- (void)dealloc;
- (id)error;
- (id)fontCenter;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isRecoveryDestructive;
- (id)messageLabel;
- (id)recoveryButton;
- (void)setError:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setRecoveryButton:(id)arg1;
- (void)setRecoveryDestructive:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)viewDidLoad;

@end
