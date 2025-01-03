/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKClinicalAuthorizationFlowManager : NSObject <HKHealthRecordsAccountsEventListener> {
    void accountsEvents;
    void healthRecordsStore;
    void healthStore;
    void ingestionObserverSet;
    void ingestionStatus;
}

+ (id)tableViewHeaderIcon;

- (void).cxx_destruct;
- (id)createInitialViewControllerWithContext:(id)arg1 delegate:(id)arg2;
- (void)healthRecordsStore:(id)arg1 observedAccountsEvent:(unsigned long long)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2;
- (void)registerIngestionStatusObserver:(id)arg1;
- (void)removeIngestionStatusObserver:(id)arg1;

@end
