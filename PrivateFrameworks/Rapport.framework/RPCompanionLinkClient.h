/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkClient : NSObject <COCompanionLinkClientProtocol, NSSecureCoding, RPAuthenticatable, RPCompanionLinkXPCClientInterface, RPMessageable> {
    bool  _activateCalled;
    NSArray * _allowedMACAddresses;
    NSString * _appID;
    NSMutableSet * _assertions;
    id /* block */  _authCompletionHandler;
    double  _awdlGuestDiscoveryTimeout;
    long long  _bleClientUseCase;
    long long  _bleScreenOffRescanInterval;
    unsigned int  _bleScreenOffScanRate;
    unsigned int  _clientID;
    NSString * _cloudServiceID;
    unsigned long long  _controlFlags;
    <RPDaemonConnection> * _daemonCnx;
    RPCompanionLinkDevice * _destinationDevice;
    id /* block */  _deviceChangedHandler;
    NSMutableDictionary * _deviceDictionary;
    NSArray * _deviceFilter;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _encodeSensitiveProperties;
    unsigned long long  _errorFlags;
    id /* block */  _errorFlagsChangedHandler;
    id /* block */  _eventIDRegistrationCompletion;
    NSMutableDictionary * _eventRegistrations;
    unsigned int  _flags;
    id /* block */  _hidePasswordHandler;
    unsigned int  _internalAuthFlags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    RPCompanionLinkDevice * _localDevice;
    id /* block */  _localDeviceUpdatedHandler;
    NSArray * _pairSetupACL;
    unsigned int  _pairSetupFlags;
    unsigned int  _pairVerifyFlags;
    NSData * _pairingInfo;
    NSString * _password;
    int  _passwordType;
    int  _passwordTypeActual;
    id /* block */  _promptForPasswordHandler;
    bool  _reactivateCalled;
    NSMutableOrderedSet * _registeredProfileIDs;
    id /* block */  _requestIDRegistrationCompletion;
    NSMutableDictionary * _requestRegistrations;
    long long  _rssiThreshold;
    NSString * _serviceType;
    id /* block */  _showPasswordHandler;
    NSDictionary * _siriInfo;
    id /* block */  _stateUpdatedHandler;
    bool  _targetUserSession;
    unsigned int  _useCase;
    <RPSignedInUserProvider> * _userProvider;
    bool  _usingOnDemandConnection;
}

@property (nonatomic, readonly) NSDictionary *activeAccessoryDevicesSupportingAnnounce;
@property (readonly, copy) NSArray *activeDevices;
@property (nonatomic, readonly) NSArray *activeDevicesSupportingAnnounce;
@property (readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property (nonatomic, readonly) NSArray *activePersonalDevicesSupportingAnnounce;
@property (nonatomic, retain) NSArray *allowedMACAddresses;
@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic) double awdlGuestDiscoveryTimeout;
@property (nonatomic) long long bleClientUseCase;
@property (nonatomic) long long bleScreenOffRescanInterval;
@property (nonatomic) unsigned int bleScreenOffScanRate;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, copy) NSString *cloudServiceID;
@property (nonatomic) unsigned long long controlFlags;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RPCompanionLinkDevice *destinationDevice;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, retain) NSArray *deviceFilter;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool encodeSensitiveProperties;
@property (nonatomic) unsigned long long errorFlags;
@property (nonatomic, copy) id /* block */ errorFlagsChangedHandler;
@property (nonatomic, copy) id /* block */ eventIDRegistrationCompletion;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (retain) RPCompanionLinkDevice *localDevice;
@property (nonatomic, copy) id /* block */ localDeviceUpdatedHandler;
@property (nonatomic, retain) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, readonly) RPCompanionLinkDevice *pairedCompanion;
@property (nonatomic, copy) NSData *pairingInfo;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic) bool reactivateCalled;
@property (nonatomic, copy) id /* block */ requestIDRegistrationCompletion;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic, retain) NSString *serviceType;
@property (nonatomic, copy) id /* block */ showPasswordHandler;
@property (nonatomic, copy) NSDictionary *siriInfo;
@property (nonatomic, copy) id /* block */ stateUpdatedHandler;
@property (readonly) Class superclass;
@property (nonatomic) bool targetUserSession;
@property (nonatomic) unsigned int useCase;
@property (nonatomic) bool usingOnDemandConnection;

// Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_XPCConnectionWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (id)_clientError:(id)arg1;
- (id)_connectionWithClient:(id)arg1 queue:(id)arg2 userProvider:(id)arg3 interruptionHandler:(id /* block */)arg4 invalidationHandler:(id /* block */)arg5;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateAssertion:(id)arg1;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(id /* block */)arg1;
- (void)_lostAllDevices;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(bool)arg3;
- (void)_registerProfileID:(id)arg1 reregister:(bool)arg2 completion:(id /* block */)arg3;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(bool)arg3;
- (void)_registerRequestIDOnQueue:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)_reregisterAssertions;
- (void)_reregisterEvents;
- (void)_reregisterProfileIDs;
- (void)_reregisterRequests;
- (void)_startNWActivity:(unsigned int)arg1 options:(id)arg2 result:(id /* block */)arg3;
- (id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)activeDevices;
- (id)activePersonalCompanion;
- (id)allowedMACAddresses;
- (id)appID;
- (id /* block */)authCompletionHandler;
- (double)awdlGuestDiscoveryTimeout;
- (long long)bleClientUseCase;
- (long long)bleScreenOffRescanInterval;
- (unsigned int)bleScreenOffScanRate;
- (unsigned int)clientID;
- (id)cloudServiceID;
- (void)companionLinkAuthCompleted:(id)arg1;
- (void)companionLinkChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)companionLinkFoundDevice:(id)arg1;
- (void)companionLinkHandleDisconnect;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)companionLinkUpdateClientState:(id)arg1;
- (void)companionLinkUpdateErrorFlags:(unsigned long long)arg1;
- (unsigned long long)controlFlags;
- (void)createDeviceToEndpointMappingForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterProfileID:(id)arg1 completion:(id /* block */)arg2;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)destinationDevice;
- (id /* block */)deviceChangedHandler;
- (id)deviceFilter;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id /* block */)disconnectHandler;
- (id)dispatchQueue;
- (bool)encodeSensitiveProperties;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)errorFlags;
- (id /* block */)errorFlagsChangedHandler;
- (id /* block */)eventIDRegistrationCompletion;
- (unsigned int)flags;
- (id /* block */)hidePasswordHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserProvider:(id)arg1;
- (unsigned int)internalAuthFlags;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)launchAppWithBundleID:(id)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)launchAppWithURL:(id)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (id)localDevice;
- (id /* block */)localDeviceUpdatedHandler;
- (id)pairSetupACL;
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (id)pairingInfo;
- (id)password;
- (int)passwordType;
- (int)passwordTypeActual;
- (id /* block */)promptForPasswordHandler;
- (bool)reactivateCalled;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerProfileID:(id)arg1 completion:(id /* block */)arg2;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)removeLocalDeviceAsContextCollectorWithCompletion:(id /* block */)arg1;
- (id /* block */)requestIDRegistrationCompletion;
- (long long)rssiThreshold;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)serviceType;
- (void)setAllowedMACAddresses:(id)arg1;
- (void)setAppID:(id)arg1;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setAwdlGuestDiscoveryTimeout:(double)arg1;
- (void)setBleClientUseCase:(long long)arg1;
- (void)setBleScreenOffRescanInterval:(long long)arg1;
- (void)setBleScreenOffScanRate:(unsigned int)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setCloudServiceID:(id)arg1;
- (void)setControlFlags:(unsigned long long)arg1;
- (void)setDestinationDevice:(id)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFilter:(id)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEncodeSensitiveProperties:(bool)arg1;
- (void)setErrorFlags:(unsigned long long)arg1;
- (void)setErrorFlagsChangedHandler:(id /* block */)arg1;
- (void)setEventIDRegistrationCompletion:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLocalDevice:(id)arg1;
- (void)setLocalDeviceAsContextCollectorWithCompletion:(id /* block */)arg1;
- (void)setLocalDeviceUpdatedHandler:(id /* block */)arg1;
- (void)setPairSetupACL:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPairingInfo:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setReactivateCalled:(bool)arg1;
- (void)setRequestIDRegistrationCompletion:(id /* block */)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setServiceType:(id)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (void)setSiriInfo:(id)arg1;
- (void)setStateUpdatedHandler:(id /* block */)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (void)setUseCase:(unsigned int)arg1;
- (void)setUsingOnDemandConnection:(bool)arg1;
- (bool)shouldReportDevice:(id)arg1 toXPCConnectionWithLaunchInstanceID:(id)arg2 outReason:(id*)arg3;
- (id /* block */)showPasswordHandler;
- (id)siriInfo;
- (id /* block */)stateUpdatedHandler;
- (bool)targetUserSession;
- (void)triggerEnhancedDiscoveryForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerEnhancedDiscoveryForReason:(id)arg1 useCase:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)tryPassword:(id)arg1;
- (unsigned int)useCase;
- (bool)usingOnDemandConnection;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

- (id)activeAccessoryDevicesSupportingAnnounce;
- (id)activeDevicesSupportingAnnounce;
- (id)activePersonalDevicesSupportingAnnounce;
- (id)pairedCompanion;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

+ (id)co_companionLinkClientForDiscovery;
+ (id)co_companionLinkClientForDiscoveryOnDispatchQueue:(id)arg1;
+ (id)co_companionLinkClientToDevice:(id)arg1;
+ (id)co_companionLinkClientToDevice:(id)arg1 dispatchQueue:(id)arg2;

- (unsigned long long)co_CompanionLinkClientFlags;
- (void)co_SetCompanionLinkClientFlags:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

- (id)hmu_devicesForUser:(id)arg1;
- (id)hmu_devicesInHome:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer

- (id)sl_phoneAndPadDevices;

// Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore

- (void)tvrc_setAllowedTVs;

@end
