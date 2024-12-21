/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextMenuLinkInteraction : _UITextSimpleLinkInteraction <UIContextMenuInteractionDelegate, UIEditMenuInteractionDelegate> {
    NSMapTable * _configurationItems;
    UIEditMenuInteraction * _editMenuInteraction;
    bool  _isModifyingSelectionForLinkPresentation;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)_targetedPreviewForItem:(id)arg1 dismissing:(bool)arg2;
- (void)_willDisplayMenuForItem:(id)arg1 animator:(id)arg2;
- (void)_willEndMenuDisplayForItem:(id)arg1 animator:(id)arg2;
- (id)contextMenuDelegateProxy;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)didMoveToView:(id)arg1;
- (void)dismissEditMenuOnSelectionChangeIfNecessary;
- (id)editMenuInteraction;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithShouldProxyContextMenuDelegate:(bool)arg1;
- (void)willMoveToView:(id)arg1;

@end