/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKPersistRecoveryKeyContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _keyType;
    NSDictionary * _verifier;
}

@property (nonatomic) unsigned long long keyType;
@property (nonatomic, copy) NSDictionary *verifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)keyType;
- (void)setKeyType:(unsigned long long)arg1;
- (void)setVerifier:(id)arg1;
- (id)verifier;

@end