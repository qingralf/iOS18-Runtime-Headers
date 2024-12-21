/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtectionUI.framework/AppProtectionUI
 */

@interface APBaseShieldView : UIView <APEmergencyCallHostViewControllerDelegate, APShield, APSystemAppOutletShield> {
    <APBaseShieldViewDelegate> * _delegate;
    UIButton * _emergencyCallButton;
    APEmergencyCallHostViewController * _emergencyVC;
    UIImageView * _iconView;
    UILabel * _label;
    UIAccessibilityElement * _labelsElement;
    APSystemAppOutlet * _outlet;
    unsigned long long  _shieldStyle;
    APApplication * _shieldedApplication;
    UIButton * _unlockButton;
    UIVisualEffectView * _visualEffectView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <APBaseShieldViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) APApplication *shieldedApplication;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)dealloc;
- (id)delegate;
- (void)emergencyCallHostViewControllerDidDismiss:(id)arg1;
- (void)emergencyTapped:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithLocalizedApplicationName:(id)arg1;
- (id)initWithLocalizedApplicationName:(id)arg1 hidden:(bool)arg2;
- (id)initWithLocalizedApplicationName:(id)arg1 useHiddenStyle:(bool)arg2 needEmergencyCallButton:(bool)arg3;
- (bool)isEqualTo:(id)arg1;
- (void)layoutSubviews;
- (void)resetShield;
- (void)setDelegate:(id)arg1;
- (void)setShieldStyle:(unsigned long long)arg1;
- (id)shieldedApplication;
- (void)unlockTapped:(id)arg1;

@end