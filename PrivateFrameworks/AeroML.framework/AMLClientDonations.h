/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AeroML.framework/AeroML
 */

@interface AMLClientDonations : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void arrayProvider;
    void batchProvider;
    void donationTime;
    void featureProvider;
    void featuresConfiguration;
    void metadata;
}

@property (nonatomic, readonly) MLArrayBatchProvider *arrayProvider;
@property (nonatomic, readonly) <MLBatchProvider> *batchProvider;
@property (nonatomic, readonly) NSString *donationTime;
@property (nonatomic, readonly) <MLFeatureProvider> *featureProvider;
@property (nonatomic, readonly) AMLFeaturesConfiguration *featuresConfiguration;
@property (nonatomic, readonly) AMLFeaturesDonationMetadata *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrayProvider;
- (id)batchProvider;
- (id)copyWithZone:(void*)arg1;
- (id)donationTime;
- (void)encodeWithCoder:(id)arg1;
- (id)featureProvider;
- (id)featuresConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeaturesConfiguration:(id)arg1 featureProvider:(id)arg2 batchProvider:(id)arg3 arrayProvider:(id)arg4 metadata:(id)arg5 donationTime:(id)arg6;
- (id)metadata;

@end
