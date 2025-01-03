/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    HKValueRange * _chartableValueRange;
    NSArray * _subCoordinates;
}

- (void).cxx_destruct;
- (id)_coordinatesInChartableRange:(id)arg1;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 chartableValueRange:(id)arg2 roundToViewScale:(bool)arg3 block:(id /* block */)arg4;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })blockPathEnd;
- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })blockPathStart;
- (id)coordinates;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2 block:(id /* block */)arg3;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)initWithSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (long long)numCoordinates;

@end
