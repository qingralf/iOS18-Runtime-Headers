/* Generated by RuntimeBrowser.
 */

@protocol STTelephonyStateObserver <NSObject>

@optional

- (void)carrierBundleInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)stewieStateDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 usingStewieForSOS:(bool)arg2 isInactiveSOSEnabled:(bool)arg3;
- (void)stewieStateDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 usingStewieForSOS:(bool)arg2 isInactiveSOSEnabled:(bool)arg3 usingStewieConnection:(bool)arg4;
- (void)subscriptionInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;

@end
