/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKCompositeEditor : NSObject <CUIKEditorExtended> {
    NSArray * _editors;
    NSDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)calendarUsesEditor:(id)arg1;
- (bool)commitEventForOOPModificationRecording:(id)arg1 error:(id*)arg2;
- (void)deleteCalendar:(id)arg1 forEntityType:(unsigned long long)arg2;
- (void)deleteCalendars:(id)arg1;
- (bool)deleteEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)deleteEvents:(id)arg1;
- (void)deleteEvents:(id)arg1 span:(long long)arg2;
- (void)deleteEvents:(id)arg1 span:(long long)arg2 result:(id /* block */)arg3;
- (void)deleteSources:(id)arg1;
- (void)dispatchCalendar:(id)arg1 block:(id /* block */)arg2;
- (void)dispatchCalendars:(id)arg1 block:(id /* block */)arg2;
- (void)dispatchEvent:(id)arg1 block:(id /* block */)arg2;
- (void)dispatchEvents:(id)arg1 block:(id /* block */)arg2;
- (void)dispatchSources:(id)arg1 block:(id /* block */)arg2;
- (bool)eventUsesEditor:(id)arg1;
- (id)initWithEditors:(id)arg1;
- (void)performWithOptions:(id)arg1 block:(id /* block */)arg2;
- (bool)saveCalendar:(id)arg1 error:(id*)arg2;
- (void)saveCalendars:(id)arg1;
- (void)saveChangesToEvents:(id)arg1 impliedCommitDecision:(bool)arg2;
- (void)saveChangesToEvents:(id)arg1 span:(long long)arg2;
- (void)saveChangesToSources:(id)arg1;
- (bool)saveEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveEventForOOPModificationRecording:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveNewEvents:(id)arg1 commit:(bool)arg2 error:(id*)arg3;
- (void)saveNewSources:(id)arg1 commit:(bool)arg2;
- (bool)sourceUsesEditor:(id)arg1;

@end