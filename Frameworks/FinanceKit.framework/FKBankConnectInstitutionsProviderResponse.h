/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FKBankConnectInstitutionsProviderResponse : NSObject {
    unsigned long long  _consentStatus;
    FKInstitution * _institution;
}

@property (nonatomic, readonly) unsigned long long consentStatus;
@property (nonatomic, readonly, copy) FKInstitution *institution;

- (void).cxx_destruct;
- (unsigned long long)consentStatus;
- (id)initWithInstitution:(id)arg1 consentStatus:(unsigned long long)arg2;
- (id)institution;

@end
