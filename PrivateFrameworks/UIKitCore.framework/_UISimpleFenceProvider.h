/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISimpleFenceProvider : NSObject <UIFenceProviding> {
    bool  _synchronizing;
    bool  _trackingAny;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)init;
- (bool)isTrackingAnySystemAnimationFence;
- (id)requestSystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)arg1;
- (bool)trackSystemAnimationFence:(id)arg1;

@end