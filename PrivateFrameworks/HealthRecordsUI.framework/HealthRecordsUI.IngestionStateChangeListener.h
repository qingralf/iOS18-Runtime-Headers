/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HealthRecordsUI.IngestionStateChangeListener : NSObject <HKClinicalIngestionStateListener> {
    void changePublisher;
    void handler;
}

- (void).cxx_destruct;
- (void)clinicalIngestionStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2;
- (id)init;

@end