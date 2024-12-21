/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSSignDataWithIdentityResponse : NSObject <NSSecureCoding> {
    NSArray * _certificates;
    NSData * _nonce;
    NSData * _signature;
}

@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSData *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nonce;
- (void)setCertificates:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end