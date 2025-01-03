/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassWeatherInformation : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _attributionURL;
    NSString * _cityName;
    PKPassWeatherSymbol * _darkSymbol;
    NSDate * _date;
    NSMeasurement * _highTemperature;
    bool  _isForPastDate;
    bool  _isHistoricalEstimate;
    PKPassWeatherSymbol * _lightSymbol;
    NSMeasurement * _lowTemperature;
    CLLocation * _rawLocation;
    NSString * _weatherDescription;
    NSURL * _weatherURL;
}

@property (nonatomic, readonly, copy) NSURL *attributionURL;
@property (nonatomic, readonly, copy) NSString *cityName;
@property (nonatomic, readonly, copy) PKPassWeatherSymbol *darkSymbol;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSMeasurement *highTemperature;
@property (nonatomic, readonly) bool isForPastDate;
@property (nonatomic, readonly) bool isHistoricalEstimate;
@property (nonatomic, readonly, copy) PKPassWeatherSymbol *lightSymbol;
@property (nonatomic, readonly, copy) NSMeasurement *lowTemperature;
@property (nonatomic, readonly, copy) CLLocation *rawLocation;
@property (nonatomic, readonly, copy) NSString *weatherDescription;
@property (nonatomic, readonly, copy) NSURL *weatherURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionURL;
- (id)cityName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkSymbol;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)highTemperature;
- (id)initWithCityName:(id)arg1 date:(id)arg2 lightSymbol:(id)arg3 darkSymbol:(id)arg4 weatherDescription:(id)arg5 highTemperature:(id)arg6 lowTemperature:(id)arg7 rawLocation:(id)arg8 attributionURL:(id)arg9 weatherURL:(id)arg10 isHistoricalEstimate:(bool)arg11 isForPastDate:(bool)arg12;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWeatherInformation:(id)arg1;
- (bool)isForPastDate;
- (bool)isHistoricalEstimate;
- (id)lightSymbol;
- (id)lowTemperature;
- (id)rawLocation;
- (id)weatherDescription;
- (id)weatherURL;

@end
