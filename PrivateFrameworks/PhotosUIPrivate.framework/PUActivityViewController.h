/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUActivityViewController : UIActivityViewController <PUActivityItemSourceControllerDelegate, PUSharingHeaderDataProvider, PXActivityViewController, PXChangeObserver, PXForcedDismissableViewController, UIActivityViewControllerObjectManipulationDelegate> {
    PUActivitySharingController * _activitySharingController;
    struct __CFString { } * _aggregateKey;
    double  _currentAssetPreparationProgress;
    <PUActivityViewControllerDelegate> * _delegate;
    bool  _didSuccessfullyPrepareAssets;
    bool  _excludeAccessibilityDescription;
    bool  _excludeCaption;
    bool  _excludeLiveness;
    bool  _excludeLocation;
    bool  _isDismissed;
    bool  _isPreparingAssets;
    PUActivityItemSourceController * _itemSourceController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastSelectedActivityFrame;
    <UIActivityItemLinkPresentationSource> * _linkPresentation;
    long long  _numberOfAssetPreparationsCompleted;
    long long  _numberOfAssetsToPrepare;
    PHPhotoLibrary * _photoLibrary;
    NSArray * _photosActivities;
    id /* block */  _ppt_readyToInteractHandler;
    long long  _preferredExportFormat;
    bool  _preparedAsCloudLink;
    PXContentPrivacyController * _privacyControllerForContainerCollection;
    PXActivityProgressController * _progressController;
    bool  _readyForInteraction;
    id /* block */  _readyToInteractHandler;
    PLProgressView * _remakerProgressView;
    bool  _sendAsAssetBundles;
    bool  _sendAsUnmodifiedOriginals;
    bool  _shareAsCMM;
    PUSharingHeaderController * _sharingHeaderController;
    PUActivitySharingViewModel * _sharingViewModel;
    bool  _shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
    bool  _shouldUpdateVisibleItemsWhenReady;
    UIView * _topBorderView;
    bool  _usePhotosStack;
    bool  _usingCustomAssetItems;
}

@property (nonatomic, retain) PUActivitySharingController *activitySharingController;
@property (nonatomic) struct __CFString { }*aggregateKey;
@property (nonatomic, readonly) struct PXAssetMediaTypeCount { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } assetTypeCount;
@property (nonatomic, readonly, copy) NSOrderedSet *assets;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PUActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludeAccessibilityDescription;
@property (nonatomic) bool excludeCaption;
@property (nonatomic) bool excludeLiveness;
@property (nonatomic) bool excludeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActionSheet;
@property (nonatomic, readonly, copy) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSOrderedSet *orderedSelectedAssets;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSArray *photosActivities;
@property (nonatomic, copy) id /* block */ ppt_readyToInteractHandler;
@property (nonatomic) long long preferredExportFormat;
@property (nonatomic, retain) PXContentPrivacyController *privacyControllerForContainerCollection;
@property (nonatomic, retain) PXActivityProgressController *progressController;
@property (getter=isReadyForInteraction, nonatomic) bool readyForInteraction;
@property (nonatomic, copy) id /* block */ readyToInteractHandler;
@property (nonatomic) bool sendAsAssetBundles;
@property (nonatomic) bool sendAsUnmodifiedOriginals;
@property (nonatomic) bool shareAsCMM;
@property (nonatomic, readonly) PUActivitySharingViewModel *sharingViewModel;
@property (nonatomic) bool shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
@property (nonatomic, readonly) long long sourceOrigin;
@property (readonly) Class superclass;
@property (getter=isUsingCustomItems, nonatomic) bool usingCustomAssetItems;

+ (bool)_shouldReverseOrderOfSharedItemsInDataSource:(id)arg1;
+ (id)actionSheetPhotosApplicationActivities;
+ (bool)cmmAssetCountThresholdIsMetForAssetItems:(id)arg1;
+ (bool)cmmFileSizeThresholdIsMetForAssetItems:(id)arg1;
+ (bool)cmmMediaTypeSpecificFileSizeThresholdIsMetForAssetItems:(id)arg1;
+ (bool)cmmThresholdIsMetForAssetItems:(id)arg1;
+ (id)defaultActivityTypeOrder;
+ (id)excludedPhotosActivityTypesForPresentationSource:(unsigned long long)arg1;
+ (id)externalApplicationExcludedPhotosActivityTypes;
+ (bool)isShareActivity:(id)arg1;
+ (bool)needsConfidentialityCheckForActivityType:(id)arg1;
+ (id)new;
+ (id)photosApplicationActivities:(bool)arg1;

