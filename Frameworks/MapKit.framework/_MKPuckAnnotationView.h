/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPuckAnnotationView : MKAnnotationView <VKPuckAnimatorTarget> {
    CALayer * _accuracyContainerLayer;
    _MKPuckAccuracyLayer * _accuracyLayer;
    double  _accuracyRingAlpha;
    double  _accuracyRingStrokeOpacityThreshold;
    bool  _allowsAccuracyRing;
    bool  _allowsPulse;
    bool  _animatingPresentationAccuracy;
    CALayer * _baseLayer;
    bool  _canShowHeadingIndicator;
    bool  _displaysPuckAsAccuracy;
    bool  _effectsEnabled;
    CAGradientLayer * _faux3DBaseBottomLayer;
    bool  _faux3DEnabled;
    CAGradientLayer * _faux3DFaceLayer;
    CALayer * _faux3DHighlightMask;
    NSArray * _faux3DHighlightMaskRings;
    id  _faux3DPuckConfigListener;
    bool  _forceHeadingUp;
    bool  _forcesConeIndicator;
    UIImage * _glyphImage;
    CALayer * _glyphLayer;
    UIColor * _glyphTintColor;
    bool  _hasExplicitCollisionMode;
    bool  _hasValidHeading;
    double  _heading;
    double  _headingAccuracy;
    CALayer * _headingContainerLayer;
    long long  _headingIndicatorStyle;
    CALayer<MKUserLocationHeadingIndicator> * _headingLayer;
    bool  _headingLayerTracksAccuracy;
    CALayer * _innerCircleLayer;
    UIImage * _innerImageMask;
    bool  _isShowingStaleColor;
    CLLocation * _lastLocation;
    double  _locationAccuracy;
    double  _mapCameraDistance;
    double  _mapRotation;
    double  _maxRadiusToShowAccuracyRing;
    id  _minAccuracyConfigListener;
    id  _minUncertaintyConfigListener;
    double  _minimumAccuracyRadius;
    double  _minimumAccuracyUncertainty;
    VKNavigationPuck * _navigationPuckMarker;
    id  _newPuckConfigListener;
    bool  _overrideIsStale;
    double  _presentationAccuracy;
    double  _presentationCourse;
    CALayer * _puckContainerLayer;
    CALayer * _puckLayer;
    double  _puckScale;
    CALayer * _puckTransitionContainer;
    CALayer * _puckTransitionLayer;
    CALayer * _pulseLayer;
    bool  _rotateInnerImageToMatchCourse;
    CALayer * _shadowLayer;
    id  _shelbyvilleConfigListener;
    bool  _shouldDisplayHeading;
    bool  _shouldDisplayInaccurateHeading;
    bool  _shouldHidePuckWhenAccuracyVisible;
    bool  _shouldInnerPulse;
    bool  _shouldPulse;
    bool  _shouldShowDynamicLocationAnimations;
    bool  _shouldShowOuterRing;
    bool  _stale;
    bool  _useDarkAppearance;
    long long  _zoomDirection;
}

