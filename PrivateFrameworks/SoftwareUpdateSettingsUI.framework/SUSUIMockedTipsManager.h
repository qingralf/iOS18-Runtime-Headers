/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSUIMockedTipsManager : SUSettingsTipsManager <SoftwareUpdateSettingsMockingKit.SUSMKComingSoonTipResponderDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)contentDidBecomeAvailableWithTitle:(id)arg1 andContent:(id)arg2 learnMoreLinkUrl:(id)arg3;
- (id)init;
- (void)setup;

@end