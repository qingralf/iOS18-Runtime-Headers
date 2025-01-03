/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAutoInstallForecast : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _firstUnlock;
    _SUAutoInstallForecastDateCache * _lazy_forecastDateCache;
    NSDate * _suEndDate;
    NSDate * _suStartDate;
    NSDate * _unlockEndDate;
    NSDate * _unlockStartDate;
}

@property (nonatomic, retain) NSDate *firstUnlock;
@property (nonatomic, readonly) long long scheduleType;
@property (nonatomic, retain) NSDate *suEndDate;
@property (nonatomic, retain) NSDate *suStartDate;
@property (nonatomic, retain) NSDate *unlockEndDate;
@property (nonatomic, retain) NSDate *unlockStartDate;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

+ (id)createForecast;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_calendar;
- (id)_forecastDateCache;
- (bool)_isDateExpired:(id)arg1;
- (bool)_isForecastExpired;
- (bool)_isForecastLogicallyExpired;
- (id)_roundedEndTime;
- (id)_roundedStartTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstUnlock;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)scheduleType;
- (void)setFirstUnlock:(id)arg1;
- (void)setSuEndDate:(id)arg1;
- (void)setSuStartDate:(id)arg1;
- (void)setUnlockEndDate:(id)arg1;
- (void)setUnlockStartDate:(id)arg1;
- (id)suEndDate;
- (id)suStartDate;
- (id)unlockEndDate;
- (id)unlockStartDate;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI

- (id)_componentsFromDate:(id)arg1;
- (id)_susui_cardinalityForRoundedEndTime;
- (id)_susui_cardinalityForRoundedStartTime;
- (id)_susui_formattedRoundedEndTimeString;
- (id)_susui_formattedRoundedStartTimeString;
- (id)_timeFormatter;
- (bool)_uses24HourTimeForLocale;
- (id)formatCardinalityForDate:(id)arg1;

@end
