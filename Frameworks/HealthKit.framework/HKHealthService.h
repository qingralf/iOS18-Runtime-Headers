/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthService : NSObject <NSCopying, NSSecureCoding> {
    NSData * _advertisementData;
    NSUUID * _identifier;
    double  _lastConnection;
    NSString * _name;
    CBPeripheral * _peripheral;
    NSString * _serviceId;
    long long  _type;
}

@property (nonatomic, retain) NSData *advertisementData;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) double lastConnection;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) CBPeripheral *peripheral;
@property (nonatomic, copy) NSString *serviceId;
@property (nonatomic, readonly) long long type;

+ (id)localizedHealthServiceType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4;
- (id)advertisementData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (double)lastConnection;
- (id)name;
- (id)peripheral;
- (id)serviceId;
- (void)setAdvertisementData:(id)arg1;
- (void)setLastConnection:(double)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setServiceId:(id)arg1;
- (long long)type;

@end
