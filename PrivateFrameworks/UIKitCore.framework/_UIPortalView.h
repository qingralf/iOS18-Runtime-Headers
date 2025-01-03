/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPortalView : UIView <_UIViewMultiLayerDelegate> {
    NSSet * __additionalAnimatableKeyPaths;
    bool  __geometryFrozen;
    bool  __prefersClientLayer;
    bool  _forwardsClientHitTestingToSourceView;
    NSString * _name;
    UIView * _sourceView;
}

@property (getter=_additionalAnimatableKeyPaths, setter=_setAdditionalAnimatableKeypaths:, nonatomic, retain) NSSet *_additionalAnimatableKeyPaths;
@property (setter=_setAllowedInContextTransform:, nonatomic) bool _allowedInContextTransform;
@property (getter=_isGeometryFrozen, setter=_setGeometryFrozen:, nonatomic) bool _geometryFrozen;
@property (getter=_prefersClientLayer, setter=_setPrefersClientLayer:, nonatomic) bool _prefersClientLayer;
@property (nonatomic) bool allowsBackdropGroups;
@property (nonatomic) bool allowsHitTesting;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forwardsClientHitTestingToSourceView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic) bool matchesAlpha;
@property (nonatomic) bool matchesPosition;
@property (nonatomic) bool matchesTransform;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CAPortalLayer *portalLayer;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_additionalAnimatableKeyPaths;
- (bool)_allowedInContextTransform;
- (bool)_isGeometryFrozen;
- (void)_outermostLayerDidChange:(id)arg1;
- (bool)_prefersClientLayer;
- (void)_setAdditionalAnimatableKeypaths:(id)arg1;
- (void)_setAllowedInContextTransform:(bool)arg1;
- (void)_setGeometryFrozen:(bool)arg1;
- (void)_setPrefersClientLayer:(bool)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_sourceViewIfPortal;
- (void)_updateSourceLayer;
- (bool)allowsBackdropGroups;
- (bool)allowsHitTesting;
- (id)description;
- (bool)forwardsClientHitTestingToSourceView;
- (bool)hidesSourceView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSourceView:(id)arg1;
- (bool)matchesAlpha;
- (bool)matchesPosition;
- (bool)matchesTransform;
- (id)name;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)portalLayer;
- (void)setAllowsBackdropGroups:(bool)arg1;
- (void)setAllowsHitTesting:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setForwardsClientHitTestingToSourceView:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setMatchesAlpha:(bool)arg1;
- (void)setMatchesPosition:(bool)arg1;
- (void)setMatchesTransform:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
