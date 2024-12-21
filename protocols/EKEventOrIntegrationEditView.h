/* Generated by RuntimeBrowser.
 */

@protocol EKEventOrIntegrationEditView <NSObject>

@required

- (EKCalendar *)calendarToMakeVisibleOnSave;
- (void)cancelEditing;
- (void)completeAndSaveWithContinueBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)configureAppearanceForSplitDayView;
- (EKEvent *)event;
- (bool)hasUnsavedChanges;
- (bool)ignoreUnsavedChanges;
- (<EKEventOrIntegrationEditViewDelegate> *)internalEditViewDelegate;
- (void)refreshStartAndEndDates;
- (void)setEvent:(EKEvent *)arg1;
- (void)setIgnoreUnsavedChanges:(bool)arg1;
- (void)setInternalEditViewDelegate:(id <EKEventOrIntegrationEditViewDelegate>)arg1;
- (bool)willPresentDialogOnSave;

@end