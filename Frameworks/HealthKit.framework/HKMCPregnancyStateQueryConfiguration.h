/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMCPregnancyStateQueryConfiguration : HKQueryServerConfiguration {
    bool  _isRunningForMaintenance;
}

@property (nonatomic) bool isRunningForMaintenance;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isRunningForMaintenance;
- (void)setIsRunningForMaintenance:(bool)arg1;

@end
