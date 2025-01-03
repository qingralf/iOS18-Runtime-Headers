/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUAssetHighlightTimeRangesProducer : NSObject {
    void analysisProgress;
    void asset;
    void delegate;
    void highlightTimeRanges;
    void mediaAnalyzer;
    void searchQueryMatchInfo;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (nonatomic) <PUAssetHighlightTimeRangesProducerDelegate> *delegate;
@property (nonatomic, copy) NSArray *highlightTimeRanges;
@property (nonatomic, retain) PXSearchQueryMatchInfo *searchQueryMatchInfo;

- (void).cxx_destruct;
- (id)asset;
- (void)dealloc;
- (id)delegate;
- (id)highlightTimeRanges;
- (id)init;
- (id)initWithMediaAnalyzer:(id)arg1;
- (id)searchQueryMatchInfo;
- (void)setAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightTimeRanges:(id)arg1;
- (void)setSearchQueryMatchInfo:(id)arg1;

@end
