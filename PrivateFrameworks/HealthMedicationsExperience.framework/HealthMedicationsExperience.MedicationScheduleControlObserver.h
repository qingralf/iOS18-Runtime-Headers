/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsExperience.framework/HealthMedicationsExperience
 */

@interface HealthMedicationsExperience.MedicationScheduleControlObserver : NSObject <HKMedicationScheduleControlObserver> {
    void observerOptions;
    void scheduleChangedSubject;
}

- (void).cxx_destruct;
- (id)init;
- (void)scheduleControl:(id)arg1 didAddOrModifySchedules:(id)arg2;
- (void)scheduleControlDidRescheduleItems;

@end
