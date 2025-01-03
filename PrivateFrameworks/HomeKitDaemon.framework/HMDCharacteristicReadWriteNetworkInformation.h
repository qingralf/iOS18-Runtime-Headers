/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCharacteristicReadWriteNetworkInformation : NSObject {
    long long  _cachedBluetoothState;
    unsigned long long  _cachedCellularDataConnectionState;
    unsigned long long  _cachedEthernetConnectionState;
    NSData * _cachedIpv4Signature;
    NSData * _cachedIpv6Signature;
    bool  _cachedIsConnectedToInternet;
    NSString * _cachedWifiBSSID;
    unsigned long long  _cachedWifiConnectionState;
    NSString * _cachedWifiSSID;
    double  _timeIntervalNetworkInformationCache;
    HMFWiFiManager * _wifiManager;
}

@property long long cachedBluetoothState;
@property unsigned long long cachedCellularDataConnectionState;
@property unsigned long long cachedEthernetConnectionState;
@property (copy) NSData *cachedIpv4Signature;
@property (copy) NSData *cachedIpv6Signature;
@property bool cachedIsConnectedToInternet;
@property (copy) NSString *cachedWifiBSSID;
@property unsigned long long cachedWifiConnectionState;
@property (copy) NSString *cachedWifiSSID;
@property double timeIntervalNetworkInformationCache;
@property (retain) HMFWiFiManager *wifiManager;

- (void).cxx_destruct;
- (void)_refreshBluetoothInformation;
- (void)_refreshWifiInformation;
- (long long)cachedBluetoothState;
- (unsigned long long)cachedCellularDataConnectionState;
- (unsigned long long)cachedEthernetConnectionState;
- (id)cachedIpv4Signature;
- (id)cachedIpv6Signature;
- (bool)cachedIsConnectedToInternet;
- (id)cachedWifiBSSID;
- (unsigned long long)cachedWifiConnectionState;
- (id)cachedWifiSSID;
- (id)initWithWifiManager:(id)arg1;
- (void)refreshNetworkInformation;
- (void)setCachedBluetoothState:(long long)arg1;
- (void)setCachedCellularDataConnectionState:(unsigned long long)arg1;
- (void)setCachedEthernetConnectionState:(unsigned long long)arg1;
- (void)setCachedIpv4Signature:(id)arg1;
- (void)setCachedIpv6Signature:(id)arg1;
- (void)setCachedIsConnectedToInternet:(bool)arg1;
- (void)setCachedWifiBSSID:(id)arg1;
- (void)setCachedWifiConnectionState:(unsigned long long)arg1;
- (void)setCachedWifiSSID:(id)arg1;
- (void)setTimeIntervalNetworkInformationCache:(double)arg1;
- (void)setWifiManager:(id)arg1;
- (double)timeIntervalNetworkInformationCache;
- (id)wifiManager;

@end
