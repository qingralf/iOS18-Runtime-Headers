/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFCredentialTransceiver : NSObject <NFCredentialTransceiver> {
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NFCredentialSession * _parentSession;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=hasInvalidated, nonatomic) bool invalidated;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) NFCredentialSession *parentSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_invalidateParentSession;
- (id)_syncGetSessionWithError:(id*)arg1;
- (bool)deleteApplets:(id)arg1 queueServerConnection:(bool)arg2 outError:(id*)arg3;
- (bool)hasInvalidated;
- (id)init;
- (void)invalidate;
- (id)listAppletsAndRefreshCache:(bool)arg1 outError:(id*)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)parentSession;
- (id)queryExtraInfoForApplets:(id)arg1 outError:(id*)arg2;
- (void)setInvalidated:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setParentSession:(id)arg1;
- (id)signChallenge:(id)arg1 outError:(id*)arg2;
- (id)transceive:(id)arg1 outError:(id*)arg2;

@end