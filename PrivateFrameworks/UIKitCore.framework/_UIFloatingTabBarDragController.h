/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFloatingTabBarDragController : NSObject <UIDragInteractionDelegate_Internal, UIDropInteractionDelegate> {
    UIDragItem * _activeDropItem;
    <UIDropSession> * _activeDropSession;
    UITab * _currentDragTab;
    long long  _currentDragTabOriginalIndex;
    <_UIFloatingTabBarDragControllerDelegate> * _delegate;
    UIDragInteraction * _dragInteraction;
    UIDropInteraction * _dropInteraction;
    bool  _editing;
    bool  _needsFavoriteOrderUpdate;
    UITab * _pendingDropTab;
    bool  _pendingDropTabHasValidTarget;
    NSMutableSet * _pendingExcludedItems;
    NSMutableOrderedSet * _pendingFavoriteOrder;
}

@property (nonatomic, readonly) UIDragItem *activeDropItem;
@property (nonatomic) <UIDropSession> *activeDropSession;
@property (nonatomic, retain) UITab *currentDragTab;
@property (nonatomic) long long currentDragTabOriginalIndex;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <_UIFloatingTabBarDragControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITab *pendingDropTab;
@property (nonatomic) bool pendingDropTabHasValidTarget;
@property (nonatomic, retain) NSMutableSet *pendingExcludedItems;
@property (nonatomic, retain) NSMutableOrderedSet *pendingFavoriteOrder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_dragInteraction:(id)arg1 delayForLiftBeginningAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_insertPlaceholderAtIndex:(long long)arg1;
- (void)_removePlaceholder;
- (bool)_shouldAddPlaceholderForPendingDrop;
- (void)_updateFavoriteOrderAnimated:(bool)arg1;
- (id)activeDropItem;
- (id)activeDropSession;
- (void)beginEditingWithFavoriteOrder:(id)arg1 excludedItems:(id)arg2;
- (id)currentDragTab;
- (long long)currentDragTabOriginalIndex;
- (id)delegate;
- (id)dragInteraction;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)endEditing;
- (id)excludedItems;
- (bool)hasActiveDrag;
- (id)initWithDelegate:(id)arg1 view:(id)arg2;
- (void)insertTabForIdentifier:(id)arg1;
- (bool)isEditing;
- (id)pendingDropTab;
- (bool)pendingDropTabHasValidTarget;
- (id)pendingExcludedItems;
- (id)pendingFavoriteOrder;
- (void)removeTabForIdentifier:(id)arg1;
- (void)resetFavoriteOrderWithDefaultOrder:(id)arg1;
- (void)setActiveDropSession:(id)arg1;
- (void)setCurrentDragTab:(id)arg1;
- (void)setCurrentDragTabOriginalIndex:(long long)arg1;
- (void)setPendingDropTab:(id)arg1;
- (void)setPendingDropTabHasValidTarget:(bool)arg1;
- (void)setPendingExcludedItems:(id)arg1;
- (void)setPendingFavoriteOrder:(id)arg1;

@end
