/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRMSDiscoverySessionProxy : TVRMSSessionProxy <TVRMSDiscoverySession> {
    NSArray * _availableServices;
    <TVRMSDiscoverySessionDelegate> * _delegate;
    bool  _discovering;
    long long  _discoveryTypes;
    TVRMSIDSClient * _idsClient;
    bool  _networkAvailable;
    NSArray * _pairedNetworkNames;
    long long  _retryRate;
    bool  _wifiAvailable;
}

@property (nonatomic, readonly) NSArray *availableServices;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <TVRMSDiscoverySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long discoveryTypes;
@property (readonly) unsigned long long hash;
@property (getter=isNetworkAvailable, nonatomic, readonly) bool networkAvailable;
@property (nonatomic, retain) NSArray *pairedNetworkNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_availableServicesDidUpdateNotification:(id)arg1;
- (void)_companionAvailabilityDidChange:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_updateNetworkAvailability;
- (void)_wifiAvailabilityDidChange:(id)arg1;
- (id)availableServices;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (long long)discoveryTypes;
- (void)endDiscovery;
- (void)heartbeatDidFail;
- (id)init;
- (bool)isNetworkAvailable;
- (id)pairedNetworkNames;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryTypes:(long long)arg1;
- (void)setPairedNetworkNames:(id)arg1;

@end