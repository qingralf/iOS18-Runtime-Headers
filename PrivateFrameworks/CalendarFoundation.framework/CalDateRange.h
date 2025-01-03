/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDateRange : NSObject <CalDateRangeProtocol, NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)range:(id)arg1 intersectsRange:(id)arg2;
+ (bool)range:(id)arg1 intersectsRange:(id)arg2 allowSinglePointIntersection:(bool)arg3;
+ (bool)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3;
+ (bool)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 allowSinglePointIntersection:(bool)arg4;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 components:(id)arg3 calendar:(id)arg4;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 duration:(double)arg3;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 multiplier:(unsigned long long)arg3;
+ (id)rangeWithRange:(id)arg1;
+ (id)rangeWithStartDate:(id)arg1 duration:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (bool)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4;
+ (bool)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 allowSinglePointIntersection:(bool)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_calculateMidnightsInCalendar:(id)arg1;
- (id)briefDescription;
- (bool)containsDate:(id)arg1;
- (bool)containsRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)intersectionWithRange:(id)arg1;
- (bool)intersectsRange:(id)arg1;
- (bool)intersectsRange:(id)arg1 allowSinglePointIntersection:(bool)arg2;
- (bool)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)midnightsForRangeInTimeZoneString:(id)arg1;
- (id)midpoint;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDate:(id)arg1 duration:(double)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;
- (id)subtractRange:(id)arg1;
- (id)unionRange:(id)arg1;

@end
