/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerTransition : NSObject <CAAnimationDelegate> {
    NSMutableArray * _animations;
    double  _beginTime;
    CAStateController * _controller;
    double  _duration;
    CALayer * _layer;
    NSString * _masterKey;
    float  _speed;
    CAStateTransition * _transition;
}

@property (nonatomic, readonly) double beginTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) float speed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAStateTransition *transition;

- (void)addAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)beginTime;
- (void)dealloc;
- (double)duration;
- (id)init;
- (void)invalidate;
- (id)layer;
- (void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2;
- (float)speed;
- (id)transition;

@end
