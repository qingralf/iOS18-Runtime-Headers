/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APSigningAuthorityPoolManager : NSObject <APBackoffTimerDelegate, APSigningAuthorityPoolManagement> {
    APBackoffTimer * _backoffTimer;
    APSigningAuthority * _currentSigningAuthority;
    double  _lastStateChangeTime;
    APUnfairRecursiveLock * _lock;
    NSString * _name;
    unsigned long long  _numberToStash;
    unsigned long long  _poolSize;
    double  _refillStartTime;
    id /* block */  _setupCompletion;
    NSMutableArray * _signingAuthorityPool;
    long long  _state;
}

@property (nonatomic, retain) APBackoffTimer *backoffTimer;
@property (nonatomic, retain) APSigningAuthority *currentSigningAuthority;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastStateChangeTime;
@property (nonatomic, retain) APUnfairRecursiveLock *lock;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long numberToStash;
@property (nonatomic) unsigned long long poolSize;
@property (nonatomic) double refillStartTime;
@property (nonatomic, copy) id /* block */ setupCompletion;
@property (nonatomic, retain) NSMutableArray *signingAuthorityPool;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSigningAuthorityToPool:(id)arg1;
- (void)_callSetupCompletionHandler;
- (void)_clearStashedContextsIfIndicated;
- (void)_evaluateRotationEntitlement;
- (void)_handleCompletedSigningAuthority:(id)arg1;
- (unsigned long long)_numSigningAuthoritiesToCreate;
- (void)_refillSigningAuthorityPool;
- (void)_removeAllSigningAuthorities;
- (void)_removeSigningAuthority:(id)arg1 shouldRefill:(bool)arg2;
- (bool)_rotateWithError:(id*)arg1;
- (id)backoffTimer;
- (void)backoffTimerFired;
- (void)cancelBackoff;
- (id)currentSigningAuthority;
- (void)enterBackoff;
- (id)initWithName:(id)arg1 poolSize:(unsigned long long)arg2 numberToStash:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 poolSize:(unsigned long long)arg2 numberToStash:(unsigned long long)arg3 setupCompletion:(id /* block */)arg4;
- (double)lastStateChangeTime;
- (id)lock;
- (id)name;
- (unsigned long long)numberToStash;
- (unsigned long long)poolSize;
- (double)refillStartTime;
- (bool)rotateWithError:(id*)arg1;
- (void)setBackoffTimer:(id)arg1;
- (void)setCurrentSigningAuthority:(id)arg1;
- (void)setLastStateChangeTime:(double)arg1;
- (void)setLock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberToStash:(unsigned long long)arg1;
- (void)setPoolSize:(unsigned long long)arg1;
- (void)setRefillStartTime:(double)arg1;
- (void)setSetupCompletion:(id /* block */)arg1;
- (void)setSigningAuthorityPool:(id)arg1;
- (void)setState:(long long)arg1;
- (id /* block */)setupCompletion;
- (void)setupWithCompletion:(id /* block */)arg1;
- (void)setupWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)signatureForData:(id)arg1 error:(id*)arg2;
- (id)signatureForRawData:(id)arg1 error:(id*)arg2;
- (id)signingAuthorityPool;
- (long long)state;

@end
