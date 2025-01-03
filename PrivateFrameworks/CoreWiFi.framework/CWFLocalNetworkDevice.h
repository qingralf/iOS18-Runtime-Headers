/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFLocalNetworkDevice : NSObject {
    NSString * _deviceInfo;
    NSString * _name;
    NSSet * _serviceNames;
    NSSet * _sourceAddresses;
}

@property (nonatomic, copy) NSString *deviceInfo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSSet *serviceNames;
@property (nonatomic, copy) NSSet *sourceAddresses;

- (void).cxx_destruct;
- (id)description;
- (id)deviceInfo;
- (unsigned long long)hash;
- (id)name;
- (id)preferredSourceAddress;
- (id)sanitizedName;
- (id)serviceNames;
- (void)setDeviceInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServiceNames:(id)arg1;
- (void)setSourceAddresses:(id)arg1;
- (id)sourceAddresses;

@end
