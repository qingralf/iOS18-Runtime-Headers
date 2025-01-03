/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOIntegerSettingMetadata : MOSettingMetadata {
    long long  _combineOperator;
    long long  _lowerBound;
    long long  _upperBound;
}

@property (nonatomic, readonly) long long combineOperator;
@property (nonatomic, readonly) NSNumber *defaultValue;
@property (nonatomic, readonly) long long lowerBound;
@property (nonatomic, readonly) long long upperBound;

- (long long)_combine:(long long)arg1 with:(long long)arg2;
- (long long)combineOperator;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithSettingName:(id)arg1 defaultInt:(long long)arg2 combineOperator:(long long)arg3 lowerBound:(long long)arg4 upperBound:(long long)arg5 isPublic:(bool)arg6 scope:(id)arg7 isPrivacySensitive:(bool)arg8;
- (long long)lowerBound;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (long long)upperBound;
- (id)valueFromPersistableValue:(id)arg1;

@end
