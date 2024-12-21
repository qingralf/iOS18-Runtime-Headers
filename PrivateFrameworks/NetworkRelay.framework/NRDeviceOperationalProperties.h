/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
 */

@interface NRDeviceOperationalProperties : NRDeviceProperties {
    unsigned long long  _activeOperationalScope;
    NSArray * _allowedLinkSubtypes;
    NSArray * _allowedLinkTypes;
    unsigned char  _allowedPeerDeviceType;
    bool  _allowsDeadPeerDetection;
    bool  _allowsDeviceDiscovery;
    bool  _allowsDirectToCloud;
    bool  _allowsPermittedClientsOnly;
    unsigned long long  _bluetoothEndpointType;
    unsigned long long  _bluetoothRole;
    bool  _handlesLinkRecommendations;
    bool  _isReachableOverWiFi;
    unsigned long long  _operationalScope;
    bool  _providesPhoneCallRelaySupport;
    unsigned long long  _proxyCapability;
    NRDeviceProxyProviderCriteria * _proxyProviderCriteria;
    bool  _proxyProviderRequiresWiFi;
    bool  _requiresReachability;
    bool  _usesTLS;
    unsigned short  _version;
}

@property (nonatomic) unsigned long long activeOperationalScope;
@property (nonatomic, retain) NSArray *allowedLinkSubtypes;
@property (nonatomic, retain) NSArray *allowedLinkTypes;
@property (nonatomic) unsigned char allowedPeerDeviceType;
@property (nonatomic) bool allowsDeadPeerDetection;
@property (nonatomic) bool allowsDeviceDiscovery;
@property (nonatomic) bool allowsDirectToCloud;
@property (nonatomic) bool allowsPermittedClientsOnly;
@property (nonatomic) unsigned long long bluetoothEndpointType;
@property (nonatomic) unsigned long long bluetoothRole;
@property (nonatomic) bool handlesLinkRecommendations;
@property (nonatomic, readonly) bool hasCompanionDatapath;
@property (nonatomic, readonly) bool hasPoliciesForProxyCriteria;
@property (nonatomic) bool isReachableOverWiFi;
@property (nonatomic) unsigned long long operationalScope;
@property (nonatomic) bool providesPhoneCallRelaySupport;
@property (nonatomic) unsigned long long proxyCapability;
@property (nonatomic, retain) NRDeviceProxyProviderCriteria *proxyProviderCriteria;
@property (nonatomic) bool proxyProviderRequiresWiFi;
@property (nonatomic) bool requiresReachability;
@property (nonatomic) bool usesTLS;
@property (nonatomic) unsigned short version;

+ (id)copyPropertiesForDefaultPairedPhone;
+ (id)copyPropertiesForDefaultPairedWatch;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activeOperationalScope;
- (id)allowedLinkSubtypes;
- (id)allowedLinkTypes;
- (unsigned char)allowedPeerDeviceType;
- (bool)allowsDeadPeerDetection;
- (bool)allowsDeviceDiscovery;
- (bool)allowsDirectToCloud;
- (bool)allowsPermittedClientsOnly;
- (unsigned long long)bluetoothEndpointType;
- (unsigned long long)bluetoothRole;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)handlesLinkRecommendations;
- (bool)hasCompanionDatapath;
- (bool)hasPoliciesForProxyCriteria;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReachableOverWiFi;
- (void)mergeProperties:(id)arg1;
- (unsigned long long)operationalScope;
- (bool)providesPhoneCallRelaySupport;
- (unsigned long long)proxyCapability;
- (id)proxyProviderCriteria;
- (bool)proxyProviderRequiresWiFi;
- (bool)requiresReachability;
- (void)setActiveOperationalScope:(unsigned long long)arg1;
- (void)setAllowedLinkSubtypes:(id)arg1;
- (void)setAllowedLinkTypes:(id)arg1;
- (void)setAllowedPeerDeviceType:(unsigned char)arg1;
- (void)setAllowsDeadPeerDetection:(bool)arg1;
- (void)setAllowsDeviceDiscovery:(bool)arg1;
- (void)setAllowsDirectToCloud:(bool)arg1;
- (void)setAllowsPermittedClientsOnly:(bool)arg1;
- (void)setBluetoothEndpointType:(unsigned long long)arg1;
- (void)setBluetoothRole:(unsigned long long)arg1;
- (void)setHandlesLinkRecommendations:(bool)arg1;
- (void)setIsReachableOverWiFi:(bool)arg1;
- (void)setOperationalScope:(unsigned long long)arg1;
- (void)setProvidesPhoneCallRelaySupport:(bool)arg1;
- (void)setProxyCapability:(unsigned long long)arg1;
- (void)setProxyProviderCriteria:(id)arg1;
- (void)setProxyProviderRequiresWiFi:(bool)arg1;
- (void)setRequiresReachability:(bool)arg1;
- (void)setUsesTLS:(bool)arg1;
- (void)setVersion:(unsigned short)arg1;
- (bool)usesTLS;
- (unsigned short)version;

@end