/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)arg1;
- (bool)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(long long)arg2;
- (bool)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(long long)arg2;
- (bool)deleteAllCompletedTasks;
- (id)loadMostRecentMessagePTasks;
- (bool)storePTask:(id)arg1;
- (bool)updateTaskFlagsForPTask:(id)arg1;

@end
