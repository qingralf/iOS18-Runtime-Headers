/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)_proxyObject;
- (void)dealloc;
- (void)fetchAllCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllCredentialIdentitiesMatchingDomains:(id)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAllPaskeyCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)fetchCredentialIdentitiesForService:(id)arg1 serviceIdentifierType:(long long)arg2 credentialIdentityTypes:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchOneTimeCodeCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchOneTimeCodeCredentialIdentitiesMatchingDomains:(id)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchPasskeyCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPasswordCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPasswordCredentialIdentitiesMatchingDomains:(id)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)getCredentialProviderExtensionStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;

@end
