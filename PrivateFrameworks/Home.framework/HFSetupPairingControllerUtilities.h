/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSetupPairingControllerUtilities : NSObject

+ (id)_accessoryNotFoundStatusDescriptionSuffixForSetupResult:(id)arg1;
+ (bool)_context:(id)arg1 requiresUserConsentToReplaceInHome:(id)arg2;
+ (id)_progSwitchVisibleServiceToView:(id)arg1;
+ (bool)_shouldViewProgSwitchVisibleService:(id)arg1;
+ (double)accessoryDiscoveryFatalTimeout;
+ (double)accessoryDiscoverySoftTimeout;
+ (id)descriptionForPairingPhase:(unsigned long long)arg1;
+ (void)getStatusTitle:(id*)arg1 statusDescription:(id*)arg2 forPairingPhase:(unsigned long long)arg3 phaseStartDate:(id)arg4 discoveredAccessory:(id)arg5 setupResult:(id)arg6 context:(id)arg7 setupError:(id)arg8;
+ (bool)isPairingPhaseIdle:(unsigned long long)arg1;
+ (unsigned long long)processFirstPartyAccessorySetupProgressChange:(long long)arg1 currentPhase:(unsigned long long)arg2 context:(id)arg3 discoveredAccessory:(id)arg4 setupResult:(id)arg5 home:(id)arg6 callerClass:(Class)arg7;
+ (unsigned long long)processSetupAccessoryProgressChange:(long long)arg1 currentPhase:(unsigned long long)arg2 context:(id)arg3 discoveredAccessory:(id)arg4 setupResult:(id)arg5 home:(id)arg6 callerClass:(Class)arg7 thirdParty:(bool)arg8;
+ (unsigned long long)processThirdPartyAccessorySetupProgressChange:(long long)arg1 currentPhase:(unsigned long long)arg2 context:(id)arg3 discoveredAccessory:(id)arg4 setupResult:(id)arg5 callerClass:(Class)arg6;
+ (id)urlComponentHomeSettingsForAccessory:(id)arg1 forHome:(id)arg2;

@end
