/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAnalysisCoordinatorStepMediaAnalysis : PLAnalysisCoordinatorStep <PLAnalysisCoordinatorStepPerformer> {
    long long  _currentMediaAnalysisRequestID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock_currentMediaAnalysisRequestID;
    unsigned long long  _processingType;
}

- (void)_performStepForAssets:(id)arg1 withProgress:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)cancel;
- (id)initWithLibraryServicesManager:(id)arg1 parentTaskID:(id)arg2 processingType:(unsigned long long)arg3;
- (void)performStepForAssets:(id)arg1 withProgress:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
