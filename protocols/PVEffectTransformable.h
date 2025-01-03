/* Generated by RuntimeBrowser.
 */

@protocol PVEffectTransformable

@required

- (PVMatrix44Double *)addToTopLevelTransform:(void *)arg1 atTime:(void *)arg2 forcePosterFrame:(void *)arg3 restrictToBounds:(void *)arg4 viewSize:(void *)arg5 viewOrigin:(void *)arg6; // needs 6 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (bool)bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (PVMatrix44Double *)cameraProjection;
- (PVMatrix44Double *)cameraTransform;
- (id)convertPointFromView:(void *)arg1 atTime:(void *)arg2 viewSize:(void *)arg3 viewOrigin:(void *)arg4; // needs 4 arg types, found 3: struct { long long x1; int x2; unsigned int x3; long long x4; }, struct CGSize { double x1; double x2; }, int
- (struct CGPoint { double x1; double x2; })convertPointToView:(void *)arg1 atTime:(void *)arg2 forcePosterFrame:(void *)arg3 includeTransformAnimation:(void *)arg4 includePlayableAspectScale:(void *)arg5 viewSize:(void *)arg6 viewOrigin:(void *)arg7; // needs 7 arg types, found 6: struct { long long x1; int x2; unsigned int x3; long long x4; }, bool, bool, bool, struct CGSize { double x1; double x2; }, int
- (struct CGPoint { double x1; double x2; })convertPointToView:(void *)arg1 withEffectToViewTransform:(void *)arg2 viewSize:(void *)arg3; // needs 3 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })cornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;
- (void)disableCameraOverride;
- (void)enableCameraOverride:(PVMatrix44Double *)arg1 projection:(PVMatrix44Double *)arg2;
- (id)getScale;
- (bool)isCameraOverrideEnabled;
- (PVMatrix44Double *)scaleToFit:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5 restrictToBounds:(bool)arg6;
- (PVMatrix44Double *)setPositionInView:(struct CGPoint { double x1; double x2; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4 restrictToBounds:(bool)arg5;
- (void)setScale;
- (void)setTopLevelGroupTransform:(PVMatrix44Double *)arg1;
- (void)setTransform:(PVMatrix44Double *)arg1;
- (void)setTransformUnitsAreInMeters:(bool)arg1;
- (PVMatrix44Double *)topLevelGroupTransform;
- (PVMatrix44Double *)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 includePlayableAspectScale:(bool)arg4 viewSize:(struct CGSize { double x1; double x2; })arg5 viewOrigin:(int)arg6;
- (PVMatrix44Double *)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (PVMatrix44Double *)transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;
- (bool)transformUnitsAreInMeters;

@end
