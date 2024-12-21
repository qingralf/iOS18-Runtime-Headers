/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOKerberosRealmSettings : NSObject {
    NSUserDefaults * _defaults;
    NSString * _notificationName;
    int  _notifyToken;
    NSObject<OS_dispatch_semaphore> * _platformSSOLoginSemaphore;
    NSString * _realm;
    NSMutableArray * _siteCodeCache;
}

@property (nonatomic, retain) NSUUID *credentialUUID;
@property (nonatomic, retain) NSDate *dateADPasswordCanChange;
@property (nonatomic, retain) NSDate *dateADPasswordLastChangedWhenSynced;
@property (nonatomic, retain) NSDate *dateExpirationChecked;
@property (nonatomic, retain) NSDate *dateExpirationNotificationSent;
@property (nonatomic, retain) NSDate *dateLastLogin;
@property (nonatomic, retain) NSDate *dateLocalPasswordLastChanged;
@property (nonatomic, retain) NSDate *dateLocalPasswordLastChangedWhenSynced;
@property (nonatomic, retain) NSDate *dateLoginCancelled;
@property (nonatomic, retain) NSDate *dateNextPacRefresh;
@property (nonatomic, retain) NSDate *datePasswordExpires;
@property (nonatomic, retain) NSDate *datePasswordLastChanged;
@property (nonatomic, retain) NSDate *datePasswordLastChangedAtLogin;
@property (nonatomic, retain) NSDate *dateUserSignedOut;
@property (nonatomic, readonly) NSNumber *daysUntilExpiration;
@property (retain) NSUserDefaults *defaults;
@property (nonatomic) bool delayUserSetupCleared;
@property (nonatomic) bool networkAvailable;
@property (nonatomic, retain) NSString *networkHomeDirectory;
@property (nonatomic, retain) NSString *notificationName;
@property int notifyToken;
@property (nonatomic) bool passwordChangeInProgress;
@property (nonatomic) bool passwordNeverExpires;
@property (nonatomic, retain) NSData *pkinitPersistientRef;
@property (nonatomic) bool platformSSOLoginInProgress;
@property (readonly) NSObject<OS_dispatch_semaphore> *platformSSOLoginSemaphore;
@property (retain) NSString *realm;
@property (nonatomic, retain) NSMutableArray *siteCodeCache;
@property (nonatomic, retain) NSString *smartCardTokenID;
@property (nonatomic) bool userCancelledLogin;
@property (nonatomic, retain) NSString *userName;
@property (nonatomic, retain) NSString *userPrincipalName;

- (void).cxx_destruct;
- (void)cacheSiteCode:(id)arg1;
- (id)credentialUUID;
- (id)dateADPasswordCanChange;
- (id)dateADPasswordLastChangedWhenSynced;
- (id)dateExpirationChecked;
- (id)dateExpirationNotificationSent;
- (id)dateLastLogin;
- (id)dateLocalPasswordLastChanged;
- (id)dateLocalPasswordLastChangedWhenSynced;
- (id)dateLoginCancelled;
- (id)dateNextPacRefresh;
- (id)datePasswordExpires;
- (id)datePasswordLastChanged;
- (id)datePasswordLastChangedAtLogin;
- (id)dateUserSignedOut;
- (id)daysUntilExpiration;
- (void)dealloc;
- (id)defaults;
- (bool)delayUserSetupCleared;
- (id)dumpSiteCodeCache;
- (id)initWithRealm:(id)arg1;
- (void)loadSiteCodes;
- (bool)networkAvailable;
- (id)networkHomeDirectory;
- (id)notificationName;
- (int)notifyToken;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)passwordChangeInProgress;
- (bool)passwordNeverExpires;
- (id)pkinitPersistientRef;
- (bool)platformSSOLoginInProgress;
- (id)platformSSOLoginSemaphore;
- (id)realm;
- (id)realmKey:(id)arg1;
- (void)removeAllValues;
- (void)save;
- (void)saveSiteCodes;
- (void)setCredentialUUID:(id)arg1;
- (void)setDateADPasswordCanChange:(id)arg1;
- (void)setDateADPasswordLastChangedWhenSynced:(id)arg1;
- (void)setDateExpirationChecked:(id)arg1;
- (void)setDateExpirationNotificationSent:(id)arg1;
- (void)setDateLastLogin:(id)arg1;
- (void)setDateLocalPasswordLastChanged:(id)arg1;
- (void)setDateLocalPasswordLastChangedWhenSynced:(id)arg1;
- (void)setDateLoginCancelled:(id)arg1;
- (void)setDateNextPacRefresh:(id)arg1;
- (void)setDatePasswordExpires:(id)arg1;
- (void)setDatePasswordLastChanged:(id)arg1;
- (void)setDatePasswordLastChangedAtLogin:(id)arg1;
- (void)setDateUserSignedOut:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDelayUserSetupCleared:(bool)arg1;
- (void)setNetworkAvailable:(bool)arg1;
- (void)setNetworkHomeDirectory:(id)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setPasswordChangeInProgress:(bool)arg1;
- (void)setPasswordNeverExpires:(bool)arg1;
- (void)setPkinitPersistientRef:(id)arg1;
- (void)setPlatformSSOLoginInProgress:(bool)arg1;
- (void)setRealm:(id)arg1;
- (void)setSiteCodeCache:(id)arg1;
- (void)setSmartCardTokenID:(id)arg1;
- (void)setUserCancelledLogin:(bool)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserPrincipalName:(id)arg1;
- (id)siteCodeCache;
- (id)siteCodeForNetworkFingerprint:(id)arg1;
- (id)smartCardTokenID;
- (void)startListeningForPlatformSSOTGTChanges;
- (bool)userCancelledLogin;
- (id)userName;
- (id)userPrincipalName;

@end