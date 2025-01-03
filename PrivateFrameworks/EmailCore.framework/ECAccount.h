/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECAccount : NSObject <EFLoggable, EFPubliclyDescribable> {
    NSString * _accountDescription;
    NSString * _accountDirectoryTildeAbbreviatedPath;
    ACAccountStore * _accountStore;
    EFLazyCache * _cache;
    NSDictionary * _properties;
    bool  _sslIsDirectIsSet;
    ACAccount * _systemAccount;
}

@property (nonatomic, readonly, copy) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountDirectoryTildeAbbreviatedPath;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly, copy) NSString *accountTypeIdentifier;
@property (nonatomic) bool allowInsecureAuthentication;
@property (nonatomic, copy) NSString *archiveMailboxName;
@property (nonatomic, copy) NSString *authenticationScheme;
@property (nonatomic, readonly) EFLazyCache *cache;
@property (nonatomic) bool configureDynamically;
@property (nonatomic, readonly, copy) ACAccountCredential *credential;
@property (nonatomic, readonly, copy) NSDictionary *dataclassProperties;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long defaultPortNumber;
@property (nonatomic, readonly) long long defaultSecurePortNumber;
@property (nonatomic) bool deleteMessagesInPlace;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *draftsMailboxName;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool hasPasswordCredential;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isAOLAccount;
@property (nonatomic, readonly) bool isAppleAccount;
@property (nonatomic, readonly) bool isAppleEmployeeAccount;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) bool isExchangeAccount;
@property (nonatomic, readonly) bool isGmailAccount;
@property (nonatomic, readonly) bool isOutlookAccount;
@property (nonatomic, readonly) bool isPersonaAccount;
@property (nonatomic, readonly) bool isYahooAccount;
@property (nonatomic, copy) NSString *junkMailboxName;
@property (nonatomic, copy) NSString *notesMailboxName;
@property (nonatomic) long long numberOfDaysToKeepJunk;
@property (nonatomic) long long numberOfDaysToKeepTrash;
@property (nonatomic, readonly, copy) NSString *oauthToken;
@property (nonatomic, copy) NSString *outboxMailboxName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic) long long portNumber;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (nonatomic, copy) NSString *sentMessagesMailboxName;
@property (nonatomic) bool sslIsDirect;
@property (nonatomic, readonly) bool sslIsDirectIsSet;
@property (nonatomic, readonly, copy) NSArray *standardPorts;
@property (nonatomic, readonly, copy) NSArray *standardSSLPorts;
@property (readonly) Class superclass;
@property (retain) ACAccount *systemAccount;
@property (nonatomic, copy) NSString *toDosMailboxName;
@property (nonatomic, copy) NSString *trashMailboxName;
@property (nonatomic, readonly, copy) NSString *username;
@property (nonatomic) bool usesSSL;

+ (id)log;
+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (bool)_cachedEnabled;
- (id)_cachedParentAccount;
- (id)_hostnameFromParentAccount:(id)arg1;
- (id)accountDescription;
- (id)accountDirectoryTildeAbbreviatedPath;
- (id)accountStore;
- (id)accountTypeIdentifier;
- (bool)allowInsecureAuthentication;
- (id)archiveMailboxName;
- (id)authenticationScheme;
- (id)cache;
- (void)clearCache;
- (void)clearSSLIsDirect;
- (void)clearUsesSSL;
- (bool)configureDynamically;
- (id)credential;
- (id)dataClassPropertyForKey:(id)arg1;
- (id)dataclassProperties;
- (id)debugDescription;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (bool)deleteMessagesInPlace;
- (id)description;
- (id)draftsMailboxName;
- (id)ef_publicDescription;
- (id)enabledDataclasses;
- (bool)hasPasswordCredential;
- (id)hostname;
- (id)identifier;
- (id)initWithSystemAccount:(id)arg1;
- (id)initWithSystemAccount:(id)arg1 accountStore:(id)arg2;
- (bool)isAOLAccount;
- (bool)isAppleAccount;
- (bool)isAppleEmployeeAccount;
- (bool)isAuthenticated;
- (bool)isEnabled;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isExchangeAccount;
- (bool)isGmailAccount;
- (bool)isOutlookAccount;
- (bool)isPersonaAccount;
- (bool)isYahooAccount;
- (id)junkMailboxName;
- (id)notesMailboxName;
- (long long)numberOfDaysToKeepJunk;
- (long long)numberOfDaysToKeepTrash;
- (id)oauthToken;
- (id)outboxMailboxName;
- (id)password;
- (id)personaIdentifier;
- (long long)portNumber;
- (id)portNumberObject;
- (id)properties;
- (void)refresh;
- (void)renewCredentialsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sentMessagesMailboxName;
- (void)setAccountDirectoryTildeAbbreviatedPath:(id)arg1;
- (void)setAllowInsecureAuthentication:(bool)arg1;
- (void)setArchiveMailboxName:(id)arg1;
- (void)setAuthenticationScheme:(id)arg1;
- (void)setConfigureDynamically:(bool)arg1;
- (void)setDataClassProperty:(id)arg1 forKey:(id)arg2;
- (void)setDeleteMessagesInPlace:(bool)arg1;
- (void)setDraftsMailboxName:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setJunkMailboxName:(id)arg1;
- (void)setNotesMailboxName:(id)arg1;
- (void)setNumberOfDaysToKeepJunk:(long long)arg1;
- (void)setNumberOfDaysToKeepTrash:(long long)arg1;
- (void)setOAuth2Token:(id)arg1 refreshToken:(id)arg2;
- (void)setOutboxMailboxName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPortNumber:(long long)arg1;
- (void)setSentMessagesMailboxName:(id)arg1;
- (void)setSslIsDirect:(bool)arg1;
- (bool)setSslIsDirectIsSet;
- (void)setSystemAccount:(id)arg1;
- (void)setToDosMailboxName:(id)arg1;
- (void)setTrashMailboxName:(id)arg1;
- (void)setUsesSSL:(bool)arg1;
- (bool)sslIsDirect;
- (bool)sslIsDirectIsSet;
- (id)standardPorts;
- (id)standardSSLPorts;
- (id)systemAccount;
- (id)toDosMailboxName;
- (id)trashMailboxName;
- (id)username;
- (bool)usesSSL;
- (id)usesSSLObject;

@end
