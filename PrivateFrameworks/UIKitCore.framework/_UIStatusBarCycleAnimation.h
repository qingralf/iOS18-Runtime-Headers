/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, _UIStatusBarPersistentAnimation> {
    NSMutableArray * _completionHandlers;
    NSArray * _layerAnimations;
    long long  _state;
    NSArray * _stoppingLayerAnimations;
    bool  _stopsAfterReversing;
    bool  _visible;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *layerAnimations;
@property (nonatomic, readonly) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
@property (nonatomic, readonly) long long state;
@property (nonatomic, retain) NSArray *stoppingLayerAnimations;
@property (nonatomic) bool stopsAfterReversing;
@property (readonly) Class superclass;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_sendCompletionsWithFinished:(bool)arg1;
- (void)_startAnimations;
- (void)_stopAnimations;
- (void)_stopStoppingAnimations;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)completionHandlers;
- (void)dealloc;
- (id)description;
- (id)initWithLayerAnimations:(id)arg1;
- (id)layerAnimations;
- (id)mainLayerAnimation;
- (void)pausePersistentAnimation;
- (void)resumePersistentAnimation;
- (void)setCompletionHandlers:(id)arg1;
- (void)setStoppingLayerAnimations:(id)arg1;
- (void)setStopsAfterReversing:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)start;
- (long long)state;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (id)stoppingLayerAnimations;
- (bool)stopsAfterReversing;
- (bool)visible;

@end
