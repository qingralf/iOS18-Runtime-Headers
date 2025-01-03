/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPassActionRemoteConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _appletDataRequiresEncryption;
    bool  _requiresAppletData;
}

@property (nonatomic, readonly) bool appletDataRequiresEncryption;
@property (nonatomic, readonly) bool requiresAppletData;

+ (bool)supportsSecureCoding;

- (bool)appletDataRequiresEncryption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRequiresAppletData:(bool)arg1 appletDataRequiresEncryption:(bool)arg2;
- (bool)requiresAppletData;

@end
