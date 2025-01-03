/* Generated by RuntimeBrowser.
 */

@protocol VFXAnimatable <NSObject>

@required

- (void)addAnimation:(id <VFXAnimation>)arg1 forKey:(NSString *)arg2;
- (void)addAnimationPlayer:(VFXAnimationPlayer *)arg1 forKey:(NSString *)arg2;
- (NSArray *)animationKeys;
- (VFXAnimationPlayer *)animationPlayerForKey:(NSString *)arg1;
- (id)presentationObject;
- (void)removeAllAnimations;
- (void)removeAllAnimationsWithBlendOutDuration:(float)arg1;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAnimationForKey:(NSString *)arg1 blendOutDuration:(float)arg2;

@end
