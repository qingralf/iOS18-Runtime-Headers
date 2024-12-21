/* Generated by RuntimeBrowser.
 */

@protocol REMReminderCreationDelegate <NSObject>

@required

- (NSDateComponents *)dueDateComponents;
- (CLLocation *)location;
- (NSString *)locationString;
- (NSAttributedString *)notes;
- (NSAttributedString *)title;
- (NSURL *)url;
- (NSUserActivity *)userActivity;

@optional

- (long long)locationProximity;
- (void)reminderCreationViewController:(REMReminderCreationViewController *)arg1 didCreateReminder:(bool)arg2 error:(NSError *)arg3;
- (REMObjectID *)reminderID;
- (bool)titleIsGeneratedSuggestion;
- (bool)wantsExtendedDetailOnlyView;

@end