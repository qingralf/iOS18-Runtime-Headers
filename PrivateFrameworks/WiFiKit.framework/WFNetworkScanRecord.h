/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFNetworkScanRecord : NSObject <NSCopying, WFNetworkListRecord> {
    bool  _adhoc;
    bool  _airPortBaseStation;
    bool  _ambiguousSSID;
    NSDictionary * _attributes;
    NSString * _bssid;
    bool  _carPlay;
    long long  _carPlayType;
    NSNumber * _channel;
    NSNumber * _channelWidth;
    NSString * _crowdsourceDescription;
    NSDictionary * _eapProfile;
    bool  _enterprise;
    bool  _hidden;
    bool  _hotspot20;
    NSString * _hotspot20Name;
    bool  _hotspot20Provisioned;
    NSString * _hotspotPluginLabel;
    bool  _iOSHotspot;
    bool  _instantHotspot;
    bool  _known;
    CWFNetworkProfile * _matchingKnownNetworkProfile;
    unsigned long long  _obsoleteNetworkCipherType;
    unsigned int  _phyMode;
    bool  _popular;
    WFPrivateAddressConfig * _privateAddressConfig;
    unsigned long long  _privateAddressMode;
    bool  _privateMACDisabledByProfile;
    bool  _prominentDisplay;
    NSString * _randomMACAddress;
    bool  _randomMACAddressEnabled;
    bool  _requiresPassword;
    bool  _requiresUsername;
    long long  _rssi;
    float  _scaledRSSI;
    CWFScanResult * _scanResult;
    bool  _secure;
    long long  _securityMode;
    long long  _securityModeExt;
    NSString * _ssid;
    bool  _supervised;
    bool  _unconfiguredAccessory;
    bool  _unconfiguredAccessorySTAOnly;
    long long  _unconfiguredAccessoryType;
    NSString * _unconfiguredDeviceID;
    NSString * _unconfiguredDeviceName;
}

@property (getter=isAdhoc, nonatomic) bool adhoc;
@property (getter=isAirPortBaseStation, nonatomic) bool airPortBaseStation;
@property (getter=isAmbiguousSSID, nonatomic) bool ambiguousSSID;
@property (retain) NSDictionary *attributes;
@property (nonatomic, copy) NSString *bssid;
@property (getter=isCarPlay, nonatomic) bool carPlay;
@property (nonatomic) long long carPlayType;
@property (nonatomic, retain) NSNumber *channel;
@property (nonatomic, readonly) NSNumber *channelWidth;
@property (nonatomic, copy) NSString *crowdsourceDescription;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *eapProfile;
@property (getter=isEnterprise, nonatomic) bool enterprise;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isHotspot20, nonatomic) bool hotspot20;
@property (nonatomic, copy) NSString *hotspot20Name;
@property (getter=isHotspot20Provisioned, nonatomic) bool hotspot20Provisioned;
@property (nonatomic, copy) NSString *hotspotPluginLabel;
@property (nonatomic) bool iOSHotspot;
@property (nonatomic) bool instantHotspot;
@property (getter=isKnown, nonatomic) bool known;
@property (nonatomic, copy) CWFNetworkProfile *matchingKnownNetworkProfile;
@property (nonatomic, readonly) unsigned long long obsoleteNetworkCipherType;
@property (nonatomic) unsigned int phyMode;
@property (getter=isPopular, nonatomic) bool popular;
@property (nonatomic, retain) WFPrivateAddressConfig *privateAddressConfig;
@property (nonatomic) unsigned long long privateAddressMode;
@property (getter=isPrivateMACDisabledByProfile, nonatomic, readonly) bool privateMACDisabledByProfile;
@property (nonatomic) bool prominentDisplay;
@property (nonatomic, retain) NSString *randomMACAddress;
@property (getter=isRandomMACAddressEnabled, nonatomic) bool randomMACAddressEnabled;
@property (nonatomic) bool requiresPassword;
@property (nonatomic) bool requiresUsername;
@property (nonatomic) long long rssi;
@property (nonatomic) float scaledRSSI;
@property (nonatomic, copy) CWFScanResult *scanResult;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long securityModeExt;
@property (nonatomic, copy) NSString *ssid;
@property (readonly) Class superclass;
@property (getter=isSupervised, nonatomic, readonly) bool supervised;
@property (nonatomic, readonly) long long type;
@property (getter=isUnconfiguredAccessory, nonatomic) bool unconfiguredAccessory;
@property (getter=isUnconfiguredAccessorySTAOnly, nonatomic) bool unconfiguredAccessorySTAOnly;
@property (nonatomic) long long unconfiguredAccessoryType;
@property (copy) NSString *unconfiguredDeviceID;
@property (nonatomic, copy) NSString *unconfiguredDeviceName;

