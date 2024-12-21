/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentEncryptionCertificatesVersions : NSObject <NSCopying, NSSecureCoding> {
    long long  _recipientData;
}

@property (nonatomic) long long recipientData;

+ (bool)supportsSecureCoding;

- (long long)certificatesVersionForDestination:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)recipientData;
- (void)setRecipientData:(long long)arg1;

@end