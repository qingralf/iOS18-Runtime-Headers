/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MatterSupport.framework/MatterSupport
 */

@interface MTSDeviceSetupRoom : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
