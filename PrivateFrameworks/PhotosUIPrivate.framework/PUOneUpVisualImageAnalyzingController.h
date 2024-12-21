/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUOneUpVisualImageAnalyzingController : NSObject <PUAssetViewModelChangeObserver, PUViewModelChangeObserver> {
    PUAssetViewModel * _assetViewModel;
    PUBrowsingViewModel * _browsingViewModel;
    bool  _canPerformAnalysis;
    int  _currentAnalysisRequestID;
    bool  _isEnabled;
    NSObject<OS_dispatch_queue> * _loadVideoFrameQueue;
    PXUpdater * _updater;
    long long  _videoFrameRequestID;
    PXVisualIntelligenceManager * _visualImageManager;
}

@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) bool canPerformAnalysis;
@property (nonatomic) int currentAnalysisRequestID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadVideoFrameQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic) long long videoFrameRequestID;
@property (nonatomic, readonly) PXVisualIntelligenceManager *visualImageManager;

+ (void)_clearImageAnalysisFromAssetViewModel:(id)arg1;
+ (void)_setVisualImageAnalysis:(id)arg1 forAssetViewModel:(id)arg2;
+ (bool)canPerformAnalysisWithEnabled:(bool)arg1 browsingViewModel:(id)arg2 assetViewModel:(id)arg3;

- (void).cxx_destruct;
- (void)_cancelCurrentAnalysis;
- (void)_cancelVKImageAnalysisForAssetViewModel:(id)arg1;
- (void)_discardCurrentAnalysis;
- (void)_handleAnalysisResult:(id)arg1 error:(id)arg2 forAssetViewModel:(id)arg3 requestID:(int)arg4;
- (void)_handleAssetViewModelChange:(id)arg1;
- (void)_handleBrowsingViewModelChange:(id)arg1;
- (void)_handleVideoFrameImage:(id)arg1 pixelBufferRef:(struct __CVBuffer { }*)arg2 preferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 forAssetViewModel:(id)arg4 requestID:(long long)arg5;
- (void)_invalidateAnalysisSuspended;
- (void)_invalidateAssetViewModel;
- (void)_invalidateCanPerformAnalysis;
- (void)_invalidateCurrentAnalysis;
- (void)_requestAnalysisForVideoFrameOfAssetViewModel:(id)arg1 asset:(id)arg2 playerLayer:(id)arg3 preferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (void)_requestVKImageAnalysisByCurrentVideoFrameForAssetViewModel:(id)arg1;
- (void)_requestVKImageAnalysisForAssetViewModel:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateAnalysisSuspended;
- (void)_updateAssetViewModel;
- (void)_updateCanPerformAnalysis;
- (void)_updateCurrentAnalysis;
- (id)assetViewModel;
- (id)browsingViewModel;
- (bool)canPerformAnalysis;
- (int)currentAnalysisRequestID;
- (id)init;
- (id)initWithBrowsingViewModel:(id)arg1;
- (bool)isEnabled;
- (id)loadVideoFrameQueue;
- (void)setAssetViewModel:(id)arg1;
- (void)setCanPerformAnalysis:(bool)arg1;
- (void)setCurrentAnalysisRequestID:(int)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setVideoFrameRequestID:(long long)arg1;
- (id)updater;
- (long long)videoFrameRequestID;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)visualImageManager;

@end