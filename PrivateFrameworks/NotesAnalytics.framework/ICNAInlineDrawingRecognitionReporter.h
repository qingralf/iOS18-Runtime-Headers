/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICNAInlineDrawingRecognitionReporter : ICNAObject {
    NSMutableDictionary * _stagedReports;
}

@property (nonatomic, retain) NSMutableDictionary *stagedReports;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (void)analyticsSessionWillEnd:(id)arg1;
- (void)createReportForDrawing:(id)arg1 drawingID:(id)arg2 insideNote:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)reportNotification:(id)arg1;
- (void)setStagedReports:(id)arg1;
- (id)stagedReports;
- (void)submitReportsWithEventReporter:(id)arg1;

@end
