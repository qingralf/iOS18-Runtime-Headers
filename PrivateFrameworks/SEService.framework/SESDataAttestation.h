/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@interface SESDataAttestation : NSObject <NSSecureCoding> {
    NSString * _appBundleID;
    NSData * _nonce;
    NSData * _signature;
    NSData * _signedData;
}

@property (nonatomic, retain) NSString *appBundleID;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic, retain) NSData *signedData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppBundleID:(id)arg1 nonce:(id)arg2 signedData:(id)arg3 signature:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)nonce;
- (void)setAppBundleID:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignedData:(id)arg1;
- (id)signature;
- (id)signedData;

@end
