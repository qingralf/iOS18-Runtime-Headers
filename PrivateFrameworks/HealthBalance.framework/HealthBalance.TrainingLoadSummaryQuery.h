/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthBalance.framework/HealthBalance
 */

@interface HealthBalance.TrainingLoadSummaryQuery : HKQuery <HealthBalance.TrainingLoadSampleDaySummaryQueryClientInterface> {
    void continueAfterInitialResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  gregorianCalendar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  morningIndexRange;
    void queue_resultsHandler;
    void queue_resultsPendingDelivery;
    void typeOfDataRequested;
}

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverTrainingLoadSampleDaySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithQueryDescriptors:(id)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;

@end
