/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMClientIdentity : NSObject <MCMClientIdentity> {
    <MCMAMFI> * _amfi;
    Class  _amfiClass;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    bool  _cached;
    <MCMClientCodeSignInfo> * _codeSignInfo;
    bool  _kernel;
    unsigned int  _platform;
    int  _posixPID;
    MCMPOSIXUser * _posixUser;
    <MCMClientIdentity> * _proximateClient;
    NSURL * _sandboxContainerURL;
    bool  _sandboxed;
    bool  _testClient;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) <MCMAMFI> *amfi;
@property (setter=setAMFIClass:, nonatomic, retain) Class amfiClass;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) bool cached;
@property (nonatomic, readonly) <MCMClientCodeSignInfo> *codeSignInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isKernel, nonatomic, readonly) bool kernel;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) int posixPID;
@property (nonatomic, readonly) MCMPOSIXUser *posixUser;
@property (nonatomic, readonly) <MCMClientIdentity> *proximateClient;
@property (nonatomic, readonly) NSURL *sandboxContainerURL;
@property (getter=isSandboxed, nonatomic, readonly) bool sandboxed;
@property (readonly) Class superclass;
@property (getter=isTestClient, nonatomic, readonly) bool testClient;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)arg1;
+ (id)privilegedClientIdentityWithUserIdentity:(id)arg1 kernel:(bool)arg2;

- (void).cxx_destruct;
- (bool)_checkIsAllowedToHaveSandboxExtensionForIdentity:(id)arg1 containerPath:(id)arg2 containerConfig:(id)arg3 allowed:(bool*)arg4 error:(id*)arg5;
- (bool)_checkIsAllowedToHaveSandboxExtensionForRestrictedContainerPath:(id)arg1 identifier:(id)arg2 containerConfig:(id)arg3 allowed:(bool*)arg4 error:(id*)arg5;
- (bool)_checkShouldIssueExtensionForIdentity:(id)arg1 containerPath:(id)arg2 legacyExtensionPolicy:(bool)arg3 extensionsPolicyUsesProxiedClient:(bool)arg4 issueExtension:(bool*)arg5 error:(id*)arg6;
- (bool)_isAllowedAccessToNonRestrictedProtectedContainerWithIdentifier:(id)arg1 clientIdentifier:(id)arg2 containerConfig:(id)arg3;
- (bool)_isClientAffordedSandboxForContainerIdentifier:(id)arg1 containerConfig:(id)arg2;
- (bool)_shouldAttemptToIssueSandboxExtensionUsingLegacyPolicyForContainerConfig:(id)arg1 identifier:(id)arg2;
- (id)amfi;
- (Class)amfiClass;
- (struct { unsigned int x1[8]; })auditToken;
- (bool)cached;
- (id)clientIdentityByChangingCached:(bool)arg1;
- (id)codeSignInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct container_client { unsigned long long x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct { unsigned int x_8_1_1[8]; } x8; int x9; bool x10; bool x11; bool x12; id x13; }*)createLibsystemClient;
- (id)description;
- (id)init;
- (id)initInternal;
- (id)initWithPOSIXUser:(id)arg1 POSIXPID:(int)arg2 platform:(unsigned int)arg3 userIdentity:(id)arg4 proximateClient:(id)arg5 auditToken:(struct { unsigned int x1[8]; })arg6 codeSignInfo:(id)arg7 sandboxed:(bool)arg8 sandboxContainerURL:(id)arg9 testClient:(bool)arg10 kernel:(bool)arg11;
- (bool)isAllowedToAccessCodesignMapping;
- (bool)isAllowedToAccessContainerIdentity:(id)arg1 error:(unsigned long long*)arg2;
- (bool)isAllowedToAccessInfoMetadata;
- (bool)isAllowedToAccessUserAssets;
- (bool)isAllowedToChangeReferences;
- (bool)isAllowedToControlCaches;
- (bool)isAllowedToDelete;
- (bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;
- (bool)isAllowedToLookupContainerIdentity:(id)arg1;
- (bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifiers:(id)arg2;
- (bool)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)arg1 identifier:(id)arg2;
- (bool)isAllowedToReadReferences;
- (bool)isAllowedToRecreateContainerStructure;
- (bool)isAllowedToRegenerateDirectoryUUIDs;
- (bool)isAllowedToReplaceContainers;
- (bool)isAllowedToRestoreContainer;
- (bool)isAllowedToSetDataProtection;
- (bool)isAllowedToStageSharedContent;
- (bool)isAllowedToStartDataMigration;
- (bool)isAllowedToStartUserDataMigration;
- (bool)isAllowedToTest;
- (bool)isAllowedToWipeAnyDataContainer;
- (bool)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg1;
- (bool)isKernel;
- (bool)isSandboxed;
- (bool)isTestClient;
- (char *)issueSandboxExtensionWithIdentity:(id)arg1 containerPath:(id)arg2 legacyExtensionPolicy:(bool)arg3 extensionsUseProxiedClient:(bool)arg4 extensionsPolicyUsesProxiedClient:(bool)arg5 error:(id*)arg6;
- (unsigned int)platform;
- (int)posixPID;
- (id)posixUser;
- (id)proximateClient;
- (id)sandboxContainerURL;
- (void)setAMFIClass:(Class)arg1;
- (id)shortDescription;
- (id)userIdentity;

@end