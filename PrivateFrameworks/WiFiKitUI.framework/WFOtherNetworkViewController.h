/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFOtherNetworkViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, WFAccessoryViewController, WFNetworkView, WFOtherNetworkProvider> {
    NSString * SSID;
    NSArray * _TLSIdentities;
    struct __SecIdentity { } * _TLSIdentity;
    bool  _WAPIEnabled;
    NSArray * _WAPIIdentities;
    id  _WAPIIdentity;
    id  _WAPIRootCertificate;
    NSArray * _WAPIRootCertificates;
    bool  _WPA2EnterpriseEnabledMFPCapable;
    bool  _WPA3EnterpriseEnabled;
    bool  _WPA3PersonalEnabled;
    NSString * _activityString;
    WFAppearanceProxy * _appearanceProxy;
    UIColor * _backgroundColor;
    <WFCredentialsProviderContext> * _context;
    NSString * _defaultActivityString;
    <WFOtherNetworkViewControllerDelegate> * _delegate;
    NSString * _details;
    long long  _deviceCapability;
    long long  _firstResponderCell;
    NSString * _hardwareMACAddress;
    bool  _isUsingRandomAddress;
    bool  _joinable;
    bool  _joining;
    WFTextFieldCell * _mostRecentFirstResponder;
    WFTextFieldCell * _nameCell;
    NSString * _networkName;
    bool  _overrideDefaultSecurity;
    NSString * _password;
    WFTextFieldCell * _passwordCell;
    bool  _passwordRequired;
    unsigned long long  _privateAddressMode;
    WFValueListViewController * _privateAddressModeTitlesValueVC;
    long long  _profileMode;
    WFValueListViewController * _profileModeTitlesValueVC;
    NSString * _randomMACAddress;
    NSOrderedSet * _sections;
    long long  _securityMode;
    NSOrderedSet * _securityRows;
    WFValueListViewController * _securityTitlesValueVC;
    bool  _shouldCancelContextWhenViewDisappear;
    long long  _style;
    bool  _supportsWiFiPasswordSharing;
    NSString * _username;
    WFTextFieldCell * _usernameCell;
    bool  _wantsModalPresentation;
}

