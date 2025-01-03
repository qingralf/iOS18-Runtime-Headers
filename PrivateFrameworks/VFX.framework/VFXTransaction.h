/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXTransaction : NSObject

+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (void)begin;
+ (void)checkUncommittedTransactions;
+ (void)commit;
+ (void)commitImmediate;
+ (id /* block */)completionBlock;
+ (unsigned int)currentState;
+ (bool)disableActions;
+ (double)duration;
+ (void)enqueueCommandForObject:(id)arg1 immediateTransactionBlock:(id /* block */)arg2;
+ (void)flush;
+ (bool)immediateMode;
+ (struct __CFXWorld { }*)immediateModeRestrictedContext;
+ (void)lock;
+ (void)performPresentationObjectQueriesInWorld:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)postCommandWithContext:(struct __CFXWorld { }*)arg1 object:(id)arg2 applyBlock:(id /* block */)arg3;
+ (void)postCommandWithContext:(struct __CFXWorld { }*)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(id /* block */)arg4;
+ (void)postCommandWithContext:(struct __CFXWorld { }*)arg1 object:(id)arg2 key:(id)arg3 subscriptIndex:(unsigned long long)arg4 derivedKeyPath:(id)arg5 applyBlock:(id /* block */)arg6;
+ (void)postCommandWithContext:(struct __CFXWorld { }*)arg1 object:(id)arg2 key:(id)arg3 subscriptKey:(id)arg4 derivedKeyPath:(id)arg5 applyBlock:(id /* block */)arg6;
+ (void)postCommandWithContext:(struct __CFXWorld { }*)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(id /* block */)arg4;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setCompletionBlock:(id /* block */)arg1;
+ (void)setCurrentThreadImmediateMode:(bool)arg1;
+ (void)setDisableActions:(bool)arg1;
+ (void)setDuration:(double)arg1;
+ (bool)setImmediateMode:(bool)arg1;
+ (void)setImmediateModeRestrictedContext:(struct __CFXWorld { }*)arg1;
+ (void)setTimingFunction:(id)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)timingFunction;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;

- (double)animationDuration;
- (id)animationTimingFunction;
- (void)begin;
- (void)commit;
- (bool)disableActions;
- (void)flush;
- (void)lock;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setDisableActions:(bool)arg1;
- (void)unlock;

@end
