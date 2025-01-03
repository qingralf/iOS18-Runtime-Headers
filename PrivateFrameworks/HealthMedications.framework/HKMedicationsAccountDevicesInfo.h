/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications
 */

@interface HKMedicationsAccountDevicesInfo : NSObject <NSCopying, NSSecureCoding> {
    HKMedicationsDeviceInfo * _localDeviceInfo;
    NSArray * _medicationFeatureDevicesInfo;
}

@property (nonatomic, readonly) HKMedicationsDeviceInfo *localDeviceInfo;
@property (nonatomic, readonly, copy) NSArray *medicationFeatureDevicesInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_unitTest_newAccountInfoWithAddedDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMedicationFeatureDevicesInfo:(id)arg1 localDeviceInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localDeviceInfo;
- (id)medicationFeatureDevicesInfo;
- (id)remoteDeviceIdentifiers;
- (id)remoteDevices;

@end
