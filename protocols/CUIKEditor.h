/* Generated by RuntimeBrowser.
 */

@protocol CUIKEditor <NSObject>

@required

- (bool)commitEventForOOPModificationRecording:(EKEvent *)arg1 error:(id*)arg2;
- (void)deleteCalendar:(EKCalendar *)arg1 forEntityType:(unsigned long long)arg2;
- (bool)deleteEvent:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)deleteEvents:(NSSet *)arg1 span:(long long)arg2;
- (void)deleteEvents:(void *)arg1 span:(void *)arg2 result:(void *)arg3; // needs 3 arg types, found 9: NSSet *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performWithOptions:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)saveCalendar:(EKCalendar *)arg1 error:(id*)arg2;
- (void)saveChangesToEvents:(NSSet *)arg1 span:(long long)arg2;
- (bool)saveEvent:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveEventForOOPModificationRecording:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveNewEvents:(NSSet *)arg1 commit:(bool)arg2 error:(id*)arg3;

@end
