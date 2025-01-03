/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEConfiguration : NSObject <NEConfigurationValidating, NEProfileIngestionPluginDelegate, NEProfilePayloadHandlerDelegate, NSCopying, NSSecureCoding> {
    NEVPN * _VPN;
    NEAOVPN * _alwaysOnVPN;
    long long  _appPermissionType;
    NEAppPush * _appPush;
    NEVPNApp * _appVPN;
    NSString * _application;
    NSString * _applicationIdentifier;
    NSString * _applicationName;
    NEContentFilter * _contentFilter;
    NEDNSProxy * _dnsProxy;
    NEDNSSettingsBundle * _dnsSettings;
    NSString * _externalIdentifier;
    long long  _grade;
    NSUUID * _identifier;
    NSString * _name;
    NEPathController * _pathController;
    NEProfileIngestionPayloadInfo * _payloadInfo;
    NSArray * _providerMachOUUIDs;
    NERelayConfiguration * _relay;
    bool  _resolvedProviderMachOUUIDs;
}

@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEAppPush *appPush;
@property (copy) NEVPNApp *appVPN;
@property (copy) NSString *application;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *applicationName;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEDNSProxy *dnsProxy;
@property (copy) NEDNSSettingsBundle *dnsSettings;
@property (copy) NSString *externalIdentifier;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isEnabled;
@property (copy) NSString *name;
@property (copy) NEPathController *pathController;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (readonly) NSString *pluginType;
@property (copy) NERelayConfiguration *relay;
@property (getter=isTransparentProxy, readonly) bool transparentProxy;
@property (nonatomic, readonly) bool usesPolicyBasedRouting;

+ (id)configurationWithProfilePayload:(id)arg1;
+ (id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VPN;
- (id)alwaysOnVPN;
- (id)appPush;
- (id)appVPN;
- (id)application;
- (id)applicationIdentifier;
- (id)applicationName;
- (void)applyOverrides;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (void)clearSystemKeychain;
- (id)contentFilter;
- (void)copyPasswordsFromSystemKeychain;
- (id)copyProviderMachOUUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithOptions:(unsigned long long)arg1;
- (id)dnsProxy;
- (id)dnsSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)generateSignature;
- (id)getCertificates;
- (id)getConfigurationIdentifier;
- (id)getPendingCertificateInfo:(id)arg1;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (long long)grade;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 grade:(long long)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isTransparentProxy;
- (id)name;
- (id)pathController;
- (id)payloadInfo;
- (id)pluginType;
- (id)relay;
- (void)setAlwaysOnVPN:(id)arg1;
- (bool)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (void)setAppPush:(id)arg1;
- (void)setAppVPN:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (bool)setAssociatedDomains:(id)arg1;
- (bool)setCalendarDomains:(id)arg1;
- (bool)setCalendarDomains:(id)arg1 accountIdentifiers:(id)arg2;
- (bool)setCertificates:(id)arg1;
- (bool)setCertificates:(id)arg1 keyRefs:(id)arg2 specs:(id)arg3;
- (bool)setContactsDomains:(id)arg1;
- (bool)setContactsDomains:(id)arg1 accountIdentifiers:(id)arg2;
- (void)setContentFilter:(id)arg1;
- (void)setDnsProxy:(id)arg1;
- (void)setDnsSettings:(id)arg1;
- (bool)setExcludedDomains:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (bool)setMailDomains:(id)arg1;
- (bool)setMailDomains:(id)arg1 accountIdentifiers:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPathController:(id)arg1;
- (void)setPayloadInfo:(id)arg1;
- (bool)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (bool)setPayloadInfoIdentity:(id)arg1;
- (bool)setPerAppRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (bool)setPerAppUUID:(id)arg1 andSafariDomains:(id)arg2;
- (bool)setProfileInfo:(id)arg1;
- (void)setRelay:(id)arg1;
- (bool)setRestrictDomains:(bool)arg1;
- (bool)setSMBDomains:(id)arg1;
- (void)setVPN:(id)arg1;
- (bool)usesPolicyBasedRouting;

@end
