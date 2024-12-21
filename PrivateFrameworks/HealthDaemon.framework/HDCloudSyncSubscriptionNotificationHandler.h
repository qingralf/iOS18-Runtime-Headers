/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSubscriptionNotificationHandler : NSObject <APSConnectionDelegate, HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    APSConnection * _apsConnection;
    _HKBehavior * _behavior;
    HDCloudSyncCoordinator * _coordinator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _lock_lastTinkerDataDownloadTriggerTime;
    double  _lock_lastTinkerDataUploadTriggerTime;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyAPSEntitlement;
- (void)_enableAPSPush;
- (void)_queue_fetchAPSEnvironmentStringWithHandler:(id /* block */)arg1;
- (void)_queue_handleIncomingCloudKitPushNotification:(id)arg1;
- (void)_queue_handleIncomingDataDownloadAvailableNotificationOnGuardianDevices;
- (void)_queue_handleIncomingDataDownloadAvailableNotificationOnTinkerDevices;
- (void)_queue_handleIncomingDataUploadRequest;
- (void)_queue_handleIncomingPrimaryMedicalIDDataAvailableForDownloadNotification;
- (void)_queue_handleIncomingSharedSummaryDataAvailableForDownloadNotification;
- (void)_queue_handleIncomingTinkerMedicalIDDataAvailableForDownloadNotification;
- (void)_queue_handleMedicationsStateUpdatedNotification;
- (void)_queue_handleSubscriptionWithID:(id)arg1;
- (bool)_shouldTriggerDownload;
- (bool)_shouldTriggerUpload;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)daemonReady:(id)arg1;
- (id)initWithCoordinator:(id)arg1 behavior:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)resetSubscriptionSyncBackoff;
- (void)triggerSubscription:(id)arg1;

@end