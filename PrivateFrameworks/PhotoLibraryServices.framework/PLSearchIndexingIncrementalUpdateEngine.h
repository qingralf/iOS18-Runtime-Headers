/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingIncrementalUpdateEngine : NSObject {
    <PLSearchIndexingIncrementalUpdateEngineDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PLTimedDispatchGroupEnterSession * _lock_donationInFlightDispatchGroupSession;
    NSProgress * _lock_donationProgress;
    NSObject<OS_dispatch_group> * _lock_group;
    bool  _lock_isPausing;
    bool  _lock_isRunning;
    PLResult * _lock_result;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <PLSearchIndexingIncrementalUpdateEngineDelegate> *delegate;

- (void).cxx_destruct;
- (void)_donateBatch:(id)arg1 library:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleDonationCompleteWithResult:(id)arg1 batch:(id)arg2 library:(id)arg3;
- (id)_inPerformBlock_batchFromType:(short)arg1 flags:(long long)arg2 library:(id)arg3;
- (void)_lock_runSingleLoopOfProcessingIncrementalUpdatesWithLibrary:(id)arg1;
- (void)_processIncrementalUpdatesWithLibrary:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)fetchRemainingWorkWithLibrary:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)pause;
- (void)processBatchOfJobsWithType:(short)arg1 flags:(long long)arg2 library:(id)arg3 progress:(id)arg4 completion:(id /* block */)arg5;
- (void)processJobObjectIDs:(id)arg1 entity:(unsigned long long)arg2 library:(id)arg3 completion:(id /* block */)arg4;
- (void)resumeWithLibrary:(id)arg1 completion:(id /* block */)arg2;

@end