/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNNullIconProvider : NSObject <CALNCalendarIconIdentifierProvider, CALNNotificationIconProvider, CalIconProvider>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

@end
