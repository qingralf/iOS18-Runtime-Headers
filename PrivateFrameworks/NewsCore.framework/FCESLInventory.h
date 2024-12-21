/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCESLInventory : NSObject <FCFeedItemInventoryType> {
    <FCFeedItemInventoryType> * _globalInventory;
    <FCFeedItemInventoryType> * _tagInventory;
}

@property (nonatomic, readonly) NSArray *allFeedItems;
@property (nonatomic, readonly) <FCFeedItemInventoryType> *globalInventory;
@property (nonatomic, readonly) <FCFeedItemInventoryType> *tagInventory;

- (void).cxx_destruct;
- (id)_childInventories;
- (void)_enumerateChildInventories:(id /* block */)arg1;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)arg1 scoringVersion:(unsigned long long)arg2;
- (id)allFeedItems;
- (id)allFeedItemsWithTopic:(id)arg1;
- (id)globalInventory;
- (id)initWithGlobalInventory:(id)arg1 tagInventory:(id)arg2;
- (void)prewarmScoreCache:(id)arg1 configuration:(id)arg2;
- (void)refreshIfNeededWithCompletion:(id /* block */)arg1;
- (id)tagInventory;

@end