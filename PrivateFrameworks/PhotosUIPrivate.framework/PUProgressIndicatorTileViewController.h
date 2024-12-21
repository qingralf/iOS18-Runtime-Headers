/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUAssetViewModelChangeObserver, PUViewModelChangeObserver, _PUProgressIndicatorTileViewDelegate> {
    UILabel * __debugProgressLabel;
    bool  __didStartProgressLogging;
    UIButton * __errorButton;
    bool  __isProgressViewVisible;
    bool  __needsUpdateProgressViewStyle;
    bool  __needsUpdateSizeClass;
    bool  __needsUpdateStatus;
    bool  __needsUpdateStatusViews;
    PLRoundProgressView * __progressView;
    long long  __progressViewStyle;
    long long  __sizeClass;
    PXOperationStatus * __status;
    PUAssetSharedViewModel * _assetSharedViewModel;
    PUAssetViewModel * _assetViewModel;
    PUBrowsingViewModel * _browsingViewModel;
    id /* block */  _errorPresenter;
    bool  _isProgressViewAnimatingOut;
}

@property (setter=_setDebugProgressLabel:, nonatomic, retain) UILabel *_debugProgressLabel;
@property (getter=_didStartProgressLogging, setter=_setDidStartProgressLogging:, nonatomic) bool _didStartProgressLogging;
@property (setter=_setErrorButton:, nonatomic, retain) UIButton *_errorButton;
@property (setter=_setProgressViewVisible:, nonatomic) bool _isProgressViewVisible;
@property (setter=_setNeedsUpdateProgressViewStyle:, nonatomic) bool _needsUpdateProgressViewStyle;
@property (setter=_setNeedsUpdateSizeClass:, nonatomic) bool _needsUpdateSizeClass;
@property (setter=_setNeedsUpdateStatus:, nonatomic) bool _needsUpdateStatus;
@property (setter=_setNeedsUpdateStatusViews:, nonatomic) bool _needsUpdateStatusViews;
@property (nonatomic, readonly) NSObject<OS_os_log> *_progressLog;
@property (setter=_setProgressView:, nonatomic, retain) PLRoundProgressView *_progressView;
@property (setter=_setProgressViewStyle:, nonatomic) long long _progressViewStyle;
@property (setter=_setSizeClass:, nonatomic) long long _sizeClass;
@property (setter=_setStatus:, nonatomic, copy) PXOperationStatus *_status;
@property (nonatomic, retain) PUAssetSharedViewModel *assetSharedViewModel;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorPresenter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isProgressViewAnimatingOut;
@property (readonly) Class superclass;

+ (id)_loadErrorIconForSizeClass:(long long)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })progressIndicatorIconInsetsForSizeClass:(long long)arg1;
+ (struct CGSize { double x1; double x2; })progressIndicatorIconSizeForSizeClass:(long long)arg1;
+ (struct CGSize { double x1; double x2; })progressIndicatorTileSizeForSizeClass:(long long)arg1;

- (void).cxx_destruct;
- (id)_debugProgressLabel;
- (bool)_didStartProgressLogging;
- (id)_errorButton;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleErrorButtonTap:(id)arg1;
- (void)_invalidateProgressViewStyle;
- (void)_invalidateSizeClass;
- (void)_invalidateStatus;
- (void)_invalidateStatusViews;
- (bool)_isProgressViewVisible;
- (bool)_needsUpdate;
- (bool)_needsUpdateProgressViewStyle;
- (bool)_needsUpdateSizeClass;
- (bool)_needsUpdateStatus;
- (bool)_needsUpdateStatusViews;
- (id)_progressLog;
- (id)_progressView;
- (long long)_progressViewStyle;
- (void)_setDebugProgressLabel:(id)arg1;
- (void)_setDidStartProgressLogging:(bool)arg1;
- (void)_setErrorButton:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateProgressViewStyle:(bool)arg1;
- (void)_setNeedsUpdateSizeClass:(bool)arg1;
- (void)_setNeedsUpdateStatus:(bool)arg1;
- (void)_setNeedsUpdateStatusViews:(bool)arg1;
- (void)_setProgressView:(id)arg1;
- (void)_setProgressViewStyle:(long long)arg1;
- (void)_setProgressViewVisible:(bool)arg1;
- (void)_setProgressViewVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setSizeClass:(long long)arg1;
- (void)_setStatus:(id)arg1;
- (long long)_sizeClass;
- (id)_status;
- (void)_updateIfNeeded;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_updateSizeClassIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateStatusViewsIfNeeded;
- (void)_updateSubviewOrdering;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetSharedViewModel;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)browsingViewModel;
- (id /* block */)errorPresenter;
- (bool)isProgressViewAnimatingOut;
- (id)loadView;
- (void)postReloadNotification;
- (void)setAssetSharedViewModel:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setErrorPresenter:(id /* block */)arg1;
- (void)setIsProgressViewAnimatingOut:(bool)arg1;
- (id)view;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewTraitCollectionDidChange:(id)arg1;

@end