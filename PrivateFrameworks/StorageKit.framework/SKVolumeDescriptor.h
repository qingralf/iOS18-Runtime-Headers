/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StorageKit.framework/StorageKit
 */

@interface SKVolumeDescriptor : NSObject <NSSecureCoding> {
    SKFilesystem * _filesystem;
    NSString * _name;
    NSString * _password;
}

@property (nonatomic, retain) SKFilesystem *filesystem;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *password;

+ (id)descriptorWithName:(id)arg1 filesystem:(id)arg2;
+ (id)descriptorWithName:(id)arg1 password:(id)arg2 filesystem:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filesystem;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 password:(id)arg2 filesystem:(id)arg3;
- (id)name;
- (id)password;
- (id)redactedDescription;
- (void)setFilesystem:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPassword:(id)arg1;
- (bool)validateForErase;

@end