/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_authContextFromCDPContext:(id)arg1;
- (void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 persistRecoveryKey:(id)arg2 keyType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;
- (void)getUserInformationForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (bool)isPrimaryAppleIDLoggedIn;

@end