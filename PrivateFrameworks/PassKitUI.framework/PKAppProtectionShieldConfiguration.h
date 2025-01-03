/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAppProtectionShieldConfiguration : NSObject {
    <PKAppProtectionShieldViewControllerDelegate> * _delegate;
    unsigned long long  _shieldType;
    bool  _showAuthOnAppear;
    bool  _showDismiss;
}

@property (nonatomic) <PKAppProtectionShieldViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long shieldType;
@property (nonatomic) bool showAuthOnAppear;
@property (nonatomic) bool showDismiss;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setShieldType:(unsigned long long)arg1;
- (void)setShowAuthOnAppear:(bool)arg1;
- (void)setShowDismiss:(bool)arg1;
- (unsigned long long)shieldType;
- (bool)showAuthOnAppear;
- (bool)showDismiss;

@end
