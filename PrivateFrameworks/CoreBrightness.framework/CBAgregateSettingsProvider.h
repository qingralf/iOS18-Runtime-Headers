/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBAgregateSettingsProvider : NSObject <CBAdaptiveAutoBrightnessSettingsProvider> {
    NSObject<OS_os_log> * _logHandle;
    CBPreferencesSettingsProvider * _preferencesSettingsProvider;
    CBTrialSettingsProvider * _trialSettingsProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (unsigned long long)aabUpdateStrategyType;
- (void)dealloc;
- (id)getMLABModelPath;
- (id)initWithPreferences:(id)arg1 andTrial:(id)arg2;
- (void)registerAutoBrightnessSettingsUpdateHandler:(id /* block */)arg1;
- (void)unregisterAutoBrightnessSettingsUpdateHandler;

@end