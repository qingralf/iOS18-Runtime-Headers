/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FKApplePayTransactionInsight : NSObject <NSCopying> {
    NSNumber * _adamIdentifier;
    NSString * _industryCategory;
    NSNumber * _industryCode;
    NSNumber * _isCoarseLocation;
    CLLocation * _location;
    NSString * _merchantAdditionalData;
    NSString * _merchantCity;
    NSNumber * _merchantCleanConfidenceLevel;
    NSString * _merchantCountryCode;
    NSString * _merchantIdentifier;
    NSString * _merchantName;
    NSString * _merchantRawCANL;
    NSString * _merchantRawCity;
    NSString * _merchantRawCountry;
    NSString * _merchantRawName;
    NSString * _merchantRawState;
    NSString * _merchantState;
    NSString * _merchantType;
    NSString * _merchantZip;
    NSString * _paymentHash;
    NSString * _paymentNetwork;
    NSString * _terminalIdentifier;
    NSDate * _transactionDate;
    NSString * _webMerchantIdentifier;
    NSString * _webMerchantName;
    NSURL * _webURL;
}

@property (nonatomic, copy) NSNumber *adamIdentifier;
@property (nonatomic, copy) NSString *industryCategory;
@property (nonatomic, copy) NSNumber *industryCode;
@property (nonatomic, copy) NSNumber *isCoarseLocation;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *merchantAdditionalData;
@property (nonatomic, copy) NSString *merchantCity;
@property (nonatomic, copy) NSNumber *merchantCleanConfidenceLevel;
@property (nonatomic, copy) NSString *merchantCountryCode;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *merchantName;
@property (nonatomic, copy) NSString *merchantRawCANL;
@property (nonatomic, copy) NSString *merchantRawCity;
@property (nonatomic, copy) NSString *merchantRawCountry;
@property (nonatomic, copy) NSString *merchantRawName;
@property (nonatomic, copy) NSString *merchantRawState;
@property (nonatomic, copy) NSString *merchantState;
@property (nonatomic, copy) NSString *merchantType;
@property (nonatomic, copy) NSString *merchantZip;
@property (nonatomic, copy) NSString *paymentHash;
@property (nonatomic, copy) NSString *paymentNetwork;
@property (nonatomic, copy) NSString *terminalIdentifier;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic, copy) NSString *webMerchantIdentifier;
@property (nonatomic, copy) NSString *webMerchantName;
@property (nonatomic, copy) NSURL *webURL;

- (void).cxx_destruct;
- (id)adamIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)industryCategory;
- (id)industryCode;
- (id)initWithPaymentHash:(id)arg1 merchantName:(id)arg2 merchantRawName:(id)arg3 industryCategory:(id)arg4 industryCode:(id)arg5 merchantType:(id)arg6 merchantCountryCode:(id)arg7 terminalIdentifier:(id)arg8 merchantAdditionalData:(id)arg9 paymentNetwork:(id)arg10 isCoarseLocation:(id)arg11 location:(id)arg12 merchantIdentifier:(id)arg13 merchantRawCANL:(id)arg14 merchantRawCity:(id)arg15 merchantRawState:(id)arg16 merchantRawCountry:(id)arg17 merchantCity:(id)arg18 merchantZip:(id)arg19 merchantState:(id)arg20 merchantCleanConfidenceLevel:(id)arg21 adamIdentifier:(id)arg22 webURL:(id)arg23 webMerchantIdentifier:(id)arg24 webMerchantName:(id)arg25;
- (id)initWithPaymentHash:(id)arg1 transactionDate:(id)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 industryCategory:(id)arg5 industryCode:(id)arg6 merchantType:(id)arg7 merchantCountryCode:(id)arg8 terminalIdentifier:(id)arg9 merchantAdditionalData:(id)arg10 paymentNetwork:(id)arg11 isCoarseLocation:(id)arg12 location:(id)arg13 merchantIdentifier:(id)arg14 merchantRawCANL:(id)arg15 merchantRawCity:(id)arg16 merchantRawState:(id)arg17 merchantRawCountry:(id)arg18 merchantCity:(id)arg19 merchantZip:(id)arg20 merchantState:(id)arg21 merchantCleanConfidenceLevel:(id)arg22 adamIdentifier:(id)arg23 webURL:(id)arg24 webMerchantIdentifier:(id)arg25 webMerchantName:(id)arg26;
- (id)isCoarseLocation;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)merchantAdditionalData;
- (id)merchantCity;
- (id)merchantCleanConfidenceLevel;
- (id)merchantCountryCode;
- (id)merchantIdentifier;
- (id)merchantName;
- (id)merchantRawCANL;
- (id)merchantRawCity;
- (id)merchantRawCountry;
- (id)merchantRawName;
- (id)merchantRawState;
- (id)merchantState;
- (id)merchantType;
- (id)merchantZip;
- (id)paymentHash;
- (id)paymentNetwork;
- (void)setAdamIdentifier:(id)arg1;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(id)arg1;
- (void)setIsCoarseLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMerchantAdditionalData:(id)arg1;
- (void)setMerchantCity:(id)arg1;
- (void)setMerchantCleanConfidenceLevel:(id)arg1;
- (void)setMerchantCountryCode:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantName:(id)arg1;
- (void)setMerchantRawCANL:(id)arg1;
- (void)setMerchantRawCity:(id)arg1;
- (void)setMerchantRawCountry:(id)arg1;
- (void)setMerchantRawName:(id)arg1;
- (void)setMerchantRawState:(id)arg1;
- (void)setMerchantState:(id)arg1;
- (void)setMerchantType:(id)arg1;
- (void)setMerchantZip:(id)arg1;
- (void)setPaymentHash:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setTerminalIdentifier:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setWebMerchantIdentifier:(id)arg1;
- (void)setWebMerchantName:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)terminalIdentifier;
- (id)transactionDate;
- (id)webMerchantIdentifier;
- (id)webMerchantName;
- (id)webURL;

@end