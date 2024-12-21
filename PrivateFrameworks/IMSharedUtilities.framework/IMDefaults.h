/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMDefaults : NSObject <IMSyncedSettingsLocalStorageDelegate>

+ (id)sharedInstance;

- (bool)getBoolFromDomain:(id)arg1 forKey:(id)arg2;
- (bool)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(bool)arg3;
- (id)getValueFromDomain:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forDomain:(id)arg2 forKey:(id)arg3;
- (void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3;

@end