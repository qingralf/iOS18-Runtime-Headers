/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXVideoComparisonViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    UIAlertAction * _extraAlertAction;
    PHAsset * _inputAsset;
    AVPlayerItem * _inputPlayerItem;
    NSError * _inputVideoError;
    NSURL * _inputVideoURL;
    UIProgressView * _progressView;
    NSString * _radarClassification;
    NSString * _radarComponentID;
    NSString * _radarComponentName;
    NSString * _radarComponentVersion;
    NSString * _radarTitle;
    PXSettings * _settings;
    UIVisualEffectView * _statusBackgroundView;
    UILabel * _statusLabel;
    bool  _useVariantVideoByDefaultInToggle;
    AVPlayerItem * _variantPlayerItem;
    UISegmentedControl * _variantSegmentedControl;
    NSError * _variantVideoError;
    ISWrappedAVPlayer * _videoPlayer;
    int  _videoRequestID;
    PXVideoPlayerView * _videoView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIAlertAction *extraAlertAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHAsset *inputAsset;
@property (nonatomic, retain) AVPlayerItem *inputPlayerItem;
@property (nonatomic, readonly) NSString *inputVideoButtonsTitle;
@property (nonatomic, readonly) NSString *inputVideoDescription;
@property (nonatomic, retain) NSError *inputVideoError;
@property (nonatomic, retain) NSURL *inputVideoURL;
@property (nonatomic, readonly) NSString *radarClassification;
@property (nonatomic, readonly) NSString *radarComponentID;
@property (nonatomic, readonly) NSString *radarComponentName;
@property (nonatomic, readonly) NSString *radarComponentVersion;
@property (nonatomic, readonly) NSString *radarTitle;
@property (nonatomic, readonly) PXSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useVariantVideoByDefaultInToggle;
@property (nonatomic, retain) AVPlayerItem *variantPlayerItem;
@property (nonatomic, readonly) NSString *variantVideoButtonsTitle;
@property (nonatomic, readonly) NSString *variantVideoDescription;
@property (nonatomic, retain) NSError *variantVideoError;
@property (nonatomic) int videoRequestID;

- (void).cxx_destruct;
- (void)_exportInputVideo;
- (void)_exportVariantVideo;
- (void)_exportVariantVideoWithCompletionHandler:(id /* block */)arg1;
- (void)_fileRadar;
- (void)_handleActionButton:(id)arg1;
- (void)_handleRefreshButton:(id)arg1;
- (void)_handleResultButton:(id)arg1;
- (void)_handleSettingsButton:(id)arg1;
- (void)_handleSettingsDone:(id)arg1;
- (void)_handleVariantSegmentedControl:(id)arg1;
- (void)_hideProgressAndStatus;
- (void)_prepareInputAndVariantVideos;
- (void)_prepareVariantVideo;
- (void)_reloadInputAndVariantVideos;
- (void)_showAlertWithMessage:(id)arg1;
- (void)_showProgressAndStatus;
- (void)_updateDisplayedPlayerItem;
- (void)_updatePlayerItem:(id)arg1 error:(id)arg2;
- (void)_updateProgress:(float)arg1 status:(id)arg2;
- (id)extraAlertAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputAsset:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputAsset;
- (id)inputPlayerItem;
- (id)inputVideoButtonsTitle;
- (id)inputVideoDescription;
- (id)inputVideoError;
- (id)inputVideoURL;
- (void)invalidateInputAndVariantReferences;
- (long long)modalPresentationStyle;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareVariantVideoWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)radarClassification;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (id)radarTitle;
- (void)setInputPlayerItem:(id)arg1;
- (void)setInputVideoError:(id)arg1;
- (void)setInputVideoURL:(id)arg1;
- (void)setVariantPlayerItem:(id)arg1;
- (void)setVariantVideoError:(id)arg1;
- (void)setVideoRequestID:(int)arg1;
- (id)settings;
- (bool)useVariantVideoByDefaultInToggle;
- (id)variantPlayerItem;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;
- (id)variantVideoError;
- (int)videoRequestID;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
