/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor {
    unsigned long long  _contactMethod;
    unsigned long long  _fundingSourceTypes;
    bool  _hideCreditRewardsHubSignage;
    bool  _showCreditDashboardBalance;
    bool  _showCreditRewardsHubBalance;
    bool  _showSettingsBalance;
    NSArray * _supportedFileFormatsForTransactionData;
    unsigned long long  _transferFrequencies;
    NSString * _transferTermsIdentifier;
}

@property (nonatomic) unsigned long long contactMethod;
@property (nonatomic) unsigned long long fundingSourceTypes;
@property (nonatomic) bool hideCreditRewardsHubSignage;
@property (nonatomic) bool showCreditDashboardBalance;
@property (nonatomic) bool showCreditRewardsHubBalance;
@property (nonatomic) bool showSettingsBalance;
@property (nonatomic, copy) NSArray *supportedFileFormatsForTransactionData;
@property (nonatomic) unsigned long long transferFrequencies;
@property (nonatomic, copy) NSString *transferTermsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)contactMethod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fundingSourceTypes;
- (unsigned long long)hash;
- (bool)hideCreditRewardsHubSignage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSavingsAccountFeatureDescriptor:(id)arg1;
- (void)setContactMethod:(unsigned long long)arg1;
- (void)setFundingSourceTypes:(unsigned long long)arg1;
- (void)setHideCreditRewardsHubSignage:(bool)arg1;
- (void)setShowCreditDashboardBalance:(bool)arg1;
- (void)setShowCreditRewardsHubBalance:(bool)arg1;
- (void)setShowSettingsBalance:(bool)arg1;
- (void)setSupportedFileFormatsForTransactionData:(id)arg1;
- (void)setTransferFrequencies:(unsigned long long)arg1;
- (void)setTransferTermsIdentifier:(id)arg1;
- (bool)showCreditDashboardBalance;
- (bool)showCreditRewardsHubBalance;
- (bool)showSettingsBalance;
- (id)supportedFileFormatsForTransactionData;
- (unsigned long long)transferFrequencies;
- (id)transferTermsIdentifier;

@end
