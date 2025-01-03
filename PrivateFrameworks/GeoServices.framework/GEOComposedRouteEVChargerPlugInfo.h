/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteEVChargerPlugInfo : NSObject <NSSecureCoding> {
    NSMeasurement * _maximumPower;
    NSMeasurement * _maximumVoltage;
    int  _type;
}

@property (nonatomic, readonly) NSMeasurement *maximumPower;
@property (nonatomic, readonly) NSMeasurement *maximumVoltage;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoChargerPlug:(id)arg1;
- (id)maximumPower;
- (id)maximumVoltage;
- (int)type;

@end
