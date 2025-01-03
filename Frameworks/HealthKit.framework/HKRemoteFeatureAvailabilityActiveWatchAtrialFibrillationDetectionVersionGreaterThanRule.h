/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionGreaterThanRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _targetVersion;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } targetVersion;

+ (id)ruleIdentifier;

- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (void)setTargetVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (struct { long long x1; long long x2; long long x3; })targetVersion;

@end
