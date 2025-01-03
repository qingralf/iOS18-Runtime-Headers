/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphViewPointSelectionContext : NSObject {
    NSDateComponents * _pointIntervalComponents;
    HKValueRange * _selectedPathIndexRange;
    HKValueRange * _selectedPointValueRange;
    HKValueRange * _selectedRangeXValues;
    HKGraphSeries * _selectedSeries;
    NSArray * _userInfo;
    double  _xDistanceFromFirstTouchPoint;
    double  _xDistanceFromSecondTouchPoint;
}

@property (nonatomic, retain) NSDateComponents *pointIntervalComponents;
@property (nonatomic, retain) HKValueRange *selectedPathIndexRange;
@property (nonatomic, retain) HKValueRange *selectedPointValueRange;
@property (nonatomic, retain) HKValueRange *selectedRangeXValues;
@property (nonatomic, retain) HKGraphSeries *selectedSeries;
@property (nonatomic, retain) NSArray *userInfo;
@property (nonatomic) double xDistanceFromFirstTouchPoint;
@property (nonatomic) double xDistanceFromSecondTouchPoint;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)pointIntervalComponents;
- (id)selectedPathIndexRange;
- (id)selectedPointValueRange;
- (id)selectedRangeXValues;
- (id)selectedSeries;
- (void)setPointIntervalComponents:(id)arg1;
- (void)setSelectedPathIndexRange:(id)arg1;
- (void)setSelectedPointValueRange:(id)arg1;
- (void)setSelectedRangeXValues:(id)arg1;
- (void)setSelectedSeries:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXDistanceFromFirstTouchPoint:(double)arg1;
- (void)setXDistanceFromSecondTouchPoint:(double)arg1;
- (id)userInfo;
- (double)xDistanceFromFirstTouchPoint;
- (double)xDistanceFromSecondTouchPoint;

@end
