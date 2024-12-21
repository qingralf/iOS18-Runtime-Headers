/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheetKit.framework/CoverSheetKit
 */

@interface CSProminentDisplayView : UIView {
    bool  _animatingTransientSubtitleTransition;
    bool  _animatingTransientSubtitleTransitionToTransient;
    BSUIOrientationTransformWrapperView * _backgroundTransformView;
    _CSProminentDisplayBackgroundWrapperView * _backgroundWrapperView;
    CSProminentEmptyElementView * _complicationRowView;
    CSProminentEmptyElementView * _complicationSidebarView;
    CSProminentTextElementView * _customSubtitleView;
    NSDate * _displayDate;
    bool  _hasClearedSinceLastAddedTransient;
    CSProminentLayoutController * _layoutController;
    NSDate * _overrideDate;
    NSMutableArray * _pendedTransientSubtitleViews;
    bool  _shouldApplyVibrancyToComplications;
    double  _subtitleAlpha;
    CSProminentEmptyElementView * _subtitleComplicationView;
    CSProminentTextElementView * _subtitleView;
    BSUIVibrancyEffectView * _timeVibrancyEffectView;
    CSProminentTimeView * _timeView;
    CSProminentTextElementView * _transientSubtitleView;
    bool  _usesEditingLayout;
    BSUIVibrancyEffectView * _vibrancyEffectView;
    BSUIVibrancyShadowView * _vibrancyShadowView;
}

@property (nonatomic) bool animatingTransientSubtitleTransition;
@property (nonatomic) bool animatingTransientSubtitleTransitionToTransient;
@property (nonatomic, retain) BSUIOrientationTransformWrapperView *backgroundTransformView;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) _CSProminentDisplayBackgroundWrapperView *backgroundWrapperView;
@property (nonatomic, retain) CSProminentEmptyElementView *complicationRowView;
@property (nonatomic, retain) CSProminentEmptyElementView *complicationSidebarView;
@property (nonatomic, retain) CSProminentTextElementView *customSubtitleView;
@property (nonatomic, copy) NSDate *displayDate;
@property (nonatomic) bool hasClearedSinceLastAddedTransient;
@property (nonatomic, readonly) CSProminentLayoutController *layoutController;
@property (nonatomic, copy) NSDate *overrideDate;
@property (nonatomic, retain) NSMutableArray *pendedTransientSubtitleViews;
@property (nonatomic) bool shouldApplyVibrancyToComplications;
@property (nonatomic) double subtitleAlpha;
@property (nonatomic, retain) CSProminentEmptyElementView *subtitleComplicationView;
@property (nonatomic, retain) CSProminentTextElementView *subtitleView;
@property (nonatomic, readonly) BSUIVibrancyEffectView *timeVibrancyEffectView;
@property (nonatomic, retain) CSProminentTimeView *timeView;
@property (nonatomic, retain) CSProminentTextElementView *transientSubtitleView;
@property (nonatomic) bool usesEditingLayout;
@property (nonatomic, readonly) BSUIVibrancyEffectView *vibrancyEffectView;
@property (nonatomic, retain) BSUIVibrancyShadowView *vibrancyShadowView;

+ (id)_startObservingSystemStatusOverridesIfNeededAndFetchInitialOverride;
+ (id)overrideObservingDisplayViews;

- (void).cxx_destruct;
- (void)_addComplicationSubview:(id)arg1;
- (void)_applyAlphaToNonTransientSubtitleViews:(double)arg1;
- (void)_applyContainerOrientationToVibrancyShadowView:(long long)arg1;
- (id)_complicationsSuperview;
- (id)_contentView;
- (id)_effectiveDisplayDate;
- (void)_setOverrideDate:(id)arg1;
- (void)_setUpTimeStringOverriding;
- (void)_showTransientSubtitleView:(id)arg1;
- (void)_showTransientSubtitleView:(id)arg1 withDelay:(double)arg2;
- (void)_transitionToNextPendedSubtitleIfNecessary;
- (void)_transitionToNextPendedSubtitleIfNecessaryWithDelay:(double)arg1;
- (void)_updateAlphaForNonTransientSubtitleViews;
- (void)_updateEffectiveDisplayDate;
- (void)_updateVisibilityForNonTransientSubtitleViews;
- (bool)animatingTransientSubtitleTransition;
- (bool)animatingTransientSubtitleTransitionToTransient;
- (id)backgroundTransformView;
- (id)backgroundView;
- (id)backgroundWrapperView;
- (id)complicationRowView;
- (id)complicationSidebarView;
- (id)customSubtitleView;
- (id)displayDate;
- (bool)hasClearedSinceLastAddedTransient;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutController;
- (void)layoutSubviews;
- (id)overrideDate;
- (id)pendedTransientSubtitleViews;
- (void)setAnimatingTransientSubtitleTransition:(bool)arg1;
- (void)setAnimatingTransientSubtitleTransitionToTransient:(bool)arg1;
- (void)setBackgroundTransformView:(id)arg1;
- (void)setBackgroundWrapperView:(id)arg1;
- (void)setComplicationRowView:(id)arg1;
- (void)setComplicationSidebarView:(id)arg1;
- (void)setCustomSubtitleView:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setHasClearedSinceLastAddedTransient:(bool)arg1;
- (void)setNumberingSystem:(long long)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setPendedTransientSubtitleViews:(id)arg1;
- (void)setShouldApplyVibrancyToComplications:(bool)arg1;
- (void)setSubtitleAlpha:(double)arg1;
- (void)setSubtitleComplicationView:(id)arg1;
- (void)setSubtitleView:(id)arg1;
- (void)setTimeView:(id)arg1;
- (void)setTransientSubtitleView:(id)arg1;
- (void)setUsesEditingLayout:(bool)arg1;
- (void)setVibrancyShadowView:(id)arg1;
- (bool)shouldApplyVibrancyToComplications;
- (double)subtitleAlpha;
- (id)subtitleComplicationView;
- (id)subtitleView;
- (id)timeVibrancyEffectView;
- (id)timeView;
- (id)transientSubtitleView;
- (void)updateContainerOrientationForBackgroundViews:(long long)arg1;
- (bool)usesEditingLayout;
- (id)vibrancyEffectView;
- (id)vibrancyShadowView;

@end