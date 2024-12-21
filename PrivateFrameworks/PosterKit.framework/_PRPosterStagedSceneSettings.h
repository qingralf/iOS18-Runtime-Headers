/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface _PRPosterStagedSceneSettings : NSObject <AMUIAmbientPresentationSettings, NSCopying, NSSecureCoding, PRMutableRenderingSceneSettings, PRMutableSceneSettings, PUIMutableSceneSettings> {
    long long  _adjustedLuminance;
    bool  _alternateDateEnabled;
    long long  _ambientDisplayStyle;
    bool  _ambientPresented;
    BSColor * _caseColor;
    bool  _complicationRowConfigured;
    bool  _complicationSidebarConfigured;
    long long  _content;
    bool  _depthEffectDisallowed;
    long long  _deviceOrientation;
    bool  _extensionUserInteractionEnabled;
    bool  _floatingLayerSnapshot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _horizontalTitleBoundingRect;
    bool  _inlineComplicationConfigured;
    long long  _mode;
    bool  _parallaxDisallowed;
    bool  _parallaxEnabled;
    PRPosterAmbientConfiguration * _posterAmbientConfiguration;
    long long  _posterBoundingShape;
    PRPosterConfigurableOptions * _posterConfigurableOptions;
    PRPosterConfiguredProperties * _posterConfiguredProperties;
    PFServerPosterPath * _posterContents;
    PRPosterTitleStyleConfiguration * _posterTitleStyleConfiguration;
    unsigned long long  _previewContent;
    NSString * _previewIdentifier;
    NSString * _provider;
    NSString * _role;
    NSArray * _sceneAttachments;
    bool  _showsComplications;
    bool  _showsHeaderElements;
    unsigned long long  _significantEventsCounter;
    bool  _snapshot;
    unsigned long long  _titleAlignment;
    double  _unlockProgress;
    long long  _userInterfaceStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _verticalTitleBoundingRect;
    bool  _wakeSourceIsSwipeToUnlock;
    bool  _wallpaperObscured;
    bool  pr_parallaxEffectivelyEnabled;
    bool  pui_isInvalidated;
    unsigned long long  pui_userTapEventsCounter;
    struct CGPoint { 
        double x; 
        double y; 
    }  pui_userTapLocation;
}

