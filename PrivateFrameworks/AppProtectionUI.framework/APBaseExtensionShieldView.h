/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtectionUI.framework/AppProtectionUI
 */

@interface APBaseExtensionShieldView : UIView {
    <APBaseExtensionShieldViewDelegate> * _delegate;
    APSymbolBadgedAppIconView * _iconView;
    UILabel * _label;
    UIButton * _unlockButton;
}

@property (nonatomic) <APBaseExtensionShieldViewDelegate> *delegate;

- (void).cxx_destruct;
- (bool)accessibilityViewIsModal;
- (id)delegate;
- (id)initWithLocalizedApplicationName:(id)arg1 iconImage:(id)arg2;
- (id)initWithLocalizedApplicationName:(id)arg1 iconImage:(id)arg2 unlockButtonHidden:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)unlockTapped:(id)arg1;

@end
