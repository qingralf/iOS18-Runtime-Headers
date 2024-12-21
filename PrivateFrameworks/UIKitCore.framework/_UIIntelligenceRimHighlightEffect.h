/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIIntelligenceRimHighlightEffect : UIVisualEffect <_UIVisualEffectDirectionalActivationTransitioning, _UIVisualEffectDirectionalDeactivationTransitioning, _UIVisualEffectDirectionalTransitioning> {
    void activationTransitionDirection;
    void config;
    void deactivationTransitionDirection;
}

@property (nonatomic) unsigned long long activationTransitionDirection;
@property (nonatomic) unsigned long long deactivationTransitionDirection;

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (unsigned long long)activationTransitionDirection;
- (unsigned long long)deactivationTransitionDirection;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithThickness:(double)arg1 activationDirection:(unsigned long long)arg2;
- (id)initWithThickness:(double)arg1 color:(id)arg2 softRadius:(double)arg3 region:(unsigned long long)arg4 activationDirection:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (void)setActivationTransitionDirection:(unsigned long long)arg1;
- (void)setDeactivationTransitionDirection:(unsigned long long)arg1;

@end