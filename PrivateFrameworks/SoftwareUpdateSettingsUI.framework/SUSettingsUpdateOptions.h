/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSettingsUpdateOptions : NSObject {
    SUSUIUpdateAgreementManager * _agreementManager;
    bool  _allowUnrestrictedCellularDownload;
    bool  _bypassTermsAndConditions;
    bool  _clientIsBuddy;
}

@property (nonatomic, retain) SUSUIUpdateAgreementManager *agreementManager;
@property (nonatomic) bool allowUnrestrictedCellularDownload;
@property (nonatomic) bool bypassTermsAndConditions;
@property (nonatomic) bool clientIsBuddy;

- (void).cxx_destruct;
- (id)agreementManager;
- (bool)allowUnrestrictedCellularDownload;
- (bool)bypassTermsAndConditions;
- (bool)clientIsBuddy;
- (void)setAgreementManager:(id)arg1;
- (void)setAllowUnrestrictedCellularDownload:(bool)arg1;
- (void)setBypassTermsAndConditions:(bool)arg1;
- (void)setClientIsBuddy:(bool)arg1;

@end