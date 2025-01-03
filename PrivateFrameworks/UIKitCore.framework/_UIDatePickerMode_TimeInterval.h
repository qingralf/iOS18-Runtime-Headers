/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {
    double  _componentWidth;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (id)font;
- (long long)hourForRow:(long long)arg1;
- (bool)isTimeIntervalMode;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForCalendarUnit:(unsigned long long)arg1;
- (void)resetComponentWidths;
- (double)rowHeight;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (void)updateDateForNewDateRange;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;

@end
