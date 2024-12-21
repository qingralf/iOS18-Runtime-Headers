/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFHomeGrabberSettings : PTSettings {
    long long  _autoHideOverride;
    double  _autoHideTime;
    double  _autoHideTimeOnAppRequest;
    SBFFluidBehaviorSettings * _bounceAnimationSettings;
    double  _bounceReverseAnimationDelay;
    double  _bounceTranslation;
    bool  _constrainHitTestRectToSafeAreaInset;
    double  _coverSheetHomeAffordanceCursorBottomEdgeInset;
    double  _coverSheetHomeAffordanceCursorLeftEdgeInset;
    double  _coverSheetHomeAffordanceCursorRightEdgeInset;
    double  _coverSheetHomeAffordanceCursorTopEdgeInset;
    double  _coverSheetSuppressAnimationForPointerBottomEdgeInset;
    double  _coverSheetSuppressAnimationForPointerLeftEdgeInset;
    double  _coverSheetSuppressAnimationForPointerRightEdgeInset;
    double  _coverSheetSuppressAnimationForPointerTopEdgeInset;
    double  _delayForUnhideOnAppRequest;
    double  _delayForUnhideOnTouch;
    SBFFluidBehaviorSettings * _edgeProtectAnimationSettings;
    long long  _edgeProtectOverride;
    bool  _enabled;
    SBFAnimationSettings * _forcedProminentToThinAnimationSettings;
    SBFAnimationSettings * _hideAnimationSettings;
    SBFAnimationSettings * _hideForHomeGestureOwnershipAnimationSettings;
    double  _hitTestOutsetDoubleTap;
    double  _hitTestOutsetSides;
    double  _hitTestOutsetTop;
    SBFAnimationSettings * _initialLumaResponseAnimationSettings;
    long long  _initializationStyle;
    SBFAnimationSettings * _lumaResponseAnimationSettings;
    SBFAnimationSettings * _prominentToThinAnimationSettings;
    bool  _removeViewOnHide;
    bool  _resetAutoHideTimeOnRotation;
    SBFAnimationSettings * _rotationFadeInAnimationSettings;
    SBFAnimationSettings * _rotationFadeOutAnimationSettings;
    bool  _singleTapGatingEnabled;
    SBFAnimationSettings * _thinToProminentAnimationSettings;
    SBFAnimationSettings * _unhideAnimationSettings;
    SBFAnimationSettings * _unhideForHomeGestureOwnershipAnimationSettings;
    bool  _visualizeHitTestRect;
}

