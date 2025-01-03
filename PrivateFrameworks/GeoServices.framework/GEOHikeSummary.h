/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOHikeSummary : NSObject {
    NSMeasurement * _elevationGainMeters;
    NSMeasurement * _elevationLossMeters;
    NSMeasurement * _expectedDurationSeconds;
    GEOPDHikeSummary * _hikeSummary;
    NSMeasurement * _lengthMeters;
}

@property (nonatomic, copy) NSMeasurement *elevationGainMeters;
@property (nonatomic, copy) NSMeasurement *elevationLossMeters;
@property (nonatomic, copy) NSMeasurement *expectedDurationSeconds;
@property (nonatomic, readonly) GEOPDHikeSummary *hikeSummary;
@property (nonatomic, copy) NSMeasurement *lengthMeters;

- (void).cxx_destruct;
- (id)_GEOStringForDistanceMeasurement:(id)arg1 forUnit:(id)arg2 allowUnitConversion:(bool)arg3;
- (id)durationString;
- (id)elevationGainMeters;
- (id)elevationGainStringForUnit:(id)arg1;
- (id)elevationLossMeters;
- (id)elevationLossStringForUnit:(id)arg1;
- (id)expectedDurationSeconds;
- (id)hikeSummary;
- (id)hikeTypeNameString;
- (id)initWithPDHikeSummary:(id)arg1;
- (id)lengthMeters;
- (id)lengthStringForUnit:(id)arg1;
- (void)setElevationGainMeters:(id)arg1;
- (void)setElevationLossMeters:(id)arg1;
- (void)setExpectedDurationSeconds:(id)arg1;
- (void)setLengthMeters:(id)arg1;

@end
