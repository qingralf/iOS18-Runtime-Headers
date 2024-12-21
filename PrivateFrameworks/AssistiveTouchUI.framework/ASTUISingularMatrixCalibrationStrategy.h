/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistiveTouchUI.framework/AssistiveTouchUI
 */

@interface ASTUISingularMatrixCalibrationStrategy : ASTUILinearMatrixCalibrationStrategy {
    ASTUIGazeEnrollmentStore * _store;
}

- (void).cxx_destruct;
- (id)calibratedArrayForGazePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })calibratedGazePointForGazePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)captureGazeEnrollmentPoint:(id)arg1;
- (id)init;
- (void)learnCalibration;
- (id)learnCalibrationForPoints:(id)arg1;
- (void)reset;

@end