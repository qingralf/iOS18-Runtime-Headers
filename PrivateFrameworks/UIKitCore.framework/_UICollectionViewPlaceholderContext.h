/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext> {
    _UIDropAnimationHandlers * _animationHandlers;
    id /* block */  _cellUpdateHandler;
    <_UICollectionViewPlaceholderContextDelegate> * _delegate;
    UIDragItem * _dragItem;
    NSIndexPath * _originalInsertionIndexPath;
    NSString * _reuseIdentifier;
    NSUUID * _shadowUpdateIdentifier;
}

@property (nonatomic, retain) _UIDropAnimationHandlers *animationHandlers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UICollectionViewPlaceholderContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (bool)commitInsertionWithDataSourceUpdates:(id /* block */)arg1;
- (id)delegate;
- (bool)deletePlaceholder;
- (id)description;
- (id)dragItem;
- (void)setAnimationHandlers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragItem:(id)arg1;
- (void)setNeedsCellUpdate;

@end