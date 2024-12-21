/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOSettingMetadata : NSObject {
    id  _defaultValue;
    bool  _isPrivacySensitive;
    bool  _isPublic;
    NSString * _scope;
    NSString * _settingName;
}

@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly) bool isPrivacySensitive;
@property (nonatomic, readonly) bool isPublic;
@property (nonatomic, readonly) NSSet *responsibleClients;
@property (nonatomic, readonly) NSString *scope;
@property (nonatomic, readonly) NSString *settingName;

- (void).cxx_destruct;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithSettingName:(id)arg1 defaultValue:(id)arg2 isPublic:(bool)arg3 scope:(id)arg4 isPrivacySensitive:(bool)arg5;
- (bool)isPrivacySensitive;
- (bool)isPublic;
- (id)persistableValueFromValue:(id)arg1;
- (id)responsibleClients;
- (id)sanitizePersistableValue:(id)arg1;
- (id)scope;
- (id)settingName;
- (id)valueFromPersistableValue:(id)arg1;

@end