/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications
 */

@interface HKMedicationsDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _hardwareIdentifier;
    bool  _localDevice;
    NSString * _model;
    NSString * _name;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    long long  _scheduleCompatibilityVersion;
}

@property (nonatomic, readonly, copy) NSUUID *hardwareIdentifier;
@property (getter=isLocalDevice, nonatomic, readonly) bool localDevice;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, readonly) long long scheduleCompatibilityVersion;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initLocalDeviceWithName:(id)arg1 model:(id)arg2 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg3 scheduleCompatibilityVersion:(long long)arg4;
- (void)_setHardwareIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterOutCompatibleSchedules:(id)arg1;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHardwareIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg4 scheduleCompatibilityVersion:(long long)arg5 localDevice:(bool)arg6;
- (id)initWithLocalPairedDevice:(id)arg1;
- (id)initWithPairedDevice:(id)arg1;
- (bool)isCompatibleWithSchedule:(id)arg1;
- (bool)isCompatibleWithScheduleCompatibilityVersion:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocalDevice;
- (id)model;
- (id)name;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (long long)scheduleCompatibilityVersion;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

+ (id)deviceInfoFromStorageGroup:(id)arg1 syncIdentityManager:(id)arg2;
+ (id)localDeviceInfo;

@end