- (void).cxx_destruct;
- (bool)_isEqualToHotspotDevice:(id)arg1;
- (bool)_isEqualToNetwork:(id)arg1;
- (id)attributes;
- (id)bssid;
- (bool)canBeDisplayedAsCurrent;
- (long long)carPlayType;
- (bool)cellularSlicingIsEnabled;
- (id)channel;
- (id)channelWidth;
- (long long)compare:(id)arg1;
- (id)configurationIssues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crowdsourceDescription;
- (id)description;
- (id)eapProfile;
- (unsigned long long)hash;
- (id)hotspot20Name;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (id)hotspotPluginLabel;
- (id)hotspotSignalStrength;
- (bool)iOSHotspot;
- (id)init;
- (id)initWithCoreWiFiProfile:(id)arg1;
- (id)initWithNetworkRef:(struct __WiFiNetwork { }*)arg1;
- (id)initWithScanResults:(id)arg1;
- (bool)instantHotspot;
- (bool)isAdhoc;
- (bool)isAirPortBaseStation;
- (bool)isAmbiguousSSID;
- (bool)isCarPlay;
- (bool)isCloudSyncable;
- (bool)isEnterprise;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentRecord:(id)arg1;
- (bool)isHidden;
- (bool)isHotspot20;
- (bool)isHotspot20Provisioned;
- (bool)isInstantHotspot;
- (bool)isKnown;
- (bool)isNetworkSecurityModeMatch:(long long)arg1;
- (bool)isPopular;
- (bool)isPrivateMACDisabledByProfile;
- (bool)isRandomMACAddressEnabled;
- (bool)isSecure;
- (bool)isSupervised;
- (bool)isUnconfiguredAccessory;
- (bool)isUnconfiguredAccessorySTAOnly;
- (id)lastJoinedDate;
- (id)matchingKnownNetworkProfile;
- (unsigned long long)obsoleteNetworkCipherType;
- (unsigned int)phyMode;
- (void)populatePrivateAddressConfig:(id)arg1;
- (id)privateAddressConfig;
- (unsigned long long)privateAddressMode;
- (bool)prominentDisplay;
- (id)randomMACAddress;
- (bool)requiresPassword;
- (bool)requiresUsername;
- (long long)rssi;
- (float)scaledRSSI;
- (id)scanResult;
- (id)securityIssue;
- (long long)securityMode;
- (long long)securityModeExt;
- (void)setAdhoc:(bool)arg1;
- (void)setAirPortBaseStation:(bool)arg1;
- (void)setAmbiguousSSID:(bool)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBssid:(id)arg1;
- (void)setCarPlay:(bool)arg1;
- (void)setCarPlayType:(long long)arg1;
- (void)setChannel:(id)arg1;
- (void)setCrowdsourceDescription:(id)arg1;
- (void)setEapProfile:(id)arg1;
- (void)setEnterprise:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHotspot20:(bool)arg1;
- (void)setHotspot20Name:(id)arg1;
- (void)setHotspot20Provisioned:(bool)arg1;
- (void)setHotspotPluginLabel:(id)arg1;
- (void)setIOSHotspot:(bool)arg1;
- (void)setInstantHotspot:(bool)arg1;
- (void)setKnown:(bool)arg1;
- (void)setMatchingKnownNetworkProfile:(id)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (void)setPopular:(bool)arg1;
- (void)setPrivateAddressConfig:(id)arg1;
- (void)setPrivateAddressMode:(unsigned long long)arg1;
- (void)setProminentDisplay:(bool)arg1;
- (void)setRandomMACAddress:(id)arg1;
- (void)setRandomMACAddressEnabled:(bool)arg1;
- (void)setRequiresPassword:(bool)arg1;
- (void)setRequiresUsername:(bool)arg1;
- (void)setRssi:(long long)arg1;
- (void)setScaledRSSI:(float)arg1;
- (void)setScanResult:(id)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setSecurityModeExt:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setUnconfiguredAccessory:(bool)arg1;
- (void)setUnconfiguredAccessorySTAOnly:(bool)arg1;
- (void)setUnconfiguredAccessoryType:(long long)arg1;
- (void)setUnconfiguredDeviceID:(id)arg1;
- (void)setUnconfiguredDeviceName:(id)arg1;
- (bool)shouldShowInKnownNetworkList;
- (bool)shouldShowInMyNetworkList;
- (unsigned long long)signalBars;
- (id)ssid;
- (id)subtitle;
- (bool)supportsJoinFailureDiagnostics;
- (bool)supportsWiFiHealth;
- (id)title;
- (long long)type;
- (long long)unconfiguredAccessoryType;
- (id)unconfiguredDeviceID;
- (id)unconfiguredDeviceName;
- (unsigned long long)uniqueIdentifier;

@end
