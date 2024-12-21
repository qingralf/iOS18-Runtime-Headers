/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMIndexSiteManager : NSObject {
    SEMIndexSiteCache * _indexSiteCache;
    NSURL * _managerDirectory;
    SEMDictionaryLog * _managerInfo;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<CCSetEnumerator> * _setEnumerator;
    SEMSettings * _settings;
}

- (void).cxx_destruct;
- (id)_cachedWriterForIndexSiteType:(unsigned char)arg1;
- (unsigned char)_checkForDeferredOperationAtIndexSite:(id)arg1;
- (bool)_checkLastDateOfOperation:(unsigned char)arg1 isOverdue:(bool*)arg2 atSite:(id)arg3;
- (bool)_didHandleUpdatedSets:(id)arg1 shouldDefer:(id /* block */)arg2;
- (bool)_didRefreshSettings:(id /* block */)arg1 skipMaintenance:(bool*)arg2;
- (id)_discoverAllSetsForIndexSiteType:(unsigned char)arg1;
- (bool)_enumerateAllIndexSiteWritersUsingBlock:(id /* block */)arg1;
- (bool)_loadManagerDirectoryAndAvailableIndexSites;
- (void)_loadOrCreateManagerInfo;
- (bool)_performAnyDeferredOperationsAtIndexSite:(id)arg1 outOperationPerformed:(unsigned char*)arg2 shouldDefer:(id /* block */)arg3;
- (bool)_performAnyDeferredOperationsAtIndexSiteType:(unsigned char)arg1 shouldDefer:(id /* block */)arg2;
- (bool)_performMaintenance:(id /* block */)arg1;
- (bool)_performOperation:(unsigned char)arg1 atIndexSite:(id)arg2 shouldDefer:(id /* block */)arg3;
- (bool)_performOperation:(unsigned char)arg1 atIndexSite:(id)arg2 withDate:(id)arg3 shouldDefer:(id /* block */)arg4;
- (bool)_performOperationAtAllIndexSites:(unsigned char)arg1 shouldDefer:(id /* block */)arg2;
- (bool)_rebuildAllStateWithSetEnumerator:(id)arg1;
- (void)_recordOperationTriggered:(unsigned char)arg1 withDate:(id)arg2;
- (bool)_resetManagerDirectory;
- (bool)_updateContainsSetsInUserVault:(id)arg1;
- (bool)_updateIndexSiteType:(unsigned char)arg1 updatedSets:(id)arg2 shouldDefer:(id /* block */)arg3;
- (bool)clearAllState;
- (bool)handleIndexSiteAvailableWithType:(unsigned char)arg1 shouldDefer:(id /* block */)arg2;
- (bool)handleSettingsChange;
- (void)handleSysdiagnoseStarted;
- (bool)handleUpdatedSets:(id)arg1;
- (id)initWithManagerDirectory:(id)arg1 indexSiteCache:(id)arg2 setEnumerator:(id)arg3 settings:(id)arg4;
- (bool)performMaintenance:(id /* block */)arg1;
- (bool)rebuildAllStateWithSetEnumerator:(id)arg1;

@end