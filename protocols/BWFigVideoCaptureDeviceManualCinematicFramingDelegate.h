/* Generated by RuntimeBrowser.
 */

@protocol BWFigVideoCaptureDeviceManualCinematicFramingDelegate <NSObject>

@required

- (struct { bool x1; bool x2; bool x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; int x5; float x6; float x7; float x8; double x9; float x10; float x11; float x12; })cinematicFramingControls;
- (bool)cinematicFramingControlsSuspended;
- (bool)isRegionOfInterestForCameraControlsFeedbackEnabled;
- (double)manualFramingVideoZoomFactor;
- (void)panWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)performOneShotFraming;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestForCameraControls;
- (id /* block */)regionOfInterestForCameraControlsChangedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)resetFraming;
- (void)setCinematicFramingControls:(struct { bool x1; bool x2; bool x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; int x5; float x6; float x7; float x8; double x9; float x10; float x11; float x12; })arg1;
- (void)setCinematicFramingControlsSuspended:(bool)arg1;
- (void)setManualFramingVideoZoomFactor:(double)arg1;
- (void)setRegionOfInterestForCameraControlsChangedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setRegionOfInterestForCameraControlsFeedbackEnabled:(bool)arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end