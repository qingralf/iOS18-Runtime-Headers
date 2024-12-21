/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBackgroundJobFeatureAvailabilityWorker : PLBackgroundJobWorker

+ (id)_criteriaToUse;
+ (double)minimumSecondsBetweenJobs;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (bool)_featureAvailabilityIsStale:(id)arg1 inLibrary:(id)arg2;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end