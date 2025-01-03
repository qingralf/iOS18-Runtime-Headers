/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneSettings : FBSSceneSettings <BLSBacklightSceneSettings, FBSMutableSettings, PBMutablePosterSceneSettings, PREditingSceneSettings, PRMutableRenderingSceneSettings, PRMutableSceneSettings, PUIMutableSceneSettings>

@property (getter=isBackgrounded, nonatomic) bool backgrounded;
@property (getter=bls_isAlwaysOnEnabledForEnvironment, setter=bls_setAlwaysOnEnabledForEnvironment:, nonatomic) bool bls_alwaysOnEnabledForEnvironment;
@property (getter=bls_isBlanked, setter=bls_setBlanked:, nonatomic) bool bls_blanked;
@property (getter=bls_isDelegateActive, setter=bls_setDelegateActive:, nonatomic) bool bls_delegateActive;
@property (getter=bls_isLiveUpdating, setter=bls_setLiveUpdating:, nonatomic) bool bls_liveUpdating;
@property (setter=bls_setPresentationDate:, nonatomic, retain) NSDate *bls_presentationDate;
@property (setter=bls_setRenderSeed:, nonatomic) unsigned long long bls_renderSeed;
@property (getter=bls_hasUnrestrictedFramerateUpdates, setter=bls_setUnrestrictedFramerateUpdates:, nonatomic) bool bls_unrestrictedFramerateUpdates;
@property (setter=bls_setVisualState:, nonatomic, retain) BLSBacklightSceneVisualState *bls_visualState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long interruptionPolicy;
@property (nonatomic) double level;
@property (setter=pb_setActiveVariant:, nonatomic) long long pb_activeVariant;
@property (setter=pb_setAnimationSuspended:, nonatomic) bool pb_animationSuspended;
@property (setter=pb_setSignificantEventsCounter:, nonatomic) unsigned long long pb_significantEventsCounter;
@property (setter=pr_setAdjustedLuminance:, nonatomic) long long pr_adjustedLuminance;
@property (getter=pr_isAlternateDateEnabled, nonatomic, readonly) bool pr_alternateDateEnabled;
@property (getter=pr_isAlternateDateEnabled, setter=pr_setAlternateDateEnabled:, nonatomic) bool pr_alternateDateEnabled;
@property (nonatomic, readonly) BSColor *pr_caseColor;
@property (setter=pr_setCaseColor:, nonatomic, retain) BSColor *pr_caseColor;
@property (getter=pr_areComplicationsDisallowed, setter=pr_setComplicationsDisallowed:, nonatomic) bool pr_complicationsDisallowed;
@property (getter=pr_areControlsHidden, setter=pr_setControlsHidden:, nonatomic) bool pr_controlsHidden;
@property (getter=pr_isCoveredByModalPresentation, setter=pr_setCoveredByModalPresentation:, nonatomic) bool pr_coveredByModalPresentation;
@property (getter=pr_isDepthEffectDisallowed, nonatomic, readonly) bool pr_depthEffectDisallowed;
@property (getter=pr_isDepthEffectDisallowed, setter=pr_setDepthEffectDisallowed:, nonatomic) bool pr_depthEffectDisallowed;
@property (setter=pr_setEditingAcceptButtonType:, nonatomic) long long pr_editingAcceptButtonType;
@property (setter=pr_setEditingContext:, nonatomic) long long pr_editingContext;
@property (setter=pr_setEditingVariant:, nonatomic) long long pr_editingVariant;
@property (setter=pr_setFocusedComplicationElement:, nonatomic) long long pr_focusedComplicationElement;
@property (setter=pr_setFocusedQuickActionElementPosition:, nonatomic) long long pr_focusedQuickActionElementPosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_horizontalTitleBoundingRect;
@property (setter=pr_setHorizontalTitleBoundingRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_horizontalTitleBoundingRect;
@property (setter=pr_setLeadingTopButtonFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_leadingTopButtonFrame;
@property (setter=pr_setOverrideDate:, nonatomic, retain) NSDate *pr_overrideDate;
@property (getter=pr_isParallaxDisallowed, nonatomic, readonly) bool pr_parallaxDisallowed;
@property (getter=pr_isParallaxDisallowed, setter=pr_setParallaxDisallowed:, nonatomic) bool pr_parallaxDisallowed;
@property (getter=pr_isParallaxEffectivelyEnabled, nonatomic, readonly) bool pr_parallaxEffectivelyEnabled;
@property (getter=pr_isParallaxEnabled, nonatomic, readonly) bool pr_parallaxEnabled;
@property (getter=pr_isParallaxEnabled, setter=pr_setParallaxEnabled:, nonatomic) bool pr_parallaxEnabled;
@property (nonatomic, readonly) PRPosterAmbientConfiguration *pr_posterAmbientConfiguration;
@property (setter=pr_setPosterAmbientConfiguration:, nonatomic, retain) PRPosterAmbientConfiguration *pr_posterAmbientConfiguration;
@property (nonatomic, readonly) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property (setter=pr_setPosterConfigurableOptions:, nonatomic, retain) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property (nonatomic, readonly) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property (setter=pr_setPosterConfiguredProperties:, nonatomic, retain) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property (nonatomic, readonly) PRPosterTitleStyleConfiguration *pr_posterTitleStyleConfiguration;
@property (setter=pr_setPosterTitleStyleConfiguration:, nonatomic, retain) PRPosterTitleStyleConfiguration *pr_posterTitleStyleConfiguration;
@property (setter=pr_setTitleAlignment:, nonatomic) unsigned long long pr_titleAlignment;
@property (setter=pr_setTitleString:, nonatomic, copy) NSString *pr_titleString;
@property (setter=pr_setTrailingTopButtonFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_trailingTopButtonFrame;
@property (setter=pr_setUnlockProgress:, nonatomic) double pr_unlockProgress;
@property (setter=pr_setUsesEditingLayout:, nonatomic) bool pr_usesEditingLayout;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_verticalTitleBoundingRect;
@property (setter=pr_setVerticalTitleBoundingRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_verticalTitleBoundingRect;
@property (setter=pr_setWakeSourceIsSwipeToUnlock:, nonatomic) bool pr_wakeSourceIsSwipeToUnlock;
@property (getter=pui_isComplicationRowConfigured, nonatomic, readonly) bool pui_complicationRowConfigured;
@property (getter=pui_isComplicationRowConfigured, setter=pui_setComplicationRowConfigured:, nonatomic) bool pui_complicationRowConfigured;
@property (getter=pui_isComplicationSidebarConfigured, nonatomic, readonly) bool pui_complicationSidebarConfigured;
@property (getter=pui_isComplicationSidebarConfigured, setter=pui_setComplicationSidebarConfigured:, nonatomic) bool pui_complicationSidebarConfigured;
@property (nonatomic, readonly) long long pui_content;
@property (setter=pui_setContent:, nonatomic) long long pui_content;
@property (nonatomic, readonly) long long pui_deviceOrientation;
@property (setter=pui_setDeviceOrientation:, nonatomic) long long pui_deviceOrientation;
@property (getter=pui_isExtensionUserInteractionEnabled, nonatomic, readonly) bool pui_extensionUserInteractionEnabled;
@property (getter=pui_isExtensionUserInteractionEnabled, setter=pui_setExtensionUserInteractionEnabled:, nonatomic) bool pui_extensionUserInteractionEnabled;
@property (getter=pui_isFloatingLayerSnapshot, nonatomic, readonly) bool pui_floatingLayerSnapshot;
@property (getter=pui_isFloatingLayerSnapshot, setter=pui_setFloatingLayerSnapshot:, nonatomic) bool pui_floatingLayerSnapshot;
@property (getter=pui_isInlineComplicationConfigured, nonatomic, readonly) bool pui_inlineComplicationConfigured;
@property (getter=pui_isInlineComplicationConfigured, setter=pui_setInlineComplicationConfigured:, nonatomic) bool pui_inlineComplicationConfigured;
@property (nonatomic, readonly) bool pui_isInvalidated;
@property (nonatomic, readonly) long long pui_mode;
@property (setter=pui_setMode:, nonatomic) long long pui_mode;
@property (nonatomic, readonly) long long pui_posterBoundingShape;
@property (setter=pui_setPosterBoundingShape:, nonatomic) long long pui_posterBoundingShape;
@property (nonatomic, readonly) PFServerPosterPath *pui_posterContents;
@property (setter=pui_setPosterContents:, nonatomic, retain) PFServerPosterPath *pui_posterContents;
@property (nonatomic, readonly) unsigned long long pui_previewContent;
@property (setter=pui_setPreviewContent:, nonatomic) unsigned long long pui_previewContent;
@property (nonatomic, readonly, copy) NSString *pui_previewIdentifier;
@property (setter=pui_setPreviewIdentifier:, nonatomic, copy) NSString *pui_previewIdentifier;
@property (nonatomic, readonly, copy) NSString *pui_provider;
@property (setter=pui_setProvider:, nonatomic, copy) NSString *pui_provider;
@property (nonatomic, readonly, copy) NSString *pui_role;
@property (setter=pui_setRole:, nonatomic, copy) NSString *pui_role;
@property (nonatomic, readonly) NSArray *pui_sceneAttachments;
@property (setter=pui_setSceneAttachments:, nonatomic, retain) NSArray *pui_sceneAttachments;
@property (nonatomic, readonly) bool pui_showsComplications;
@property (setter=pui_setShowsComplications:, nonatomic) bool pui_showsComplications;
@property (nonatomic, readonly) bool pui_showsHeaderElements;
@property (setter=pui_setShowsHeaderElements:, nonatomic) bool pui_showsHeaderElements;
@property (nonatomic, readonly) unsigned long long pui_significantEventsCounter;
@property (setter=pui_setSignificantEventsCounter:, nonatomic) unsigned long long pui_significantEventsCounter;
@property (getter=pui_isSnapshot, nonatomic, readonly) bool pui_snapshot;
@property (getter=pui_isSnapshot, setter=pui_setSnapshot:, nonatomic) bool pui_snapshot;
@property (nonatomic, readonly) long long pui_userInterfaceStyle;
@property (setter=pui_setUserInterfaceStyle:, nonatomic) long long pui_userInterfaceStyle;
@property (nonatomic, readonly) unsigned long long pui_userTapEventsCounter;
@property (setter=pui_setUserTapEventsCounter:, nonatomic) unsigned long long pui_userTapEventsCounter;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pui_userTapLocation;
@property (setter=pui_setUserTapEventWithLocation:, nonatomic) struct CGPoint { double x1; double x2; } pui_userTapLocation;
@property (getter=pui_isWallpaperObscured, nonatomic, readonly) bool pui_wallpaperObscured;
@property (getter=pui_isWallpaperObscured, setter=pui_setWallpaperObscured:, nonatomic) bool pui_wallpaperObscured;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void)addPropagatedProperty:(SEL)arg1;
- (void)addPropagatedSetting:(id)arg1;
- (void)addPropagatedSettings:(id)arg1;
- (id)ignoreOcclusionReasons;
- (void)removePropagatedProperty:(SEL)arg1;
- (void)removePropagatedSetting:(id)arg1;
- (void)removePropagatedSettings:(id)arg1;
- (id)transientLocalSettings;

// Image: /System/Library/Frameworks/ExtensionKit.framework/ExtensionKit

- (void)ex_setRole:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (void)bls_setAlwaysOnEnabledForEnvironment:(bool)arg1;
- (void)bls_setBlanked:(bool)arg1;
- (void)bls_setDelegateActive:(bool)arg1;
- (void)bls_setLiveUpdating:(bool)arg1;
- (void)bls_setPresentationDate:(id)arg1;
- (void)bls_setRenderSeed:(unsigned long long)arg1;
- (void)bls_setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)bls_setVisualState:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (void)pb_applyLegacySettings;
- (void)pb_setActiveVariant:(long long)arg1;
- (void)pb_setAnimationSuspended:(bool)arg1;
- (void)pb_setSignificantEventsCounter:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoardUI.framework/PosterBoardUI

- (void)prui_setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prui_setLockPosterComplicationRowHidden:(bool)arg1;
- (void)prui_setLockPosterFloatingLayerInlined:(bool)arg1;
- (void)prui_setLockPosterLiveContentLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterLiveContentLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockPosterLiveFloatingLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterLiveFloatingLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockPosterOverlayLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterOverlayLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockVibrancyConfiguration:(id)arg1;
- (void)prui_setPreferredSwitcherLayoutMode:(unsigned long long)arg1;
- (void)prui_setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices

- (void)pruis_setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pruis_setLockPosterComplicationRowHidden:(bool)arg1;
- (void)pruis_setLockPosterFloatingLayerInlined:(bool)arg1;
- (void)pruis_setLockPosterLiveContentLayerContextID:(unsigned int)arg1;
- (void)pruis_setLockPosterLiveContentLayerRenderID:(unsigned long long)arg1;
- (void)pruis_setLockPosterLiveFloatingLayerContextID:(unsigned int)arg1;
- (void)pruis_setLockPosterLiveFloatingLayerRenderID:(unsigned long long)arg1;
- (void)pruis_setLockPosterOverlayLayerContextID:(unsigned int)arg1;
- (void)pruis_setLockPosterOverlayLayerRenderID:(unsigned long long)arg1;
- (void)pruis_setLockVibrancyConfiguration:(id)arg1;
- (void)pruis_setPreferredSwitcherLayoutMode:(unsigned long long)arg1;
- (void)pruis_setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (bool)pr_areComplicationsDisallowed;
- (bool)pr_areControlsHidden;
- (long long)pr_editingAcceptButtonType;
- (long long)pr_editingContext;
- (long long)pr_editingVariant;
- (long long)pr_focusedComplicationElement;
- (long long)pr_focusedQuickActionElementPosition;
- (bool)pr_isCoveredByModalPresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_leadingTopButtonFrame;
- (id)pr_overrideDate;
- (void)pr_setAdjustedLuminance:(long long)arg1;
- (void)pr_setAlternateDateEnabled:(bool)arg1;
- (void)pr_setCaseColor:(id)arg1;
- (void)pr_setComplicationsDisallowed:(bool)arg1;
- (void)pr_setControlsHidden:(bool)arg1;
- (void)pr_setCoveredByModalPresentation:(bool)arg1;
- (void)pr_setDepthEffectDisallowed:(bool)arg1;
- (void)pr_setEditingAcceptButtonType:(long long)arg1;
- (void)pr_setEditingContext:(long long)arg1;
- (void)pr_setEditingVariant:(long long)arg1;
- (void)pr_setFocusedComplicationElement:(long long)arg1;
- (void)pr_setFocusedQuickActionElementPosition:(long long)arg1;
- (void)pr_setHorizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setOverrideDate:(id)arg1;
- (void)pr_setParallaxDisallowed:(bool)arg1;
- (void)pr_setParallaxEnabled:(bool)arg1;
- (void)pr_setPosterAmbientConfiguration:(id)arg1;
- (void)pr_setPosterConfigurableOptions:(id)arg1;
- (void)pr_setPosterConfiguredProperties:(id)arg1;
- (void)pr_setPosterTitleStyleConfiguration:(id)arg1;
- (void)pr_setTitleAlignment:(unsigned long long)arg1;
- (void)pr_setTitleString:(id)arg1;
- (void)pr_setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setUnlockProgress:(double)arg1;
- (void)pr_setUsesEditingLayout:(bool)arg1;
- (void)pr_setVerticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setWakeSourceIsSwipeToUnlock:(bool)arg1;
- (id)pr_titleString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_trailingTopButtonFrame;
- (bool)pr_usesEditingLayout;

// Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation

- (void)pui_applyOtherSettings:(id)arg1;
- (void)pui_applyToMutableSceneSettings:(id)arg1;
- (void)pui_setComplicationRowConfigured:(bool)arg1;
- (void)pui_setComplicationSidebarConfigured:(bool)arg1;
- (void)pui_setContent:(long long)arg1;
- (void)pui_setDeviceOrientation:(long long)arg1;
- (void)pui_setExtensionUserInteractionEnabled:(bool)arg1;
- (void)pui_setFloatingLayerSnapshot:(bool)arg1;
- (void)pui_setInlineComplicationConfigured:(bool)arg1;
- (void)pui_setInvalidated;
- (void)pui_setInvalidated:(id)arg1;
- (void)pui_setMode:(long long)arg1;
- (void)pui_setPosterBoundingShape:(long long)arg1;
- (void)pui_setPosterContents:(id)arg1;
- (void)pui_setPreviewContent:(unsigned long long)arg1;
- (void)pui_setPreviewIdentifier:(id)arg1;
- (void)pui_setProvider:(id)arg1;
- (void)pui_setRole:(id)arg1;
- (void)pui_setSceneAttachments:(id)arg1;
- (void)pui_setShowsComplications:(bool)arg1;
- (void)pui_setShowsHeaderElements:(bool)arg1;
- (void)pui_setSignificantEventsCounter:(unsigned long long)arg1;
- (void)pui_setSnapshot:(bool)arg1;
- (void)pui_setUserInterfaceStyle:(long long)arg1;
- (void)pui_setUserTapEventWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)pui_setUserTapEventsCounter:(unsigned long long)arg1;
- (void)pui_setWallpaperObscured:(bool)arg1;

@end
