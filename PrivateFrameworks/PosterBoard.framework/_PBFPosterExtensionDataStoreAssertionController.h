/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface _PBFPosterExtensionDataStoreAssertionController : NSObject <BSInvalidatable, PBFPosterExtensionDataStoreAssertionControlling> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSMapTable * _internalLock_inUseAssertionsByIdentity;
    bool  _internalLock_invalidated;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSMapTable *inUseAssertionsByIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_appendAssertion:(id)arg1 forIdentity:(id)arg2;
- (bool)_internalLock_appendAssertion:(id)arg1 forIdentity:(id)arg2;
- (bool)_internalLock_removeAssertion:(id)arg1 forIdentity:(id)arg2;
- (long long)_numberOfInUseAssertionsForIdentity:(id)arg1;
- (bool)_removeAssertion:(id)arg1 forIdentity:(id)arg2;
- (bool)acquireInUseAssertionForIdentity:(id)arg1 reason:(id)arg2;
- (id)description;
- (id)inUseAssertionsByIdentity;
- (id)inUsePosterPathIdentitiesForReason:(id)arg1;
- (id)init;
- (id)initWithController:(id)arg1;
- (void)invalidate;
- (bool)invalidateInUseAssertionForIdentity:(id)arg1 reason:(id)arg2;
- (long long)numberOfAssertionsForReason:(id)arg1;

@end
