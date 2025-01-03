/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StickerKit.framework/StickerKit
 */

@interface STKImageGlyphDataSource : STKImageGlyphAggregatingDataSource {
    void _activeViewConfig;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentSnapshot;
    void _pendingViewConfig;
    void animatedIdentifiers;
    void dataSourceUpdatedObserver;
    void lock;
    void queue;
    void snapshotRetryCount;
    void waitingSnapshotJobs;
}

@property (nonatomic, readonly) bool canShowEmoji;
@property (nonatomic, readonly) bool canShowMemoji;
@property (nonatomic, readonly) bool canShowStickers;
@property (nonatomic, readonly) long long emojiCategoryIndex;
@property (nonatomic, readonly) long long emojiPrefixSectionCount;
@property (nonatomic, readonly) long long memojiCategoryIndex;
@property (nonatomic, readonly) long long recentCategoryIndex;
@property (nonatomic, copy) NSDiffableDataSourceSnapshot *snapshot;
@property (nonatomic, readonly) long long stickersCategoryIndex;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)canShowEmoji;
- (bool)canShowMemoji;
- (bool)canShowStickers;
- (void)configureWith:(id)arg1;
- (void)dealloc;
- (void)donateImageGlyphToRecents:(id)arg1;
- (long long)emojiCategoryIndex;
- (long long)emojiPrefixSectionCount;
- (id)imageGlyphCompositionalLayout;
- (id)indexPathForCategoryIndex:(long long)arg1;
- (id)init;
- (id)initWithDataSources:(id)arg1;
- (bool)isEmojiSection:(long long)arg1;
- (bool)isMemojiSection:(long long)arg1;
- (bool)isRecentSection:(long long)arg1;
- (bool)isStickerSection:(long long)arg1;
- (void)makeSnapshot;
- (long long)memojiCategoryIndex;
- (long long)recentCategoryIndex;
- (void)refresh;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (long long)stickersCategoryIndex;

@end
