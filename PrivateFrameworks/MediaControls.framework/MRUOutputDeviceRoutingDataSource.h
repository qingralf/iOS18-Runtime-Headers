/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUOutputDeviceRoutingDataSource : MPAVRoutingDataSource <MRUODRDSNoticationObserverDelegate> {
    MPMRAVOutputContextWrapper * _applicationOutputContext;
    bool  _attemptedToInitializeAppOutputContext;
    id  _callbackToken;
    id  _companionCallbackToken;
    MRAVRoutingDiscoverySession * _companionDiscoverySession;
    bool  _detachesRoutesToGroup;
    bool  _devicePresenceDetected;
    bool  _didFindCompanion;
    bool  _didReceiveDiscoveryResults;
    long long  _discoveryMode;
    MRAVRoutingDiscoverySession * _discoverySession;
    NSObject<OS_dispatch_queue> * _discoverySessionQueue;
    NSString * _donatingAppBundleID;
    bool  _donatingAppEligible;
    MPAVEndpointRoute * _endpointRoute;
    <MRUOutputDeviceRoutingDataSourceObserver> * _hearingAidDelegate;
    NSString * _hearingDeviceName;
    MPAVOutputDeviceRoute * _hearingDeviceRoute;
    NSString * _initiator;
    MRUODRDSNoticationObserver * _notificationObserver;
    NSString * _nowPlayingAppBundleID;
    NSArray * _outputDeviceRoutes;
    MRAVOutputDevice * _predictedDevice;
    NSString * _presentingAppBundleID;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldSourceOutputDevicesFromAVODDS;
    bool  _subscribed;
    bool  _supportsMultipleSelection;
    bool  _supportsQueueHandoff;
    unsigned int  _targetSessionID;
    NSArray * _visibleMediaApps;
}

@property (nonatomic, retain) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (nonatomic, retain) MRAVRoutingDiscoverySession *companionDiscoverySession;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool detachesRoutesToGroup;
@property (nonatomic) bool didReceiveDiscoveryResults;
@property (nonatomic, retain) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic, readonly) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (nonatomic, copy) NSString *donatingAppBundleID;
@property (getter=isDonatingAppEligible, nonatomic) bool donatingAppEligible;
@property (nonatomic, readonly) MRAVEndpoint *endpoint;
@property (nonatomic, retain) MPAVEndpointRoute *endpointRoute;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MRUOutputDeviceRoutingDataSourceObserver> *hearingAidDelegate;
@property (nonatomic, retain) NSString *hearingDeviceName;
@property (nonatomic, retain) MPAVOutputDeviceRoute *hearingDeviceRoute;
@property (nonatomic, retain) NSString *initiator;
@property (nonatomic, retain) MRUODRDSNoticationObserver *notificationObserver;
@property (nonatomic, copy) NSString *nowPlayingAppBundleID;
@property (nonatomic, retain) MRAVOutputDevice *predictedDevice;
@property (nonatomic, copy) NSString *presentingAppBundleID;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) bool subscribed;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsMultipleSelection;
@property (nonatomic) bool supportsQueueHandoff;
@property (nonatomic, copy) NSArray *visibleMediaApps;

+ (id)_globalAudioSessionLock;

- (void).cxx_destruct;
- (id)_detachableDevicesInOutputDevices:(id)arg1;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (void)_generateDiscoverySession;
- (id)_initWithEndpointRoute:(id)arg1;
- (bool)_isRemovingPredictedDevice:(id)arg1;
- (void)_onDiscoverySessionQueue_generateCompanionDiscoverySession;
- (void)_onDiscoverySessionQueue_generateDiscoverySession;
- (id)_outputDeviceRouteWithUID:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_personalRoutesDidChange;
- (void)_registerNotifications;
- (void)_resetPredictedOutputDevice;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(bool)arg1;
- (bool)_shouldAddPredictedDeviceToOuputDevices:(id)arg1;
- (bool)_shouldDetachOutputDevicesToGroup:(id)arg1;
- (id)_stateDumpObject;
- (void)_unregisterNotifications;
- (void)addHearingAidRouteIfNeededToRoutes:(id)arg1;
- (void)addRouteToGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)addRoutesToGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)applicationOutputContext;
- (id)companionDiscoverySession;
- (void)createGroupFromOutputDevices:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (bool)detachesRoutesToGroup;
- (bool)devicePresenceDetected;
- (bool)didReceiveDiscoveryResults;
- (long long)discoveryMode;
- (id)discoverySession;
- (id)discoverySessionConfiguration;
- (id)donatingAppBundleID;
- (id)endpoint;
- (id)endpointRoute;
- (id)getRoutesForCategory:(id)arg1;
- (id)hearingAidDelegate;
- (void)hearingAidReachabilityDidChange;
- (id)hearingDeviceName;
- (id)hearingDeviceRoute;
- (id)init;
- (id)initWithEndpointRoute:(id)arg1;
- (id)initiator;
- (bool)isDonatingAppEligible;
- (id)notificationObserver;
- (id)nowPlayingAppBundleID;
- (id)outputDevicesForRoutes:(id)arg1;
- (id)predictedDevice;
- (id)presentingAppBundleID;
- (void)removeRouteFromGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)removeRoutesFromGroup:(id)arg1 completion:(id /* block */)arg2;
- (bool)routeIsLeaderOfEndpoint:(id)arg1;
- (id)routingContextUID;
- (void)setApplicationOutputContext:(id)arg1;
- (void)setCompanionDiscoverySession:(id)arg1;
- (void)setDetachesRoutesToGroup:(bool)arg1;
- (void)setDidReceiveDiscoveryResults:(bool)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setDiscoverySession:(id)arg1;
- (void)setDonatingAppBundleID:(id)arg1;
- (void)setDonatingAppEligible:(bool)arg1;
- (void)setEndpointRoute:(id)arg1;
- (void)setHearingAidDelegate:(id)arg1;
- (void)setHearingDeviceName:(id)arg1;
- (void)setHearingDeviceRoute:(id)arg1;
- (void)setInitiator:(id)arg1;
- (void)setNotificationObserver:(id)arg1;
- (void)setNowPlayingAppBundleID:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (void)setPredictedDevice:(id)arg1;
- (void)setPresentingAppBundleID:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSupportsMultipleSelection:(bool)arg1;
- (void)setSupportsQueueHandoff:(bool)arg1;
- (void)setTargetSessionID:(unsigned int)arg1;
- (void)setVisibleMediaApps:(id)arg1;
- (bool)subscribed;
- (bool)supportsMultipleSelection;
- (bool)supportsQueueHandoff;
- (unsigned int)targetSessionID;
- (id)visibleMediaApps;

@end