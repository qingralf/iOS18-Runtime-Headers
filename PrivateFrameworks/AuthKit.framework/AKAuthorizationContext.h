/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAuthorizationContext : NSObject <AKAuthenticationContext, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appProvidedContext;
    NSDictionary * _appProvidedData;
    unsigned long long  _authenticationMode;
    unsigned long long  _authenticationType;
    bool  _clientAuthenticatedExternallyWithPassword;
    NSString * _clientID;
    AKDevice * _companionDevice;
    AKCompanionKeyEnvelope * _companionKeyEnvelope;
    NSString * _externalAuthToken;
    NSUUID * _identifier;
    bool  _isAuthorizingForSharedSIWAAccount;
    bool  _isMDMInformationRequired;
    NSString * _proxiedAppName;
    AKDevice * _proxiedDevice;
    NSString * _realUserVerificationData;
    AKAuthorizationRequest * _request;
    long long  _serviceType;
    NSString * _sharedSIWAAccountGroupID;
    NSString * _sharedSIWAAccountShareToken;
    bool  _shouldRequestToArmDeviceToAllowPCSKeyUpload;
    NSString * _teamID;
    AKAuthorizationScopesUserSelection * _userSelection;
    NSString * _username;
}

@property (nonatomic) bool _clientAuthenticatedExternallyWithPassword;
@property (nonatomic, copy) NSString *_externalAuthToken;
@property (nonatomic, readonly) bool _hasApplicationMetaData;
@property (nonatomic, readonly) NSUUID *_identifier;
@property (nonatomic) bool _isAuthorizingForSharedSIWAAccount;
@property (setter=_setProxiedAppName:, nonatomic, copy) NSString *_proxiedAppName;
@property (nonatomic, copy) NSString *_sharedSIWAAccountGroupID;
@property (nonatomic, copy) NSString *_sharedSIWAAccountShareToken;
@property (nonatomic) bool _shouldRequestToArmDeviceToAllowPCSKeyUpload;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appProvidedContext;
@property (nonatomic, copy) NSDictionary *appProvidedData;
@property (nonatomic) unsigned long long authenticationMode;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) AKDevice *companionDevice;
@property (nonatomic, retain) AKCompanionKeyEnvelope *companionKeyEnvelope;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMDMInformationRequired;
@property (nonatomic, copy) AKDevice *proxiedDevice;
@property (nonatomic, copy) NSString *realUserVerificationData;
@property (nonatomic, readonly, copy) AKAuthorizationRequest *request;
@property (nonatomic) long long serviceType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, retain) AKAuthorizationScopesUserSelection *userSelection;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_clientAuthenticatedExternallyWithPassword;
- (id)_externalAuthToken;
- (bool)_hasApplicationMetaData;
- (id)_identifier;
- (bool)_isAuthorizingForSharedSIWAAccount;
- (id)_proxiedAppName;
- (void)_setProxiedAppName:(id)arg1;
- (id)_sharedSIWAAccountGroupID;
- (id)_sharedSIWAAccountShareToken;
- (bool)_shouldRequestToArmDeviceToAllowPCSKeyUpload;
- (id)altDSID;
- (id)appProvidedContext;
- (id)appProvidedData;
- (unsigned long long)authenticationMode;
- (unsigned long long)authenticationType;
- (id)clientID;
- (id)companionDevice;
- (id)companionKeyEnvelope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)isMDMInformationRequired;
- (id)proxiedDevice;
- (id)realUserVerificationData;
- (id)request;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setAppProvidedContext:(id)arg1;
- (void)setAppProvidedData:(id)arg1;
- (void)setAuthenticationMode:(unsigned long long)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setClientID:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setCompanionKeyEnvelope:(id)arg1;
- (void)setIsMDMInformationRequired:(bool)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setRealUserVerificationData:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)set_clientAuthenticatedExternallyWithPassword:(bool)arg1;
- (void)set_externalAuthToken:(id)arg1;
- (void)set_isAuthorizingForSharedSIWAAccount:(bool)arg1;
- (void)set_sharedSIWAAccountGroupID:(id)arg1;
- (void)set_sharedSIWAAccountShareToken:(id)arg1;
- (void)set_shouldRequestToArmDeviceToAllowPCSKeyUpload:(bool)arg1;
- (id)teamID;
- (id)userSelection;
- (id)username;

@end
