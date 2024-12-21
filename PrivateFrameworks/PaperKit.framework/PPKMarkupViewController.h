/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PPKMarkupViewController : UIViewController <MarkupViewControllerPrivateProtocol, MarkupViewControllerProtocol, PPKMarkupContainerViewControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _adjustedSourceImageSize;
    NSUndoManager * _akUndoManager;
    bool  _allEditingDisabled;
    bool  _allowsThumbnailViewPageReordering;
    AKController * _annotationController;
    bool  _centersIgnoringContentInsets;
    UIViewController<MUContentViewControllerProtocol> * _contentViewController;
    unsigned long long  _currentPDFPageIndex;
    <MarkupViewControllerDelegate> * _delegate;
    bool  _encryptPrivateMetadata;
    bool  _fixedThumbnailView;
    bool  _forcesPDFViewTopAlignment;
    bool  _formFillingEnabled;
    NSArray * _fullViewLayoutConstraints;
    NSString * _hostProcessBundleIdentifier;
    UIView * _imageViewCombinedContentView;
    unsigned long long  _inkStyle;
    PPKMarkupContainerViewController * _markupContainerVC;
    UINavigationBar * _navBar;
    bool  _navigationModeHorizontal;
    bool  _shapeDetectionEnabled;
    bool  _showShareButtonInToolbar;
    UTType * _sourceContentType;
    bool  _thumbnailViewHidden;
    long long  _thumbnailViewStyle;
    UIView * _toolbar;
    bool  _toolbarHidden;
    long long  _toolbarPosition;
}

