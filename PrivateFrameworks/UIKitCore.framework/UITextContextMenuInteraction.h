/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextContextMenuInteraction : UITextInteraction <UIContextMenuInteractionDelegate_ForWebKitOnly, UIContextMenuInteractionDelegate_Private, _UIContextMenuInteractionDelegateInternal, _UIEditMenuInteractionDelegateInternal> {
    UIContextMenuInteraction * _contextMenuInteraction;
    UIEditMenuConfiguration * _currentInputUIConfiguration;
    UIEditMenuConfiguration * _currentSelectionCommandsConfiguration;
    UIEditMenuInteraction * _editMenuInteraction;
    <UIContextMenuInteractionDelegate> * _externalContextMenuDelegate;
    struct { 
        bool previewForHighlighting_DEPR; 
        bool previewForDismissing_DEPR; 
        bool highlightPreviewForItem; 
        bool dismissalPreviewForItem; 
        bool willPerformPreviewAction; 
        bool willDisplay; 
        bool willEndForConfiguration; 
        bool styleForMenu; 
        bool accessoriesForMenu; 
        bool shouldBeDelayedByGestureRecognizer; 
        bool asyncConfigurationForMenuAtLocation; 
        bool overrideSuggestedActions; 
        bool shouldAttemptToPresent; 
        bool interactionEffectForTargetedPreview; 
    }  _externalDelegateImplements;
    UIContextMenuConfiguration * _externallyManagedConfiguration;
    bool  _isPresentingOrDismissingContextMenu;
}

@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dismissedByActionSelection;
@property (nonatomic, readonly) bool dismissedRecently;
@property (nonatomic, readonly) UIEditMenuInteraction *editMenuInteraction;
@property (nonatomic) <UIContextMenuInteractionDelegate> *externalContextMenuDelegate;
@property (nonatomic, readonly) UIContextMenuConfiguration *externallyManagedConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDisplayingMenu;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 accessoriesForMenuWithConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;
- (void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)_contextMenuInteraction:(id)arg1 didPerformMenuLeaf:(id)arg2 target:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;
- (bool)_contextMenuInteraction:(id)arg1 shouldBeDelayedByGestureRecognizer:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)_currentInputUIMenuElements;
- (void)_didPerformMenuLeaf:(id)arg1 target:(id)arg2;
- (id)_editMenuForCurrentSelectionWithSuggestedActions:(id)arg1 isEditMenu:(bool)arg2;
- (id)_editMenuForSuggestedActions:(id)arg1 rvItem:(id)arg2 isEditMenu:(bool)arg3;
- (void)_editMenuInteraction:(id)arg1 didPerformMenuLeaf:(id)arg2 target:(id)arg3;
- (void)_editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_editMenuInteraction:(id)arg1 preferredLayoutRectsForConfiguration:(id)arg2;
- (id)_editMenuInteraction:(id)arg1 titleViewForMenu:(id)arg2 configuration:(id)arg3;
- (bool)_isExternalConfiguration:(id)arg1;
- (void)_logDeprecatedMenuControllerUsageIfNeeded;
- (void)_presentEditMenuForInputUI;
- (void)_querySelectionCommandsForConfiguration:(id)arg1 suggestedActions:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_shouldBridgeMenuControllerItems;
- (id)_suggestedActionsForContextMenuInteraction:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (id)_targetedPreviewForCurrentSelection;
- (bool)_textInputIsSecure;
- (id)contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)didMoveToView:(id)arg1;
- (void)dismissMenuForInputUI;
- (void)dismissSelectionCommandsWithReason:(long long)arg1;
- (bool)dismissedByActionSelection;
- (bool)dismissedRecently;
- (id)editMenuInteraction;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)externalContextMenuDelegate;
- (id)externallyManagedConfiguration;
- (id)init;
- (bool)isDisplayingMenu;
- (bool)isDisplayingMenuForInputUI;
- (bool)isDisplayingMenuForSelectionCommands;
- (struct CGPoint { double x1; double x2; })locationInTextInputViewForLocationInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)prepareForContextMenuAtLocationInView:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)presentMenuForInputUI:(id)arg1 preferredArrowDirection:(long long)arg2;
- (void)presentSelectionCommandsWithConfiguration:(id)arg1;
- (void)setExternalContextMenuDelegate:(id)arg1;
- (void)updateVisibleMenuPosition;
- (void)willMoveToView:(id)arg1;

@end