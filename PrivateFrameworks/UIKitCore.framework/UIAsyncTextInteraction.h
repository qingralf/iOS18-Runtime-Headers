/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAsyncTextInteraction : NSObject <UIInteraction, UIWKTextInteractionAssistantDelegate> {
    <UIAsyncTextInteractionDelegate> * _delegate;
    UIWKTextInteractionAssistant * _textInteractionAssistant;
    UIView * _view;
}

@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic) <UIContextMenuInteractionDelegate> *contextMenuInteractionDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <UIAsyncTextInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextSelectionDisplayInteraction *textSelectionDisplayInteraction;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)asyncTextInput;
- (id)contextMenuInteraction;
- (id)contextMenuInteractionDelegate;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)dismissEditMenuForSelection;
- (void)editabilityChanged;
- (void)lookup:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)presentEditMenuForSelection;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)selectionChanged;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setContextMenuInteractionDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)textSelectionDisplayInteraction;
- (void)translate:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end