@property (nonatomic, readonly) UIFindInteraction *_findInteraction;
@property (setter=_setFindInteractionEnabled:, nonatomic) bool _findInteractionEnabled;
@property (readonly) struct CGSize { double x1; double x2; } adjustedSourceImageSize;
@property (nonatomic, retain) NSUndoManager *akUndoManager;
@property (nonatomic) bool allEditingDisabled;
@property (nonatomic) bool allowsThumbnailViewPageReordering;
@property (nonatomic, readonly) AKController *annotationController;
@property (nonatomic) bool annotationEditingEnabled;
@property (nonatomic) bool centersIgnoringContentInsets;
@property (readonly) UIViewController<MUContentViewControllerProtocol> *contentViewController;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (nonatomic) unsigned long long currentPDFPageIndex;
@property (nonatomic) <MarkupViewControllerDelegate> *delegate;
@property bool encryptPrivateMetadata;
@property (nonatomic) bool fixedThumbnailView;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (nonatomic) bool formFillingEnabled;
@property (nonatomic, retain) NSArray *fullViewLayoutConstraints;
@property (nonatomic, copy) NSString *hostProcessBundleIdentifier;
@property (nonatomic, copy) NSString *imageDescription;
@property (nonatomic, readonly) UIView *imageViewCombinedContentView;
@property unsigned long long inkStyle;
@property (nonatomic, retain) PPKMarkupContainerViewController *markupContainerVC;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (getter=isNavigationModeHorizontal, nonatomic) bool navigationModeHorizontal;
@property (nonatomic, readonly) UTType *outputContentType;
@property (nonatomic, readonly) NSString *outputType;
@property (readonly) UIView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (readonly) PDFView *pdfView;
@property (nonatomic) bool pencilAlwaysDraws;
@property (getter=isShapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property (nonatomic) bool showShareButtonInToolbar;
@property (nonatomic) bool showThumbnailViewForMultipage;
@property (nonatomic, copy) UTType *sourceContentType;
@property (getter=isThumbnailViewHidden, nonatomic) bool thumbnailViewHidden;
@property (nonatomic) long long thumbnailViewStyle;
@property (nonatomic, readonly) UIView *toolbar;
@property (getter=isToolbarHidden, nonatomic) bool toolbarHidden;
@property (nonatomic) long long toolbarPosition;

+ (id)_contentTypeForData:(id)arg1;
+ (id)_contentTypeForImageSource:(struct CGImageSource { }*)arg1;
+ (id)_contentTypeForURL:(id)arg1;
+ (bool)_isInLowMemoryEnvironment;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (bool)hasPrivateImageMetadata:(id)arg1;
+ (id)supportedOutputTypes;

- (void).cxx_destruct;
- (id)_findInteraction;
- (bool)_findInteractionEnabled;
- (bool)_hasPDFContent;
- (id)_markupBlackColor;
- (void)_ppkMarkupViewControllerCommonInit;
- (void)_setFindInteractionEnabled:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })activeMinimumContentInsetsForTraitCollection:(id)arg1;
- (void)adjustContentInsetsForBars;
- (struct CGSize { double x1; double x2; })adjustedSourceImageSize;
- (id)akUndoManager;
- (bool)allEditingDisabled;
- (bool)allowsThumbnailViewPageReordering;
- (id)annotationController;
- (bool)annotationEditingEnabled;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)cancel:(id)arg1;
- (bool)centersIgnoringContentInsets;
- (id)contentViewController;
- (id)contentViewScrollView;
- (id)createArchivedModelData;
- (unsigned long long)currentPDFPageIndex;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(bool)arg1 error:(id*)arg2;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)delegate;
- (void)documentDidCloseTeardown;
- (void)done:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (bool)encryptPrivateMetadata;
- (void)finalizeCrop;
- (bool)fixedThumbnailView;
- (bool)forcesPDFViewTopAlignment;
- (bool)formFillingEnabled;
- (void)fullTeardown;
- (id)fullViewLayoutConstraints;
- (void)horizontalSizeClassDidChange;
- (id)hostProcessBundleIdentifier;
- (id)imageDescription;
- (id)imageViewCombinedContentView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageAnalysisEnabled:(bool)arg1;
- (unsigned long long)inkStyle;
- (bool)isNavigationModeHorizontal;
- (bool)isShapeDetectionEnabled;
- (bool)isThumbnailViewHidden;
- (bool)isToolbarHidden;
- (bool)isTouchInThumbnailView:(id)arg1;
- (void)loadWithData:(id)arg1 archivedModelData:(id)arg2 placeholderImage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadWithURL:(id)arg1 archivedModelData:(id)arg2 placeholderImage:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)markupContainerVC;
- (bool)markupContainerViewController:(id)arg1 shouldOpenLink:(id)arg2;
- (void)markupContainerViewController:(id)arg1 wantsToEnterFullscreen:(bool)arg2;
- (id)navBar;
- (bool)needsToolPickerContentInsetActiveForTraitCollection:(id)arg1;
- (id)outputContentType;
- (id)outputType;
- (id)pageLabelView;
- (id)pdfDocument;
- (id)pdfView;
- (bool)pencilAlwaysDraws;
- (void)redo:(id)arg1;
- (void)resetPageLabelFadeOutTimer;
- (bool)resignFirstResponder;
- (void)revert;
- (void)setAkUndoManager:(id)arg1;
- (void)setAllEditingDisabled:(bool)arg1;
- (void)setAllowsThumbnailViewPageReordering:(bool)arg1;
- (void)setAnnotationEditingEnabled:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCentersIgnoringContentInsets:(bool)arg1;
- (void)setCurrentPDFPageIndex:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setEncryptPrivateMetadata:(bool)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setFixedThumbnailView:(bool)arg1;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setFormFillingEnabled:(bool)arg1;
- (void)setFormFillingEnabled:(bool)arg1 didUseBanner:(bool)arg2;
- (void)setFullViewLayoutConstraints:(id)arg1;
- (void)setHostProcessBundleIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageDescription:(id)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setMarkupContainerVC:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setPencilAlwaysDraws:(bool)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (void)setShowShareButtonInToolbar:(bool)arg1;
- (void)setShowThumbnailViewForMultipage:(bool)arg1;
- (void)setSourceContentType:(id)arg1;
- (void)setThumbnailViewHidden:(bool)arg1;
- (void)setThumbnailViewStyle:(long long)arg1;
- (void)setToolbarHidden:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setToolbarPosition:(long long)arg1;
- (bool)shouldAllowEditingContents:(id)arg1;
- (bool)showShareButtonInToolbar;
- (bool)showThumbnailViewForMultipage;
- (id)sourceContentType;
- (long long)thumbnailViewStyle;
- (id)toolbar;
- (bool)toolbarHidden;
- (long long)toolbarPosition;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateContentInsets;
- (bool)validateRedo:(id)arg1;
- (bool)validateUndo:(id)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)willBeginLoadingNewDocument;
- (bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(bool)arg2 contentType:(id)arg3 error:(id*)arg4;
- (void)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(bool)arg2 contentType:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(bool)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end