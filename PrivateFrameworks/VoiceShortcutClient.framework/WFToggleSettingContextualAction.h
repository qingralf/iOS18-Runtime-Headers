/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFToggleSettingContextualAction : WFContextualAction {
    unsigned long long  _operation;
    unsigned long long  _setting;
}

@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, readonly) unsigned long long setting;

+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)associatedSettingsPreference;
- (bool)availableFromLockedContext;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetting:(unsigned long long)arg1 operation:(unsigned long long)arg2;
- (id)initWithSetting:(unsigned long long)arg1 operation:(unsigned long long)arg2 unconfigured:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReversible;
- (unsigned long long)operation;
- (unsigned long long)setting;
- (id)settingBiomeStreamIdentifier;
- (id)uniqueIdentifier;

@end
