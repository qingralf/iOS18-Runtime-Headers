/* Generated by RuntimeBrowser.
 */

@protocol HMDSKPresence <NSObject>

@required

- (void)addDelegate:(id <HMDSKPresenceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)assertPresenceWithPresencePayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SKPresencePayload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)hasInitialCloudKitImportOccurredWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)inviteHandleFromPrimaryAccountHandle:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SKHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)inviteHandlesFromPrimaryAccountHandle:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)invitedHandles;
- (NSString *)presenceIdentifier;
- (NSArray *)presentDevices;
- (void)releasePresenceWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releaseTransientSubscriptionAssertionWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeDelegate:(id <HMDSKPresenceDelegate>)arg1;
- (void)removeInvitedHandle:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SKHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeInvitedHandles:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainTransientSubscriptionAssertionWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end