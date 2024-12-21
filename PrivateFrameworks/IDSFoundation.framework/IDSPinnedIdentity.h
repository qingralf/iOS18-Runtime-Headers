/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPinnedIdentity : NSObject <NSSecureCoding> {
    NSData * _identityBlob;
}

@property (nonatomic, retain) NSData *identityBlob;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityBlob;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityBlob:(id)arg1;
- (void)setIdentityBlob:(id)arg1;

@end