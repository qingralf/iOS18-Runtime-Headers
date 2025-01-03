/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSCarKitUtils : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _carCapabilitiesLock;
    NSDictionary * _carPlayCapabilitiesDict;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSDictionary *carPlayCapabilitiesDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_delayBecauseCarKitSendsNotificationBeforeCapabilitiesActuallyReady;
- (id)_fetchCarCapabilitiesDict;
- (void)_fetchCarCapabilitiesInBackgroundWithCompletion:(id /* block */)arg1;
- (void)_invalidateCachedCarPlayCapabilities;
- (bool)_isValidLatencyCorrectionValue:(id)arg1;
- (id)_latencyCorrectionSecondsForHeadUnit;
- (void)_recacheCarPlayCapabilitiesWithCompletion:(id /* block */)arg1;
- (void)_startObservingCarCapabilitiesNotfication:(const struct __CFString { }*)arg1;
- (void)_updateCarPlayCapabilitiesDict;
- (id)_userInfoValueForKey:(id)arg1;
- (id)carPlayCapabilitiesDict;
- (void)dealloc;
- (void)handleCarCapabilitiesUpdatedWithCompletion:(id /* block */)arg1;
- (void)handleHeadUnitConnectedWithAsyncCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isBargeInDisabledForConnectedVehicle;
- (bool)isCarPlayConnected;
- (id)potentiallyAddHWLatencyToOption:(id)arg1 streamHandle:(unsigned long long)arg2 voiceController:(id)arg3;

@end
