/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSDateFormatManager : NSObject {
    NSDateIntervalFormatter * _allDayDateFormatter;
    CNDateComponentsFormatter * _birthdayDateComponentsFormatter;
    NSDateComponentsFormatter * _dateComponentsFormatter;
    NSDateFormatter * _dateFormatter;
    NSDateIntervalFormatter * _dateIntervalFormatter;
    NSDateFormatter * _dayOfWeekFormatter;
    NSDateFormatter * _longRelativeDateFormatter;
    NSDateIntervalFormatter * _mediumDayOfWeekDateIntervalFormatter;
    NSDateIntervalFormatter * _mediumDayOfWeekDateTimeIntervalFormatter;
    NSDateFormatter * _mediumRelativeDateFormatter;
    NSLocale * _overrideLocale;
    NSDateIntervalFormatter * _shortDateIntervalFormatter;
    NSDateFormatter * _shortDateTimeFormatter;
    NSDateIntervalFormatter * _shortDateTimeIntervalFormatter;
    NSDateFormatter * _shortDayOfWeekFormatter;
    NSDateFormatter * _shortRelativeDateFormatter;
    NSDateFormatter * _shortTimeFormatter;
}

@property (nonatomic, retain) NSDateIntervalFormatter *allDayDateFormatter;
@property (nonatomic, retain) CNDateComponentsFormatter *birthdayDateComponentsFormatter;
@property (nonatomic, retain) NSDateComponentsFormatter *dateComponentsFormatter;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSDateIntervalFormatter *dateIntervalFormatter;
@property (nonatomic, retain) NSDateFormatter *dayOfWeekFormatter;
@property (nonatomic, retain) NSDateFormatter *longRelativeDateFormatter;
@property (nonatomic, retain) NSDateIntervalFormatter *mediumDayOfWeekDateIntervalFormatter;
@property (nonatomic, retain) NSDateIntervalFormatter *mediumDayOfWeekDateTimeIntervalFormatter;
@property (nonatomic, retain) NSDateFormatter *mediumRelativeDateFormatter;
@property (retain) NSLocale *overrideLocale;
@property (nonatomic, retain) NSDateIntervalFormatter *shortDateIntervalFormatter;
@property (nonatomic, retain) NSDateFormatter *shortDateTimeFormatter;
@property (nonatomic, retain) NSDateIntervalFormatter *shortDateTimeIntervalFormatter;
@property (nonatomic, retain) NSDateFormatter *shortDayOfWeekFormatter;
@property (nonatomic, retain) NSDateFormatter *shortRelativeDateFormatter;
@property (nonatomic, retain) NSDateFormatter *shortTimeFormatter;

+ (id)allDayDateFormatter;
+ (id)allFormatters;
+ (id)calendar;
+ (bool)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3;
+ (id)dateCompletedStringFormat;
+ (id)dateCreatedStringFormat;
+ (id)dateDueStringFormat;
+ (id)dateFormatter;
+ (id)dateIntervalFormatter;
+ (id)dateLastCalledStringFormat;
+ (id)dateLastOpenedStringFormat;
+ (id)dateLastPlayedStringFormat;
+ (id)dateModifiedStringFormat;
+ (id)dyanmicStringFromDate:(id)arg1;
+ (id)dynamicCompactStringFromDate:(id)arg1;
+ (id)dynamicDateTimeStringsFromDate:(id)arg1;
+ (id)dynamicMediumStringFromDate:(id)arg1;
+ (id)dynamicStringFromDate:(id)arg1 isCompact:(bool)arg2;
+ (id)fullDateTimeStringsFromDate:(id)arg1;
+ (bool)hasRelativeFormatForDate:(id)arg1;
+ (id)icalConformingStringFromDate:(id)arg1;
+ (void)initialize;
+ (bool)isDate:(id)arg1 withinTimeInterval:(double)arg2 includePast:(bool)arg3;
+ (bool)isDateWithinMonthsTime:(id)arg1;
+ (bool)isDateWithinWeeksTime:(id)arg1;
+ (id)mediumDayOfWeekDateTimeIntervalFormatter;
+ (id)nextUpcomingDateForDateComponents:(id)arg1 fromDate:(id)arg2;
+ (void)overrideLocale:(id)arg1;
+ (void)purgeMemory;
+ (id)shortDateTimeFormatter;
+ (id)shortDateTimeStringFromDate:(id)arg1 isAllDay:(bool)arg2;
+ (id)shortDateTimeStringFromDate:(id)arg1 isAllDay:(bool)arg2 showAllDayString:(bool)arg3;
+ (id)stringFromBirthdayComponents:(id)arg1;
+ (id)stringFromTimeInterval:(double)arg1;
+ (id)stringsFromDate:(id)arg1 toDate:(id)arg2 isAllDay:(bool)arg3;
+ (id)tomorrow;

- (void).cxx_destruct;
- (id)allDayDateFormatter;
- (id)allFormatters;
- (id)birthdayDateComponentsFormatter;
- (id)calendar;
- (id)currentLocale;
- (id)dateComponentsFormatter;
- (id)dateFormatter;
- (id)dateIntervalFormatter;
- (id)dayOfWeekFormatter;
- (id)init;
- (id)longRelativeDateFormatter;
- (id)mediumDayOfWeekDateIntervalFormatter;
- (id)mediumDayOfWeekDateTimeIntervalFormatter;
- (id)mediumRelativeDateFormatter;
- (id)overrideLocale;
- (void)purgeMemory;
- (void)setAllDayDateFormatter:(id)arg1;
- (void)setBirthdayDateComponentsFormatter:(id)arg1;
- (void)setDateComponentsFormatter:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateIntervalFormatter:(id)arg1;
- (void)setDayOfWeekFormatter:(id)arg1;
- (void)setLongRelativeDateFormatter:(id)arg1;
- (void)setMediumDayOfWeekDateIntervalFormatter:(id)arg1;
- (void)setMediumDayOfWeekDateTimeIntervalFormatter:(id)arg1;
- (void)setMediumRelativeDateFormatter:(id)arg1;
- (void)setOverrideLocale:(id)arg1;
- (void)setShortDateIntervalFormatter:(id)arg1;
- (void)setShortDateTimeFormatter:(id)arg1;
- (void)setShortDateTimeIntervalFormatter:(id)arg1;
- (void)setShortDayOfWeekFormatter:(id)arg1;
- (void)setShortRelativeDateFormatter:(id)arg1;
- (void)setShortTimeFormatter:(id)arg1;
- (id)shortDateIntervalFormatter;
- (id)shortDateTimeFormatter;
- (id)shortDateTimeIntervalFormatter;
- (id)shortDayOfWeekFormatter;
- (id)shortRelativeDateFormatter;
- (id)shortTimeFormatter;

@end
