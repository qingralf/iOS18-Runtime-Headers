/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthBalanceDaemon.framework/HealthBalanceDaemon
 */

@interface HealthBalanceDaemon.AnalyticsDailyMultiEventManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver> {
    void eventSubmissionManager;
    void profile;
    void unitTest_didObserveAnalyticsSubmissionCoordinator;
}

- (void).cxx_destruct;
- (void)daemonReady:(id)arg1;
- (id)init;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;

@end