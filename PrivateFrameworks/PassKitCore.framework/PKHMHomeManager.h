/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKHMHomeManager : NSObject <HMHomeManagerDelegate> {
    bool  _didLoadData;
    NSMutableArray * _fetchCompletions;
    NSObject<OS_dispatch_source> * _fetchTimeout;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMHomeManager * _manager;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchHomeIdentifierForPassSerialNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchHomesWithCompletion:(id /* block */)arg1;
- (void)fetchLockAccessoryWithTerminalReaderIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)hasHomeAccessScheduleForPassSerialNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (void)isHomeAccessRestrictedForPassSerialNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setLockStateToSecuredForLockAccessory:(id)arg1 withCompletion:(id /* block */)arg2;

@end