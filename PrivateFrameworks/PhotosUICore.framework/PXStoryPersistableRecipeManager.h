/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStoryPersistableRecipeManager : PXObservable <PXChangeObserver, PXStoryQueueParticipant> {
    NSError * _error;
    <PXStoryErrorReporter> * _errorReporter;
    bool  _hasAnyUserChange;
    bool  _hasUserExperiencedFirstPlaybackEver;
    bool  _hasUserExperiencedPlayback;
    bool  _isOriginalPersistableRecipeValid;
    bool  _isProducingPersistableRecipe;
    bool  _isReadyToProducePersistableRecipe;
    PXStoryModel * _model;
    <PFStoryRecipe> * _originalPersistableRecipe;
    <PFStoryRecipe> * _persistableRecipe;
    long long  _persistencePermission;
    NSProgress * _progress;
    PXStoryRecipeAssetEdits * _recipeAssetEdits;
    PXStoryRecipeManager * _recipeManager;
    PXStoryResourcesDataSourceManager * _resourcesDataSourceManager;
    NSObject<OS_dispatch_queue> * _storyQueue;
    PXStoryStyleManager * _styleManager;
    PXUpdater * _updater;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic) bool hasAnyUserChange;
@property (nonatomic) bool hasUserExperiencedFirstPlaybackEver;
@property (nonatomic) bool hasUserExperiencedPlayback;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOriginalPersistableRecipeValid;
@property (nonatomic, readonly) bool isProducingPersistableRecipe;
@property (nonatomic, readonly) bool isReadyToProducePersistableRecipe;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, retain) <PFStoryRecipe> *originalPersistableRecipe;
@property (nonatomic, retain) <PFStoryRecipe> *persistableRecipe;
@property (nonatomic) long long persistencePermission;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) PXStoryRecipeAssetEdits *recipeAssetEdits;
@property (nonatomic, readonly) PXStoryRecipeManager *recipeManager;
@property (nonatomic, readonly) PXStoryResourcesDataSourceManager *resourcesDataSourceManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (nonatomic, readonly) PXStoryStyleManager *styleManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handlePersistableRecipe:(id)arg1 recipeAssetEdits:(id)arg2 error:(id)arg3 progress:(id)arg4;
- (void)_invalidateHasUserExperiencedFirstPlaybackEver;
- (void)_invalidateHasUserExperiencedPlayback;
- (void)_invalidateIsReadyToProducePersistableRecipe;
- (void)_invalidateOriginalPersistableRecipe;
- (void)_invalidatePersistableRecipe;
- (void)_invalidatePersistencePermission;
- (id)_persistableRecipeWithOriginalPersistableRecipe:(id)arg1 recipe:(id)arg2 recipeAssetEdits:(id)arg3 currentStyle:(id)arg4 error:(id*)arg5;
- (void)_setNeedsUpdate;
- (void)_updateHasUserExperiencedFirstPlaybackEver;
- (void)_updateHasUserExperiencedPlayback;
- (void)_updateIsReadyToProducePersistableRecipe;
- (void)_updateOriginalPersistableRecipe;
- (void)_updatePersistableRecipe;
- (void)_updatePersistencePermission;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)didPerformChanges;
- (id)error;
- (id)errorReporter;
- (bool)hasAnyUserChange;
- (bool)hasUserExperiencedFirstPlaybackEver;
- (bool)hasUserExperiencedPlayback;
- (id)init;
- (id)initWithModel:(id)arg1 styleManager:(id)arg2;
- (bool)isOriginalPersistableRecipeValid;
- (bool)isProducingPersistableRecipe;
- (bool)isReadyToProducePersistableRecipe;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)originalPersistableRecipe;
- (void)performChanges:(id /* block */)arg1;
- (id)persistableRecipe;
- (long long)persistencePermission;
- (id)progress;
- (id)recipeAssetEdits;
- (id)recipeManager;
- (id)resourcesDataSourceManager;
- (void)setError:(id)arg1;
- (void)setHasAnyUserChange:(bool)arg1;
- (void)setHasUserExperiencedFirstPlaybackEver:(bool)arg1;
- (void)setHasUserExperiencedPlayback:(bool)arg1;
- (void)setIsOriginalPersistableRecipeValid:(bool)arg1;
- (void)setIsProducingPersistableRecipe:(bool)arg1;
- (void)setIsReadyToProducePersistableRecipe:(bool)arg1;
- (void)setOriginalPersistableRecipe:(id)arg1;
- (void)setPersistableRecipe:(id)arg1;
- (void)setPersistencePermission:(long long)arg1;
- (void)setProgress:(id)arg1;
- (void)setRecipeAssetEdits:(id)arg1;
- (id)storyQueue;
- (id)styleManager;
- (id)updater;
- (id)workQueue;

@end
