/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAnalysisCoordinatorStepSearchIndexing : PLAnalysisCoordinatorStep <PLAnalysisCoordinatorStepPerformer>

- (void)_batchIndexAssetStartingAtIndex:(unsigned long long)arg1 withAssetIDs:(id)arg2 searchIndexingEngine:(id)arg3 library:(id)arg4 progress:(id)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)_performStepForAssets:(id)arg1 withProgress:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)cancel;
- (void)performStepForAssets:(id)arg1 withProgress:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
