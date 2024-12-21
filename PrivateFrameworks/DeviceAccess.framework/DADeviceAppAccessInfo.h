/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceAccess.framework/DeviceAccess
 */

@interface DADeviceAppAccessInfo : NSObject <CUXPCCodable, NSCopying, NSSecureCoding> {
    unsigned long long  _accessoryOptions;
    DADiscoveryConfiguration * _appDiscoveryConfiguration;
    double  _approveTime;
    NSString * _bundleIdentifier;
    NSString * _deviceIdentifier;
    long long  _state;
}

@property (nonatomic) unsigned long long accessoryOptions;
@property (nonatomic, copy) DADiscoveryConfiguration *appDiscoveryConfiguration;
@property (nonatomic) double approveTime;
@property (nonatomic, readonly, copy) NSString *associationIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accessoryOptions;
- (id)appDiscoveryConfiguration;
- (double)approveTime;
- (id)associationIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 deviceIdentifier:(id)arg2 accessoryOptions:(unsigned long long)arg3 state:(long long)arg4;
- (id)initWithBundleIdentifier:(id)arg1 deviceIdentifier:(id)arg2 state:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)persistentDictionaryRepresentation;
- (void)setAccessoryOptions:(unsigned long long)arg1;
- (void)setAppDiscoveryConfiguration:(id)arg1;
- (void)setApproveTime:(double)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end