- (void).cxx_destruct;
- (void)_activity:(id)arg1 category:(long long)arg2 didComplete:(bool)arg3;
- (bool)_activityRequiresUserLibraryAssets:(id)arg1;
- (void)_adjustPreparationOptionsIfNeededForActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_calculateAutomaticCMMSendingBehavior;
- (bool)_canCreateCMMWithCurrentItemsForActivity:(id)arg1;
- (bool)_canShowSendAsAssetBundlesSwitchInObjectManipulationHeader;
- (void)_cancel;
- (void)_cleanUpActivityState;
- (bool)_customizationAvailableForActivityViewController:(id)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (id)_generateAnalyticsPayloadForSharingEventsToActivityType:(id)arg1;
- (void)_handlePostReadyToInteractUpdatesIfNeeded;
- (void)_handleShareSheetReadyToInteractCompletion;
- (void)_handleUserCancelWithCompletion:(id /* block */)arg1;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareAssetsForActivity:(id)arg1 forcePreparationAsMomentShareLink:(bool)arg2;
- (void)_presentAirPlayAlertIfNeededForActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentCMMSuggestionAlertForActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentConfidentialityWarningIfNeededForActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentSpatialDataLossAlertIfNeededForActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentUnsavedSyndicatedAssetsAlertIfNeededForActivity:(id)arg1 forcePreparationAsMomentShareLink:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_reloadAssetItems;
- (void)_removeRemakerProgressView;
- (void)_sendCPAnalyticsAssetExportPreparationEventWithActivityType:(id)arg1 didComplete:(bool)arg2 error:(id)arg3;
- (void)_sendCPAnalyticsShareEventForMultipleSelectionShare;
- (void)_sendCPAnalyticsShareEventWithActivityType:(id)arg1 category:(long long)arg2 didComplete:(bool)arg3;
- (void)_sharingManagerDidBeginPublishing:(id)arg1;
- (void)_sharingStyleDidChangeToExpanded:(id)arg1;
- (bool)_shouldAutomaticallySendAsCMMForActivity:(id)arg1;
- (bool)_shouldPresentAirplayAlertForActivity:(id)arg1;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (bool)_shouldSuggestSharingAsCMMForActivity:(id)arg1;
- (void)_showRemakerProgressView:(id)arg1 forMail:(bool)arg2 withCancelationHandler:(id /* block */)arg3;
- (void)_showSharingWasInterruptedForErrors:(id)arg1 withIndividualAssets:(id)arg2 itemSourcesByAssetUUID:(id)arg3 toActivityType:(id)arg4 completion:(id /* block */)arg5;
- (id)_titleForActivity:(id)arg1;
- (void)_updateSharingHeaderIfNeeded;
- (void)_updateSourceControllerPreferredPreparationBehavior;
- (void)_updateSourceControllerSharingPreferencesInAllItems;
- (void)_updateSyndicatedAssetItemsWithAssets:(id)arg1 activityType:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_updateTopBorderView;
- (void)activityItemSourceController:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(bool)arg5 errors:(id)arg6 completion:(id /* block */)arg7;
- (void)activityItemSourceController:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3;
- (id)activitySharingController;
- (void)addAssetItem:(id)arg1;
- (struct __CFString { }*)aggregateKey;
- (struct PXAssetMediaTypeCount { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })assetTypeCount;
- (id)assets;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)excludeAccessibilityDescription;
- (bool)excludeCaption;
- (bool)excludeLiveness;
- (bool)excludeLocation;
- (id)init;
- (id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2 linkPresentation:(id)arg3;
- (id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2 linkPresentation:(id)arg3 assetIdentifiers:(id)arg4 sharingViewModel:(id)arg5;
- (bool)isActionSheet;
- (bool)isReadyForInteraction;
- (bool)isUsingCustomItems;
- (id)keyAsset;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)mailActivity:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)orderedSelectedAssets;
- (id)person;
- (id)photoLibrary;
- (id)photosActivities;
- (void)ppt_cancelActivity;
- (void)ppt_performActivityOfType:(id)arg1;
- (id /* block */)ppt_readyToInteractHandler;
- (long long)preferredExportFormat;
- (bool)prepareForDismissingForced:(bool)arg1;
- (id)privacyControllerForContainerCollection;
- (id)progressController;
- (id /* block */)readyToInteractHandler;
- (void)removeAssetItem:(id)arg1;
- (void)removeProgressUIAnimated:(bool)arg1 withDelay:(bool)arg2;
- (void)replaceAssetItem:(id)arg1 withAssetItem:(id)arg2;
- (bool)sendAsAssetBundles;
- (bool)sendAsUnmodifiedOriginals;
- (void)setActivitySharingController:(id)arg1;
- (void)setAggregateKey:(struct __CFString { }*)arg1;
- (void)setAssetItems:(id)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludeAccessibilityDescription:(bool)arg1;
- (void)setExcludeCaption:(bool)arg1;
- (void)setExcludeLiveness:(bool)arg1;
- (void)setExcludeLocation:(bool)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setPhotosCarouselViewController:(id)arg1;
- (void)setPpt_readyToInteractHandler:(id /* block */)arg1;
- (void)setPreferredExportFormat:(long long)arg1;
- (void)setPrivacyControllerForContainerCollection:(id)arg1;
- (void)setProgressController:(id)arg1;
- (void)setReadyForInteraction:(bool)arg1;
- (void)setReadyToInteractHandler:(id /* block */)arg1;
- (void)setSendAsAssetBundles:(bool)arg1;
- (void)setSendAsUnmodifiedOriginals:(bool)arg1;
- (void)setShareAsCMM:(bool)arg1;
- (void)setShouldAutomaticallyUseCMMInMessagesIfThresholdMet:(bool)arg1;
- (void)setUsingCustomAssetItems:(bool)arg1;
- (bool)shareAsCMM;
- (id)sharingViewModel;
- (bool)shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
- (void)showProgressUIAnimated:(bool)arg1 withDelay:(bool)arg2 cancellationHandler:(id /* block */)arg3;
- (long long)sourceOrigin;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateProgressUITitle;
- (void)updateVisibleShareActionsIfNeeded;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end