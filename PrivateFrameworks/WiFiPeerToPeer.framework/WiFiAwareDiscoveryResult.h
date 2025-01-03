/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
 */

@interface WiFiAwareDiscoveryResult : NSObject <NSCopying, NSSecureCoding> {
    long long  _datapathCipherSuite;
    bool  _datapathSupported;
    long long  _fsdFunction;
    bool  _pairSetupRequired;
    WiFiAwarePairingConfiguration * _pairingConfiguration;
    unsigned char  _publishID;
    WiFiMACAddress * _publisherAddress;
    long long  _rssi;
    NSString * _serviceName;
    WiFiAwarePublishServiceSpecificInfo * _serviceSpecificInfo;
    unsigned char  _subscribeID;
}

@property (nonatomic, readonly) bool datapathSecurityRequired;
@property (nonatomic, readonly) bool datapathSupported;
@property (nonatomic, readonly) bool furtherServiceDiscoveryRequired;
@property (nonatomic, readonly) bool pairSetupRequired;
@property (nonatomic, readonly) WiFiAwarePairingConfiguration *pairingConfiguration;
@property (nonatomic, readonly) unsigned char publishID;
@property (nonatomic, readonly) WiFiMACAddress *publisherAddress;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)datapathCipherSuite;
- (bool)datapathSecurityRequired;
- (bool)datapathSupported;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fsdFunction;
- (const char *)fsdFunctionString;
- (bool)furtherServiceDiscoveryRequired;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2 publishID:(unsigned char)arg3 subscribeID:(unsigned char)arg4 publisherAddressKey:(id)arg5 datapathSupported:(bool)arg6 datapathCipherSuite:(long long)arg7 fsdFunction:(long long)arg8 rssi:(long long)arg9 pairSetupRequired:(bool)arg10 pairingConfiguration:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)pairSetupRequired;
- (id)pairingConfiguration;
- (unsigned char)publishID;
- (id)publisherAddress;
- (long long)rssi;
- (id)serviceName;
- (id)serviceSpecificInfo;
- (bool)serviceSpecificInfoEqual:(id)arg1;
- (unsigned char)subscribeID;

@end
