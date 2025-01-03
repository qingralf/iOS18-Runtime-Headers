/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    NSCalendar * _calendar;
    NSDateComponents * _components;
    NSDate * _date;
    NSString * _dateCacheKey;
}

+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;
+ (void)initialize;

- (void).cxx_destruct;
- (double)absoluteTime;
- (id)allComponents;
- (id)calendar;
- (id)calendarDateByAddingComponents:(id)arg1;
- (id)calendarDateByAddingDays:(long long)arg1;
- (id)calendarDateByAddingGregorianUnits:(struct { int x1; int x2; int x3; int x4; int x5; double x6; })arg1;
- (id)calendarDateByAddingHours:(long long)arg1;
- (id)calendarDateByAddingMinutes:(long long)arg1;
- (id)calendarDateByAddingMonths:(long long)arg1;
- (id)calendarDateByAddingSeconds:(long long)arg1;
- (id)calendarDateByAddingWeeks:(long long)arg1;
- (id)calendarDateByAddingYears:(long long)arg1;
- (id)calendarDateByComponentwiseAddingComponents:(id)arg1;
- (id)calendarDateByComponentwiseAddingSeconds:(long long)arg1;
- (id)calendarDateForDay;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(long long)arg1;
- (id)calendarDateForEndOfYear;
- (id)calendarDateForMonth;
- (id)calendarDateForWeekWithWeekStart:(long long)arg1;
- (id)calendarDateForWeekWithWeekStart:(long long)arg1 daysSinceWeekStart:(long long*)arg2;
- (id)calendarDateForYear;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateWithDate:(id)arg1;
- (long long)compare:(id)arg1;
- (id)components;
- (id)componentsWithoutTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (long long)day;
- (id)dayComponents;
- (long long)dayOfWeek;
- (unsigned long long)dayOfYear;
- (id)dayTimeComponents;
- (unsigned long long)daysInMonth;
- (unsigned long long)daysInYear;
- (id)description;
- (id)differenceAsDateComponents:(id)arg1 units:(unsigned long long)arg2;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2;
- (long long)differenceInDays:(id)arg1;
- (long long)differenceInMonths:(id)arg1;
- (double)differenceInSeconds:(id)arg1;
- (long long)differenceInYears:(id)arg1;
- (id)earlierDate:(id)arg1;
- (long long)era;
- (unsigned long long)hash;
- (long long)hour;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)initWithDate:(id)arg1 calendar:(id)arg2;
- (id)initWithDate:(id)arg1 components:(id)arg2 calendar:(id)arg3;
- (id)initWithDate:(id)arg1 components:(id)arg2 timeZone:(id)arg3;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (id)initWithDateComponents:(id)arg1 calendar:(id)arg2;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)laterDate:(id)arg1;
- (long long)minute;
- (long long)month;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)second;
- (long long)secondsFromGMT;
- (id)timeComponents;
- (id)timeZone;
- (id)weekComponents;
- (unsigned long long)weekOfMonth;
- (unsigned long long)weekOfYear;
- (unsigned long long)weeksInMonth;
- (unsigned long long)weeksInYear;
- (long long)year;

@end
