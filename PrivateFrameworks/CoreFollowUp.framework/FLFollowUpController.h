/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpController : NSObject <HMDFollowUpController, NSXPCListenerDelegate> {
    NSString * _clientIdentifier;
    <FLFollowUpControllerDelegate> * _delegate;
    NSXPCListener * _listener;
    NSString * _machServiceName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <FLFollowUpControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp

- (void).cxx_destruct;
- (void)_didActivateHSA2LoginNotification:(id)arg1;
- (void)_postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(id /* block */)arg3;
- (void)_postHSA2LoginNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)_postHSA2PasswordChangeForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)_postHSA2PasswordResetNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;
- (bool)clearNotificationForItem:(id)arg1 error:(id*)arg2;
- (bool)clearPendingFollowUpItems:(id*)arg1;
- (void)clearPendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (bool)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfPendingFollowUpItems:(id*)arg1;
- (void)countOfPendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 xpcEndpoint:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pendingFollowUpItems:(id*)arg1;
- (void)pendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (void)postFollowUpItem:(id)arg1 completion:(id /* block */)arg2;
- (bool)postFollowUpItem:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateBadgesForTimer;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

+ (void)icq_dismissFollowUpWithIdentifier:(id)arg1;

@end