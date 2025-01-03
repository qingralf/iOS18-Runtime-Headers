/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPElectricVehicleWaypoint : NSObject <NSCopying, NSSecureCoding> {
    NSMeasurement * _arrivalBatteryLevel;
    NSArray * _connectors;
    NSMeasurement * _departureBatteryLevel;
    NSMeasurement * _finalWaypointBatteryLevel;
}

@property (nonatomic, retain) NSMeasurement *arrivalBatteryLevel;
@property (nonatomic, copy) NSArray *connectors;
@property (nonatomic, retain) NSMeasurement *departureBatteryLevel;
@property (nonatomic, retain) NSMeasurement *finalWaypointBatteryLevel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalBatteryLevel;
- (id)connectors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureBatteryLevel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finalWaypointBatteryLevel;
- (id)initWithCoder:(id)arg1;
- (id)power;
- (void)setArrivalBatteryLevel:(id)arg1;
- (void)setConnectors:(id)arg1;
- (void)setDepartureBatteryLevel:(id)arg1;
- (void)setFinalWaypointBatteryLevel:(id)arg1;
- (id)voltage;

@end
