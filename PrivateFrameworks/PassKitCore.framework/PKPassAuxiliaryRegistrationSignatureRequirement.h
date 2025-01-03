/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassAuxiliaryRegistrationSignatureRequirement : PKPassAuxiliaryRegistrationRequirement {
    unsigned long long  _signatureSchemeVersion;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long signatureSchemeVersion;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void)_decorateDescription:(id)arg1;
- (id)_mutableDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassAuxiliaryRegistrationSignatureRequirement:(id)arg1;
- (unsigned long long)role;
- (unsigned long long)signatureSchemeVersion;
- (unsigned long long)type;

@end
