/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKLineSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _coordinate;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })coordinate;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (double)endXValue;
- (id)initWithCoordinate:(struct CGPoint { double x1; double x2; })arg1 userInfo:(id)arg2;
- (double)maxYValue;
- (double)minYValue;
- (double)startXValue;
- (id)userInfo;

@end
