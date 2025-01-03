/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosGridShowFiltersActionPerformer : PXPhotosGridActionPerformer <PXFilterControllerDelegate> {
    PXUIFilterController * _filterController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;

- (void).cxx_destruct;
- (id)activitySystemImageName;
- (id)activityType;
- (id)contentFilterHiddenTypesForFilterController:(id)arg1;
- (id)filterController;
- (void)filterController:(id)arg1 contentFilterStateChanged:(id)arg2;
- (void)filterControllerDidClose:(id)arg1;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performUserInteractionTask;
- (bool)performerResetsAfterCompletion;
- (void)setFilterController:(id)arg1;

@end
