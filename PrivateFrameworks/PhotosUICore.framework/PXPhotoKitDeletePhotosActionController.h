/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitDeletePhotosActionController : NSObject {
    NSArray * __assets;
    UIAlertController * __mainAlertController;
    UIAlertController * __oneTimeConfirmationAlertController;
    NSArray * __plAssets;
    long long  _action;
    id /* block */  _completionHandler;
    <PXPhotoKitDeletePhotosActionControllerDelegate> * _delegate;
    PXActionRecord * _record;
    bool  _shouldSkipDeleteConfirmation;
    NSUndoManager * _undoManager;
    id /* block */  _willDeleteHandler;
}

@property (nonatomic, readonly, copy) NSArray *_assets;
@property (setter=_setMainAlertController:, nonatomic, retain) UIAlertController *_mainAlertController;
@property (setter=_setOneTimeConfirmationAlertController:, nonatomic, retain) UIAlertController *_oneTimeConfirmationAlertController;
@property (nonatomic, readonly, copy) NSArray *_plAssets;
@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) <PXPhotoKitDeletePhotosActionControllerDelegate> *delegate;
@property (nonatomic) bool shouldSkipDeleteConfirmation;
@property (nonatomic, readonly) NSUndoManager *undoManager;

+ (id)_suffix:(id)arg1;
+ (void)assetTypeCountsForAssets:(id)arg1 photosCount:(long long*)arg2 videosCount:(long long*)arg3 othersCount:(long long*)arg4;
+ (id)warningStringForAssets:(id)arg1 isDeleting:(bool)arg2;

- (void).cxx_destruct;
- (id)_assets;
- (void)_ensureMainAlertController;
- (void)_ensureOneTimeConfirmationAlertController;
- (void)_handleFinalConfirmation:(long long)arg1;
- (void)_handleMainAlertConfirmation:(long long)arg1;
- (void)_handleOneTimeAlertConfirmed;
- (id)_mainAlertController;
- (id)_oneTimeConfirmationAlertController;
- (id)_plAssets;
- (void)_recordUserConfirmation:(long long)arg1;
- (void)_recordVariant:(id)arg1;
- (void)_runDestructiveActionWithCompletion:(id /* block */)arg1;
- (void)_setMainAlertController:(id)arg1;
- (void)_setOneTimeConfirmationAlertController:(id)arg1;
- (void)_showOnetimeConfirmation;
- (long long)action;
- (void)appWasBackgrounded:(id)arg1;
- (void)beginObservingAppBackgroundingEvents;
- (id)delegate;
- (void)getConfirmationMessage:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 isDestructiveBehavior:(bool*)arg4;
- (id)initWithAction:(long long)arg1 assets:(id)arg2 undoManager:(id)arg3 delegate:(id)arg4;
- (void)performWithWillDeleteHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(id /* block */)arg1;
- (void)setShouldSkipDeleteConfirmation:(bool)arg1;
- (bool)shouldSkipDeleteConfirmation;
- (void)stopObservingAppBackgroundEvents;
- (id)undoManager;

@end
