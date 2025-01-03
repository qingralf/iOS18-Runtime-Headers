/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI
 */

@interface STUIStatusBarVisualProvider_DynamicSplit : STUIStatusBarVisualProvider_Split <STUIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> {
    BSAnimationSettings * _currentAnimationSettings;
    NSLayoutConstraint * _cutoutCenterConstraint;
    NSLayoutConstraint * _cutoutWidthConstraint;
    struct { 
        unsigned int calculatedSensorAreaRect : 1; 
        unsigned int calculatedEffectiveTargetDisplayWidth : 1; 
        unsigned int calculatedEdgeInsets : 1; 
    }  _dynamicSplitVisualProviderFlags;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _edgeInsets;
    double  _effectiveTargetDisplayWidth;
    bool  _forceAvoidanceRectUpdate;
    NSLayoutConstraint * _leadingCenterYConstraint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sensorAreaRect;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)baseFontSize;
+ (double)expandedFontSize;
+ (double)height;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (id)_orderedDisplayItemPlacements;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(id)arg2 options:(unsigned long long)arg3;
- (double)bottomLeadingTopOffset;
- (void)dataUpdated:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (double)expandedIconScale;
- (void)itemCreated:(id)arg1;
- (double)itemSpacing;
- (double)leadingItemSpacing;
- (double)normalIconScale;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setOnAODLockScreen:(bool)arg1;
- (void)setOnLockScreen:(bool)arg1;
- (id)setupInContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (void)updateDisplayItem:(id)arg1 toDynamicallyHidden:(bool)arg2 scale:(double)arg3;
- (void)updateDisplayItem:(id)arg1 toScale:(double)arg2;

@end
