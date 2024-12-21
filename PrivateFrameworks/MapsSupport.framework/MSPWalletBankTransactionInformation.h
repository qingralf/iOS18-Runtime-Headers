/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPWalletBankTransactionInformation : NSObject {
    NSString * _bankIdentifier;
    NSString * _bankTransactionDescription;
    NSString * _bankTransactionDescriptionClean;
    bool  _enableBrandMuidFallback;
    long long  _industryCode;
    GEOPDMerchantInformation * _merchantInformation;
    NSArray * _otherTransactionLocations;
    NSString * _transactionCurrencyCode;
    unsigned long long  _transactionStatus;
    double  _transactionTimestamp;
    unsigned long long  _transactionType;
}

@property (nonatomic, copy) NSString *bankIdentifier;
@property (nonatomic, copy) NSString *bankTransactionDescription;
@property (nonatomic, copy) NSString *bankTransactionDescriptionClean;
@property (nonatomic) bool enableBrandMuidFallback;
@property (nonatomic) long long industryCode;
@property (nonatomic, copy) GEOPDMerchantInformation *merchantInformation;
@property (nonatomic, copy) NSArray *otherTransactionLocations;
@property (nonatomic, copy) NSString *transactionCurrencyCode;
@property (nonatomic) unsigned long long transactionStatus;
@property (nonatomic) double transactionTimestamp;
@property (nonatomic) unsigned long long transactionType;

- (void).cxx_destruct;
- (id)bankIdentifier;
- (id)bankTransactionDescription;
- (id)bankTransactionDescriptionClean;
- (bool)enableBrandMuidFallback;
- (long long)industryCode;
- (id)merchantInformation;
- (id)otherTransactionLocations;
- (void)setBankIdentifier:(id)arg1;
- (void)setBankTransactionDescription:(id)arg1;
- (void)setBankTransactionDescriptionClean:(id)arg1;
- (void)setEnableBrandMuidFallback:(bool)arg1;
- (void)setIndustryCode:(long long)arg1;
- (void)setMerchantInformation:(id)arg1;
- (void)setOtherTransactionLocations:(id)arg1;
- (void)setTransactionCurrencyCode:(id)arg1;
- (void)setTransactionStatus:(unsigned long long)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (void)setTransactionType:(unsigned long long)arg1;
- (id)transactionCurrencyCode;
- (unsigned long long)transactionStatus;
- (double)transactionTimestamp;
- (unsigned long long)transactionType;

@end