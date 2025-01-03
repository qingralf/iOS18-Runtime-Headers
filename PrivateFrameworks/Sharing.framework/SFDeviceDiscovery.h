/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    unsigned long long  _activateTicks;
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_source> * _consoleUserTimer;
    id /* block */  _deviceChangedHandler;
    NSSet * _deviceFilter;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSMutableDictionary * _devices;
    unsigned long long  _discoveryFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _fastScanMode;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _legacy;
    bool  _overrideScreenOff;
    long long  _overrideScreenOffRescanInterval;
    NSString * _purpose;
    bool  _rssiChangeDetection;
    long long  _rssiThreshold;
    bool  _scanCache;
    long long  _scanRate;
    long long  _scanRateOverride;
    long long  _scanState;
    id /* block */  _scanStateChangedHandler;
    bool  _targetUserSession;
    double  _timeout;
    bool  _timeoutFired;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    bool  _trackPeers;
    NSSet * _useCases;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) NSSet *deviceFilter;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long fastScanMode;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool overrideScreenOff;
@property (nonatomic) long long overrideScreenOffRescanInterval;
@property (nonatomic, copy) NSString *purpose;
@property (nonatomic) bool rssiChangeDetection;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) bool scanCache;
@property (nonatomic) long long scanRate;
@property (nonatomic) long long scanRateOverride;
@property (nonatomic, readonly) long long scanState;
@property (nonatomic, copy) id /* block */ scanStateChangedHandler;
@property (nonatomic) bool targetUserSession;
@property (nonatomic) double timeout;
@property (nonatomic, copy) id /* block */ timeoutHandler;
@property (nonatomic) bool trackPeers;
@property (nonatomic, retain) NSSet *useCases;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (int)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(id /* block */)arg1;
- (void)_retryConsole;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id /* block */)deviceChangedHandler;
- (void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryFoundDevice:(id)arg1;
- (void)deviceDiscoveryLostDevice:(id)arg1;
- (void)deviceDiscoveryScanStateChanged:(long long)arg1;
- (id)deviceFilter;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (unsigned long long)discoveryFlags;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (void)fastScanCancel:(id)arg1;
- (long long)fastScanMode;
- (void)fastScanTrigger:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)overrideScreenOff;
- (long long)overrideScreenOffRescanInterval;
- (id)purpose;
- (bool)rssiChangeDetection;
- (long long)rssiThreshold;
- (bool)scanCache;
- (long long)scanRate;
- (long long)scanRateOverride;
- (long long)scanState;
- (id /* block */)scanStateChangedHandler;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFilter:(id)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDiscoveryFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFastScanMode:(long long)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOverrideScreenOff:(bool)arg1;
- (void)setOverrideScreenOffRescanInterval:(long long)arg1;
- (void)setPurpose:(id)arg1;
- (void)setRssiChangeDetection:(bool)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setScanCache:(bool)arg1;
- (void)setScanRate:(long long)arg1;
- (void)setScanRateOverride:(long long)arg1;
- (void)setScanStateChangedHandler:(id /* block */)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (void)setTrackPeers:(bool)arg1;
- (void)setUseCases:(id)arg1;
- (bool)targetUserSession;
- (double)timeout;
- (id /* block */)timeoutHandler;
- (bool)trackPeers;
- (void)triggerEnhancedDiscovery:(id)arg1;
- (void)triggerEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)useCases;

@end
