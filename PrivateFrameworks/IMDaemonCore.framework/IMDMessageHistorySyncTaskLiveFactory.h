/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {
    IMDAccountController * _accountController;
    IMDCKSyncController * _ckSyncController;
    IMDReplayController * _replayController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3;
- (id)_newFirstUnlockReplaySyncTask;
- (id)_newIDSTransactionLogSyncTask;
- (id)_newKChatSyncTask;
- (void)dealloc;
- (id)init;
- (id)newSyncTaskForType:(unsigned long long)arg1;

@end
