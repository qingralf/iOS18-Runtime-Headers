/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface _SUAutoInstallForecastDateCache : NSObject {
    NSCalendar * _calendar;
    bool  _parsed;
    NSDate * _roundedEndDate;
    NSDate * _roundedStartDate;
    long long  _scheduleType;
    SUAutoInstallForecast * _weak_forecast;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *roundedEndTime;
@property (nonatomic, readonly) NSDate *roundedStartTime;
@property (nonatomic, readonly) long long scheduleType;

- (void).cxx_destruct;
- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id*)arg3 outEnd:(id*)arg4;
- (bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (void)_parseForecast;
- (id)calendar;
- (id)description;
- (id)initWithForecast:(id)arg1;
- (id)roundedEndTime;
- (id)roundedStartTime;
- (long long)scheduleType;

@end
