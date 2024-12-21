/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpScheduler : BRCFSSchedulerBase <BRCSyncUpCallbackProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_clearSyncUpErrorForItem:(id)arg1;
- (void)_scheduleSyncUpJob:(id)arg1;
- (void)_scheduleSyncUpJobForZoneWithRowID:(id)arg1;
- (void)blockSyncUpCallback:(id)arg1 inZone:(id)arg2;
- (void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2;
- (void)createSyncUpJobForRowID:(unsigned long long)arg1 inZone:(id)arg2;
- (void)deleteSyncUpJobsForItem:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (unsigned long long)finishSyncUpForItem:(id)arg1 inZone:(id)arg2 success:(bool)arg3;
- (unsigned long long)inFlightDiffsForItem:(id)arg1;
- (unsigned long long)inFlightDiffsForItem:(id)arg1 zoneRowID:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (bool)isItemInSyncUpAndInFlight:(id)arg1;
- (bool)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2;
- (bool)isItemPendingSyncUp:(id)arg1;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (unsigned long long)postponeSyncUpCallback:(id)arg1 inZone:(id)arg2;
- (void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(unsigned long long)arg2 inZone:(id)arg3;
- (unsigned long long)recoverAndReportMissingJobs;
- (void)schedule;
- (void)setState:(int)arg1 forItem:(id)arg2 zone:(id)arg3;

@end