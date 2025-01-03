/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMResourceContainerManager : NSObject

+ (id)sharedInstance;

- (bool)_containerFromCache:(id)arg1 withClass:(Class)arg2 forPersonaIdentifier:(id)arg3 creatingIfNotInCache:(bool)arg4 error:(id*)arg5 block:(id /* block */)arg6;
- (id)_enforceCurrentPersonaIsUserPersona:(id*)arg1;
- (id)_standardDataVaultContainerForResource:(id)arg1;
- (id)_userVaultContainerForCurrentPersona:(id*)arg1;
- (id)_vanillaContainerForCurrentPersona:(id*)arg1;
- (id)descriptorsFromConfigurationForSetResource:(id)arg1;
- (id)init;
- (id)openContainerForResource:(id)arg1 mode:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned char)routeContainerRequestForResource:(id)arg1 mode:(unsigned long long)arg2;
- (unsigned long long)serviceDomainFromConfigurationForSetResource:(id)arg1;
- (id)syncPolicyFromConfigurationForSetResource:(id)arg1;

@end
