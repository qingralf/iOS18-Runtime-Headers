/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSelectPicker : NSObject <UIContextMenuInteractionDelegate, WKFormControl> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    bool  _isAnimatingContextMenuDismissal;
    struct unique_ptr<WebKit::CompactContextMenuPresenter, std::default_delete<WebKit::CompactContextMenuPresenter>> { 
        struct __compressed_pair<WebKit::CompactContextMenuPresenter *, std::default_delete<WebKit::CompactContextMenuPresenter>> { 
            struct CompactContextMenuPresenter {} *__value_; 
        } __ptr_; 
    }  _selectContextMenuPresenter;
    struct RetainPtr<UIMenu> { 
        void *m_ptr; 
    }  _selectMenu;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionForOptionIndex:(long long)arg1;
- (id)actionForOptionItem:(const void*)arg1 withIndex:(long long)arg2;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)controlUpdateEditing;
- (id)controlView;
- (id)createMenu;
- (void)dealloc;
- (void)didSelectOptionIndex:(long long)arg1;
- (id)initWithView:(id)arg1;
- (id)menuItemTitles;
- (void)resetContextMenuPresenter;
- (bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;
- (void)showSelectPicker;

@end