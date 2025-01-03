/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADStatCollector : NSObject

@property (nonatomic, readonly) bool wantsCalendars;
@property (nonatomic, readonly) bool wantsEvents;
@property (nonatomic, readonly) bool wantsOccurrences;
@property (nonatomic, readonly) bool wantsReminders;
@property (nonatomic, readonly) bool wantsStores;

+ (bool)enabled;
+ (id)eventName;

- (id)desiredOccurrenceRange;
- (id)desiredReminderRange;
- (bool)enabled;
- (id)eventDictionaries;
- (id)eventName;
- (void)prepareWithContext:(id)arg1;
- (void)processBirthdayCalendarEvents:(id)arg1;
- (void)processCalendars:(id)arg1 inStore:(void*)arg2;
- (void)processEvents:(id)arg1;
- (void)processOccurrences:(id)arg1;
- (void)processReminders:(id)arg1;
- (void)processSignificantEventWithPredictedLocation:(bool)arg1 onSharedCalendar:(bool)arg2;
- (void)processStores:(id)arg1;
- (bool)wantsCalendars;
- (bool)wantsEvents;
- (bool)wantsOccurrences;
- (bool)wantsReminders;
- (bool)wantsStores;

@end
