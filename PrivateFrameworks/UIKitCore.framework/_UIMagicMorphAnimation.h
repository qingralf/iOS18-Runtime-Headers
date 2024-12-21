/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMagicMorphAnimation : NSObject {
    void $__lazy_storage_$_geometryTrackingDisplayLink;
    void animationContainerView;
    void animationItems;
    void currentItem;
    void groupCompletion;
    void matchedPosition;
    void morphView;
}

@property (nonatomic, readonly) UIView *morphContainer;

- (void).cxx_destruct;
- (void)animateWith:(id)arg1 tracking:(bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)cancel;
- (void)geometryTrackingDisplayLinkDidFire:(id)arg1;
- (id)init;
- (id)morphContainer;
- (void)morphTo:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (void)morphTo:(id)arg1 reparentWithoutAnimation:(bool)arg2 completion:(id /* block */)arg3;
- (id)newInteractionAssertion;
- (void)performCompletionsAsGroup:(id /* block */)arg1;

@end