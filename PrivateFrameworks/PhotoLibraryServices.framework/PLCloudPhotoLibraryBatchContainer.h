/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryBatchContainer : NSObject {
    CPLChangeBatch * _batch;
    NSMutableSet * _computeSyncRelevantAssetsInBatch;
    bool  _reachedMinSplit;
    unsigned long long  _retryCount;
    bool  _wasFixed;
    bool  _wasSplit;
}

@property (nonatomic, retain) CPLChangeBatch *batch;
@property (nonatomic, retain) NSMutableSet *computeSyncRelevantAssetsInBatch;
@property (nonatomic) bool reachedMinSplit;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) bool wasFixed;
@property (nonatomic) bool wasSplit;

- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
- (id)batch;
- (id)batchesSplitForError;
- (id)computeSyncRelevantAssetsInBatch;
- (unsigned long long)count;
- (id)description;
- (void)incrementRetryCount;
- (id)init;
- (id)lastAddedRecord;
- (bool)reachedMinSplit;
- (unsigned long long)retryCount;
- (void)setBatch:(id)arg1;
- (void)setComputeSyncRelevantAssetsInBatch:(id)arg1;
- (void)setReachedMinSplit:(bool)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setWasFixed:(bool)arg1;
- (void)setWasSplit:(bool)arg1;
- (bool)wasFixed;
- (bool)wasSplit;

@end
