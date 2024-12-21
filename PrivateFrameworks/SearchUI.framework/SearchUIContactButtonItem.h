/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIContactButtonItem : SearchUIButtonItem <CNContactQuickActionsModelTrackingDelegate> {
    NSString * _actionType;
    NSMutableArray * _menuElements;
    CNContactQuickActionsController * _quickActionsController;
}

@property (nonatomic, retain) NSString *actionType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *menuElements;
@property (nonatomic, retain) CNContactQuickActionsController *quickActionsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionType;
- (void)buttonPressed;
- (id)command;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)menuElements;
- (id)previewMenu;
- (id)quickActionsController;
- (void)quickActionsControllerDidUpdateActionModels;
- (void)setActionType:(id)arg1;
- (void)setMenuElements:(id)arg1;
- (void)setQuickActionsController:(id)arg1;

@end