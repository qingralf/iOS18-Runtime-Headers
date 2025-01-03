/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

@interface SUCorePolicyDDMConfiguration : NSObject {
    bool  _allowInvalidDeclaration;
    SUCorePersistedState * _persistedState;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic) bool allowInvalidDeclaration;
@property (retain) SUCorePersistedState *persistedState;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)declarationFromAllDeclarationDicts:(id)arg1;
+ (id)declarationFromAllDeclarations:(id)arg1;
+ (id)getDaemonCacheDirectory;
+ (id)sharedInstance;
+ (id)statePersistencePath;

- (void).cxx_destruct;
- (id)_dateFromString:(id)arg1;
- (id)_getActiveDeclarationKey;
- (void)_getDeclarations:(id*)arg1 invalid:(id*)arg2;
- (void)_persistActiveDeclarationKey:(id)arg1;
- (void)_persistInvalidDeclarations:(id)arg1;
- (void)_persistState;
- (void)_persistValidDeclarations:(id)arg1;
- (id)activeDeclarationKey;
- (bool)addDeclaration:(id)arg1 returningError:(id*)arg2;
- (bool)addDeclaration:(id)arg1 withKey:(id)arg2;
- (bool)addDeclaration:(id)arg1 withKey:(id)arg2 returningError:(id*)arg3;
- (bool)addGlobalSettingsDeclaration:(id)arg1 returningError:(id*)arg2;
- (id)allDeclarations;
- (id)allDeclarationsIncludingInvalid;
- (id)allKeys;
- (bool)allowInvalidDeclaration;
- (id)currentGlobalSettingsDeclaration;
- (id)currentlyApplicableDeclaration;
- (id)declarationForKey:(id)arg1;
- (id)description;
- (bool)hasManagedConfigurations;
- (id)initWithState;
- (id)initWithStatePersistencePath:(id)arg1;
- (id)invalidateAllInvalidDeclarationsReturningAllInvalid;
- (bool)invalidateDeclarationForKey:(id)arg1;
- (id)persistedState;
- (void)removeAllDeclarations;
- (void)removeAllInvalidDeclarations;
- (id)removeAllInvalidDeclarationsReturningInvalid;
- (bool)removeDeclarationForKey:(id)arg1;
- (void)removeGlobalSettingsDeclaration;
- (bool)setActiveDeclarationKey:(id)arg1;
- (void)setAllowInvalidDeclaration:(bool)arg1;
- (void)setPersistedState:(id)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateQueue;

@end
