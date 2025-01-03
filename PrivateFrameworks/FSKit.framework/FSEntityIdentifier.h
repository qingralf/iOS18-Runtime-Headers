/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSEntityIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSData * _qualifier;
    NSUUID * _uuid;
}

@property (copy) NSData *qualifier;
@property (copy) NSUUID *uuid;
@property (nonatomic, readonly) NSData *uuidData;

+ (id)defaultInstanceUUID;
+ (id)identifier;
+ (id)identifierWithUUID:(id)arg1;
+ (id)identifierWithUUID:(id)arg1 byteQualifier:(const char *)arg2;
+ (id)identifierWithUUID:(id)arg1 data:(id)arg2;
+ (id)identifierWithUUID:(id)arg1 longByteQualifier:(const char *)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytes:(const char *)arg1 length:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopiedUUID:(id)arg1 data:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 byteQualifier:(const char *)arg2;
- (id)initWithUUID:(id)arg1 data:(id)arg2;
- (id)initWithUUID:(id)arg1 longByteQualifier:(const char *)arg2;
- (bool)isEqual:(id)arg1;
- (id)qualifier;
- (void)setQualifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (id)uuidData;

@end
