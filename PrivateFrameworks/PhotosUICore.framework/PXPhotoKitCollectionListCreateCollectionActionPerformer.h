/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionListCreateCollectionActionPerformer : PXPhotoKitCollectionListActionPerformer <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    PHCollection * _createdCollection;
    id /* block */  _finishedPickingBlock;
    NSArray * _preselectedAssets;
}

@property (nonatomic, retain) PHCollection *createdCollection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finishedPickingBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *preselectedAssets;
@property (readonly) Class superclass;

+ (bool)canPerformOnCollectionList:(id)arg1;
+ (id)localizedTitleForActionType:(id)arg1 collectionList:(id)arg2;
+ (id)systemImageNameForCollectionList:(id)arg1 actionType:(id)arg2;

- (void).cxx_destruct;
- (id)createdCollection;
- (id /* block */)finishedPickingBlock;
- (void)performUserInteractionTask;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (id)preselectedAssets;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCreatedCollection:(id)arg1;
- (void)setFinishedPickingBlock:(id /* block */)arg1;
- (void)setPreselectedAssets:(id)arg1;

@end