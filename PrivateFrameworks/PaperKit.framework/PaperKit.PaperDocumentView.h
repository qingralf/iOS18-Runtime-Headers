/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PaperKit.PaperDocumentView : UIView <PDFPageOverlayViewProvider, PKToolPickerObserver, UIDocumentPickerDelegate> {
    void $__lazy_storage_$_paperDocumentViewProxy;
    void _allowsDocumentStructureEditing;
    void _insertingFromFileIndex;
    void _rulerHostingDelegate;
    void allowsDocumentStructureCopying;
    void automaticallyAdjustScaleFactor;
    void automaticallyApplySafeAreaInsetsToAxes;
    void calculateDocument;
    void calculateDocumentExpressionSolvingBehavior;
    void canEditVellumOpacity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  changedDeadline;
    void changedPages;
    void changedPagesTask;
    void context;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dataModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dataModelInitialState;
    void delegate;
    void docScanDismissBlock;
    void documentDelegate;
    void editingMode;
    void formAnalytics;
    void isCurrentlyLiveEditing;
    void isUpdatingPDFDocument;
    void liveEditingContinuations;
    void livePassThroughSubject;
    void liveStreamMessenger;
    void multipeerConnection;
    void nonDrawingToolMode;
    void pageOverlayViewProvider;
    void pageToOverlayMap;
    void participantDetailsDataSource;
    void passThroughSubject;
    void pdfDocument;
    void pdfView;
    void quadEditorController;
    void rulerHostView;
    void showParticipantCursors;
    void textualContextProvider;
    void thumbnailView;
    void tiledView;
    void toolPicker;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updateDocAsset;
    void updateDocTask;
    void validPasteUTTypeIdentifiers;
    void vellumOpacity;
    void viewControllerForPresentingUI;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewUUID;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (void)annotationPropertiesChanged:(id)arg1;
- (void)annotationsChanged:(id)arg1;
- (id)axCurrentPageView;
- (id)axDetectedFormElements;
- (void)axInsertFormFieldsIntoHierarchy;
- (void)axRemoveFormFieldFromHierarchy:(id)arg1;
- (void)axTapOnShapeView:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pageDidScroll:(id)arg1;
- (void)pdfSelectionChanged:(id)arg1;
- (id)pdfView:(id)arg1 overlayViewForPage:(id)arg2;
- (void)pdfView:(id)arg1 willDisplayOverlayView:(id)arg2 forPage:(id)arg3;
- (void)pdfView:(id)arg1 willEndDisplayingOverlayView:(id)arg2 forPage:(id)arg3;
- (void)toolPickerIsRulerActiveDidChange:(id)arg1;
- (void)toolPickerSelectedToolDidChange:(id)arg1;
- (void)toolPickerSelectedToolItemDidChange:(id)arg1;
- (void)toolPickerVisibilityDidChange:(id)arg1;

@end