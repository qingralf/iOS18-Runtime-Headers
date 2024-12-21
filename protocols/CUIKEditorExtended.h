/* Generated by RuntimeBrowser.
 */

@protocol CUIKEditorExtended <CUIKEditor>

@required

- (bool)calendarUsesEditor:(EKCalendar *)arg1;
- (void)deleteCalendars:(NSSet *)arg1;
- (void)deleteEvents:(NSSet *)arg1;
- (void)deleteSources:(NSSet *)arg1;
- (bool)eventUsesEditor:(EKEvent *)arg1;
- (void)saveCalendars:(NSSet *)arg1;
- (void)saveChangesToEvents:(NSSet *)arg1 impliedCommitDecision:(bool)arg2;
- (void)saveChangesToSources:(NSSet *)arg1;
- (void)saveNewSources:(NSSet *)arg1 commit:(bool)arg2;
- (bool)sourceUsesEditor:(EKSource *)arg1;

@end