/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSharedSummaryParticipantProfileCreationOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray * _participantRecords;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createProfileIfNecessaryForParticipant:(id)arg1 completion:(id /* block */)arg2;
- (void)_createProfileWithProfileIdentifier:(id)arg1 contactIdentifier:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 completion:(id /* block */)arg5;
- (void)_createProfileWithUUID:(id)arg1 contactIdentifier:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ownerParticipant:(id)arg5 completion:(id /* block */)arg6;
- (void)_setUpOwnerParticipantForProfileIdentifier:(id)arg1 ownerParticipant:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1 participants:(id)arg2;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end