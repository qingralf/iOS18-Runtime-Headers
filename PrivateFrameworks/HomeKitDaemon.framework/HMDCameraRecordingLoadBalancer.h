/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    NSMutableDictionary * _decisionsByCameraUUIDByDeviceUUID;
    HMDHomeManager * _homeManager;
    NSMutableDictionary * _lastDecisionByCameraUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numberOfActiveRecordingSessions;
    HMFPreferences * _preferences;
    NSMutableDictionary * _readyToRecordByCameraUUIDString;
    NSMutableDictionary * _recordingSessionSummariesByCameraUUIDString;
    HMISystemResourceUsageMonitor * _systemResourceUsageMonitor;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly) NSMutableDictionary *decisionsByCameraUUIDByDeviceUUID;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) NSMutableDictionary *lastDecisionByCameraUUID;
@property unsigned long long numberOfActiveRecordingSessions;
@property (nonatomic, retain) HMFPreferences *preferences;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString;
@property (readonly) Class superclass;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_isDeviceB620InOdeonConfiguration:(id)arg1;
- (unsigned long long)_jobSlotLimitForDevice:(id)arg1;
- (id)_loadBalancingDecisionForCamera:(id)arg1 deviceFilter:(id /* block */)arg2;
- (id)_loadBalancingDescriptionFromSortedNodes:(id)arg1;
- (void)_updateReadyToRecordMetric;
- (id)decisionsByCameraUUIDByDeviceUUID;
- (void)handleRecordingSessionForwardingFailureForDecision:(id)arg1;
- (void)handleRecordingSessionForwardingSuccessForDecision:(id)arg1;
- (void)handleResidentMeshInitialized:(id)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2;
- (bool)isReadyToRecordForCameraWithUUID:(id)arg1;
- (id)lastDecisionByCameraUUID;
- (id)loadBalancingDecisionForCamera:(id)arg1 deviceFilter:(id /* block */)arg2;
- (unsigned long long)numberOfActiveRecordingSessions;
- (id)preferences;
- (id)readyToRecordByCameraUUIDString;
- (void)recordingDidEndForCameraWithUUID:(id)arg1;
- (void)recordingDidStartForCameraWithUUID:(id)arg1;
- (id)recordingSessionSummariesByCameraUUIDString;
- (void)removeDataForCameraWithUUID:(id)arg1;
- (void)setNumberOfActiveRecordingSessions:(unsigned long long)arg1;
- (void)setPreferences:(id)arg1;
- (void)setReadyToRecord:(bool)arg1 forCameraWithUUID:(id)arg2;
- (void)start;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (id)systemResourceUsageMonitor;

@end
