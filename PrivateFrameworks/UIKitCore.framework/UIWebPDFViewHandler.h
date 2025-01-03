/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebPDFViewHandler : NSObject <UIDocumentPasswordViewDelegate, UIWebPDFViewDelegate, UIWebPDFViewPrivateDelegate, _UIRotatingAlertControllerDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate> {
    UIColor * _backgroundColorForUnRenderedContent;
    bool  _cachedScrollViewShadowsState;
    bool  _hideActivityIndicatorForUnRenderedContent;
    bool  _hidePageViewsUntilReadyToRender;
    double  _initialZoomScale;
    WebPDFNSNumberFormatter * _labelViewFormatter;
    NSDictionary * _linkActionInfo;
    _UIRotatingAlertController * _linkActionSheet;
    NSArray * _linkActions;
    _UIHighlightView * _linkHighlightView;
    UIWebPDFLabelView * _pageLabelView;
    UIDocumentPasswordView * _passwordEntryView;
    NSObject<UIWebPDFViewHandlerDelegate> * _pdfHandlerDelegate;
    UIWebPDFView * _pdfView;
    struct _PDFHistoryItem { 
        bool restorePending; 
        bool isInitialScale; 
        double zoomScale; 
        struct CGPoint { 
            double x; 
            double y; 
        } contentOffset; 
    }  _pendingHistoryItemRestore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectOfInterest;
    bool  _rectOfInterestConsidersHeight;
    bool  _scalesPageToFit;
    NSMapTable * _searchControllers;
    bool  _showPageLabels;
    bool  _showsShadowsForHTMLContent;
}

@property (nonatomic, retain) UIColor *backgroundColorForUnRenderedContent;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *frontView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideActivityIndicatorForUnRenderedContent;
@property (nonatomic) bool hidePageViewsUntilReadyToRender;
@property (nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate;
@property (nonatomic, readonly) UIWebPDFView *pdfView;
@property (nonatomic) bool scalesPageToFit;
@property (nonatomic) bool showPageLabels;
@property (readonly) Class superclass;

- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (id)_actionForType:(int)arg1;
- (id)_actionForType:(int)arg1 withActionInfo:(id)arg2;
- (id)_actionsForInteractionInfo:(id)arg1;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)_adjustZoomScalesForScrollViewInternal:(id)arg1;
- (void)_completeLinkClickWithURL:(id)arg1;
- (void)_completeLinkClickWithURLString:(id)arg1;
- (void)_createPDFViewIfNeeded:(id)arg1;
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForDocumentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_getLabelViewFormatter;
- (id)_getPDFDocumentViewForWebView:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_notifyDelegateDidClickLink:(id)arg1;
- (void)_notifyDelegateWillClickLink:(id)arg1;
- (double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2;
- (void)_postdidDetermineDocumentBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPasswordView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPdfView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg1;
- (void)_replacePDFViewIfPresentWithWebDocView:(id)arg1;
- (void)_resultRects:(id)arg1 andResultViews:(id)arg2 forSearchResult:(id)arg3 inViewCoordinates:(id)arg4;
- (id)_scroller:(id)arg1;
- (void)_setSearchControllerDocumentToSearch:(id)arg1;
- (void)_showLinkSheet:(id)arg1;
- (void)_showPasswordEntryViewForFile:(id)arg1;
- (void)_showPasswordErrorAlert;
- (void)_updateViewHierarchyForDocumentView:(id)arg1 ignoreIfSame:(bool)arg2;
- (unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)adjustZoomScalesForScrollView;
- (id)backgroundColorForUnRenderedContent;
- (void)clearActionSheet;
- (void)clearAllViews;
- (void)clearLinkHighlight;
- (void)clearPageLabel;
- (void)clearSearchControllerForHighlighter:(id)arg1;
- (bool)considerHeightForDoubleTap;
- (bool)considerHeightOfRectOfInterestForRotation;
- (id)contentView;
- (id)createLinkHighlight;
- (id)createPageLabel;
- (double)currentDocumentScale;
- (void)dealloc;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didDetermineDocumentBounds:(id)arg1;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didScroll:(id)arg1;
- (struct { double x1; double x2; double x3; })doubleTapScalesForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)enclosingScrollView;
- (void)ensureCorrectPagesAreInstalled:(bool)arg1;
- (id)findOnPageHighlighter;
- (id)frontView;
- (void)handleLinkClick:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)handleLongPressOnLink:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)handleScrollToAnchor:(id)arg1;
- (double)heightToKeepVisible;
- (bool)hideActivityIndicatorForUnRenderedContent;
- (bool)hidePageViewsUntilReadyToRender;
- (void)highlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hostViewForSheet:(id)arg1;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet:(id)arg1;
- (double)minimumScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)minimumVerticalContentOffset;
- (id)passwordForPDFView:(id)arg1;
- (id)pdfHandlerDelegate;
- (id)pdfView;
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forPoint:(struct CGPoint { double x1; double x2; })arg3 considerHeight:(bool)arg4;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForRotation;
- (void)removeViewFromSuperview;
- (void)resetZoom:(id)arg1;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)restoreStateFromPendingHistoryItem;
- (void)revealSearchResult:(id)arg1 andZoomIn:(bool)arg2;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (struct { double x1; double x2; double x3; })scalesForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)scalesPageToFit;
- (void)scrollToPageNumber:(long long)arg1 animate:(bool)arg2;
- (id)searchControllerForHighlighter:(id)arg1;
- (void)setBackgroundColorForUnRenderedContent:(id)arg1;
- (void)setHideActivityIndicatorForUnRenderedContent:(bool)arg1;
- (void)setHidePageViewsUntilReadyToRender:(bool)arg1;
- (void)setPdfHandlerDelegate:(id)arg1;
- (void)setScalesPageToFit:(bool)arg1;
- (void)setShowPageLabels:(bool)arg1;
- (bool)showPageLabels;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(struct { double x1; double x2; double x3; })arg2;
- (void)updatePageNumberLabelWithUserScrolling:(bool)arg1 animated:(bool)arg2;
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 restoringZoomScale:(double)arg2 andScrollPt:(struct CGPoint { double x1; double x2; })arg3;
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;
- (void)updateViewSettings;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (double)zoomedDocumentScale;

@end
