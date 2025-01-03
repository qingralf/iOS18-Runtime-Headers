/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JFXOverlayEffect : JFXTextEffect <JFXTrackedEffectPropertiesDelegate> {
    NSString * _accessibilityOverlayEffectLabel;
    JFXFaceTrackedEffectTransform * _internalFaceTrackingTransform;
    _Atomic int  _isEditingFaceTrackingTransformsCount;
    _Atomic int  _isInteractiveEditingCount;
    bool  _prefersTrackingNotActivateAutomatically;
    JFXTrackedEffectProperties * _trackingProps;
}

@property (nonatomic, copy) NSString *accessibilityOverlayEffectLabel;
@property (nonatomic, copy) NSString *dynamicTextString;
@property (nonatomic, readonly) unsigned long long dynamicTextType;
@property (nonatomic, retain) JFXFaceTrackedEffectTransform *faceTrackingTransform;
@property (getter=isTailFlipped, nonatomic) bool flipTail;
@property (getter=isTextFlipped, nonatomic) bool flipText;
@property (nonatomic, readonly) bool hasBackground;
@property (getter=isHidden, nonatomic) bool hidden;
@property (retain) JFXFaceTrackedEffectTransform *internalFaceTrackingTransform;
@property (nonatomic, readonly) bool isCurrentlyTracking;
@property (nonatomic, readonly) bool isEditingFaceTrackingTransforms;
@property (nonatomic, readonly) bool isEmoji;
@property (nonatomic, readonly) bool isInteractiveEditing;
@property (nonatomic, readonly) bool isTracked;
@property (nonatomic) bool prefersTrackingNotActivateAutomatically;
@property (nonatomic, retain) JFXTrackedEffectProperties *trackingProps;

+ (id)dynamicTextPlaceholderMap;
+ (id)effectIDToImageSequenceIDMap;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)JFX_adjustedMinimumSizeFromNormalizedMinimumSize:(struct { double x1; double x2; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 basisOrigin:(int)arg5;
- (void)JFX_applyEffectParametersForFaceTrackingTransform:(id)arg1;
- (id)JFX_dynamicTextPlaceHolderText;
- (bool)JFX_hasPosterFrame;
- (bool)JFX_posterFrameIsCachable;
- (void)JFX_setupTrackingProps;
- (bool)JFX_shouldEnableDynamicLineSpacingForDiacritics;
- (id)JFX_stringAtIndex:(unsigned long long)arg1;
- (void)JFX_updateInteractiveMode;
- (id)accessibilityName;
- (id)accessibilityOverlayEffectLabel;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })addTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })addTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4 restrictToBounds:(bool)arg5;
- (void)applyScaleToFitFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)applyScaleToFitFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 restrictToBounds:(bool)arg4;
- (void)beginEditingFaceTrackingTransforms;
- (void)beginInteractiveEditing;
- (struct CGPoint { double x1; double x2; })closeButtonInset;
- (id)contentProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })cornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 scale:(struct CGPoint { double x1; double x2; })arg4 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 basisOrigin:(int)arg6;
- (double)customPickerRotation;
- (id)customPrimaryFillColor;
- (id)dynamicTextString;
- (unsigned long long)dynamicTextType;
- (struct CGPoint { double x1; double x2; })effectCenterAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 includePlayableAspectScale:(bool)arg4 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 basisOrigin:(int)arg6;
- (struct CGPoint { double x1; double x2; })effectPointToScreenPoint:(struct CGPoint { double x1; double x2; })arg1 effectToScreenTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)enablePresentationState:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditingFaceTrackingTransforms;
- (void)endInteractiveEditing;
- (id)faceTrackingTransform;
- (bool)hasBackground;
- (bool)hasDynamicText;
- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitAreaBoundingFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 adjustForMinimumSize:(bool)arg4 normalizedMinimumSize:(struct { double x1; double x2; })arg5 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 basisOrigin:(int)arg7;
- (struct CGPoint { double x1; double x2; })hitAreaScale;
- (bool)hitTestPoint:(struct CGPoint { double x1; double x2; })arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 basisOrigin:(int)arg5 adjustForMinimumSize:(bool)arg6 normalizedMinimumSize:(struct { double x1; double x2; })arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeDropShadow:(bool)arg3 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 basisOrigin:(int)arg5;
- (bool)includeDropShadowWhenPositioningCloseButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (id)internalFaceTrackingTransform;
- (bool)isAppearanceEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (bool)isCurrentlyTracking;
- (bool)isEditingFaceTrackingTransforms;
- (bool)isEmoji;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isInteractiveEditing;
- (bool)isTailFlipped;
- (bool)isTextFlipped;
- (bool)isTracked;
- (bool)loopedRangeRenderIsCacheable;
- (unsigned long long)maxCharacters;
- (struct CGPath { }*)newPathsForHitTestingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4 adjustForMinimumSize:(bool)arg5 normalizedMinimumSize:(struct { double x1; double x2; })arg6 outExpandedPath:(out const struct CGPath {}**)arg7;
- (bool)objectBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (id)osfaToneMappingOption;
- (id)overlayContentDataSource;
- (double)pickerScale;
- (bool)prefersTrackingNotActivateAutomatically;
- (void)renderEffectWillLoad;
- (void)resetDynamicTextString;
- (void)resumeTracking;
- (void)rotate:(double)arg1 aroundPoint:(struct CGPoint { double x1; double x2; })arg2 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 basisOrigin:(int)arg5;
- (long long)rotatedAspectRatio;
- (struct CGPoint { double x1; double x2; })screenPointToEffectPoint:(struct CGPoint { double x1; double x2; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4;
- (id)serializableEffectParameters;
- (void)setAccessibilityOverlayEffectLabel:(id)arg1;
- (void)setDynamicTextString:(id)arg1;
- (void)setFaceTrackingTransform:(id)arg1;
- (void)setFlipTail:(bool)arg1;
- (void)setFlipText:(bool)arg1;
- (void)setForceRenderAtPosterFrame:(bool)arg1;
- (void)setImageSequencePath:(id)arg1;
- (void)setImageSequencePathToBundledAssets;
- (void)setInternalFaceTrackingTransform:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4 restrictToBounds:(bool)arg5;
- (void)setPrefersTrackingNotActivateAutomatically:(bool)arg1;
- (void)setSingleLineScaleThreshold:(double)arg1;
- (void)setTrackingProps:(id)arg1;
- (bool)supportsFlippingTail;
- (bool)supportsFlippingText;
- (void)suspendTracking;
- (void)trackedEffectProperties:(id)arg1 didChangeTrackingType:(bool)arg2 didChangeEnabled:(bool)arg3;
- (id)trackingProps;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 includePlayableAspectScale:(bool)arg4 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 basisOrigin:(int)arg6;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 basisOrigin:(int)arg4;
- (int)type;
- (void)updateDynamicTextWithCompletionBlock:(id /* block */)arg1;
- (void)updateRenderSizeMaintainingAppearance:(struct CGSize { double x1; double x2; })arg1 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)updateRenderSizeMaintainingRelativeSizeAndPosition:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)updateRenderSizeMaintainingSizeAndPositionRelativeToMedia:(struct CGSize { double x1; double x2; })arg1 mediaSize:(struct CGSize { double x1; double x2; })arg2 mediaContentMode:(int)arg3;
- (bool)wasDynamicTextSet;

@end
