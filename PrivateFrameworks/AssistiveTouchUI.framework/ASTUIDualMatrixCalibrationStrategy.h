/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistiveTouchUI.framework/AssistiveTouchUI
 */

@interface ASTUIDualMatrixCalibrationStrategy : ASTUILinearMatrixCalibrationStrategy {
    NSArray * _bottomCalibrationMatrix;
    NSMutableDictionary * _storedEnrollments;
    NSArray * _topCalibrationMatrix;
    double  _uncalibratedMiddleLineOfTheScreen;
}

@property (nonatomic, retain) NSArray *bottomCalibrationMatrix;
@property (nonatomic, retain) NSMutableDictionary *storedEnrollments;
@property (nonatomic, retain) NSArray *topCalibrationMatrix;
@property (nonatomic) double uncalibratedMiddleLineOfTheScreen;

- (void).cxx_destruct;
- (id)bottomCalibrationMatrix;
- (id)calibratedArrayForGazePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })calibratedGazePointForGazePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)captureGazeEnrollmentPoint:(id)arg1;
- (id)init;
- (void)learnCalibration;
- (id)learnCalibrationForPoints:(id)arg1;
- (void)reset;
- (void)setBottomCalibrationMatrix:(id)arg1;
- (void)setStoredEnrollments:(id)arg1;
- (void)setTopCalibrationMatrix:(id)arg1;
- (void)setUncalibratedMiddleLineOfTheScreen:(double)arg1;
- (id)storedEnrollments;
- (id)topCalibrationMatrix;
- (double)uncalibratedMiddleLineOfTheScreen;

@end
