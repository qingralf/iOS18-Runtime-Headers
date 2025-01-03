/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSmartStylePreviewView : UIView <NUMediaViewDelegatePrivate> {
    NUComposition * __composition;
    PICompositionController * __compositionController;
    bool  __hasUpdatedZoomForComposition;
    NUMediaView * __mediaView;
    NSString * _logIdentifier;
    CAMSmartStyleSettingsResourceLoadResult * _resourceLoadResult;
    CEKSmartStyle * _style;
}

@property (nonatomic, readonly) <PEAsset> *_asset;
@property (nonatomic, readonly) NUComposition *_composition;
@property (nonatomic, readonly) PICompositionController *_compositionController;
@property (nonatomic, readonly) bool _hasUpdatedZoomForComposition;
@property (nonatomic, readonly) NUMediaView *_mediaView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *logIdentifier;
@property (nonatomic, retain) CAMSmartStyleSettingsResourceLoadResult *resourceLoadResult;
@property (nonatomic, retain) CEKSmartStyle *style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_asset;
- (id)_composition;
- (id)_compositionController;
- (bool)_hasUpdatedZoomForComposition;
- (id)_mediaView;
- (void)_setComposition:(id)arg1;
- (void)_updateMediaViewZoomIfNecessary;
- (void)_updatePreviewAdjustments;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)logIdentifier;
- (void)mediaViewDidFinishRendering:(id)arg1 withStatistics:(id)arg2;
- (id)resourceLoadResult;
- (void)setLogIdentifier:(id)arg1;
- (void)setResourceLoadResult:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