@property (nonatomic) long long autoHideOverride;
@property (nonatomic) double autoHideTime;
@property (nonatomic) double autoHideTimeOnAppRequest;
@property (nonatomic, retain) SBFFluidBehaviorSettings *bounceAnimationSettings;
@property (nonatomic) double bounceReverseAnimationDelay;
@property (nonatomic) double bounceTranslation;
@property (nonatomic) bool constrainHitTestRectToSafeAreaInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorBottomEdgeInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorLeftEdgeInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorRightEdgeInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorTopEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerBottomEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerLeftEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerRightEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerTopEdgeInset;
@property (nonatomic) double delayForUnhideOnAppRequest;
@property (nonatomic) double delayForUnhideOnTouch;
@property (nonatomic, retain) SBFFluidBehaviorSettings *edgeProtectAnimationSettings;
@property (nonatomic) long long edgeProtectOverride;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) SBFAnimationSettings *forcedProminentToThinAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *hideAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *hideForHomeGestureOwnershipAnimationSettings;
@property (nonatomic) double hitTestOutsetDoubleTap;
@property (nonatomic) double hitTestOutsetSides;
@property (nonatomic) double hitTestOutsetTop;
@property (nonatomic, retain) SBFAnimationSettings *initialLumaResponseAnimationSettings;
@property (nonatomic) long long initializationStyle;
@property (nonatomic, retain) SBFAnimationSettings *lumaResponseAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *prominentToThinAnimationSettings;
@property (nonatomic) bool removeViewOnHide;
@property (nonatomic) bool resetAutoHideTimeOnRotation;
@property (nonatomic, retain) SBFAnimationSettings *rotationFadeInAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *rotationFadeOutAnimationSettings;
@property (getter=isSingleTapGatingEnabled, nonatomic) bool singleTapGatingEnabled;
@property (nonatomic, retain) SBFAnimationSettings *thinToProminentAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *unhideAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *unhideForHomeGestureOwnershipAnimationSettings;
@property (nonatomic) bool visualizeHitTestRect;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (long long)autoHideOverride;
- (double)autoHideTime;
- (double)autoHideTimeOnAppRequest;
- (id)bounceAnimationSettings;
- (double)bounceReverseAnimationDelay;
- (double)bounceTranslation;
- (bool)constrainHitTestRectToSafeAreaInset;
- (double)coverSheetHomeAffordanceCursorBottomEdgeInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverSheetHomeAffordanceCursorEdgeInsets;
- (double)coverSheetHomeAffordanceCursorLeftEdgeInset;
- (double)coverSheetHomeAffordanceCursorRightEdgeInset;
- (double)coverSheetHomeAffordanceCursorTopEdgeInset;
- (double)coverSheetSuppressAnimationForPointerBottomEdgeInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverSheetSuppressAnimationForPointerInsets;
- (double)coverSheetSuppressAnimationForPointerLeftEdgeInset;
- (double)coverSheetSuppressAnimationForPointerRightEdgeInset;
- (double)coverSheetSuppressAnimationForPointerTopEdgeInset;
- (double)delayForUnhideOnAppRequest;
- (double)delayForUnhideOnTouch;
- (id)edgeProtectAnimationSettings;
- (long long)edgeProtectOverride;
- (id)forcedProminentToThinAnimationSettings;
- (id)hideAnimationSettings;
- (id)hideForHomeGestureOwnershipAnimationSettings;
- (double)hitTestOutsetDoubleTap;
- (double)hitTestOutsetSides;
- (double)hitTestOutsetTop;
- (id)initialLumaResponseAnimationSettings;
- (long long)initializationStyle;
- (bool)isEnabled;
- (bool)isSingleTapGatingEnabled;
- (id)lumaResponseAnimationSettings;
- (id)prominentToThinAnimationSettings;
- (bool)removeViewOnHide;
- (bool)resetAutoHideTimeOnRotation;
- (id)rotationFadeInAnimationSettings;
- (id)rotationFadeOutAnimationSettings;
- (void)setAutoHideOverride:(long long)arg1;
- (void)setAutoHideTime:(double)arg1;
- (void)setAutoHideTimeOnAppRequest:(double)arg1;
- (void)setBounceAnimationSettings:(id)arg1;
- (void)setBounceReverseAnimationDelay:(double)arg1;
- (void)setBounceTranslation:(double)arg1;
- (void)setConstrainHitTestRectToSafeAreaInset:(bool)arg1;
- (void)setCoverSheetHomeAffordanceCursorBottomEdgeInset:(double)arg1;
- (void)setCoverSheetHomeAffordanceCursorLeftEdgeInset:(double)arg1;
- (void)setCoverSheetHomeAffordanceCursorRightEdgeInset:(double)arg1;
- (void)setCoverSheetHomeAffordanceCursorTopEdgeInset:(double)arg1;
- (void)setCoverSheetSuppressAnimationForPointerBottomEdgeInset:(double)arg1;
- (void)setCoverSheetSuppressAnimationForPointerLeftEdgeInset:(double)arg1;
- (void)setCoverSheetSuppressAnimationForPointerRightEdgeInset:(double)arg1;
- (void)setCoverSheetSuppressAnimationForPointerTopEdgeInset:(double)arg1;
- (void)setDefaultValues;
- (void)setDelayForUnhideOnAppRequest:(double)arg1;
- (void)setDelayForUnhideOnTouch:(double)arg1;
- (void)setEdgeProtectAnimationSettings:(id)arg1;
- (void)setEdgeProtectOverride:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setForcedProminentToThinAnimationSettings:(id)arg1;
- (void)setHideAnimationSettings:(id)arg1;
- (void)setHideForHomeGestureOwnershipAnimationSettings:(id)arg1;
- (void)setHitTestOutsetDoubleTap:(double)arg1;
- (void)setHitTestOutsetSides:(double)arg1;
- (void)setHitTestOutsetTop:(double)arg1;
- (void)setInitialLumaResponseAnimationSettings:(id)arg1;
- (void)setInitializationStyle:(long long)arg1;
- (void)setLumaResponseAnimationSettings:(id)arg1;
- (void)setProminentToThinAnimationSettings:(id)arg1;
- (void)setRemoveViewOnHide:(bool)arg1;
- (void)setResetAutoHideTimeOnRotation:(bool)arg1;
- (void)setRotationFadeInAnimationSettings:(id)arg1;
- (void)setRotationFadeOutAnimationSettings:(id)arg1;
- (void)setSingleTapGatingEnabled:(bool)arg1;
- (void)setThinToProminentAnimationSettings:(id)arg1;
- (void)setUnhideAnimationSettings:(id)arg1;
- (void)setUnhideForHomeGestureOwnershipAnimationSettings:(id)arg1;
- (void)setVisualizeHitTestRect:(bool)arg1;
- (id)thinToProminentAnimationSettings;
- (id)unhideAnimationSettings;
- (id)unhideForHomeGestureOwnershipAnimationSettings;
- (bool)visualizeHitTestRect;

@end