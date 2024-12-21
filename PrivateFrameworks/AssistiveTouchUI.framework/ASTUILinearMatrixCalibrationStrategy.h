/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistiveTouchUI.framework/AssistiveTouchUI
 */

@interface ASTUILinearMatrixCalibrationStrategy : NSObject <ASTUICalibrationStrategy>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)calibratedArrayForGazePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })calibratedGazePointForGazePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)captureGazeEnrollmentPoint:(id)arg1;
- (void)learnCalibration;
- (id)learnCalibrationForPoints:(id)arg1;
- (void)reset;

@end