@property (nonatomic) long long ambientDisplayStyle;
@property (getter=isAmbientPresented, nonatomic) bool ambientPresented;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=pr_setAdjustedLuminance:, nonatomic) long long pr_adjustedLuminance;
@property (getter=pr_isAlternateDateEnabled, setter=pr_setAlternateDateEnabled:, nonatomic) bool pr_alternateDateEnabled;
@property (setter=pr_setCaseColor:, nonatomic, retain) BSColor *pr_caseColor;
@property (getter=pr_isDepthEffectDisallowed, setter=pr_setDepthEffectDisallowed:, nonatomic) bool pr_depthEffectDisallowed;
@property (setter=pr_setHorizontalTitleBoundingRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_horizontalTitleBoundingRect;
@property (getter=pr_isParallaxDisallowed, setter=pr_setParallaxDisallowed:, nonatomic) bool pr_parallaxDisallowed;
@property (getter=pr_isParallaxEffectivelyEnabled, nonatomic, readonly) bool pr_parallaxEffectivelyEnabled;
@property (getter=pr_isParallaxEnabled, setter=pr_setParallaxEnabled:, nonatomic) bool pr_parallaxEnabled;
@property (setter=pr_setPosterAmbientConfiguration:, nonatomic, retain) PRPosterAmbientConfiguration *pr_posterAmbientConfiguration;
@property (setter=pr_setPosterConfigurableOptions:, nonatomic, retain) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property (setter=pr_setPosterConfiguredProperties:, nonatomic, retain) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property (setter=pr_setPosterTitleStyleConfiguration:, nonatomic, retain) PRPosterTitleStyleConfiguration *pr_posterTitleStyleConfiguration;
@property (setter=pr_setTitleAlignment:, nonatomic) unsigned long long pr_titleAlignment;
@property (setter=pr_setUnlockProgress:, nonatomic) double pr_unlockProgress;
@property (setter=pr_setVerticalTitleBoundingRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_verticalTitleBoundingRect;
@property (setter=pr_setWakeSourceIsSwipeToUnlock:, nonatomic) bool pr_wakeSourceIsSwipeToUnlock;
@property (getter=pui_isComplicationRowConfigured, setter=pui_setComplicationRowConfigured:, nonatomic) bool pui_complicationRowConfigured;
@property (getter=pui_isComplicationSidebarConfigured, setter=pui_setComplicationSidebarConfigured:, nonatomic) bool pui_complicationSidebarConfigured;
@property (setter=pui_setContent:, nonatomic) long long pui_content;
@property (setter=pui_setDeviceOrientation:, nonatomic) long long pui_deviceOrientation;
@property (getter=pui_isExtensionUserInteractionEnabled, setter=pui_setExtensionUserInteractionEnabled:, nonatomic) bool pui_extensionUserInteractionEnabled;
@property (getter=pui_isFloatingLayerSnapshot, setter=pui_setFloatingLayerSnapshot:, nonatomic) bool pui_floatingLayerSnapshot;
@property (getter=pui_isInlineComplicationConfigured, setter=pui_setInlineComplicationConfigured:, nonatomic) bool pui_inlineComplicationConfigured;
@property (nonatomic, readonly) bool pui_isInvalidated;
@property (setter=pui_setMode:, nonatomic) long long pui_mode;
@property (setter=pui_setPosterBoundingShape:, nonatomic) long long pui_posterBoundingShape;
@property (setter=pui_setPosterContents:, nonatomic, retain) PFServerPosterPath *pui_posterContents;
@property (setter=pui_setPreviewContent:, nonatomic) unsigned long long pui_previewContent;
@property (setter=pui_setPreviewIdentifier:, nonatomic, copy) NSString *pui_previewIdentifier;
@property (setter=pui_setProvider:, nonatomic, copy) NSString *pui_provider;
@property (setter=pui_setRole:, nonatomic, copy) NSString *pui_role;
@property (setter=pui_setSceneAttachments:, nonatomic, retain) NSArray *pui_sceneAttachments;
@property (setter=pui_setShowsComplications:, nonatomic) bool pui_showsComplications;
@property (setter=pui_setShowsHeaderElements:, nonatomic) bool pui_showsHeaderElements;
@property (setter=pui_setSignificantEventsCounter:, nonatomic) unsigned long long pui_significantEventsCounter;
@property (getter=pui_isSnapshot, setter=pui_setSnapshot:, nonatomic) bool pui_snapshot;
@property (setter=pui_setUserInterfaceStyle:, nonatomic) long long pui_userInterfaceStyle;
@property (setter=pui_setUserTapEventsCounter:, nonatomic) unsigned long long pui_userTapEventsCounter;
@property (setter=pui_setUserTapEventWithLocation:, nonatomic) struct CGPoint { double x1; double x2; } pui_userTapLocation;
@property (getter=pui_isWallpaperObscured, setter=pui_setWallpaperObscured:, nonatomic) bool pui_wallpaperObscured;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)ambientDisplayStyle;
- (void)applyToMutableSceneSettings:(id)arg1 role:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAmbientPresented;
- (long long)pr_adjustedLuminance;
- (id)pr_caseColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_horizontalTitleBoundingRect;
- (bool)pr_isAlternateDateEnabled;
- (bool)pr_isDepthEffectDisallowed;
- (bool)pr_isParallaxDisallowed;
- (bool)pr_isParallaxEffectivelyEnabled;
- (bool)pr_isParallaxEnabled;
- (id)pr_posterAmbientConfiguration;
- (id)pr_posterConfigurableOptions;
- (id)pr_posterConfiguredProperties;
- (id)pr_posterTitleStyleConfiguration;
- (void)pr_setAdjustedLuminance:(long long)arg1;
- (void)pr_setAlternateDateEnabled:(bool)arg1;
- (void)pr_setCaseColor:(id)arg1;
- (void)pr_setDepthEffectDisallowed:(bool)arg1;
- (void)pr_setHorizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setParallaxDisallowed:(bool)arg1;
- (void)pr_setParallaxEnabled:(bool)arg1;
- (void)pr_setPosterAmbientConfiguration:(id)arg1;
- (void)pr_setPosterConfigurableOptions:(id)arg1;
- (void)pr_setPosterConfiguredProperties:(id)arg1;
- (void)pr_setPosterTitleStyleConfiguration:(id)arg1;
- (void)pr_setTitleAlignment:(unsigned long long)arg1;
- (void)pr_setUnlockProgress:(double)arg1;
- (void)pr_setVerticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setWakeSourceIsSwipeToUnlock:(bool)arg1;
- (unsigned long long)pr_titleAlignment;
- (double)pr_unlockProgress;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_verticalTitleBoundingRect;
- (bool)pr_wakeSourceIsSwipeToUnlock;
- (long long)pui_content;
- (long long)pui_deviceOrientation;
- (bool)pui_isComplicationRowConfigured;
- (bool)pui_isComplicationSidebarConfigured;
- (bool)pui_isExtensionUserInteractionEnabled;
- (bool)pui_isFloatingLayerSnapshot;
- (bool)pui_isInlineComplicationConfigured;
- (bool)pui_isInvalidated;
- (bool)pui_isSnapshot;
- (bool)pui_isWallpaperObscured;
- (long long)pui_mode;
- (long long)pui_posterBoundingShape;
- (id)pui_posterContents;
- (unsigned long long)pui_previewContent;
- (id)pui_previewIdentifier;
- (id)pui_provider;
- (id)pui_role;
- (id)pui_sceneAttachments;
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
- (bool)pui_showsComplications;
- (bool)pui_showsHeaderElements;
- (unsigned long long)pui_significantEventsCounter;
- (long long)pui_userInterfaceStyle;
- (unsigned long long)pui_userTapEventsCounter;
- (struct CGPoint { double x1; double x2; })pui_userTapLocation;
- (void)setAmbientDisplayStyle:(long long)arg1;
- (void)setAmbientPresented:(bool)arg1;

@end