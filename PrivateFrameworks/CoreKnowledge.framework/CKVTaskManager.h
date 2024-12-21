/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVTaskManager : NSObject {
    CKVTaskCoalescer * _coalescer;
    NSObject<CKVDonateTaskProvider> * _donateTaskProvider;
    CKVTaskManagerInfo * _info;
    NSString * _managerName;
    NSURL * _rootDirectoryURL;
    NSObject<CCSetEnumerator> * _setEnumerator;
    CKVTaskSettings * _settings;
}

@property (nonatomic, readonly) NSObject<CKVDonateTaskProvider> *donateTaskProvider;
@property (nonatomic, readonly) CKVTaskManagerInfo *info;
@property (nonatomic, readonly) CKVTaskSettings *settings;

+ (id)dailyDonateTasks;
+ (id)defaultManager;
+ (id)migrationDonateTasks;
+ (id)siriLanguageDependentDonateTasks;
+ (id)verificationTasks;

- (void).cxx_destruct;
- (id /* block */)_blockToCollectInstalledAppBundleIds:(id)arg1;
- (id /* block */)_cleanUpDeletedAppDonationsTaskBlock:(unsigned short)arg1;
- (id /* block */)_derivativeTaskBlockForTask:(unsigned short)arg1 reason:(unsigned short)arg2;
- (id)_descriptorForSiriLocale;
- (bool)_didLocalizationChange:(unsigned short)arg1;
- (bool)_didTriggerMigration:(id /* block */)arg1 reason:(unsigned short)arg2;
- (void)_enumerateLocalInstancesOfSet:(id)arg1 hasDelta:(bool*)arg2 fromBookmark:(bool*)arg3;
- (bool)_enumerateLocalInstancesOfSet:(id)arg1 priorBookmark:(id)arg2 newBookmark:(id*)arg3 hasDelta:(bool*)arg4 addedInstancesBlock:(id /* block */)arg5;
- (id)_findContactSet;
- (id)_findInstalledAppSet;
- (id)_firstSetWithItemType:(unsigned short)arg1 inSets:(id)arg2;
- (id)_firstSetWithItemType:(unsigned short)arg1 matchingDescriptor:(id)arg2 inSets:(id)arg3;
- (bool)_isClearRequiredForSet:(id)arg1 installedAppBundleIds:(id)arg2;
- (bool)_isDeleteRequiredForSet:(id)arg1 installedAppBundleIds:(id)arg2;
- (bool)_isSet:(id)arg1 excludedFromInstalledAppBundleIds:(id)arg2;
- (bool)_loadOrCreateTaskInfo;
- (id /* block */)_maintenanceTaskBlockWithReason:(unsigned short)arg1 shouldDefer:(id /* block */)arg2;
- (void)_postNotification:(const char *)arg1 forChangeToItemType:(unsigned short)arg2;
- (void)_runInstalledAppDerivativeTasksWithReason:(unsigned short)arg1;
- (id /* block */)_siriLanguageChangedTaskBlockWithReason:(unsigned short)arg1;
- (void)_submitTask:(unsigned short)arg1 reason:(unsigned short)arg2 taskBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id /* block */)_taskBlockForTask:(unsigned short)arg1 reason:(unsigned short)arg2 shouldDefer:(id /* block */)arg3;
- (bool)_validateFilesystemState;
- (id /* block */)_verificationTaskBlockForTask:(unsigned short)arg1 reason:(unsigned short)arg2;
- (id /* block */)_wakePodcastsTaskBlockWithReason:(unsigned short)arg1;
- (id /* block */)_wrapperForTaskBlock:(id /* block */)arg1 checkingEnablement:(unsigned short)arg2 reason:(unsigned short)arg3;
- (bool)clearAllState;
- (id)donateTaskProvider;
- (void)enableSimulatedTasks:(bool)arg1;
- (bool)handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 shouldDefer:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)info;
- (id)initWithManagerName:(id)arg1 rootDirectoryURL:(id)arg2 setEnumerator:(id)arg3 settings:(id)arg4;
- (id)settings;

@end