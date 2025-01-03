/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PPKQuickLookContentEditorViewController : PPKMarkupViewController <QuickLookContentEditor, _UIScrollViewScrollObserver> {
    PPKQuickLookBannerView * _bannerView;
    bool  _needsToRestoreAnnotationEditingMode;
    unsigned long long  _presentationMode;
}

@property (readonly) struct CGSize { double x1; double x2; } adjustedSourceImageSize;
@property (nonatomic, retain) NSUndoManager *akUndoManager;
@property (nonatomic) bool allEditingDisabled;
@property (nonatomic) bool allowsThumbnailViewPageReordering;
@property (nonatomic, readonly) AKController *annotationController;
@property (nonatomic) bool annotationEditingEnabled;
@property (nonatomic, retain) PPKQuickLookBannerView *bannerView;
@property (nonatomic, readonly) bool canEncryptDocument;
@property (nonatomic) bool centersIgnoringContentInsets;
@property (readonly) UIViewController<MUContentViewControllerProtocol> *contentViewController;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (nonatomic) unsigned long long currentPDFPageIndex;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <QuickLookContentEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool documentIsLocked;
@property bool encryptPrivateMetadata;
@property (nonatomic, readonly) NSString *filledInfoButtonGlyphName;
@property (nonatomic, readonly) UIFindInteraction *findInteraction;
@property (nonatomic) bool fixedThumbnailView;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (nonatomic) bool formFillingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostProcessBundleIdentifier;
@property (nonatomic, readonly) UIView *imageViewCombinedContentView;
@property (nonatomic, readonly) NSString *infoButtonGlyphName;
@property unsigned long long inkStyle;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (getter=isNavigationModeHorizontal, nonatomic) bool navigationModeHorizontal;
@property bool needsToRestoreAnnotationEditingMode;
@property (nonatomic, readonly) UTType *outputContentType;
@property (nonatomic, readonly) NSString *outputType;
@property (readonly) UIView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (readonly) PDFView *pdfView;
@property (nonatomic) bool pencilAlwaysDraws;
@property (nonatomic) unsigned long long presentationMode;
@property (getter=isShapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property (nonatomic) bool shouldEnterVisualSearchAfterNextAnalysis;
@property (nonatomic) bool shouldHighlightTextAndDDAfterNextAnalysis;
@property (nonatomic) bool shouldUpliftSubjectAfterNextAnalysis;
@property (nonatomic) bool showShareButtonInToolbar;
@property (nonatomic) bool showThumbnailViewForMultipage;
@property (readonly) Class superclass;
@property (getter=isThumbnailViewHidden, nonatomic) bool thumbnailViewHidden;
@property (nonatomic) long long thumbnailViewStyle;
@property (nonatomic, readonly) UIView *toolbar;
@property (getter=isToolbarHidden, nonatomic) bool toolbarHidden;
@property (nonatomic) long long toolbarPosition;
@property (nonatomic, readonly) UIView *transitioningView;

+ (struct CGSize { double x1; double x2; })_suggestedContentSizeForImageSource:(struct CGImageSource { }*)arg1;
+ (struct CGSize { double x1; double x2; })_suggestedContentSizeForPDF:(id)arg1;
+ (struct CGSize { double x1; double x2; })suggestedContentSizeForData:(id)arg1;
+ (struct CGSize { double x1; double x2; })suggestedContentSizeForURL:(id)arg1;

- (void).cxx_destruct;
- (bool)acceptSingleTouch:(id)arg1;
- (id)bannerView;
- (bool)canEncryptDocument;
- (bool)documentIsLocked;
- (id)filledInfoButtonGlyphName;
- (void)find:(id)arg1;
- (id)findInteraction;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)flattenImageForAnalysis;
- (bool)hasResultsForVisualSearch;
- (void)hideBanner;
- (id)infoButtonGlyphName;
- (void)infoButtonTapped;
- (bool)isBannerVisible;
- (bool)isInteractionActive;
- (bool)isVisualSearchEnabled;
- (void)markupContainerViewController:(id)arg1 contentFrameDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)markupContainerViewController:(id)arg1 detectedFormInContent:(bool)arg2 withAutofill:(bool)arg3;
- (void)markupContainerViewController:(id)arg1 didDismissViewControllerWithAnimation:(bool)arg2;
- (void)markupContainerViewController:(id)arg1 openFormFilling:(bool)arg2;
- (void)markupContainerViewController:(id)arg1 thumbnailViewDidCollapse:(bool)arg2;
- (void)markupContainerViewController:(id)arg1 updateChromeWithAnimation:(bool)arg2;
- (void)markupContainerViewController:(id)arg1 willPresentViewControllerWithAnimation:(bool)arg2;
- (void)markupContainerViewControllerActiveAnalysisInteractionTypesDidChange:(id)arg1;
- (void)markupContainerViewControllerAvailableAnalysisResultTypesDidChange:(id)arg1;
- (void)markupContainerViewControllerDidChangeContent:(id)arg1 enablingMarkup:(bool)arg2;
- (bool)needsToRestoreAnnotationEditingMode;
- (unsigned long long)presentationMode;
- (void)setBannerView:(id)arg1;
- (void)setNeedsToRestoreAnnotationEditingMode:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setShouldEnterVisualSearchAfterNextAnalysis:(bool)arg1;
- (void)setShouldHighlightTextAndDDAfterNextAnalysis:(bool)arg1;
- (void)setShouldUpliftSubjectAfterNextAnalysis:(bool)arg1;
- (void)setupAndStartImageAnalysisIfNeeded;
- (bool)shouldAllowEditingContents:(id)arg1;
- (bool)shouldEnterVisualSearchAfterNextAnalysis;
- (void)shouldHideMarkupOverlays:(bool)arg1 animated:(bool)arg2;
- (bool)shouldHighlightTextAndDDAfterNextAnalysis;
- (bool)shouldUpliftSubjectAfterNextAnalysis;
- (void)showBannerWithConfiguration:(id)arg1;
- (void)stopImageAnalysis;
- (id)transitioningView;
- (void)updateForFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)updateThumbnailView;
- (void)viewDidLoad;

@end
