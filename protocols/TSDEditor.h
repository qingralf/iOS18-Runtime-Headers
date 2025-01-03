/* Generated by RuntimeBrowser.
 */

@protocol TSDEditor <NSObject>

@required

- (TSKDocumentRoot *)documentRoot;

@optional

- (void)addContextualMenuItemsToArray:(NSMutableArray *)arg1;
- (bool)allowAutomaticTextEditingToBeginWithDifferentEditor;
- (void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canAddOrShowComment;
- (bool)canBeginEditingRepOnDoubleTap:(TSDRep *)arg1;
- (bool)canBeginPathEditing;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (NSSet *)canvasCoachingTips;
- (void)clearSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coachingTipManager:(APDCoachingTipsManager *)arg1 coachingTipView:(APDCoachingTipView *)arg2 canvasRectForKey:(NSString *)arg3;
- (void)copy:(id)arg1;
- (void)customAction5:(id)arg1;
- (void)customAction6:(id)arg1;
- (void)customAction7:(id)arg1;
- (void)customAction8:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)didBecomeCurrentEditor;
- (void)didBecomeTextInputEditor;
- (void)didEnterBackground;
- (void)didResignTextInputEditor;
- (<TSKSearchReference> *)editingSearchReference;
- (NSArray *)extraMenuItems;
- (bool)ignoreSetSelection:(TSKSelection *)arg1 onInfo:(NSObject<TSDInfo> *)arg2;
- (NSString *)inspectorTabTipKey;
- (NSArray *)level2InspectorViewControllers;
- (<TSKModel> *)model;
- (void)paste:(id)arg1;
- (bool)readyToAcceptSelection:(TSKSelection *)arg1 onInfo:(NSObject<TSDInfo> *)arg2;
- (void)reverseDirection:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (NSSet *)selectedObjectsSupportingConnectionLineAttributes;
- (NSSet *)selectedObjectsSupportingEndpoints;
- (NSSet *)selectedObjectsSupportingFill;
- (NSSet *)selectedObjectsSupportingOpacity;
- (NSSet *)selectedObjectsSupportingReflection;
- (NSSet *)selectedObjectsSupportingResize;
- (NSSet *)selectedObjectsSupportingShadow;
- (NSSet *)selectedObjectsSupportingShrinkTextToFit;
- (NSSet *)selectedObjectsSupportingSmartShapeAttributes;
- (NSSet *)selectedObjectsSupportingStroke;
- (NSSet *)selectedObjectsSupportingTextInset;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg1;
- (void)setSelection:(TSKSelection *)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionWithSearchReference:(id <TSKSearchReference>)arg1;
- (bool)shouldEndEditingToBeginEditingRep:(TSDRep *)arg1;
- (bool)shouldProhibitAction:(SEL)arg1;
- (bool)suppressAutozoom;
- (double)targetPointSizeForSelectionWithViewScale:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForEditMenu;
- (void)teardown;
- (NSString *)topLevelInspectorAutosaveName;
- (struct CGSize { double x1; double x2; })topLevelInspectorPreferredPopoverSize;
- (NSArray *)topLevelInspectorViewControllers;
- (double)viewScaleForSelectionWithTargetPointSize:(double)arg1;
- (bool)wantsToBePushedBackOntoStackForSelection:(TSKSelection<TSDCanvasSelection> *)arg1;
- (void)willEnterForeground;
- (void)willResignCurrentEditor;
- (void)willResignTextInputEditor;
- (UIViewController *)wrapInspectorController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomRectForSelection:(TSKSelection *)arg1;

@end
