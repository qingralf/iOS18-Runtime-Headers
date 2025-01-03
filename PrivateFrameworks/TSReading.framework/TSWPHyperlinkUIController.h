/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPHyperlinkUIController : NSObject <TSWPStorageObserver, UIPopoverControllerDelegate, UITextFieldDelegate> {
    TSWPEditingController * _cachedEditingController;
    TSWPChangeSession * _changeSession;
    bool  _closingDocument;
    NSString * _editedDisplayText;
    NSString * _editedURLString;
    TSWPHyperlinkField * _hyperlinkField;
    TSDRep<TSWPHyperlinkHostRepProtocol> * _hyperlinkRep;
    unsigned long long  _hyperlinkUISessionID;
    TSWPStorage * _observedStorage;
    NSString * _originalDisplayText;
    bool  _removeHyperlink;
    bool  _shouldMaintainKeyboardWhenEndingSession;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *editedDisplayText;
@property (nonatomic, retain) NSString *editedURLString;
@property (nonatomic, readonly) TSWPEditingController *editingController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) bool isCanvasInReadMode;
@property (nonatomic) bool shouldMaintainKeyboardWhenEndingSession;
@property (nonatomic, readonly) NSString *stringForDisplay;
@property (nonatomic, readonly) NSString *stringForURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewControllerForPresenting;

+ (id)defaultTableView;
+ (id)sharedHyperlinkUIController;

- (void)dealloc;
- (id)editedDisplayText;
- (id)editedURLString;
- (id)editingController;
- (void)endUISession;
- (bool)hasOpenSessionForHyperlinkField:(id)arg1;
- (bool)hasStartedSession;
- (void)hideHyperlinkHighlight;
- (void)i_openURLAction;
- (id)interactiveCanvasController;
- (bool)isCanvasInReadMode;
- (bool)isDisplayingHyperlinkUI;
- (int)p_UIState;
- (void)p_clearTextSelection;
- (void)p_initChangeSessionAuthorCreatedWithCommand:(id*)arg1;
- (void)p_selectHyperlinkField;
- (bool)p_shouldSetCanvasSelectionWhenDismissing;
- (bool)p_shouldSetTextSelectionWhenDismissing;
- (void)p_stopObservingStorage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_viewBoundsForField;
- (void)setEditedDisplayText:(id)arg1;
- (void)setEditedURLString:(id)arg1;
- (void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(bool)arg1;
- (void)setShouldMaintainKeyboardWhenEndingSession:(bool)arg1;
- (bool)shouldMaintainKeyboardWhenEndingSession;
- (void)showHyperlinkHighlight;
- (void)startUISessionForHyperlinkField:(id)arg1 inRep:(id)arg2;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)stringForDisplay;
- (id)stringForURL;
- (id)viewControllerForPresenting;
- (void)visit;

@end
