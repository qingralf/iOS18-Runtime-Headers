/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFMutableNetworkProfile : WFNetworkProfile {
    NSString * _HS20AccountName;
    NSString * _HS20Badge;
    bool  _HS20Network;
    bool  _HS20NetworkProvisioned;
    struct __SecIdentity { } * _TLSIdentity;
    bool  _addedFromWiFiPasswordSharing;
    bool  _adhoc;
    bool  _autoJoinEnabled;
    bool  _autoLoginEnabled;
    NSString * _bssid;
    bool  _captive;
    bool  _carrierBased;
    NSArray * _certificateChain;
    NSDictionary * _enterpriseProfile;
    bool  _hidden;
    NSString * _hotspotDeviceIdentifier;
    bool  _instantHotspotJoin;
    bool  _isInSaveDataMode;
    bool  _isPrivacyProxyEnabled;
    NSDate * _lastAssociationDate;
    bool  _managed;
    NSDate * _networkQualityDate;
    double  _networkQualityResponsiveness;
    NSString * _originatorBundleIdentifier;
    NSString * _originatorName;
    NSString * _password;
    bool  _personalHotspot;
    NSString * _previousPassword;
    NSString * _randomMACAddress;
    bool  _randomMACAddressEnabled;
    NSDictionary * _scanAttributes;
    long long  _securityMode;
    long long  _securityModeExt;
    NSString * _ssid;
    bool  _userProvidedPassword;
    NSString * _username;
}

@property (getter=isHS20Network, nonatomic) bool HS20Network;
@property (getter=isHS20NetworkProvisioned, nonatomic) bool HS20NetworkProvisioned;
@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (getter=wasAddedFromWiFiPasswordSharing, nonatomic) bool addedFromWiFiPasswordSharing;
@property (getter=isAutoJoinEnabled, nonatomic) bool autoJoinEnabled;
@property (getter=isAutoLoginEnabled, nonatomic) bool autoLoginEnabled;
@property (nonatomic, retain) NSString *bssid;
@property (getter=isCaptive, nonatomic) bool captive;
@property (nonatomic, retain) NSArray *certificateChain;
@property (nonatomic, retain) NSDictionary *enterpriseProfile;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) NSString *hotspotDeviceIdentifier;
@property (getter=isInstantHotspotJoin, nonatomic) bool instantHotspotJoin;
@property (getter=isInSaveDataMode, nonatomic) bool isInSaveDataMode;
@property (getter=isPrivacyProxyEnabled, nonatomic) bool isPrivacyProxyEnabled;
@property (nonatomic, retain) NSDate *lastAssociationDate;
@property (getter=isManaged, nonatomic) bool managed;
@property (getter=networkQualityDate, nonatomic, copy) NSDate *networkQualityDate;
@property (getter=networkQualityResponsiveness, nonatomic) double networkQualityResponsiveness;
@property (nonatomic, copy) NSString *originatorBundleIdentifier;
@property (nonatomic, copy) NSString *originatorName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSString *previousPassword;
@property (nonatomic, copy) NSString *randomMACAddress;
@property (getter=isRandomMACAddressEnabled, nonatomic) bool randomMACAddressEnabled;
@property (nonatomic, retain) NSDictionary *scanAttributes;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long securityModeExt;
@property (nonatomic, retain) NSString *ssid;
@property (nonatomic) bool userProvidedPassword;
@property (nonatomic, copy) NSString *username;

+ (id)mutableProfileForNetwork:(id)arg1;

- (void).cxx_destruct;
- (id)HS20AccountName;
- (id)HS20Badge;
- (struct __SecIdentity { }*)TLSIdentity;
- (id)bssid;
- (id)certificateChain;
- (void)dealloc;
- (id)enterpriseProfile;
- (id)hotspotDeviceIdentifier;
- (id)initWithNetwork:(id)arg1;
- (bool)isAdhoc;
- (bool)isAutoJoinEnabled;
- (bool)isAutoLoginEnabled;
- (bool)isCaptive;
- (bool)isCarrierBased;
- (bool)isHS20Network;
- (bool)isHS20NetworkProvisioned;
- (bool)isHidden;
- (bool)isInSaveDataMode;
- (bool)isInstantHotspotJoin;
- (bool)isManaged;
- (bool)isPersonalHotspot;
- (bool)isPrivacyProxyEnabled;
- (bool)isRandomMACAddressEnabled;
- (id)lastAssociationDate;
- (id)networkQualityDate;
- (double)networkQualityResponsiveness;
- (id)originatorBundleIdentifier;
- (id)originatorName;
- (id)password;
- (id)previousPassword;
- (id)randomMACAddress;
- (void)removePassword;
- (id)scanAttributes;
- (long long)securityMode;
- (long long)securityModeExt;
- (void)setAddedFromWiFiPasswordSharing:(bool)arg1;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setAutoLoginEnabled:(bool)arg1;
- (void)setBssid:(id)arg1;
- (void)setCaptive:(bool)arg1;
- (void)setCertificateChain:(id)arg1;
- (void)setEnterpriseProfile:(id)arg1;
- (void)setHS20Network:(bool)arg1;
- (void)setHS20NetworkProvisioned:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHotspotDeviceIdentifier:(id)arg1;
- (void)setInstantHotspotJoin:(bool)arg1;
- (void)setIsInSaveDataMode:(bool)arg1;
- (void)setIsPrivacyProxyEnabled:(bool)arg1;
- (void)setLastAssociationDate:(id)arg1;
- (void)setManaged:(bool)arg1;
- (void)setNetworkQualityDate:(id)arg1;
- (void)setNetworkQualityResponsiveness:(double)arg1;
- (void)setOriginatorBundleIdentifier:(id)arg1;
- (void)setOriginatorName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreviousPassword:(id)arg1;
- (void)setRandomMACAddress:(id)arg1;
- (void)setRandomMACAddressEnabled:(bool)arg1;
- (void)setScanAttributes:(id)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setSecurityModeExt:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setUserProvidedPassword:(bool)arg1;
- (void)setUsername:(id)arg1;
- (id)ssid;
- (bool)userProvidedPassword;
- (id)username;
- (bool)wasAddedFromWiFiPasswordSharing;

@end