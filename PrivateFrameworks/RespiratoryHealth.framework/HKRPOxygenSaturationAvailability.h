/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
 */

@interface HKRPOxygenSaturationAvailability : NSObject {
    <HKRPOxygenSaturationAvailabilityDataSource> * _dataSource;
}

@property (getter=isDeviceSupported, nonatomic, readonly) bool deviceSupported;

+ (id)allowedCountryCodesISO3166;
+ (id)allowedCountrySet;
+ (bool)isCountryAllowed:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isDeviceSupported;

@end