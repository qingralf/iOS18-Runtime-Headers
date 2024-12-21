/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosGridActionMenuController : PXActionMenuController {
    PXPhotosGridActionMenuCustomizer * _actionMenuCustomizer;
    NSArray * _additionalActionTypes;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, retain) PXPhotosGridActionMenuCustomizer *actionMenuCustomizer;
@property (nonatomic, copy) NSArray *additionalActionTypes;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (id)actionMenuCustomizer;
- (bool)actionsAreExcludedWhenCustomized;
- (id)additionalActionTypes;
- (id)availableActionTypes;
- (id)availableDestructiveActionTypes;
- (id)availableHeaderActionTypes;
- (id)availableInternalActionTypes;
- (void)customizeActions:(id)arg1 withActionTypes:(id /* block */)arg2;
- (id)initWithActionManagers:(id)arg1;
- (id)initWithActionManagers:(id)arg1 viewModel:(id)arg2;
- (void)setActionMenuCustomizer:(id)arg1;
- (void)setAdditionalActionTypes:(id)arg1;
- (bool)shouldAllowPerformanceOfActionType:(id)arg1;
- (void)updateActions;
- (id)viewModel;

@end