@property (nonatomic, readonly, copy) NSString *SSID;
@property (nonatomic, retain) NSArray *TLSIdentities;
@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic) bool WAPIEnabled;
@property (nonatomic, retain) NSArray *WAPIIdentities;
@property (nonatomic) id WAPIIdentity;
@property (nonatomic) id WAPIRootCertificate;
@property (nonatomic, retain) NSArray *WAPIRootCertificates;
@property (nonatomic) bool WPA2EnterpriseEnabledMFPCapable;
@property (nonatomic) bool WPA3EnterpriseEnabled;
@property (nonatomic) bool WPA3PersonalEnabled;
@property (nonatomic) NSString *activityString; /* unknown property attribute: ? */
@property (nonatomic, retain) WFAppearanceProxy *appearanceProxy;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) <WFCredentialsProviderContext> *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *defaultActivityString;
@property (nonatomic) <WFOtherNetworkViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *details;
@property (nonatomic) long long deviceCapability;
@property (nonatomic) long long firstResponderCell;
@property (nonatomic, copy) NSString *hardwareMACAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsingRandomAddress;
@property (nonatomic) bool joinable;
@property (nonatomic) bool joining;
@property (nonatomic) WFTextFieldCell *mostRecentFirstResponder;
@property (nonatomic, retain) WFTextFieldCell *nameCell;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic) bool overrideDefaultSecurity;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) WFTextFieldCell *passwordCell;
@property (nonatomic) bool passwordRequired;
@property (nonatomic) unsigned long long privateAddressMode;
@property (nonatomic, retain) WFValueListViewController *privateAddressModeTitlesValueVC;
@property (nonatomic) long long profileMode;
@property (nonatomic, retain) WFValueListViewController *profileModeTitlesValueVC;
@property (nonatomic, copy) NSString *randomMACAddress;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic) long long securityMode;
@property (nonatomic, retain) NSOrderedSet *securityRows;
@property (nonatomic, retain) WFValueListViewController *securityTitlesValueVC;
@property (nonatomic) bool shouldCancelContextWhenViewDisappear;
@property long long style;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsWiFiPasswordSharing;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, retain) WFTextFieldCell *usernameCell;
@property (nonatomic, readonly) bool wantsModalPresentation; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (id)SSID;
- (id)TLSIdentities;
- (struct __SecIdentity { }*)TLSIdentity;
- (bool)WAPIEnabled;
- (id)WAPIIdentities;
- (id)WAPIIdentity;
- (id)WAPIRootCertificate;
- (id)WAPIRootCertificates;
- (bool)WPA2EnterpriseEnabledMFPCapable;
- (bool)WPA3EnterpriseEnabled;
- (bool)WPA3PersonalEnabled;
- (id)_TLSIdentityDescription;
- (id)_WAPIIdentityDescription;
- (id)_WAPIRootCertificateDescription;
- (id)_availableProfileModeTitles;
- (id)_availableProfileModes;
- (id)_availableSecurityModes;
- (id)_availableSecurityTitles;
- (bool)_canShowModes;
- (bool)_canShowWhileLocked;
- (void)_dismiss:(id)arg1;
- (id)_getTLSIdentity:(id)arg1;
- (id)_getWAPIIdentity:(id)arg1;
- (id)_getWAPIRootCertificate:(id)arg1;
- (void)_join:(id)arg1;
- (long long)_profileModeFromTitle:(id)arg1;
- (id)_profileModeStringFromType:(long long)arg1;
- (long long)_returnKeyType;
- (void)_scrollToCellAndBecomeFirstResponder:(id)arg1;
- (id)_sectionsForStyle:(long long)arg1;
- (long long)_securityModeFromTitle:(id)arg1;
- (id)_securityRowsForStyle:(long long)arg1;
- (id)_securityStringFromType:(long long)arg1;
- (id)_selectedPrivateModeForOption:(unsigned long long)arg1;
- (unsigned long long)_selectedPrivateModeForString:(id)arg1;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (void)_setTLSIdentity:(id)arg1 specifier:(id)arg2;
- (void)_setWAPIIdentity:(id)arg1 specifier:(id)arg2;
- (void)_setWAPIRootCertificate:(id)arg1 specifier:(id)arg2;
- (void)_updateJoinable;
- (void)_updateSections;
- (id)activityString;
- (id)appearanceProxy;
- (id)backgroundColor;
- (id)context;
- (void)dealloc;
- (id)defaultActivityString;
- (id)delegate;
- (id)details;
- (long long)deviceCapability;
- (long long)firstResponderCell;
- (id)hardwareMACAddress;
- (id)initWithCredentialsProviderContext:(id)arg1 deviceCapability:(long long)arg2 appearanceProxy:(id)arg3;
- (id)initWithOtherNetworkProviderContext:(id)arg1 deviceCapability:(long long)arg2 appearanceProxy:(id)arg3;
- (id)initWithOtherNetworkStyle:(long long)arg1;
- (id)initWithOtherNetworkStyle:(long long)arg1 withTableStyle:(long long)arg2;
- (bool)isUsingRandomAddress;
- (bool)joinable;
- (bool)joining;
- (void)keyboardShown:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)mostRecentFirstResponder;
- (id)nameCell;
- (id)networkName;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (bool)overrideDefaultSecurity;
- (id)password;
- (id)passwordCell;
- (bool)passwordRequired;
- (unsigned long long)privateAddressMode;
- (id)privateAddressModeTitlesValueVC;
- (long long)profileMode;
- (id)profileModeTitlesValueVC;
- (id)randomMACAddress;
- (void)receiveSharedPassword:(id)arg1;
- (void)resetFirstResponder;
- (id)sections;
- (long long)securityMode;
- (id)securityRows;
- (id)securityTitlesValueVC;
- (void)setActivityString:(id)arg1;
- (void)setAppearanceProxy:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultActivityString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setFirstResponderCell:(long long)arg1;
- (void)setHardwareMACAddress:(id)arg1;
- (void)setIsUsingRandomAddress:(bool)arg1;
- (void)setJoinable:(bool)arg1;
- (void)setJoining:(bool)arg1;
- (void)setMostRecentFirstResponder:(id)arg1;
- (void)setNameCell:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setOverrideDefaultSecurity:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordCell:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPrivateAddressMode:(unsigned long long)arg1;
- (void)setPrivateAddressModeTitlesValueVC:(id)arg1;
- (void)setProfileMode:(long long)arg1;
- (void)setProfileModeTitlesValueVC:(id)arg1;
- (void)setRandomMACAddress:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setSecurityRows:(id)arg1;
- (void)setSecurityTitlesValueVC:(id)arg1;
- (void)setShouldCancelContextWhenViewDisappear:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSupportsWiFiPasswordSharing:(bool)arg1;
- (void)setTLSIdentities:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameCell:(id)arg1;
- (void)setWAPIEnabled:(bool)arg1;
- (void)setWAPIIdentities:(id)arg1;
- (void)setWAPIIdentity:(id)arg1;
- (void)setWAPIRootCertificate:(id)arg1;
- (void)setWAPIRootCertificates:(id)arg1;
- (void)setWPA2EnterpriseEnabledMFPCapable:(bool)arg1;
- (void)setWPA3EnterpriseEnabled:(bool)arg1;
- (void)setWPA3PersonalEnabled:(bool)arg1;
- (bool)shouldCancelContextWhenViewDisappear;
- (long long)style;
- (bool)supportsWiFiPasswordSharing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)username;
- (id)usernameCell;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsModalPresentation;

@end
