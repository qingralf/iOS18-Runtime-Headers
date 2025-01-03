/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface POAuthPluginProcess : POAuthPluginCoreProcess {
    POServiceConnection * _serviceConnection;
    unsigned int  _uid;
}

- (void).cxx_destruct;
- (void)configurationDidChangeAndRemovedExtension:(id)arg1 removed:(bool)arg2;
- (id)initWithUid:(unsigned int)arg1 forLogin:(bool)arg2;
- (unsigned long long)performPasswordLogin:(id)arg1 passwordContext:(id)arg2 updateLocalAccountPassword:(bool)arg3;
- (void)retainContextForUserName:(id)arg1 context:(id)arg2;
- (bool)saveCredentialForUserName:(id)arg1 passwordContext:(id)arg2;
- (void)screenDidUnlockWithCredentialContext:(id)arg1 smartCardContext:(id)arg2 biometricContext:(id)arg3 tokenId:(id)arg4 atLogin:(bool)arg5 tokenUnlock:(bool)arg6;
- (void)updateLocalAccountPassword:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;

@end
