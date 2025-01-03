/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFDiagnosticsContext : NSObject <WFDiagnosticsProviderContext> {
    NSString * _BSSID;
    NSString * _adviceString;
    NSString * _awdl;
    NSString * _beaconPER;
    NSString * _bluetooth;
    bool  _captive;
    NSString * _cca;
    NSNumber * _channel;
    NSString * _channelPerformance;
    NSString * _channelString;
    NSString * _channelWidth;
    NSString * _coexFooter;
    WFDetailsContext * _context;
    NSString * _deployment;
    struct __WiFiDeviceClient { } * _device;
    NSString * _gateway;
    NSString * _internet;
    bool  _managed;
    struct __WiFiManagerClient { } * _manager;
    NSString * _motion;
    bool  _multiAP;
    WFNetworkScanRecord * _network;
    NSDate * _networkQualityDate;
    double  _networkQualityResponsiveness;
    NSString * _probeFooter;
    WFNetworkProfile * _profile;
    NSString * _recvFrames;
    NSString * _rssi;
    NSString * _rssiPerformance;
    NSString * _scan;
    NSString * _security;
    NSString * _securityAdvice;
    NSString * _transmitPER;
    id /* block */  refreshHandler;
    long long  requestedFields;
}

@property (nonatomic, readonly) NSString *BSSID;
@property (nonatomic, readonly) NSString *adviceString;
@property (nonatomic, readonly) NSString *awdl;
@property (nonatomic, readonly) NSString *beaconPER;
@property (nonatomic, readonly) NSString *bluetooth;
@property (nonatomic, readonly) bool captive;
@property (nonatomic, readonly) NSString *cca;
@property (nonatomic, readonly) NSNumber *channel;
@property (nonatomic, readonly) NSString *channelPerformance;
@property (nonatomic, readonly) NSString *channelString;
@property (nonatomic, readonly) NSString *channelWidth;
@property (nonatomic, readonly) NSString *coexFooter;
@property (nonatomic, retain) WFDetailsContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *deployment;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct __WiFiDeviceClient { }*device;
@property (nonatomic, readonly) NSString *gateway;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *internet;
@property (nonatomic, readonly) bool managed;
@property (nonatomic) struct __WiFiManagerClient { }*manager;
@property (nonatomic, readonly) NSString *motion;
@property (nonatomic, readonly) bool multiAP;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, copy) NSDate *networkQualityDate;
@property (nonatomic) double networkQualityResponsiveness;
@property (nonatomic, readonly) NSString *probeFooter;
@property (nonatomic, retain) WFNetworkProfile *profile;
@property (nonatomic, readonly) NSString *recvFrames;
@property (nonatomic, copy) id /* block */ refreshHandler;
@property (nonatomic, readonly) long long requestedFields;
@property (nonatomic, readonly) NSString *rssi;
@property (nonatomic, readonly) NSString *rssiPerformance;
@property (nonatomic, readonly) NSString *scan;
@property (nonatomic, readonly) NSString *security;
@property (nonatomic, readonly) NSString *securityAdvice;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transmitPER;

- (void).cxx_destruct;
- (id)BSSID;
- (id)adviceString;
- (id)awdl;
- (id)beaconPER;
- (id)bluetooth;
- (void)cancel;
- (bool)captive;
- (id)cca;
- (id)channel;
- (id)channelPerformance;
- (id)channelString;
- (id)channelWidth;
- (id)coexFooter;
- (id)context;
- (id)deployment;
- (struct __WiFiDeviceClient { }*)device;
- (id)gateway;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 detailsContext:(id)arg3;
- (id)internet;
- (bool)managed;
- (struct __WiFiManagerClient { }*)manager;
- (id)motion;
- (bool)multiAP;
- (id)network;
- (id)networkQualityDate;
- (double)networkQualityResponsiveness;
- (id)probeFooter;
- (id)profile;
- (id)recvFrames;
- (id /* block */)refreshHandler;
- (long long)requestedFields;
- (id)rssi;
- (id)rssiPerformance;
- (id)scan;
- (id)security;
- (id)securityAdvice;
- (void)setContext:(id)arg1;
- (void)setDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)setManager:(struct __WiFiManagerClient { }*)arg1;
- (void)setNetwork:(id)arg1;
- (void)setNetworkQualityDate:(id)arg1;
- (void)setNetworkQualityResponsiveness:(double)arg1;
- (void)setProfile:(id)arg1;
- (void)setRefreshHandler:(id /* block */)arg1;
- (id)transmitPER;
- (void)updateInfo:(id)arg1;

@end
