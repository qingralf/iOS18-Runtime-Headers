/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardBankConnectLinkedAccountData : NSObject {
    FKAccount * _account;
    FKBackgroundRefreshConfirmationPromptToken * _backgroundRefreshConfirmationToken;
    unsigned long long  _consentStatus;
    FKInstitution * _institution;
}

@property (nonatomic, retain) FKAccount *account;
@property (nonatomic, retain) FKBackgroundRefreshConfirmationPromptToken *backgroundRefreshConfirmationToken;
@property (nonatomic) unsigned long long consentStatus;
@property (nonatomic, retain) FKInstitution *institution;

- (void).cxx_destruct;
- (id)account;
- (id)accountID;
- (id)backgroundRefreshConfirmationToken;
- (unsigned long long)consentStatus;
- (id)institution;
- (void)setAccount:(id)arg1;
- (void)setBackgroundRefreshConfirmationToken:(id)arg1;
- (void)setConsentStatus:(unsigned long long)arg1;
- (void)setInstitution:(id)arg1;

@end
