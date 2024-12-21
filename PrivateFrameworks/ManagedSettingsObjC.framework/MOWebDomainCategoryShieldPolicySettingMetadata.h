/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOWebDomainCategoryShieldPolicySettingMetadata : MOSettingMetadata {
    unsigned long long  _maximumActivityCount;
    unsigned long long  _maximumCategoryCount;
}

@property (nonatomic, readonly) MOWebDomainCategoryShieldPolicy *defaultValue;
@property (nonatomic, readonly) unsigned long long maximumActivityCount;
@property (nonatomic, readonly) unsigned long long maximumCategoryCount;

- (id)_combine:(id)arg1 with:(id)arg2;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithSettingName:(id)arg1 defaultPolicy:(id)arg2 maximumCategoryCount:(unsigned long long)arg3 maximumActivityCount:(unsigned long long)arg4 isPublic:(bool)arg5 scope:(id)arg6 isPrivacySensitive:(bool)arg7;
- (unsigned long long)maximumActivityCount;
- (unsigned long long)maximumCategoryCount;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end