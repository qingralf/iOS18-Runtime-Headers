/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeSharedUserCloudShareManager : NSObject <HMFLogging> {
    HMDCoreDataCloudShareService * _shareService;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createShareForSharedUserDataWithHomeModelID:(id)arg1 logEventBuilder:(id)arg2;
- (void)_deleteDanglingShare:(id)arg1 homeModelID:(id)arg2;
- (id)_existingShareForSharedUserDataWithHomeModelID:(id)arg1 error:(id*)arg2;
- (id)_existingSharedUserDataRootWithHomeModelID:(id)arg1 error:(id*)arg2;
- (id)_existingSharedUserDataRootWithoutShareWithHomeModelID:(id)arg1 error:(id*)arg2;
- (id)_existingSharedUserPrivateRootWithHomeModelID:(id)arg1 error:(id*)arg2;
- (id)_existingSharesForSharedUserDataWithHomeModelID:(id)arg1 error:(id*)arg2;
- (bool)_onlyShareOwnerInShare:(id)arg1;
- (void)_removeSharedUserDataRootsForHomeWithModelID:(id)arg1;
- (id)_shareForSharedUserDataWithHomeModelID:(id)arg1 logEventBuilder:(id)arg2;
- (id)acceptShareInvitation:(id)arg1 homeWithHomeModelID:(id)arg2;
- (id)grantAccessForOwner:(id)arg1 sharedUserDataWithHomeModelID:(id)arg2 logEventBuilder:(id)arg3;
- (id)initWithCloudShareService:(id)arg1;
- (id)initWithContainer:(id)arg1 sharedStore:(id)arg2 privateStore:(id)arg3 moc:(id)arg4;
- (void)leaveShareWithSharedHomeModelID:(id)arg1;
- (void)removeShareForSharedUserDataWithHomeModelID:(id)arg1;
- (void)removeSharesWithNoParticipantForHomeWithModelID:(id)arg1;
- (void)revokeAccessForOwner:(id)arg1 sharedUserDataWithHomeModelID:(id)arg2;

@end