@property (nonatomic) double accuracyRingAlpha;
@property (getter=_accuracyRingStrokeOpacityThreshold, setter=_setAccuracyRingStrokeOpacityThreshold:, nonatomic) double accuracyRingStrokeOpacityThreshold;
@property (nonatomic) bool allowsAccuracyRing;
@property (nonatomic) bool allowsPulse;
@property (getter=isAnimatingPresentationAccuracy, nonatomic) bool animatingPresentationAccuracy;
@property (nonatomic) bool canShowHeadingIndicator;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collisionSize;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=_displaysPuckAsAccuracy, setter=_setDisplaysPuckAsAccuracy:, nonatomic) bool displaysPuckAsAccuracy;
@property (getter=isEffectsEnabled, nonatomic) bool effectsEnabled;
@property (getter=_forceHeadingUp, setter=_setForceHeadingUp:, nonatomic) bool forceHeadingUp;
@property (nonatomic) bool forcesConeIndicator;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, copy) UIColor *glyphTintColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heading;
@property (nonatomic) double headingAccuracy;
@property (nonatomic) long long headingIndicatorStyle;
@property (nonatomic, retain) UIImage *innerImageMask;
@property (nonatomic, readonly) CLLocation *lastLocation;
@property (nonatomic, readonly) double locationAccuracy;
@property (getter=_locationAccuracyInScreenPoints, nonatomic, readonly) double locationAccuracyInScreenPoints;
@property (nonatomic) double maxRadiusToShowAccuracyRing;
@property (getter=_minimumAccuracyRadius, setter=_setMinimumAccuracyRadius:, nonatomic) double minimumAccuracyRadius;
@property (getter=_minimumAccuracyUncertainty, setter=_setMinimumAccuracyUncertainty:, nonatomic) double minimumAccuracyUncertainty;
@property (nonatomic) float opacity;
@property (getter=isOverrideStale, nonatomic) bool overrideIsStale;
@property (nonatomic) double presentationAccuracy;
@property (nonatomic) double presentationCourse;
@property (nonatomic) double puckAlpha;
@property (nonatomic) bool rotateInnerImageToMatchCourse;
@property (nonatomic) bool shouldDisplayHeading;
@property (nonatomic) bool shouldDisplayInaccurateHeading;
@property (getter=_shouldHidePuckWhenAccuracyVisible, setter=_setShouldHidePuckWhenAccuracyVisible:, nonatomic) bool shouldHidePuckWhenAccuracyVisible;
@property (nonatomic) bool shouldInnerPulse;
@property (getter=_shouldShowDynamicLocationAnimations, setter=_setShouldShowDynamicLocationAnimations:, nonatomic) bool shouldShowDynamicLocationAnimations;
@property (nonatomic) bool shouldShowOuterRing;
@property (getter=isStale, setter=setStale:, nonatomic) bool stale;
@property (readonly) Class superclass;
@property (nonatomic) long long zoomDirection;

+ (struct CGPoint { double x1; double x2; })_calloutOffset;
+ (double)baseDiameter;
+ (double)innerDiameter;
+ (double)outerRingWidth;
+ (double)shadowBlur;

