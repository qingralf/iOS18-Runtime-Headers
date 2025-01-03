/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHAutoRefineQuery : CHQuery {
    NSMutableArray * _autoRefinedItems;
}

@property (nonatomic, readonly, copy) CHAutoRefineQueryItem *autoRefinedItem;
@property (nonatomic, readonly, copy) NSArray *autoRefinedItems;

- (void).cxx_destruct;
- (id)autoRefinedItem;
- (id)autoRefinedItems;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;
- (bool)wantsAutoRefineUpdates;

@end
