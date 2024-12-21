/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionManager : NSObject {
    NSSet * _allowedActionTypes;
    <PXActionPerformerDelegate> * _performerDelegate;
}

@property (nonatomic, copy) NSSet *allowedActionTypes;
@property (nonatomic) <PXActionPerformerDelegate> *performerDelegate;

+ (id /* block */)_unlockDeviceHandlerWithActionType;
+ (void)setEnsureUnlockedDeviceHandlerWithActionType:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)actionItemForActionType:(id)arg1 handler:(id /* block */)arg2;
- (id)actionItemsForActionTypes:(id)arg1 handler:(id /* block */)arg2;
- (id)actionKeyCommands;
- (id)actionPerformerForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1 parameters:(id)arg2;
- (id)actionTypeForGenericType:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)allowedActionTypes;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformActionType:(id)arg1;
- (id)contextMenu;
- (id)contextMenuElementsWithHandler:(id /* block */)arg1;
- (bool)isActionTypeAllowed:(id)arg1;
- (bool)isDestructiveActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (long long)menuActionStateForActionType:(id)arg1;
- (id)menuElementForActionType:(id)arg1 image:(id)arg2 willStartActionHandler:(id /* block */)arg3 didEndActionHandler:(id /* block */)arg4;
- (id)menuElementsForActionType:(id)arg1;
- (id)performerDelegate;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (void)setAllowedActionTypes:(id)arg1;
- (void)setPerformerDelegate:(id)arg1;
- (id)standardActionForActionType:(id)arg1;
- (bool)supportsActionType:(id)arg1;
- (bool)supportsContextMenu;
- (id)systemImageNameForActionType:(id)arg1;

@end