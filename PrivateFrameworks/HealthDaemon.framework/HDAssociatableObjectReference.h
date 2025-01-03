/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociatableObjectReference : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    Class  _objectClass;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) Class objectClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 objectClass:(Class)arg2;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)persistentIDInTransaction:(id)arg1 error:(id*)arg2;

@end
