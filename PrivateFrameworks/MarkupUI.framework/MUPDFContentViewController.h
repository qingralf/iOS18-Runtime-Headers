/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFContentViewController : MUContentViewController <MUContentViewControllerProtocol, PDFAKControllerDelegateProtocol, PDFDocumentDelegate, PDFThumbnailContextMenuDelegate, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver> {
    bool  _allowsThumbnailViewPageReordering;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedThumnailViewInsets;
    bool  _constraintsAreHorizontal;
    bool  _didSetup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    UIScreenEdgePanGestureRecognizer * _edgePanGestureRecognizer;
    bool  _fixedThumbnailView;
    bool  _forcesPDFViewTopAlignment;
    unsigned long long  _inkStyle;
    bool  _navigationModeHorizontal;
    MUPDFPageLabelView * _pageLabelView;
    UITapGestureRecognizer * _pageLabelViewTapGestureRecognizer;
    PDFDocument * _pdfDocument;
    PDFView * _pdfView;
    NSLayoutConstraint * _pdfViewLeadingConstraint;
    UIView * _scrollerBackgroundView;
    bool  _shouldShowThumbnailView;
    bool  _showsThumbnailView;
    NSArray * _sourceContentReplacedAnnotationMaps;
    PDFThumbnailView * _thumbnailView;
    UIView * _thumbnailViewHolder;
    NSArray * _thumbnailViewHolderConstraints;
    NSLayoutConstraint * _thumbnailViewHolderRevealConstraint;
    NSLayoutConstraint * _thumbnailViewHolderWidthConstraint;
    NSLayoutConstraint * _thumbnailViewLeadingConstraint;
    long long  _thumbnailViewStyle;
    bool  _viewIsTransitioningBetweenSizes;
    PDFPage * _viewTransitionPageToCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _viewTransitionPointOnPageToCenter;
    bool  _viewTransitionPreviousAutoscalingState;
    double  _viewTransitionPreviousScale;
    NSLayoutConstraint * pageLabelViewSideConstraint;
    NSLayoutConstraint * pageLabelViewTopConstraint;
}

