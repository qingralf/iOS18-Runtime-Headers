/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDRepairDeviceResult : NSObject <NSSecureCoding> {
    NSArray * _devicesInRepairMode;
    NSArray * _eligibleDevices;
}

@property (nonatomic, retain) NSArray *devicesInRepairMode;
@property (nonatomic, retain) NSArray *eligibleDevices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)devicesInRepairMode;
- (id)eligibleDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEligibleDevices:(id)arg1 devicesInRepairMode:(id)arg2;
- (void)setDevicesInRepairMode:(id)arg1;
- (void)setEligibleDevices:(id)arg1;

@end