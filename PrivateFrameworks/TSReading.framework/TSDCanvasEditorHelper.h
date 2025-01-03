/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver> {
    <TSDCanvasEditor> * mCanvasEditor;
    TSKChangeNotifier * mChangeNotifier;
    bool  mTornDown;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)canvasSelectionWithInfos:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (bool)physicalKeyboardIsSender:(id)arg1;
+ (Class)selectionClass;

- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (bool)canDeleteComment;
- (bool)canGroupDrawables:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformMaskWithSender:(id)arg1;
- (bool)canPerformMaskWithShapeTypeWithSender:(id)arg1;
- (bool)canPerformMaskWithShapeWithSender:(id)arg1;
- (bool)canPerformUnmaskWithSender:(id)arg1;
- (bool)canUngroupWithSelection:(id)arg1;
- (id)canvasEditor;
- (int)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDistributeAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformGroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformUngroupAction:(SEL)arg1 withSender:(id)arg2;
- (id)canvasSelectionFromRep:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (void)dealloc;
- (id)documentRoot;
- (Class)editorClassForSelection:(id)arg1;
- (Class)editorClassForSelectionIgnoringLockedState:(id)arg1;
- (id)editorToPopToOnEndEditingForSelection:(id)arg1;
- (id)infosFromCanvasSelection:(id)arg1;
- (id)initWithCanvasEditor:(id)arg1;
- (id)interactiveCanvasController;
- (bool)isRepSelectable:(id)arg1;
- (id)layoutsForAlignAndDistribute;
- (id)newEditorForEditorClass:(Class)arg1;
- (void)notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (bool)p_canReduceFileSizeForSelectedImages;
- (void)p_copy:(id)arg1;
- (Class)p_editorClassForSelection:(id)arg1 shouldIgnoreLockedState:(bool)arg2;
- (bool)p_selectionContainsInlineObjects:(id)arg1;
- (void)pushNewEditorForSelection:(id)arg1;
- (void)teardown;

@end
