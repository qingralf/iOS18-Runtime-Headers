/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelAccountExchangeDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadAuthenticationCredentialsAssetReference;
    NSString * _payloadAuthenticationIdentityAssetReference;
    NSNumber * _payloadCalendarServiceActive;
    NSNumber * _payloadContactsServiceActive;
    NSArray * _payloadEnabledProtocolTypes;
    NSString * _payloadExternalHostName;
    NSString * _payloadExternalPath;
    NSNumber * _payloadExternalPort;
    NSString * _payloadHostName;
    NSNumber * _payloadLockCalendarService;
    NSNumber * _payloadLockContactsService;
    NSNumber * _payloadLockMailService;
    NSNumber * _payloadLockNotesService;
    NSNumber * _payloadLockRemindersService;
    NSNumber * _payloadMailServiceActive;
    NSNumber * _payloadNotesServiceActive;
    RMModelAccountExchangeDeclaration_OAuth * _payloadOAuth;
    NSString * _payloadPath;
    NSNumber * _payloadPort;
    NSNumber * _payloadRemindersServiceActive;
    RMModelAccountExchangeDeclaration_SMIME * _payloadSMIME;
    NSString * _payloadUserIdentityAssetReference;
    NSString * _payloadVisibleName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAuthenticationCredentialsAssetReference;
@property (nonatomic, copy) NSString *payloadAuthenticationIdentityAssetReference;
@property (nonatomic, copy) NSNumber *payloadCalendarServiceActive;
@property (nonatomic, copy) NSNumber *payloadContactsServiceActive;
@property (nonatomic, copy) NSArray *payloadEnabledProtocolTypes;
@property (nonatomic, copy) NSString *payloadExternalHostName;
@property (nonatomic, copy) NSString *payloadExternalPath;
@property (nonatomic, copy) NSNumber *payloadExternalPort;
@property (nonatomic, copy) NSString *payloadHostName;
@property (nonatomic, copy) NSNumber *payloadLockCalendarService;
@property (nonatomic, copy) NSNumber *payloadLockContactsService;
@property (nonatomic, copy) NSNumber *payloadLockMailService;
@property (nonatomic, copy) NSNumber *payloadLockNotesService;
@property (nonatomic, copy) NSNumber *payloadLockRemindersService;
@property (nonatomic, copy) NSNumber *payloadMailServiceActive;
@property (nonatomic, copy) NSNumber *payloadNotesServiceActive;
@property (nonatomic, copy) RMModelAccountExchangeDeclaration_OAuth *payloadOAuth;
@property (nonatomic, copy) NSString *payloadPath;
@property (nonatomic, copy) NSNumber *payloadPort;
@property (nonatomic, copy) NSNumber *payloadRemindersServiceActive;
@property (nonatomic, copy) RMModelAccountExchangeDeclaration_SMIME *payloadSMIME;
@property (nonatomic, copy) NSString *payloadUserIdentityAssetReference;
@property (nonatomic, copy) NSString *payloadVisibleName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 enabledProtocolTypes:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 enabledProtocolTypes:(id)arg3 userIdentityAssetReference:(id)arg4 hostName:(id)arg5 port:(id)arg6 path:(id)arg7 externalHostName:(id)arg8 externalPort:(id)arg9 externalPath:(id)arg10 oAuth:(id)arg11 authenticationCredentialsAssetReference:(id)arg12 authenticationIdentityAssetReference:(id)arg13 SMIME:(id)arg14 mailServiceActive:(id)arg15 lockMailService:(id)arg16 contactsServiceActive:(id)arg17 lockContactsService:(id)arg18 calendarServiceActive:(id)arg19 lockCalendarService:(id)arg20 remindersServiceActive:(id)arg21 lockRemindersService:(id)arg22 notesServiceActive:(id)arg23 lockNotesService:(id)arg24;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAuthenticationCredentialsAssetReference;
- (id)payloadAuthenticationIdentityAssetReference;
- (id)payloadCalendarServiceActive;
- (id)payloadContactsServiceActive;
- (id)payloadEnabledProtocolTypes;
- (id)payloadExternalHostName;
- (id)payloadExternalPath;
- (id)payloadExternalPort;
- (id)payloadHostName;
- (id)payloadLockCalendarService;
- (id)payloadLockContactsService;
- (id)payloadLockMailService;
- (id)payloadLockNotesService;
- (id)payloadLockRemindersService;
- (id)payloadMailServiceActive;
- (id)payloadNotesServiceActive;
- (id)payloadOAuth;
- (id)payloadPath;
- (id)payloadPort;
- (id)payloadRemindersServiceActive;
- (id)payloadSMIME;
- (id)payloadUserIdentityAssetReference;
- (id)payloadVisibleName;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAuthenticationCredentialsAssetReference:(id)arg1;
- (void)setPayloadAuthenticationIdentityAssetReference:(id)arg1;
- (void)setPayloadCalendarServiceActive:(id)arg1;
- (void)setPayloadContactsServiceActive:(id)arg1;
- (void)setPayloadEnabledProtocolTypes:(id)arg1;
- (void)setPayloadExternalHostName:(id)arg1;
- (void)setPayloadExternalPath:(id)arg1;
- (void)setPayloadExternalPort:(id)arg1;
- (void)setPayloadHostName:(id)arg1;
- (void)setPayloadLockCalendarService:(id)arg1;
- (void)setPayloadLockContactsService:(id)arg1;
- (void)setPayloadLockMailService:(id)arg1;
- (void)setPayloadLockNotesService:(id)arg1;
- (void)setPayloadLockRemindersService:(id)arg1;
- (void)setPayloadMailServiceActive:(id)arg1;
- (void)setPayloadNotesServiceActive:(id)arg1;
- (void)setPayloadOAuth:(id)arg1;
- (void)setPayloadPath:(id)arg1;
- (void)setPayloadPort:(id)arg1;
- (void)setPayloadRemindersServiceActive:(id)arg1;
- (void)setPayloadSMIME:(id)arg1;
- (void)setPayloadUserIdentityAssetReference:(id)arg1;
- (void)setPayloadVisibleName:(id)arg1;

@end