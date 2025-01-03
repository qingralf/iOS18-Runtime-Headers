/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMetricsHomeDataChangedManager : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory, HMFLogging> {
    HMDEventCountersManager * _countersManager;
    <HMDCurrentResidentDeviceDataSource> * _currentHomeDataSource;
    HMMDateProvider * _dateProvider;
    unsigned long long  _maxNumberEventsToReport;
    NSNotificationCenter * _notificationCenter;
    bool  _started;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDEventCountersManager *countersManager;
@property (nonatomic, readonly) <HMDCurrentResidentDeviceDataSource> *currentHomeDataSource;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long maxNumberEventsToReport;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) bool started;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleChangeSetSummary:(id)arg1 homeUUID:(id)arg2;
- (void)_handleGeneratedHomeDataChangedNotification:(id)arg1;
- (void)_handleHDCDueToBecamePrimaryForHome:(id)arg1;
- (void)_handleHomeDataChangedReasonBecamePrimaryLogEvent:(id)arg1 becamePrimaryHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;
- (void)_handleHomeDataChangedReasonInsertedLogEvent:(id)arg1 insertedHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;
- (void)_handleHomeDataChangedReasonUpdatedLogEvent:(id)arg1 updatedHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;
- (bool)_shouldExcludeUpdateForModelName:(id)arg1 propertyName:(id)arg2;
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;
- (id)countersManager;
- (id)currentHomeDataSource;
- (id)dateProvider;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (id)householdMetricsLogEventFactory;
- (id)initWithCountersManager:(id)arg1 currentHomeDataSource:(id)arg2 dateProvider:(id)arg3;
- (id)initWithCountersManager:(id)arg1 currentHomeDataSource:(id)arg2 dateProvider:(id)arg3 notificationCenter:(id)arg4 maxNumberEventsToReport:(unsigned long long)arg5 workQueue:(id)arg6;
- (id)logEventsFromDictionary:(id)arg1;
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (unsigned long long)maxNumberEventsToReport;
- (id)notificationCenter;
- (id)serializeLogEvents:(id)arg1;
- (void)start;
- (bool)started;
- (void)stop;
- (id)workQueue;

@end
