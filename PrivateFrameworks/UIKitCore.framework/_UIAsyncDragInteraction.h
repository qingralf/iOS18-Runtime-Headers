/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAsyncDragInteraction : UIDragInteraction {
    struct { 
        unsigned int prepareForSession : 1; 
        unsigned int asyncItemsForAdding : 1; 
    }  _delegateImplements;
}

@property (nonatomic, readonly) <_UIAsyncDragInteractionDelegate> *delegate;

- (bool)_itemsForAddingToSession:(id)arg1 atPoint:(struct CAPoint3D { double x1; double x2; double x3; })arg2 completion:(id /* block */)arg3;
- (void)_prepareForSession:(id)arg1 completion:(id /* block */)arg2;
- (bool)_supportsAddingItemsAsynchronously;
- (id)initWithDelegate:(id)arg1;

@end