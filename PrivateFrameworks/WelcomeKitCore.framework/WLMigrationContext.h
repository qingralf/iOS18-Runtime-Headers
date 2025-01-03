/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMigrationContext : NSObject {
    WLStatistics * _aggregateStatistics;
    unsigned long long  _completedDownloadSegmentCount;
    WLMigrationDataCoordinator * _dataCoordinator;
    <WLMigrationDataSource> * _dataSource;
    <WLDataMigrationDelegate> * _delegate;
    unsigned long long  _expectedDownloadBytesRemainingForItemsWithConcreteSizes;
    unsigned long long  _expectedDownloadSegmentsRemaining;
    unsigned long long  _expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
    NSArray * _importErrors;
    NSDate * _lastProgressSentDate;
    double  _lastProgressSentToAndroidDevice;
    WLSourceDeviceMigrationMetadata * _metadata;
    NSMutableArray * _migrators;
    WLPayload * _payload;
    void * _powerAssertion;
    double  _progress;
    WLSourceDevice * _sourceDevice;
    WLSQLController * _sqlController;
    unsigned long long  _throughputBytesInCurrentPeriod;
    NSMutableArray * _throughputSamples;
    NSDate * _throughputSegmentStartDate;
    unsigned long long  _throughputSegmentsInCurrentPeriod;
    WLTimeEstimateAccuracyTracker * _timeEstimateAccuracyTracker;
    WLURLSessionController * _urlSessionController;
}

@property (nonatomic, retain) WLStatistics *aggregateStatistics;
@property (nonatomic) unsigned long long completedDownloadSegmentCount;
@property (nonatomic, retain) WLMigrationDataCoordinator *dataCoordinator;
@property (nonatomic, retain) <WLMigrationDataSource> *dataSource;
@property (nonatomic, retain) <WLDataMigrationDelegate> *delegate;
@property (nonatomic) unsigned long long expectedDownloadBytesRemainingForItemsWithConcreteSizes;
@property (nonatomic) unsigned long long expectedDownloadSegmentsRemaining;
@property (nonatomic) unsigned long long expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
@property (nonatomic, retain) NSArray *importErrors;
@property (nonatomic, retain) NSDate *lastProgressSentDate;
@property (nonatomic) double lastProgressSentToAndroidDevice;
@property (nonatomic, retain) WLSourceDeviceMigrationMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *migrators;
@property (nonatomic, retain) WLPayload *payload;
@property (nonatomic) void*powerAssertion;
@property (nonatomic) double progress;
@property (nonatomic, retain) WLSourceDevice *sourceDevice;
@property (nonatomic, retain) WLSQLController *sqlController;
@property (nonatomic) unsigned long long throughputBytesInCurrentPeriod;
@property (nonatomic, retain) NSMutableArray *throughputSamples;
@property (nonatomic, retain) NSDate *throughputSegmentStartDate;
@property (nonatomic) unsigned long long throughputSegmentsInCurrentPeriod;
@property (nonatomic, retain) WLTimeEstimateAccuracyTracker *timeEstimateAccuracyTracker;
@property (nonatomic, retain) WLURLSessionController *urlSessionController;

- (void).cxx_destruct;
- (id)aggregateStatistics;
- (unsigned long long)completedDownloadSegmentCount;
- (id)dataCoordinator;
- (id)dataSource;
- (id)delegate;
- (unsigned long long)expectedDownloadBytesRemainingForItemsWithConcreteSizes;
- (unsigned long long)expectedDownloadSegmentsRemaining;
- (unsigned long long)expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
- (id)importErrors;
- (id)init;
- (id)lastProgressSentDate;
- (double)lastProgressSentToAndroidDevice;
- (id)metadata;
- (id)migrators;
- (id)payload;
- (void*)powerAssertion;
- (double)progress;
- (void)setAggregateStatistics:(id)arg1;
- (void)setCompletedDownloadSegmentCount:(unsigned long long)arg1;
- (void)setDataCoordinator:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpectedDownloadBytesRemainingForItemsWithConcreteSizes:(unsigned long long)arg1;
- (void)setExpectedDownloadSegmentsRemaining:(unsigned long long)arg1;
- (void)setExpectedDownloadSegmentsRemainingForItemsWithEstimatedSizes:(unsigned long long)arg1;
- (void)setImportErrors:(id)arg1;
- (void)setLastProgressSentDate:(id)arg1;
- (void)setLastProgressSentToAndroidDevice:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMigrators:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPowerAssertion:(void*)arg1;
- (void)setProgress:(double)arg1;
- (void)setSourceDevice:(id)arg1;
- (void)setSqlController:(id)arg1;
- (void)setThroughputBytesInCurrentPeriod:(unsigned long long)arg1;
- (void)setThroughputSamples:(id)arg1;
- (void)setThroughputSegmentStartDate:(id)arg1;
- (void)setThroughputSegmentsInCurrentPeriod:(unsigned long long)arg1;
- (void)setTimeEstimateAccuracyTracker:(id)arg1;
- (void)setUrlSessionController:(id)arg1;
- (id)sourceDevice;
- (id)sqlController;
- (unsigned long long)throughputBytesInCurrentPeriod;
- (id)throughputSamples;
- (id)throughputSegmentStartDate;
- (unsigned long long)throughputSegmentsInCurrentPeriod;
- (id)timeEstimateAccuracyTracker;
- (id)urlSessionController;

@end
