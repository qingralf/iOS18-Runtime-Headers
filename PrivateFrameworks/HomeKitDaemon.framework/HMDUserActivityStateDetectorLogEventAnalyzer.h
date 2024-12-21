/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserActivityStateDetectorLogEventAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner> {
    <HMDLogEventAnalyzerDataSource> * _dataSource;
    unsigned long long  _maxCoreLocationStateEndOffset;
    HMDEventCounterGroup * _type3DetectorTransitionCounterGroup;
    HMDEventCounterGroup * _type6DetectorTransitionCounterGroup;
}

@property (nonatomic, readonly) <HMDLogEventAnalyzerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxCoreLocationStateEndOffset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDEventCounterGroup *type3DetectorTransitionCounterGroup;
@property (readonly) HMDEventCounterGroup *type6DetectorTransitionCounterGroup;

- (void).cxx_destruct;
- (void)configure;
- (id)dataSource;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (void)handleType3LogEvent:(id)arg1;
- (void)handleType6TransitionLogEvent:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (unsigned long long)maxCoreLocationStateEndOffset;
- (void)resetCounterGroups;
- (void)resetType6DetectorTransitionCounterGroup;
- (void)runDailyTask;
- (void)setMaxCoreLocationStateEndOffset:(unsigned long long)arg1;
- (void)submitCounterGroups;
- (void)submitType3DetectorCounterGroups;
- (void)submitType6DetectorTransitionCounterGroups;
- (id)type3DetectorTransitionCounterGroup;
- (id)type6DetectorTransitionCounterGroup;

@end