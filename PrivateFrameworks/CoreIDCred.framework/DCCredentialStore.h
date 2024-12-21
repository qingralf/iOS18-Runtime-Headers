/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDCred.framework/CoreIDCred
 */

@interface DCCredentialStore : NSObject {
    DCCredentialStoreClient * _client;
    bool  _hasBeenConfigured;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _partitions;
}

@property (nonatomic, readonly) DCCredentialStoreClient *client;
@property (nonatomic, readonly) NSArray *partitions;

- (void).cxx_destruct;
- (void)activeRegionsInPartitions:(id)arg1 docType:(id)arg2 completion:(id /* block */)arg3;
- (void)allElementsOfCredential:(id)arg1 authData:(id)arg2 completion:(id /* block */)arg3;
- (void)allElementsOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)associateExternalPresentmentKeyWithCredential:(id)arg1 publicKeyIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)authorizeDeviceKeySigningKeyOfCredential:(id)arg1 accountKeyIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)arg1 remoteKey:(id)arg2 completion:(id /* block */)arg3;
- (void)checkCompletenessOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)clearPresentmentKeyUsageForCredential:(id)arg1 completion:(id /* block */)arg2;
- (id)client;
- (void)configureIfNeededWithContinuation:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)createAccountKeySigningKeyForAccountKeyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)createCredentialInPartition:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialIdentifierForPublicKeyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialIdentifiers:(id /* block */)arg1;
- (void)credentialIdentifiersInPartitions:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialIdentifiersInPartitions:(id)arg1 docType:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialIdentifiersInPartitions:(id)arg1 docType:(id)arg2 region:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteAccountKeySigningKeyForAccountKeyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)elementsOfCredential:(id)arg1 elementIdentifiers:(id)arg2 authData:(id)arg3 completion:(id /* block */)arg4;
- (void)elementsOfCredential:(id)arg1 elementIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)eraseLegacySEKeySlot:(long long)arg1 completion:(id /* block */)arg2;
- (void)finishConfiguration;
- (void)generateAccountKeyAuthorizationForCredential:(id)arg1 accountKeyIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)generateDeviceEncryptionKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generateKeySigningKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePresentmentKeyForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)generatePresentmentKeysForCredential:(id)arg1 numKeys:(long long)arg2 completion:(id /* block */)arg3;
- (bool)hasBeenConfigured;
- (id)initWithPartitions:(id)arg1;
- (void)isAccountKeySigningKeyAvailableForAccountKeyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)keyInfoForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)occupiedLegacySEKeySlotsWithCompletion:(id /* block */)arg1;
- (id)partitions;
- (void)payloadAuthACLForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)payloadsOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)propertiesOfCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)replacePayloadOfCredential:(id)arg1 withPayload:(id)arg2 format:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)retrieveAccountKeySigningKeyForAccountKeyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setHasBeenConfigured:(bool)arg1;
- (void)setStateOfCredential:(id)arg1 to:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end