- (void).cxx_destruct;
- (double)_accuracyRingStrokeOpacityThreshold;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_annotationTrackingInsets;
- (bool)_balloonCalloutShouldShowArrow;
- (id)_baseLayer;
- (id)_createFakePuckLayer;
- (void)_createOrRemoveFaux3DRingsIfNecessary;
- (id)_currentInnerColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultCollisionAlignmentRectInsets;
- (bool)_displaysPuckAsAccuracy;
- (id)_effectiveTintColor;
- (long long)_enforcedHeadingIndicatorStyle;
- (bool)_forceHeadingUp;
- (bool)_hideLargeAccuracyRing;
- (id)_innerPulseAnimation;
- (unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1;
- (bool)_isLocationStale:(id)arg1;
- (bool)_isSelectable;
- (id)_layerToMatchAccuracyRing;
- (double)_locationAccuracyInScreenPoints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_visibleRect;
- (double)_minimumAccuracyRadius;
- (double)_minimumAccuracyUncertainty;
- (void)_pausePulse;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_removePulse;
- (void)_resetInnerPulseFrame;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_resumePulse;
- (float)_selectionPriority;
- (void)_setAccuracyRingStrokeOpacityThreshold:(double)arg1;
- (void)_setAnimatingToCoordinate:(bool)arg1;
- (void)_setDisplaysPuckAsAccuracy:(bool)arg1;
- (void)_setForceHeadingUp:(bool)arg1;
- (void)_setHeadingLayerHidden:(bool)arg1;
- (void)_setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; bool x6; })arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setMinimumAccuracyRadius:(double)arg1;
- (void)_setMinimumAccuracyUncertainty:(double)arg1;
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setShouldHidePuckWhenAccuracyVisible:(bool)arg1;
- (void)_setShouldShowDynamicLocationAnimations:(bool)arg1;
- (void)_setTracking:(bool)arg1;
- (void)_setVKNavigationPuckMarker:(id)arg1;
- (void)_setupLayers;
- (bool)_shouldHidePuckWhenAccuracyVisible;
- (bool)_shouldPulseForLocation:(id)arg1;
- (bool)_shouldShowAccuracyRing;
- (bool)_shouldShowDynamicLocationAnimations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_significantBounds;
- (bool)_tracking;
- (void)_updateAccuracyAnimation;
- (void)_updateAccuracyColors;
- (void)_updateAccuracyOpacityForRadius:(double)arg1 duration:(double)arg2;
- (void)_updateBaseImage;
- (void)_updateFaux3DColors;
- (void)_updateFaux3DLayers;
- (void)_updateFromMap;
- (void)_updateGlyphImage;
- (void)_updateHeadingIndicators;
- (void)_updateHeadingLayerForStyleChange:(bool)arg1;
- (void)_updateInnerCourseRotation;
- (void)_updateInnerImage;
- (void)_updateInnerMaskLayer;
- (void)_updateLayers;
- (void)_updateLegacyConfiguration;
- (void)_updatePuckVisibilityForRadius:(double)arg1 previousRadius:(double)arg2 duration:(double)arg3;
- (void)_updatePulse;
- (void)_updatePulseAnimation;
- (void)_updatePulseColor;
- (void)_updateShadowImage;
- (void)_updateShowHeadingLayer;
- (void)_updateShowHeadingLayer:(bool)arg1 animatedIfPossible:(bool)arg2;
- (void)_updateShowHeadingLayerAnimatedIfPossible:(bool)arg1;
- (void)_updateToReflectLocationAccuracyWithDuration:(double)arg1 allowShowHideAnimation:(bool)arg2;
- (id)_vkNavigationPuckMarker;
- (double)accuracyRingAlpha;
- (bool)allowsAccuracyRing;
- (bool)allowsPulse;
- (struct CGPoint { double x1; double x2; })calloutOffset;
- (bool)canShowHeadingIndicator;
- (long long)collisionMode;
- (struct CGSize { double x1; double x2; })collisionSize;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)forcesConeIndicator;
- (id)glyphImage;
- (id)glyphTintColor;
- (double)heading;
- (double)headingAccuracy;
- (long long)headingIndicatorStyle;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)innerImageMask;
- (bool)isAnimatingPresentationAccuracy;
- (bool)isEffectsEnabled;
- (bool)isOverrideStale;
- (bool)isStale;
- (id)lastLocation;
- (void)layoutSubviews;
- (double)locationAccuracy;
- (void)locationManagerFailedToUpdateLocation;
- (double)maxRadiusToShowAccuracyRing;
- (float)opacity;
- (double)presentationAccuracy;
- (double)presentationCourse;
- (double)puckAlpha;
- (bool)rotateInnerImageToMatchCourse;
- (void)setAccuracyRingAlpha:(double)arg1;
- (void)setAllowsAccuracyRing:(bool)arg1;
- (void)setAllowsPulse:(bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAnimatingPresentationAccuracy:(bool)arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setCanShowHeadingIndicator:(bool)arg1;
- (void)setCollisionMode:(long long)arg1;
- (void)setDisplayPriority:(float)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setForcesConeIndicator:(bool)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)setHeading:(double)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setHeadingIndicatorStyle:(long long)arg1;
- (void)setInnerImageMask:(id)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)setMaxRadiusToShowAccuracyRing:(double)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOverrideIsStale:(bool)arg1;
- (void)setPresentationAccuracy:(double)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setPuckAlpha:(double)arg1;
- (void)setPuckScale:(double)arg1;
- (void)setRotateInnerImageToMatchCourse:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShouldDisplayHeading:(bool)arg1;
- (void)setShouldDisplayInaccurateHeading:(bool)arg1;
- (void)setShouldInnerPulse:(bool)arg1;
- (void)setShouldShowOuterRing:(bool)arg1;
- (void)setStale:(bool)arg1;
- (void)setZoomDirection:(long long)arg1;
- (void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2;
- (bool)shouldDisplayHeading;
- (bool)shouldDisplayInaccurateHeading;
- (bool)shouldInnerPulse;
- (bool)shouldShowOuterRing;
- (void)tintColorDidChange;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (long long)zoomDirection;

@end
