/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSURL * _businessChatURL;
    long long  _category;
    NSString * _detailedCategory;
    NSString * _heroImageAttributionName;
    NSURL * _heroImageURL;
    unsigned long long  _identifier;
    NSDate * _lastProcessedDate;
    MKWalletMerchantStylingInfo * _lazyStylingInfo;
    double  _locationLatitude;
    double  _locationLongitude;
    NSString * _name;
    NSString * _phoneNumber;
    CNPostalAddress * _postalAddress;
    int  _resultProviderIdentifier;
    NSData * _stylingInfoData;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *businessChatURL;
@property (nonatomic) long long category;
@property (nonatomic, copy) NSString *detailedCategory;
@property (nonatomic, copy) NSString *heroImageAttributionName;
@property (nonatomic, copy) NSURL *heroImageURL;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, copy) NSDate *lastProcessedDate;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) CNPostalAddress *postalAddress;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, retain) NSData *stylingInfoData;
@property (setter=setURL:, nonatomic, copy) NSURL *url;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)arg1;
+ (void)deleteFromCloudStoreRecord:(id)arg1 codingType:(unsigned long long)arg2;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)arg1;
- (id)_jsonEncodedPostalAddressString;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)businessChatURL;
- (long long)category;
- (id)description;
- (id)detailedCategory;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)heroImageAttributionName;
- (id)heroImageURL;
- (unsigned long long)identifier;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapsMerchant:(id)arg1;
- (bool)isValid;
- (unsigned long long)itemType;
- (id)jsonRepresentation;
- (id)lastProcessedDate;
- (id)location;
- (double)locationLatitude;
- (double)locationLongitude;
- (id)name;
- (id)phoneNumber;
- (id)postalAddress;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (int)resultProviderIdentifier;
- (void)setBusinessChatURL:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setDetailedCategory:(id)arg1;
- (void)setHeroImageAttributionName:(id)arg1;
- (void)setHeroImageURL:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setLastProcessedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setStylingInfoData:(id)arg1;
- (void)setURL:(id)arg1;
- (id)stylingInfo;
- (id)stylingInfoData;
- (id)url;

@end
