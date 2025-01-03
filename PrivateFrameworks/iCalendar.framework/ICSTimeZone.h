/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZone : ICSComponent {
    id  _systemTimeZone;
}

@property (nonatomic, retain) NSString *tzid;

+ (bool)_isTimeZone:(id)arg1 pseudoDSTForDate:(id)arg2;
+ (id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3;
+ (long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2;
+ (id)name;
+ (bool)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2;
+ (id)quickTimeZoneNames;
+ (id)slowTimeZoneNames;
+ (id)timeZoneWithSystemTimeZoneName:(id)arg1;

- (void).cxx_destruct;
- (id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (id)getNSTimeZone:(id)arg1;
- (id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2;
- (id)initWithSystemTimeZone:(id)arg1;
- (id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;
- (id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;
- (bool)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2;
- (id)propertiesToExcludeForChecksum;
- (void)setTzid:(id)arg1;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)tzid;

@end