@property (nonatomic) bool allowsThumbnailViewPageReordering;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cachedThumnailViewInsets;
@property (nonatomic, readonly) bool canEditContent;
@property (nonatomic) bool centersIgnoringContentInsets; /* unknown property attribute: ? */
@property bool constraintsAreHorizontal;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long defaultToolTag;
@property (readonly, copy) NSString *description;
@property bool didSetup;
@property (nonatomic, readonly) NSString *documentUnlockedWithPassword;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) bool fixedThumbnailView;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic) bool navigationModeHorizontal;
@property (readonly) unsigned long long pageCount; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (retain) PDFView *pdfView;
@property (retain) NSLayoutConstraint *pdfViewLeadingConstraint;
@property (retain) UIView *scrollerBackgroundView;
@property (nonatomic) bool shouldShowThumbnailView;
@property (nonatomic) bool showsThumbnailView;
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property (readonly) Class superclass;
@property (retain) PDFThumbnailView *thumbnailView;
@property (retain) UIView *thumbnailViewHolder;
@property (retain) NSArray *thumbnailViewHolderConstraints;
@property (retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint;
@property (retain) NSLayoutConstraint *thumbnailViewHolderWidthConstraint;
@property (retain) NSLayoutConstraint *thumbnailViewLeadingConstraint;
@property (nonatomic) long long thumbnailViewStyle;
@property bool viewIsTransitioningBetweenSizes;
@property PDFPage *viewTransitionPageToCenter;
@property struct CGPoint { double x1; double x2; } viewTransitionPointOnPageToCenter;
@property bool viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale;

- (void).cxx_destruct;
- (bool)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (bool)_canShowWhileLocked;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compensatingAffineTransformForPage:(id)arg1;
- (void)_createPDFView;
- (struct CGSize { double x1; double x2; })_medianSizeForCurrentDocumentInPDFViewWithGetter:(id /* block */)arg1;
- (bool)_pageLabelExistAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_removePageLabelViewConstraints;
- (void)_teardownPDFViewIfNecessary;
- (struct CGSize { double x1; double x2; })_thumbnailViewCellSize;
- (bool)_thumbnailViewExistAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_thumbnailViewWidth;
- (bool)_updateCachedThumbnailViewInsetsDidChangeLeftOrRight;
- (void)_updateMinMaxZoomFactor;
- (void)_updatePDFViewDisplayMode;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(bool)arg2;
- (void)_updateThumbnailView;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderBackgroundColor;
- (void)_updateThumbnailViewHolderConstraints;
- (void)_updateThumbnailViewHolderVisibility;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (bool)acceptSingleTouch:(id)arg1;
- (bool)allowsThumbnailViewPageReordering;
- (void)annotationController:(id)arg1 detectedEditOfType:(unsigned long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cachedThumnailViewInsets;
- (bool)canEditContent;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canShowPageViewLabel;
- (bool)constraintsAreHorizontal;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentSnapshot;
- (id)contentViewScrollView;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)dealloc;
- (long long)defaultToolTag;
- (bool)didSetup;
- (bool)documentCanBeEdited:(id)arg1;
- (id)documentUnlockedWithPassword;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)edgeSwipeGestureRecognized:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)find:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (bool)fixedThumbnailView;
- (bool)forcesPDFViewTopAlignment;
- (void)highlight:(id)arg1;
- (struct CGSize { double x1; double x2; })idealContentSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1 windowDecorationSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;
- (unsigned long long)inkStyle;
- (bool)isTouchInThumbnailView:(id)arg1;
- (void)loadContentWithCompletionBlock:(id /* block */)arg1;
- (id)menuElementsForPage:(id)arg1;
- (bool)navigationModeHorizontal;
- (unsigned long long)pageCount;
- (id)pageLabelView;
- (void)pageLabelViewTapped:(id)arg1;
- (id)pdfDocument;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (void)pdfScrollViewWillBeginDragging:(id)arg1;
- (id)pdfView;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (id)pdfViewLeadingConstraint;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)removeThumbnailViewHolderConstraints;
- (void)resetPageLabelFadeOutTimer;
- (id)scrollerBackgroundView;
- (void)setAllowsThumbnailViewPageReordering:(bool)arg1;
- (void)setCachedThumnailViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setConstraintsAreHorizontal:(bool)arg1;
- (void)setDidSetup:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFixedThumbnailView:(bool)arg1;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setPdfView:(id)arg1;
- (void)setPdfViewLeadingConstraint:(id)arg1;
- (void)setScrollerBackgroundView:(id)arg1;
- (void)setShouldShowThumbnailView:(bool)arg1;
- (void)setShowsThumbnailView:(bool)arg1;
- (void)setSourceContentReplacedAnnotationMaps:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setThumbnailViewHolder:(id)arg1;
- (void)setThumbnailViewHolderConstraints:(id)arg1;
- (void)setThumbnailViewHolderRevealConstraint:(id)arg1;
- (void)setThumbnailViewHolderWidthConstraint:(id)arg1;
- (void)setThumbnailViewLeadingConstraint:(id)arg1;
- (void)setThumbnailViewStyle:(long long)arg1;
- (void)setViewIsTransitioningBetweenSizes:(bool)arg1;
- (void)setViewTransitionPageToCenter:(id)arg1;
- (void)setViewTransitionPointOnPageToCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewTransitionPreviousAutoscalingState:(bool)arg1;
- (void)setViewTransitionPreviousScale:(double)arg1;
- (void)setup;
- (bool)shouldShowAnnotationsOfType:(id)arg1;
- (bool)shouldShowThumbnailView;
- (bool)showsThumbnailView;
- (id)sourceContentReplacedAnnotationMaps;
- (void)teardown;
- (id)thumbnailView;
- (id)thumbnailViewHolder;
- (id)thumbnailViewHolderConstraints;
- (id)thumbnailViewHolderRevealConstraint;
- (id)thumbnailViewHolderWidthConstraint;
- (id)thumbnailViewLeadingConstraint;
- (long long)thumbnailViewStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewIsTransitioningBetweenSizes;
- (void)viewSafeAreaInsetsDidChange;
- (id)viewTransitionPageToCenter;
- (struct CGPoint { double x1; double x2; })viewTransitionPointOnPageToCenter;
- (bool)viewTransitionPreviousAutoscalingState;
- (double)viewTransitionPreviousScale;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRectInCoordinateSpace:(id)arg1;

@end
