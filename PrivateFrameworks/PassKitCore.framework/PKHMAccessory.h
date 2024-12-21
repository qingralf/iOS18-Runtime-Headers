/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKHMAccessory : NSObject <NSSecureCoding> {
    NSString * _name;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end