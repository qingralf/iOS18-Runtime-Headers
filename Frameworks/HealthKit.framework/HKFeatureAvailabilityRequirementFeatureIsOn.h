/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityRequirementFeatureIsOn : HKFeatureAvailabilityFeatureSettingBooleanRequirement <HKFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;

- (id)initWithFeatureIdentifier:(id)arg1 isOnWhenSettingIsAbsent:(bool)arg2;
- (id)initWithFeatureIdentifier:(id)arg1 settingsOnKey:(id)arg2 isOnWhenSettingIsAbsent:(bool)arg3;
- (id)requirementDescription;

@end
