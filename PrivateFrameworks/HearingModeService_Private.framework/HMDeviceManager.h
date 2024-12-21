/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeService_Private.framework/HearingModeService_Private
 */

@interface HMDeviceManager : NSObject {
    AAController * _aaController;
    bool  _activateCalled;
    AACloudServicesClient * _cloudServicesClient;
    NSMutableDictionary * _deviceAHPSConnectionManagerMap;
    AADeviceManager * _deviceManager;
    NSMutableDictionary * _deviceRecordMap;
    NSMutableDictionary * _diagnosticRecordMap;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _distributedNotificationObserving;
    NSMutableDictionary * _latestConfigsMap;
    HMOcclusionNotification * _occlusionNotification;
    NSMutableDictionary * _throttleTimerMap;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_aaControllerEnsureStarted;
- (void)_aaControllerEnsureStopped;
- (void)_accessoryDiscoveryEnsureStarted;
- (void)_accessoryDiscoveryEnsureStopped;
- (void)_activate;
- (void)_activateAHPSConnectionForDevice:(id)arg1;
- (void)_checkForOcclusionInDiagnosticRecord:(id)arg1 forDevice:(id)arg2;
- (void)_cloudServicesClientEnsureStarted;
- (void)_cloudServicesClientEnsureStopped;
- (void)_computeOcclusionResultFromFaultCountsInRecord:(id)arg1 forDevice:(id)arg2;
- (id)_constructPMEConfigDataBytesForDevice:(id)arg1 fromConfig:(id)arg2;
- (void)_deviceFound:(id)arg1;
- (void)_deviceLost:(id)arg1;
- (void)_deviceRescindHearingAssist:(id)arg1;
- (void)_deviceSetOffListeningModeAllowedIfNeeded:(id)arg1;
- (bool)_deviceUpdateRegionStatus:(id)arg1;
- (void)_diagnosticDataReceived:(id)arg1 identifier:(id)arg2 isInternal:(bool)arg3;
- (void)_distributedNotificationReceived:(id)arg1;
- (void)_fetchOcclusionResultForDeviceIdentifier:(id)arg1 featureID:(int)arg2 completion:(id /* block */)arg3;
- (void)_hearingAidConfigDataReceived:(id)arg1 identifier:(id)arg2;
- (void)_hearingProtectionValueReceived:(unsigned char)arg1 identifier:(id)arg2;
- (void)_invalidate;
- (void)_invalidateAHPSConnectionForDevice:(id)arg1;
- (void)_loadCloudRecordForDevice:(id)arg1;
- (void)_modifyDeviceConfiguration:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_multimodalContextMessageReceived:(id)arg1 identifier:(id)arg2;
- (void)_occlusionIndicationShownForDeviceAddress:(id)arg1 featureID:(int)arg2 type:(int)arg3 action:(int)arg4;
- (void)_performActionsOnRecordChange:(id)arg1;
- (void)_pmeConfigDataReceived:(id)arg1 identifier:(id)arg2;
- (void)_registerForHearingAccessibilitySettingsUpdate;
- (void)_registerForInternalDistributedNotification;
- (void)_registerForRegionStatusUpdates;
- (void)_resetFaultCountForDevice:(id)arg1;
- (void)_retrieveHearingProtectionSettingsForDevice:(id)arg1;
- (void)_saveCloudRecordForDevice:(id)arg1 withConfig:(id)arg2;
- (void)_sendConfigOverDeviceManager:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendHearingAidConfigOverAHPSConnection:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendPMEConfigOverAAController:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_setHearingProtectionEnabledForDevice:(id)arg1 withConfig:(id)arg2;
- (void)_throttleUpdatesForHearingAidConfig:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_triggerDiagnosticCheckForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_triggerHearingProtectionOcclusionNotificationIfNeeded:(id)arg1;
- (void)_unregisterFromHearingAccessibilitySettingsUpdate;
- (void)_unregisterFromInternalDistributedNotification;
- (void)_unregisterFromRegionStatusUpdates;
- (void)_updateCloudRecords:(id)arg1;
- (void)_updatePersonalAudioConfigForIdentifier:(id)arg1;
- (void)activate;
- (id)availableDiagnosticRecords;
- (id)availableRecords;
- (id)dispatchQueue;
- (void)fetchOcclusionResultForDeviceIdentifier:(id)arg1 featureID:(int)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (void)occlusionIndicationShownForDeviceAddress:(id)arg1 featureID:(int)arg2 type:(int)arg3 action:(int)arg4;
- (void)setDispatchQueue:(id)arg1;

@end