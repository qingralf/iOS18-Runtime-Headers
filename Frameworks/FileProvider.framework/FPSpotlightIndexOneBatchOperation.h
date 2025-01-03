/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSpotlightIndexOneBatchOperation : FPOperation {
    id /* block */  _canIndexFromCurrentState;
    NSArray * _deletedItemIDs;
    NSError * _fetchError;
    long long  _indexReason;
    FPSpotlightIndexer * _indexer;
    bool  _isInitialIndexing;
    bool  _isOutOfBandIndexing;
    unsigned long long  _logSection;
    NSData * _nextAnchor;
    bool  _passExpectedState;
    NSArray * _updatedItems;
}

@property (nonatomic, copy) id /* block */ canIndexFromCurrentState;
@property (nonatomic, retain) NSArray *deletedItemIDs;
@property (nonatomic, retain) NSError *fetchError;
@property (nonatomic) long long indexReason;
@property (nonatomic, retain) NSData *nextAnchor;
@property (nonatomic) bool passExpectedState;
@property (nonatomic, retain) NSArray *updatedItems;

- (void).cxx_destruct;
- (id /* block */)canIndexFromCurrentState;
- (id)deletedItemIDs;
- (id)fetchError;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (long long)indexReason;
- (id)initWithIndexer:(id)arg1 isInitialIndexing:(bool)arg2 isOutOfBandIndexing:(bool)arg3 queue:(id)arg4;
- (void)main;
- (id)nextAnchor;
- (bool)passExpectedState;
- (void)setCanIndexFromCurrentState:(id /* block */)arg1;
- (void)setDeletedItemIDs:(id)arg1;
- (void)setFetchError:(id)arg1;
- (void)setIndexReason:(long long)arg1;
- (void)setNextAnchor:(id)arg1;
- (void)setPassExpectedState:(bool)arg1;
- (void)setUpdatedItems:(id)arg1;
- (id)updatedItems;

@end
