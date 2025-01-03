/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOKVStoreMigrationController : NSObject <LACDTOKVStoreMigrationController> {
    <LACGlobalDomainDTO> * _defaults;
    <LACDTOKVStore> * _store;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_migrateStrictModeKeyIfNeededWithCompletion:(id /* block */)arg1;
- (id)initWithKVStore:(id)arg1 defaults:(id)arg2 workQueue:(id)arg3;
- (void)performMigrationIfNeeded;

@end
