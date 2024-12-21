/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMDeviceConfigurationChecker : NSObject <IDSServiceDelegate> {
    IDSService * _ownAccountIDSService;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *ownAccountIDSService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)convertLowPowerModeWarningStateToString:(long long)arg1;

- (void).cxx_destruct;
- (long long)_determineLowPowerModeWarningStateWithPairedDeviceNearby:(bool)arg1;
- (void)_fetchDeviceConfigurationLowPowerModeWarningStateWithHandler:(id /* block */)arg1;
- (long long)_getDeviceConfigurationLowPowerModeWarningState;
- (long long)_getDeviceConfigurationLowPowerModeWarningStateWithPairedDeviceNearby:(bool)arg1;
- (id)effectivePairedDevice;
- (void)fetchDeviceConfigurationLowPowerModeWarningStateWithHandler:(id /* block */)arg1;
- (long long)getDeviceConfigurationLowPowerModeWarningState;
- (long long)getDeviceConfigurationLowPowerModeWarningStateWithPairedDeviceNearby:(bool)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 messagingService:(id)arg2;
- (bool)isEffectivePairedDeviceNearby;
- (id)ownAccountIDSService;
- (id)queue;
- (void)setOwnAccountIDSService:(id)arg1;
- (void)setQueue:(id)arg1;

@end