/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupportUI.framework/BarcodeSupportUI
 */

@interface BCSContextMenuController : NSObject <UIContextMenuInteractionDelegate> {
    UIMenu * _actionPickerMenu;
    id /* block */  _finishAction;
    BCSActionPickerItem * _selectedItem;
    UIView * _viewForMenu;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finishAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id /* block */)finishAction;
- (void)setFinishAction:(id /* block */)arg1;
- (void)showMenuForAction:(id)arg1 fromView:(id)arg2;

@end