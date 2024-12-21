/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ANSTKit.framework/ANSTKit
 */

@interface ANSTDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;

@end