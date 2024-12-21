/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.ManagedApplePayTransactionInsight : NSManagedObject

@property (nonatomic, retain) NSNumber *adamIdentifierValue;
@property (nonatomic, copy) NSString *industryCategory;
@property (nonatomic, retain) NSNumber *industryCodeValue;
@property (nonatomic, retain) NSNumber *isCoarseLocationValue;
@property (nonatomic, retain) NSNumber *locationAltitudeValue;
@property (nonatomic, copy) NSDate *locationDate;
@property (nonatomic, retain) NSNumber *locationHorizontalAccuracyValue;
@property (nonatomic, retain) NSNumber *locationLatitudeValue;
@property (nonatomic, retain) NSNumber *locationLongitudeValue;
@property (nonatomic, retain) NSNumber *locationVerticalAccuracyValue;
@property (nonatomic, copy) NSString *merchantAdditionalData;
@property (nonatomic, copy) NSString *merchantCity;
@property (nonatomic, retain) NSNumber *merchantCleanConfidenceLevelValue;
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

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end