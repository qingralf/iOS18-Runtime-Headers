/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolbarViewController_iOS : AKToolbarViewController <AKSignatureCreationControllerDelegate, AKSignaturesViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    AKFloatingAttributePickerViewController * _attributeToolbarViewController;
    NSLayoutConstraint * _attributeToolbarViewControllerConstraint;
    UIColor * _barTintColor;
    AKColorPickerViewController * _colorPickerPopoverViewController;
    UIView * _floatingAttributeToolbarContainer;
    UIBarButtonItem * _inkButton;
    UIBarButtonItem * _lineStyleButton;
    AKLineStylesViewController * _lineStylesViewController;
    UIBarButtonItem * _loupeButton;
    UIBarButtonItem * _redoButton;
    UIBarButtonItem * _richSketchButton;
    UIBarButtonItem * _signatureButton;
    UIAlertController * _signaturesAlertController;
    AKSignaturesViewController_iOS * _signaturesSheetViewController;
    UIBarButtonItem * _sketchButton;
    NSArray * _staticToolbarItems;
    UIBarButtonItem * _strokeColorButton;
    AKTextAttributesViewController * _textAttributesViewController;
    UIBarButtonItem * _textButton;
    UIBarButtonItem * _textStyleButton;
    UIColor * _tintColor;
    UIAlertController * _undoAlertController;
    UIBarButtonItem * _undoButton;
}

@property (nonatomic, retain) AKFloatingAttributePickerViewController *attributeToolbarViewController;
@property (nonatomic, retain) NSLayoutConstraint *attributeToolbarViewControllerConstraint;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, retain) AKColorPickerViewController *colorPickerPopoverViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *floatingAttributeToolbarContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heightIncludingAdditionalVisibleBars;
@property (nonatomic, retain) UIBarButtonItem *inkButton;
@property (nonatomic, retain) UIBarButtonItem *lineStyleButton;
@property (nonatomic, retain) AKLineStylesViewController *lineStylesViewController;
@property (nonatomic, retain) UIBarButtonItem *loupeButton;
@property (nonatomic, retain) UIBarButtonItem *redoButton;
@property (nonatomic, retain) UIBarButtonItem *richSketchButton;
@property (nonatomic, retain) UIBarButtonItem *signatureButton;
@property (nonatomic, retain) UIAlertController *signaturesAlertController;
@property (nonatomic, retain) AKSignaturesViewController_iOS *signaturesSheetViewController;
@property (nonatomic, retain) UIBarButtonItem *sketchButton;
@property (nonatomic, retain) NSArray *staticToolbarItems;
@property (nonatomic, retain) UIBarButtonItem *strokeColorButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) AKTextAttributesViewController *textAttributesViewController;
@property (nonatomic, retain) UIBarButtonItem *textButton;
@property (nonatomic, retain) UIBarButtonItem *textStyleButton;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIAlertController *undoAlertController;
@property (nonatomic, retain) UIBarButtonItem *undoButton;
@property (nonatomic, readonly) double visibleHeightOfAttributeBar;

- (void).cxx_destruct;
- (long long)_attributeTagForCurrentSelectionState;
- (id)_barButtonForToolbarType:(unsigned long long)arg1;
- (void)_buildBasicItems;
- (id)_buildUndoAlertController;
- (id)_createNewColorPickerToolbarButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)_createNewCustomViewToolbarButtonWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)_createNewToggleToolbarButtonWithImage:(id)arg1 tag:(long long)arg2 target:(id)arg3 selector:(SEL)arg4 autoUpdatesColor:(bool)arg5;
- (void)_deleteSelectedItems:(id)arg1;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)_doodleModeToolbarImage;
- (void)_layoutAttributeContainer;
- (void)_layoutToolbarForTraitCollection:(id)arg1;
- (bool)_legacyDoodlesEnabled;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)_redoButtonAction:(id)arg1;
- (void)_setupPassthroughViewsForViewController:(id)arg1;
- (void)_showColorPickerPopover:(id)arg1;
- (void)_showLineStylePopover:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showUndoAlert:(id)arg1;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)_undoAllButtonAction:(id)arg1;
- (void)_undoButtonAction:(id)arg1;
- (void)_undoLongPressAction:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (void)_updateToggleButton:(id)arg1 withTraitCollection:(id)arg2;
- (bool)_validateUndoButton;
- (unsigned long long)_workaroundToolbarPopoverPositioningBug26744300;
- (id)attributeToolbarViewController;
- (id)attributeToolbarViewControllerConstraint;
- (id)barTintColor;
- (id)colorPickerPopoverViewController;
- (void)dealloc;
- (void)dismissAttributeToolbarForSelectedAnnotations;
- (void)dismissAttributeToolbarImmediately;
- (void)dismissPresentedPopovers;
- (id)floatingAttributeToolbarContainer;
- (double)heightIncludingAdditionalVisibleBars;
- (id)initWithController:(id)arg1;
- (id)inkButton;
- (bool)isPresentingPopover;
- (bool)isPresentingPopovers;
- (id)lineStyleButton;
- (id)lineStylesViewController;
- (void)loadView;
- (id)loupeButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (id)redoButton;
- (void)revalidateItems;
- (id)richSketchButton;
- (void)setAttributeToolbarViewController:(id)arg1;
- (void)setAttributeToolbarViewControllerConstraint:(id)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setColorPickerPopoverViewController:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setFloatingAttributeToolbarContainer:(id)arg1;
- (void)setInkButton:(id)arg1;
- (void)setLineStyleButton:(id)arg1;
- (void)setLineStylesViewController:(id)arg1;
- (void)setLoupeButton:(id)arg1;
- (void)setRedoButton:(id)arg1;
- (void)setRichSketchButton:(id)arg1;
- (void)setSignatureButton:(id)arg1;
- (void)setSignaturesAlertController:(id)arg1;
- (void)setSignaturesSheetViewController:(id)arg1;
- (void)setSketchButton:(id)arg1;
- (void)setStaticToolbarItems:(id)arg1;
- (void)setStrokeColorButton:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)setTextAttributesViewController:(id)arg1;
- (void)setTextButton:(id)arg1;
- (void)setTextStyleButton:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUndoAlertController:(id)arg1;
- (void)setUndoButton:(id)arg1;
- (void)showAttributeToolbarForSelectedAnnotations:(id)arg1 andToolMode:(unsigned long long)arg2;
- (id)signatureButton;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (id)signaturesAlertController;
- (id)signaturesSheetViewController;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)signaturesViewControllerEnterSignatureMode:(id)arg1;
- (id)sketchButton;
- (id)staticToolbarItems;
- (id)strokeColorButton;
- (void)syncUIToSelectedColor;
- (id)textAttributesViewController;
- (id)textButton;
- (id)textStyleButton;
- (id)tintColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoAlertController;
- (id)undoButton;
- (double)visibleHeightOfAttributeBar;

@end
