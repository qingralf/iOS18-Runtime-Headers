/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _max;
    struct CGPoint { 
        double x; 
        double y; 
    }  _min;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } max;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } min;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (double)distanceToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)endXValue;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)initWithMin:(struct CGPoint { double x1; double x2; })arg1 max:(struct CGPoint { double x1; double x2; })arg2 userInfo:(id)arg3;
- (bool)isVisibleInChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })max;
- (struct CGPoint { double x1; double x2; })min;
- (double)startXValue;
- (id)userInfo;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1;

@end