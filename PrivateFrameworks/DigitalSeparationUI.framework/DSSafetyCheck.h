/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI
 */

@interface DSSafetyCheck : NSObject

+ (void)authForSafetyCheckWithPresentingViewController:(id)arg1 safetyCheckController:(id)arg2;
+ (void)isChildOrTeenAccountWithCompletion:(id /* block */)arg1;
+ (bool)isManagedAccount;
+ (void)presentSafetyCheckWithViewController:(id)arg1 navigationController:(id)arg2;
+ (id)safetyCheckViewController;
+ (bool)shouldShowHSA2Upgrade;
+ (bool)shouldSkipAuthenticationForController:(id)arg1;
+ (void)showHSA2UpgradeWithPresentingViewController:(id)arg1 safetyCheckController:(id)arg2;
+ (void)showManagedAccountAlertWithPresentingViewController:(id)arg1;
+ (void)showlearnMoreForPresentingViewController:(id)arg1 withURL:(id)arg2;
+ (void)startEmergencyResetWithPresentingViewController:(id)arg1;
+ (void)startManageSharingWithPresentingViewController:(id)arg1;
+ (void)startReviewDeviceAccessWithPresentingViewController:(id)arg1;
+ (void)startSafetyCheckWithPresentingViewController:(id)arg1 safetyCheckController:(id)arg2;
+ (bool)startWithPresentingViewController:(id)arg1 withURL:(id)arg2;

@end
