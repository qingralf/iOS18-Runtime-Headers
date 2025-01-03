/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingServices.framework/ActivitySharingServices
 */

@interface ActivitySharingServices.InvitationStateObserver : NSObject <ASCloudKitManagerChangesObserver, ASFriendListObserver> {
    void accountService;
    void appInstallationCoordinator;
    void cloudKitCoordinator;
    void contactsManager;
    void friendListCoordinator;
    void invitationListener;
    void relationshipFinalizationCoordinator;
    void secureCloudCoalescer;
}

@property (nonatomic, readonly) bool isReadyToProcessChanges;

- (void).cxx_destruct;
- (void)cloudKitManager:(id)arg1 didHandleServerPushWithCloudKitGroup:(id)arg2;
- (void)cloudKitManager:(id)arg1 didUpdateAccountStatus:(long long)arg2;
- (void)friendListDidLoadCompetitions;
- (void)friendListDidUpdate:(id)arg1;
- (id)init;
- (bool)isReadyToProcessChanges;

@end
