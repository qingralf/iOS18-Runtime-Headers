/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
 */

@interface WDBloodGlucoseAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource> {
    WDAddDataManualEntrySpinner * _mealTimeEntryItem;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WDAddDataManualEntrySpinner *mealTimeEntryItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultMetadata;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (id)mealTimeEntryItem;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (void)setMealTimeEntryItem:(id)arg1;

@end
