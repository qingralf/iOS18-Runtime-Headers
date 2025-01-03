/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    WBSAutoFillAssociatedDomainsManager * _associatedDomainsManager;
    NSMutableDictionary * _currentReceivedOneTimeCodesBySource;
    <SFAppAutoFillOneTimeCodeProviderDelegate> * _delegate;
    NSMapTable * _generatorObservers;
    NSTimer * _generatorTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isOneTimeCodeAutoDeletionEnabled;
    EMOneTimeCodeAccelerator * _mailOneTimeCodeAccelerator;
    IMOneTimeCodeAccelerator * _messagesOneTimeCodeAccelerator;
    NSHashTable * _observers;
}

@property (nonatomic, retain) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic) <SFAppAutoFillOneTimeCodeProviderDelegate> *delegate;
@property (nonatomic) bool isOneTimeCodeAutoDeletionEnabled;

- (void).cxx_destruct;
- (bool)_appWithAppIdentifierIsWebBrowser:(id)arg1;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)arg1;
- (void)_consumeOneTimeCode:(id)arg1;
- (long long)_domainBindingForRecievedOneTimeCode:(id)arg1 forAppWithIdentifier:(id)arg2 websiteURL:(id)arg3 hasDomainBinding:(bool*)arg4;
- (void)_fetchOneTimeCodeAutoDeletionPreference;
- (id)_mostRecentlyReceivedOneTimeCode;
- (void)_notifyOneTimeCodeObserver;
- (void)_processOneTimeCodeFromMail:(id)arg1 withTimestamp:(id)arg2 andMessageID:(long long)arg3;
- (void)_processOneTimeCodeFromMessages:(id)arg1;
- (void)_processReceivedOneTimeCode:(id)arg1 fromSource:(long long)arg2;
- (id)_savedAccountsWithPasswordsForURL:(id)arg1 inContext:(id)arg2;
- (id)_secureURLWithDomain:(id)arg1;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)arg1 context:(id)arg2;
- (void)_startGeneratorTimer;
- (void)_stopGeneratorTimer;
- (long long)_url:(id)arg1 matchesURLFromOriginBoundCode:(id)arg2;
- (void)_validateCurrentOneTimeCodes;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forOneTimeCode:(id)arg2;
- (id)associatedDomainsManager;
- (void)consumeCurrentOneTimeCode;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)arg1;
- (void)consumeOneTimeCode:(id)arg1;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)arg1 fieldClassification:(long long)arg2;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)arg1 fieldClassification:(long long)arg2 inContext:(id)arg3;
- (id)currentOneTimeCodesWithAppIdentifier:(id)arg1 website:(id)arg2 usernameHint:(id)arg3 fieldClassification:(long long)arg4;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x1[8]; })arg1 website:(id)arg2 usernameHint:(id)arg3 fieldClassification:(long long)arg4;
- (id)delegate;
- (void)didFocusOneTimeCodeField;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isOneTimeCodeAutoDeletionEnabled;
- (void)removeObserver:(id)arg1;
- (void)removeObserverForOneTimeCode:(id)arg1;
- (void)setAssociatedDomainsManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsOneTimeCodeAutoDeletionEnabled:(bool)arg1;
- (void)test_deliverOneTimeCode:(id)arg1 fromSource:(long long)arg2;

@end
