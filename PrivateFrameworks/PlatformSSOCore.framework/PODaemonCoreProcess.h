/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface PODaemonCoreProcess : NSObject <PODaemonCoreProtocol> {
    bool  _baseSystem;
    id /* block */  _invalidationHandler;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _prebootKey;
    POTokenHelper * _tokenHelper;
    <POUserIdentifierProvider> * _userIdentifierProvider;
    NSString * _volumeUUID;
    NSXPCConnection * _xpcConnection;
}

@property bool baseSystem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationHandler;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*prebootKey;
@property (readonly) Class superclass;
@property (retain) POTokenHelper *tokenHelper;
@property (retain) <POUserIdentifierProvider> *userIdentifierProvider;
@property (retain) NSString *volumeUUID;

- (void).cxx_destruct;
- (id)_dataForUserLoginStateList:(id)arg1 error:(id*)arg2;
- (id)_defaultConfigurationPath;
- (id)_deviceConfigurationForIdentifer:(id)arg1;
- (id)_loginConfigurationForIdentifer:(id)arg1;
- (id)_parseUserLoginStateListData:(id)arg1 error:(id*)arg2;
- (id)_pendingSSOTokensForIdentifer:(id)arg1 error:(id*)arg2;
- (bool)_removeStashedUserLoginStateListDataWithError:(id*)arg1;
- (bool)_savePendingSSOTokensData:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_saveStashedDecryptionContextData:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_saveStashedSSOTokensData:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_saveUserLoginStateList:(id)arg1 error:(id*)arg2;
- (id)_stashedSSOTokensForIdentifer:(id)arg1 error:(id*)arg2;
- (id)_stashedUserLoginStateListDataWithError:(id*)arg1;
- (id)_stashedUserLoginStateListWithError:(id*)arg1;
- (id)_userConfigurationForIdentifier:(id)arg1 error:(id*)arg2;
- (id)_userLoginStateForIdentifier:(id)arg1 error:(id*)arg2;
- (id)_userLoginStateListDataWithError:(id*)arg1;
- (id)_userLoginStateListWithError:(id*)arg1;
- (bool)baseSystem;
- (void)connectionInvalidated;
- (void)deviceConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleStartup;
- (id)initForBaseSystem:(bool)arg1;
- (id)initWithXPCConnection:(id)arg1 baseSystem:(bool)arg2;
- (id /* block */)invalidationHandler;
- (void)loginConfigurationForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)prebootKey;
- (void)retrievePendingSSOTokenForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveStashedSSOTokenForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)savePendingSSOTokens:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)saveStashedDecryptionContext:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)saveStashedSSOTokens:(id)arg1 identifer:(id)arg2 completion:(id /* block */)arg3;
- (void)setBaseSystem:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPrebootKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setTokenHelper:(id)arg1;
- (void)setUserIdentifierProvider:(id)arg1;
- (void)setVolumeUUID:(id)arg1;
- (id)tokenHelper;
- (void)updateLoginStateForIdentifier:(id)arg1 state:(id)arg2 loginDate:(id)arg3 loginType:(id)arg4 completion:(id /* block */)arg5;
- (void)userConfigurationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)userIdentifierProvider;
- (void)userLoginStateForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)volumeUUID;
- (bool)writeData:(id)arg1 toPath:(id)arg2 saveError:(id*)arg3;

@end