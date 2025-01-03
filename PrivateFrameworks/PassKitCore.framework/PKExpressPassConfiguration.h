/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressPassConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _isNFCExpressEnabled;
    bool  _isUWBExpressEnabled;
    PKExpressPassInformation * _passInformation;
    NSString * _passUniqueIdentifier;
}

@property (nonatomic, readonly) bool isNFCExpressEnabled;
@property (nonatomic, readonly) bool isUWBExpressEnabled;
@property (nonatomic, readonly) PKExpressPassInformation *passInformation;
@property (nonatomic, readonly) NSString *passUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initForPaymentPass:(id)arg1 isNFCExpressEnabled:(bool)arg2 isUWBExpressEnabled:(bool)arg3 withTechologyTest:(id /* block */)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassInformation:(id)arg1 forPaymentApplications:(id)arg2;
- (id)initWithPassInformation:(id)arg1 forSecureElementPass:(id)arg2;
- (id)initWithPassInformation:(id)arg1 isNFCExpressEnabled:(bool)arg2 isUWBExpressEnabled:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNFCExpressEnabled;
- (bool)isUWBExpressEnabled;
- (id)passInformation;
- (id)passUniqueIdentifier;

@end
