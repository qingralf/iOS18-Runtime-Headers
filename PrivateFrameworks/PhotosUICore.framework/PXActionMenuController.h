/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionMenuController : NSObject {
    NSArray * _actionManagers;
    NSArray * _actions;
    bool  _actionsAreExcludedWhenCustomized;
    bool  _actionsNeedsUpdate;
    NSArray * _activityActions;
    UIAlertController * _alertController;
    NSArray * _availableDestructiveActionTypes;
    NSOrderedSet * _defaultActivityTypeOrder;
    NSSet * _disabledActionTypes;
    NSSet * _excludedActionTypes;
}

@property (nonatomic, readonly) NSArray *actionManagers;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) bool actionsAreExcludedWhenCustomized;
@property (nonatomic, readonly) NSArray *activityActions;
@property (nonatomic, readonly) UIAlertController *alertController;
@property (nonatomic, readonly) NSArray *availableActionTypes;
@property (nonatomic, readonly) NSArray *availableDestructiveActionTypes;
@property (nonatomic, readonly) NSArray *availableHeaderActionTypes;
@property (nonatomic, readonly) NSArray *availableInternalActionTypes;
@property (nonatomic, copy) NSOrderedSet *defaultActivityTypeOrder;
@property (nonatomic, copy) NSSet *disabledActionTypes;
@property (nonatomic, readonly) bool enableSectionedMenus;
@property (nonatomic, copy) NSSet *excludedActionTypes;
@property (nonatomic, readonly) long long numberOfSections;

- (void).cxx_destruct;
- (id)_actionableActionManagerForActionType:(id)arg1;
- (id)_menuElementsForSection:(long long)arg1;
- (void)_updateActionsIfNeeded;
- (void)_updateActionsUsingActivityTypeOrder;
- (void)_updateSectionedActions;
- (id)actionManagers;
- (id)actions;
- (bool)actionsAreExcludedWhenCustomized;
- (id)activityActions;
- (id)alertController;
- (id)availableActionTypes;
- (id)availableActionTypesInSection:(long long)arg1;
- (id)availableDestructiveActionTypes;
- (id)availableHeaderActionTypes;
- (id)availableInternalActionTypes;
- (void)customizeActions:(id)arg1 withActionTypes:(id /* block */)arg2;
- (id)defaultActivityTypeOrder;
- (id)disabledActionTypes;
- (bool)enableSectionedMenus;
- (id)excludedActionTypes;
- (id)iconForSection:(long long)arg1;
- (id)init;
- (id)initWithActionManagers:(id)arg1;
- (void)invalidateActions;
- (long long)numberOfSections;
- (bool)sectionDisplaysInline:(long long)arg1;
- (void)setDefaultActivityTypeOrder:(id)arg1;
- (void)setDisabledActionTypes:(id)arg1;
- (void)setExcludedActionTypes:(id)arg1;
- (bool)shouldAllowPerformanceOfActionType:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (void)updateActions;

@end