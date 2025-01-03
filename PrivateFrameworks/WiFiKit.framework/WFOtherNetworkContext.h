/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFOtherNetworkContext : WFCredentialsContext <WFContextPresenting, WFOtherNetworkProviderContext, WFOtherNetworkViewControllerDelegate> {
    NSArray * _WAPIIdentities;
    NSArray * _WAPIRootCertificates;
    long long  _availableAuthTraits;
    NSArray * _availableTLSIdentities;
    NSString * _hardwareMACAddress;
    bool  _isUsingRandomMACAddress;
    WFNetworkScanRecord * _network;
    id /* block */  _privateAddressModeChangeHandler;
    WFNetworkProfile * _profile;
    NSString * _randomMACAddress;
    long long  _requestedFields;
    bool  _supportsRandomMACAddress;
    unsigned long long  _type;
    WFUserSuppliedNetwork * _userSuppliedNetwork;
    bool  passwordSharingSupported;
    NSString * username;
}

@property (nonatomic, readonly) bool WAPIEnabled;
@property (nonatomic, retain) NSArray *WAPIIdentities;
@property (nonatomic, retain) NSArray *WAPIRootCertificates;
@property (nonatomic) long long availableAuthTraits;
@property (nonatomic, retain) NSArray *availableTLSIdentities;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isEnterprise, nonatomic, readonly) bool enterprise;
@property (nonatomic, copy) NSString *hardwareMACAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsingRandomMACAddress;
@property (nonatomic, readonly) bool needsDismissal;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, readonly) bool passwordReceivedFromPasswordSharing;
@property (getter=isPasswordSharingSupported, nonatomic, readonly) bool passwordSharingSupported;
@property (nonatomic, copy) id /* block */ privateAddressModeChangeHandler;
@property (nonatomic, retain) WFNetworkProfile *profile;
@property (nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, copy) NSString *randomMACAddress;
@property (nonatomic) long long requestedFields;
@property (nonatomic, readonly) WFHealthIssue *securityIssue;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRandomMACAddress;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) WFUserSuppliedNetwork *userSuppliedNetwork;
@property (nonatomic, readonly) NSString *username;

- (void).cxx_destruct;
- (id)WAPIIdentities;
- (id)WAPIRootCertificates;
- (void)_updateActivityStringForError:(id)arg1 networkName:(id)arg2;
- (long long)availableAuthTraits;
- (id)availableTLSIdentities;
- (void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3;
- (void)gatherCredentials:(id /* block */)arg1;
- (id)hardwareMACAddress;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 authTraits:(long long)arg2 supportRandomAddress:(bool)arg3 useRandomAddress:(bool)arg4 randomMACAddress:(id)arg5 hardwareMACAddress:(id)arg6;
- (bool)isEnterprise;
- (bool)isPasswordSharingSupported;
- (bool)isUsingRandomMACAddress;
- (id)network;
- (bool)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)arg1;
- (id /* block */)privateAddressModeChangeHandler;
- (id)profile;
- (id)randomMACAddress;
- (long long)requestedFields;
- (void)savePrivateAddressMode:(unsigned long long)arg1;
- (long long)securityMode;
- (void)setAvailableAuthTraits:(long long)arg1;
- (void)setAvailableTLSIdentities:(id)arg1;
- (void)setHardwareMACAddress:(id)arg1;
- (void)setIsUsingRandomMACAddress:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPrivateAddressModeChangeHandler:(id /* block */)arg1;
- (void)setProfile:(id)arg1;
- (void)setRandomMACAddress:(id)arg1;
- (void)setRequestedFields:(long long)arg1;
- (void)setSupportsRandomMACAddress:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUserSuppliedNetwork:(id)arg1;
- (void)setWAPIIdentities:(id)arg1;
- (void)setWAPIRootCertificates:(id)arg1;
- (bool)supportsRandomMACAddress;
- (unsigned long long)type;
- (id)userSuppliedNetwork;
- (id)username;
- (bool)validateCredentials;
- (bool)validatePassword;

@end
