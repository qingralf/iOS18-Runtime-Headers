/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.NewIssueLocalNotificationScheduler : NSObject <FCIssueReadingHistoryObserving> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void issueReadingHistory;
    void newIssueThreadIdentifier;
    void notificationService;
    void secondsPastMidnightToDeliverNotification;
}

- (void).cxx_destruct;
- (id)init;
- (void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2;

@end
