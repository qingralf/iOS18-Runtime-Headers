/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDVShared.framework/CoreIDVShared
 */

@interface CoreIDVShared.IdentityProofingConfiguration : NSObject <NSSecureCoding> {
    void accountKeyIdentifier;
    void actionStatus;
    void axSettings;
    void country;
    void credentialIdentifier;
    void extendedReviewURLString;
    void learnMoreURLString;
    void productIdentifier;
    void state;
    void supplementalProvisioningData;
    void targetDevice;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
