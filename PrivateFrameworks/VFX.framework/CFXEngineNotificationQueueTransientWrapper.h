/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface CFXEngineNotificationQueueTransientWrapper : NSObject {
    id  _queue;
}

- (void)dealloc;
- (struct __CFXEngineNotificationQueue { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFDictionary {} *x2; struct __CFDictionary {} *x3; struct os_unfair_lock_s { unsigned int x_4_1_1; } x4; double x5; bool x6; bool x7; bool x8; void *x9; }*)engineNotificationQueue;
- (void)setEngineNotificationQueue:(struct __CFXEngineNotificationQueue { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFDictionary {} *x2; struct __CFDictionary {} *x3; struct os_unfair_lock_s { unsigned int x_4_1_1; } x4; double x5; bool x6; bool x7; bool x8; void *x9; }*)arg1;

@end