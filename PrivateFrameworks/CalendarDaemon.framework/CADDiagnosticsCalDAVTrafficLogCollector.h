/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDiagnosticsCalDAVTrafficLogCollector : NSObject <CADDiagnosticLogCollector> {
    bool  _limitedLogs;
    NSArray * _orderedInputURLs;
    NSArray * _orderedOutputURLs;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitedLogs;
@property (readonly) Class superclass;

+ (bool)_shouldIncludeLogWithFilename:(id)arg1;

- (void).cxx_destruct;
- (id)_filteredLogsFromAllLogs:(id)arg1 context:(id)arg2;
- (id)_limitedLogsFromAllFiles:(id)arg1 context:(id)arg2;
- (id)_recentLogsFromAllFiles:(id)arg1 context:(id)arg2;
- (void)collect:(id)arg1;
- (void)determineExpectedOutputFiles:(id)arg1;
- (id)findAllLogFiles:(id)arg1;
- (bool)limitedLogs;
- (id)parseFilenameDates:(id)arg1 context:(id)arg2;
- (void)setLimitedLogs:(bool)arg1;

@end