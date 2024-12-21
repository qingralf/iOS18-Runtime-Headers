/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv2PPKConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    bool  _isMandatory;
    NEKeychainItem * _keychainItem;
    NSData * _keychainReference;
}

@property (readonly, copy) NSString *identifier;
@property bool isMandatory;
@property (readonly, copy) NSData *keychainReference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 keychainReference:(id)arg2;
- (bool)isMandatory;
- (id)keychainReference;
- (void)setIsMandatory:(bool)arg1;

@end