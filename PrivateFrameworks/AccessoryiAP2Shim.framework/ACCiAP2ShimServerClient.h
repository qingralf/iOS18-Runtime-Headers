/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

@interface ACCiAP2ShimServerClient : NSObject {
    unsigned int  _applicationState;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleId;
    bool  _cameraSupportedByClient;
    unsigned int  _capabilities;
    NSArray * _clientEAProtocols;
    unsigned int  _clientID;
    bool  _clientRequiresAccReset;
    bool  _entitlementForAllAccessories;
    int  _iapSessionRefCount;
    bool  _interestedInBLENotifications;
    bool  _locationSupportedByClient;
    struct SBSProcessAssertion { } * _processAssertion;
    NSObject<OS_dispatch_queue> * _processAssertionQ;
    long long  _processAssertionStartTime;
    NSObject<OS_dispatch_source> * _processAssertionTimer;
    int  _processId;
    bool  _supportsAccessibility;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic) unsigned int applicationState;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic) bool cameraSupportedByClient;
@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) NSArray *clientEAProtocols;
@property (nonatomic) unsigned int clientID;
@property (nonatomic) bool clientRequiresAccReset;
@property (nonatomic, readonly) bool entitlementForAllAccessories;
@property (nonatomic, readonly) int iapSessionRefCount;
@property (nonatomic) bool interestedInBLENotifications;
@property (nonatomic) bool locationSupportedByClient;
@property (nonatomic, readonly) struct SBSProcessAssertion { }*processAssertion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processAssertionQ;
@property (nonatomic, readonly) long long processAssertionStartTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *processAssertionTimer;
@property (nonatomic, readonly) int processId;
@property (nonatomic, readonly) bool supportsAccessibility;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcConnection;

- (void).cxx_destruct;
- (id)_applicationInfoForBundleIDSync:(id)arg1;
- (unsigned int)applicationState;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleId;
- (bool)cameraSupportedByClient;
- (bool)canSendConnectionEventForAccessory:(id)arg1;
- (unsigned int)capabilities;
- (id)clientEAProtocols;
- (unsigned int)clientID;
- (bool)clientRequiresAccReset;
- (void)dealloc;
- (id)description;
- (bool)entitlementForAllAccessories;
- (bool)hasEntitlementForAllAccessories;
- (int)iapSessionRefCount;
- (id)initWithCapabilities:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 xpcConnection:(id)arg3 eaProtocols:(id)arg4 andBundleId:(id)arg5;
- (bool)interestedInBLENotifications;
- (bool)locationSupportedByClient;
- (struct SBSProcessAssertion { }*)processAssertion;
- (id)processAssertionQ;
- (long long)processAssertionStartTime;
- (id)processAssertionTimer;
- (int)processId;
- (void)releaseProcessAssertion;
- (void)setApplicationState:(unsigned int)arg1;
- (void)setCameraSupportedByClient:(bool)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setClientRequiresAccReset:(bool)arg1;
- (void)setInterestedInBLENotifications:(bool)arg1;
- (void)setLocationSupportedByClient:(bool)arg1;
- (bool)supportsAccessibility;
- (void)takeProcessAssertion:(id)arg1;
- (id)xpcConnection;

@end
