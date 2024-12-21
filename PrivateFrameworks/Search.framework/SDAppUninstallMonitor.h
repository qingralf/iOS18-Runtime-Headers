/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SDAppUninstallMonitor : NSObject <SDEventHandlerProvider> {
    NSSet * _allAppSet;
    bool  _hasFailedDeletes;
    NSMutableSet * _pcsForPendingPurges;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _startupSemaphore;
    NSObject<OS_dispatch_source> * _timer;
    bool  _unlocked;
}

@property (nonatomic, retain) NSSet *allAppSet;
@property (nonatomic) bool hasFailedDeletes;
@property (nonatomic, retain) NSMutableSet *pcsForPendingPurges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) bool unlocked;

+ (id)_filename;
+ (id)_installedAppsBundleIDsListFilePath;
+ (id)_installedAppsListFromDisk;
+ (id)_pendingPurgesFilePath;
+ (id)_pendingPurgesFromDisk;
+ (id)_trackingInfoDir;
+ (void)_writeAppsListToDisk:(id)arg1;
+ (bool)_writePendingPurgesToDisk:(id)arg1;
+ (id)applicationsExcludedFromUninstall;
+ (id)sharedInstance;
+ (void)shutdown;

- (void).cxx_destruct;
- (id)_allInstalledApplicationsIdentifiers;
- (void)_deleteAllInteractionsForBundleID:(id)arg1;
- (id)_deleteAllItemsForBundleID:(id)arg1;
- (void)_deleteAllItemsForBundleIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_deleteItemsForUninstalledAppsFromIndex;
- (void)_purgeWithProtectionClasses:(id)arg1 completion:(id /* block */)arg2;
- (id)allAppSet;
- (bool)hasFailedDeletes;
- (id)init;
- (id)pcsForPendingPurges;
- (id)queue;
- (void)ready;
- (void)registerHandlerWithEventMonitor:(id)arg1;
- (void)setAllAppSet:(id)arg1;
- (void)setHasFailedDeletes:(bool)arg1;
- (void)setPcsForPendingPurges:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUnlocked:(bool)arg1;
- (id)timer;
- (void)unlock;
- (bool)unlocked;

@end