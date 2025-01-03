/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs
 */

@interface HPSSpatialProfileSingleStepPearlEnrollView : BKUIPearlEnrollView {
    HPSSpatialProfileSingleStepCrossHairs * _enrollmentCustomCrossHairs;
    bool  _faceCaptured;
    bool  _forceBlur;
    bool  _pauseBlur;
}

@property (nonatomic) bool faceCaptured;
@property (nonatomic) bool forceBlur;
@property (nonatomic) bool pauseBlur;
@property (nonatomic, retain) HPSSpatialProfileSingleStepPearlMovieLoopView *tutorialMovieView;

- (void).cxx_destruct;
- (void)_nudgeIfNecessary;
- (id)crossHairs;
- (bool)faceCaptured;
- (bool)forceBlur;
- (id)initWithVideoCaptureSession:(id)arg1 inSheet:(bool)arg2 squareNeedsPositionLayout:(bool)arg3;
- (void)layoutSubviews;
- (void)nudgeLeft:(id /* block */)arg1;
- (void)nudgeRight:(id /* block */)arg1;
- (bool)pauseBlur;
- (void)setAlpha:(double)arg1;
- (void)setCameraBlurAmount:(double)arg1 useShade:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setFaceCaptured:(bool)arg1;
- (void)setForceBlur:(bool)arg1;
- (void)setPauseBlur:(bool)arg1;

@end
