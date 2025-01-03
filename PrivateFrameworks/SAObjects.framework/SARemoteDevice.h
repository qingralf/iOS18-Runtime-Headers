/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARemoteDevice : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *brandName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *discoveryMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *personalDomainsAuthenticationMode;
@property (nonatomic, copy) NSNumber *personalDomainsEnabled;
@property (nonatomic) bool siriEnabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userAgent;

+ (id)remoteDevice;
+ (id)remoteDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)assistantId;
- (id)brandName;
- (id)deviceName;
- (id)discoveryMode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (id)personalDomainsAuthenticationMode;
- (id)personalDomainsEnabled;
- (void)setAssistantId:(id)arg1;
- (void)setBrandName:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDiscoveryMode:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPersonalDomainsAuthenticationMode:(id)arg1;
- (void)setPersonalDomainsEnabled:(id)arg1;
- (void)setSiriEnabled:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (bool)siriEnabled;
- (id)userAgent;

@end
