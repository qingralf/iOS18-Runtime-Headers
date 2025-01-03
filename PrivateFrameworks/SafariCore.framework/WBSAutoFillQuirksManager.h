/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotelyUpdatableDataControllerDelegate> {
    WBSAppIDsToDomainsAssociationManager * _appToWebsiteAssociationManager;
    WBSAutoFillAssociatedDomainsManager * _associatedDomainsManager;
    WBSChangePasswordURLManager * _changePasswordURLManager;
    NSSet * _domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServices;
    WBSPasswordAuditingEligibleDomainsManager * _passwordAuditingEligibleDomainsManager;
    WBSPasswordGenerationManager * _passwordGenerationManager;
    WBSRemotelyUpdatableDataController * _remotelyUpdatableDataController;
    bool  _shouldAttemptToDownloadConfiguration;
}

@property (nonatomic, readonly) WBSAppIDsToDomainsAssociationManager *appToWebsiteAssociationManager;
@property (nonatomic, readonly) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic, readonly) WBSChangePasswordURLManager *changePasswordURLManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPair *knownWebBrowsersAndExtensionStorefronts;
@property (nonatomic, readonly) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (nonatomic, readonly) WBSPasswordGenerationManager *passwordGenerationManager;
@property (nonatomic) bool shouldAttemptToDownloadConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appIDsToDomainsAssociationsFromCurrentSnapshot;
- (id)_changePasswordURLStringsFromCurrentSnapshot;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServicesFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (bool)_isURL:(id)arg1 containedInQuirks:(id /* block */)arg2;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (void)_sendDidDownloadNewDataNotification;
- (id)_urlFromRelyingParty:(id)arg1;
- (id)appToWebsiteAssociationManager;
- (bool)arePasskeysDisallowedForRelyingParty:(id)arg1;
- (id)associatedDomainsManager;
- (void)beginLoadingQuirksFromDisk;
- (id)changePasswordURLManager;
- (void)didDownloadDataForRemotelyUpdatableDataController:(id)arg1;
- (id)domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServices;
- (id)init;
- (id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (bool)isAutomaticLoginDisallowedOnURL:(id)arg1;
- (bool)isDomainKnownToAskForCredentialsForOtherServicesWhenEmbeddedAsThirdParty:(id)arg1;
- (bool)isDomainKnownToDoSameDocumentNavigationInTextEditingCallback:(id)arg1;
- (bool)isStreamlinedLoginDisallowedOnURL:(id)arg1;
- (id)knownWebBrowsersAndExtensionStorefronts;
- (id)passwordAuditingEligibleDomainsManager;
- (id)passwordGenerationManager;
- (void)prepareForTermination;
- (void)setShouldAttemptToDownloadConfiguration:(bool)arg1;
- (bool)shouldAttemptToDownloadConfiguration;
- (bool)shouldUseFallbackUIForRelyingParty:(id)arg1;

@end
