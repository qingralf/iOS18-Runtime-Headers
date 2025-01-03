/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandQuery : MCMCommand <MCMParametersQuery> {
    <MCMContainerConfiguration> * _containerConfig;
    bool  _createIfNecessary;
    bool  _expectSingleResult;
    unsigned int  _expectedPersonaKernelID;
    unsigned long long  _explicitFlags;
    bool  _extensionsPolicyUsesProxiedClient;
    bool  _extensionsUseProxiedClient;
    bool  _fuzzyMatchInternalUUID;
    bool  _fuzzyMatchTransient;
    NSSet * _groupIdentifiers;
    NSSet * _identifiers;
    bool  _includeCreator;
    bool  _includeInfoInResult;
    bool  _includePathInResult;
    bool  _includeUnowned;
    bool  _includeUserManagedAssetsRelPath;
    NSUUID * _internalUUID;
    bool  _issueSandboxExtensions;
    bool  _legacyExtensionPolicy;
    bool  _legacyPersonaPolicy;
    unsigned int  _platform;
    unsigned long long  _privateFlags;
    bool  _transient;
    unsigned int  _uid;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) <MCMContainerConfiguration> *containerConfig;
@property (nonatomic, readonly) bool createIfNecessary;
@property (nonatomic, readonly) bool expectSingleResult;
@property (nonatomic, readonly) unsigned int expectedPersonaKernelID;
@property (nonatomic, readonly) unsigned long long explicitFlags;
@property (nonatomic, readonly) bool extensionsPolicyUsesProxiedClient;
@property (nonatomic, readonly) bool extensionsUseProxiedClient;
@property (nonatomic, readonly) bool fuzzyMatchInternalUUID;
@property (nonatomic, readonly) bool fuzzyMatchTransient;
@property (nonatomic, readonly) NSSet *groupIdentifiers;
@property (nonatomic, readonly) NSSet *identifiers;
@property (nonatomic, readonly) bool includeCreator;
@property (nonatomic, readonly) bool includeInfoInResult;
@property (nonatomic, readonly) bool includePathInResult;
@property (nonatomic, readonly) bool includeUnowned;
@property (nonatomic, readonly) bool includeUserManagedAssetsRelPath;
@property (nonatomic, readonly) NSUUID *internalUUID;
@property (nonatomic, readonly) bool issueSandboxExtensions;
@property (nonatomic, readonly) bool legacyExtensionPolicy;
@property (nonatomic, readonly) bool legacyPersonaPolicy;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) unsigned long long privateFlags;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)_containerIdentifiersIncludingUnownedForContainerClass:(unsigned long long)arg1 canAccessAllContainers:(bool*)arg2 error:(id*)arg3;
- (id)_executeQueryForContainerIdentity:(id)arg1 error:(id*)arg2;
- (bool)_executeQueryPlan:(id)arg1 resultContainers:(id)arg2 error:(id*)arg3;
- (void)_finalizeWithContainers:(id)arg1 error:(id)arg2;
- (id)_queryPlanWithIdentifiers:(id)arg1 isGroupClass:(bool)arg2 clientIdentity:(id)arg3 error:(id*)arg4;
- (id)_setOfUserIdentities;
- (id)_setOfUserIdentitiesForIdentifiers:(id)arg1 isGroupClass:(bool)arg2;
- (id)containerConfig;
- (bool)createIfNecessary;
- (void)execute;
- (bool)expectSingleResult;
- (unsigned int)expectedPersonaKernelID;
- (unsigned long long)explicitFlags;
- (bool)extensionsPolicyUsesProxiedClient;
- (bool)extensionsUseProxiedClient;
- (bool)fuzzyMatchInternalUUID;
- (bool)fuzzyMatchTransient;
- (id)groupIdentifiers;
- (id)identifiers;
- (bool)includeCreator;
- (bool)includeInfoInResult;
- (bool)includePathInResult;
- (bool)includeUnowned;
- (bool)includeUserManagedAssetsRelPath;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)internalUUID;
- (bool)issueSandboxExtensions;
- (bool)legacyExtensionPolicy;
- (bool)legacyPersonaPolicy;
- (unsigned int)platform;
- (bool)preflightClientAllowed;
- (unsigned long long)privateFlags;
- (bool)transient;
- (unsigned int)uid;
- (id)userIdentity;

@end
