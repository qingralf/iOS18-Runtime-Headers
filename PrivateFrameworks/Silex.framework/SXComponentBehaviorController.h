/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentBehaviorController : NSObject <SXViewportChangeListener> {
    UIDynamicAnimator * _animator;
    NSMutableSet * _behaviorHandlers;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) UIDynamicAnimator *animator;
@property (nonatomic, readonly) NSMutableSet *behaviorHandlers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXViewport *viewport;

- (void).cxx_destruct;
- (id)animator;
- (id)behaviorHandlers;
- (id)existingHandlerForComponentView:(id)arg1 behavior:(id)arg2;
- (id)initWithViewport:(id)arg1 andAnimator:(id)arg2;
- (void)registerComponentView:(id)arg1 behavior:(id)arg2;
- (void)reset;
- (void)setViewport:(id)arg1;
- (void)unregisterComponentView:(id)arg1;
- (void)update;
- (void)updateComponentView:(id)arg1;
- (void)updateHandler:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
