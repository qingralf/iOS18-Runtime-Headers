/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXAuthoringEnvironment2 : NSObject {
    UIColor * _blue;
    VFXModel * _cameraFocusPlaneGeometry;
    VFXModel * _cameraFrustumGeometry;
    VFXModel * _cameraGeometry;
    VFXModel * _cameraNearPlaneGeometry;
    VFXModel * _cameraOrthographicFrustumGeometry;
    VFXNode * _cameraRoot;
    VFXNode * _cameraTarget;
    struct __CFDictionary { } * _camerasDictionary;
    UIColor * _cyan;
    VFXModel * _effectGeometry;
    VFXNode * _effectRoot;
    struct __CFDictionary { } * _effectsDictionary;
    VFXModel * _fieldGeometry;
    struct __CFDictionary { } * _forceFieldsDictionary;
    VFXNode * _forceFieldsRoot;
    UIColor * _grayDark;
    UIColor * _grayLight;
    UIColor * _grayMedium;
    UIColor * _green;
    VFXNode * _grid;
    VFXNode * _layerRoot;
    VFXModel * _lightGeometry;
    VFXNode * _lightRoot;
    struct __CFDictionary { } * _lightsDictionary;
    VFXManipulator * _manipulator;
    UIColor * _orange;
    VFXNode * _overlayLayerRoot;
    UIColor * _paleBlue;
    UIColor * _paleGreen;
    UIColor * _pink;
    VFXNode * _pointsOfViewRoot;
    UIColor * _red;
    VFXRenderer * _renderer;
    NSMutableSet * _selection;
    UIColor * _white;
    struct __CFXWorld { } * _world;
    UIColor * _yellow;
}

@property (nonatomic, readonly) VFXNode *authoringLayer;
@property (nonatomic, readonly) VFXNode *authoringOverlayLayer;
@property (nonatomic, readonly) VFXManipulator *manipulator;

+ (id)authoringEnvironmentForWorld:(id)arg1;
+ (id)authoringEnvironmentForWorld:(id)arg1 createIfNeeded:(bool)arg2;

- (bool)_isPartOfSelection:(struct __CFXNode { }*)arg1;
- (bool)_proximityHidden:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)_resetLightAuthoringWithContainerNode:(id)arg1 source:(struct __CFXNode { }*)arg2 light:(struct __CFXLight { }*)arg3;
- (void)addCameraNode:(struct __CFXNode { }*)arg1;
- (void)addEffectNode:(struct __CFXNode { }*)arg1;
- (void)addForceFieldNode:(struct __CFXNode { }*)arg1;
- (void)addLightNode:(struct __CFXNode { }*)arg1;
- (void)addedNode:(struct __CFXNode { }*)arg1;
- (id)authoringCamera:(long long)arg1;
- (id)authoringCameraNodes;
- (id)authoringLayer;
- (id)authoringOverlayLayer;
- (id)cameraFocusPlaneGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (id)cameraNearPlaneGeometry;
- (id)cameraOrthographicFrustumGeometry;
- (void)cancelSelection;
- (void)dealloc;
- (unsigned int)debugOptions;
- (void)debugOptionsDidChange:(unsigned long long)arg1;
- (bool)didTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)effectGeometry;
- (id)fieldGeometry;
- (id)geometryForLightType:(int)arg1;
- (bool)hasDebugOption:(unsigned int)arg1;
- (id)initWithWorld:(id)arg1;
- (id)manipulator;
- (void)prepareWorld:(id)arg1;
- (void)removeCameraNode:(struct __CFXNode { }*)arg1;
- (void)removeEffectNode:(struct __CFXNode { }*)arg1;
- (void)removeForceFieldNode:(struct __CFXNode { }*)arg1;
- (void)removeLightNode:(struct __CFXNode { }*)arg1;
- (void)removedNode:(struct __CFXNode { }*)arg1;
- (void)selectNodes:(id)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (void)updateCameraNode:(id)arg1 withSourceNode:(struct __CFXNode { }*)arg2;
- (void)updateEffectNode:(id)arg1 withSourceNode:(struct __CFXNode { }*)arg2;
- (void)updateFieldNode:(id)arg1 withSourceNode:(struct __CFXNode { }*)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(struct __CFXNode { }*)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(struct __CFXNode { }*)arg2 light:(struct __CFXLight { }*)arg3 screenspaceScalingFactor:(float)arg4;
- (void)updateWithRenderer:(id)arg1;

@end