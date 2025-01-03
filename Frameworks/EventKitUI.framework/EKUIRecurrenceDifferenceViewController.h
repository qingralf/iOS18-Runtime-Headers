/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIRecurrenceDifferenceViewController : UITableViewController {
    NSArray * _alarmsAdded;
    NSArray * _alarmsRemoved;
    NSArray * _attendeesAdded;
    NSArray * _attendeesRemoved;
    NSMutableArray * _changedRows;
    NSDictionary * _diffSummary;
    EKEvent * _event;
}

+ (bool)shouldShowRecurrenceDiff:(id)arg1;

- (void).cxx_destruct;
- (id)dateTimeStringForEvent:(id)arg1;
- (id)descriptionForDiffType:(long long)arg1 row:(bool)arg2;
- (long long)diffTypeForIndexPath:(id)arg1;
- (long long)diffTypeForSection:(long long)arg1;
- (void)findSemanticAlarmDifferenceFromOriginal:(id)arg1;
- (void)findSemanticAttendeeDifferenceFromOriginal:(id)arg1;
- (id)initWithEvent:(id)arg1 andSummary:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)revertChangeForDiffType:(long long)arg1 row:(long long)arg2;
- (long long)rowCountForDiffType:(long long)arg1;
- (id)stringForAlarms:(id)arg1;
- (id)stringForAttendees:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)titleForDiffType:(long long)arg1;

@end
