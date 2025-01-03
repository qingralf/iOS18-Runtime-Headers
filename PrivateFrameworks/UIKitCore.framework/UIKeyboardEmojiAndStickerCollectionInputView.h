/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiAndStickerCollectionInputView : UIKeyboardEmojiKeyView <TUIEmojiSearchInputViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIKeyboardEmojiAndStickerCollectionViewCellDelegate, UIKeyboardEmojiAndStickerCollectionViewDelegate, UIKeyboardMediaControllerDelegate> {
    UIKeyboardEmojiCategory * _category;
    UIKeyboardEmojiAndStickerCollectionView * _collectionView;
    id /* block */  _completionBlock;
    unsigned long long  _currentSection;
    long long  _currentVariantRow;
    UICollectionViewDiffableDataSource * _dataSource;
    NSHashTable * _delegates;
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    TUIEmojiSearchTextField * _emojiSearchField;
    TUIEmojiSearchInputViewController * _emojiSearchInputViewController;
    UICollectionViewFlowLayout * _flowLayout;
    double  _frameInset;
    bool  _hasCompletedInitialDisplay;
    bool  _hasShownAnimojiCell;
    bool  _hasShownAnimojiFirstTimeExperience;
    UIResponder<UIKBEmojiHitTestResponder> * _hitTestResponder;
    STKImageGlyphDataSource * _imageGlyphDataSource;
    bool  _inputDelegateCanSupportAnimoji;
    bool  _isDraggingInputView;
    bool  _isRearranging;
    bool  _isSearching;
    UIKeyboardEmojiAndStickerCollectionInputViewKeylineView * _keylineView;
    NSObject<OS_os_log> * _logger;
    UILongPressGestureRecognizer * _longPressRecognizer;
    NSArray * _searchResults;
    NSIndexPath * _selectedIndexPath;
    UIKBTree * _selectedPopupKey;
    long long  _selectedVariant;
    bool  _shouldRetryFetchingAnimojiRecents;
    bool  _showingVariants;
    UITapGestureRecognizer * _tapRecognizer;
    NSIndexPath * _tappedSkinToneEmoji;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchOffsetForMovingCell;
    NSIndexPath * _unavailableLaunchPath;
    bool  _useWideAnimojiCell;
}

@property UIKeyboardEmojiCategory *category;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TUIEmojiSearchTextField *emojiSearchField;
@property (nonatomic, retain) TUIEmojiSearchInputViewController *emojiSearchInputViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder;
@property (nonatomic, retain) STKImageGlyphDataSource *imageGlyphDataSource;
@property (readonly) bool isDraggingInputView;
@property (nonatomic) bool isSearching;
@property (nonatomic, retain) NSArray *searchResults;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic) NSIndexPath *tappedSkinToneEmoji;
@property (nonatomic, retain) NSIndexPath *unavailableLaunchPath;

+ (bool)shouldHighlightEmoji:(id)arg1;
+ (bool)wantsScreenTraits;

- (void).cxx_destruct;
- (void)_addDelegate:(id)arg1;
- (bool)_handleBaseKeySelectionEvent:(id)arg1;
- (bool)_handleInitialSelectionEvent:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (bool)_handleVariantSelectionEvent:(id)arg1;
- (void)_notifyDelegatesRearrangeModeChanged:(bool)arg1;
- (void)_removeDelegate:(id)arg1;
- (void)_setRearrangeMode:(bool)arg1;
- (void)_setUserHasSelectedSkinToneEmoji:(bool)arg1;
- (void)_setupLongPressGestureRecognizer;
- (void)_setupTapGestureRecognizer;
- (bool)_shouldShowRecentlyUsedMedia;
- (void)_updateRearrangeModeForCell:(id)arg1 atIndexPath:(id)arg2;
- (bool)_userHasSelectedSkinToneEmoji;
- (id)accessibilityIdentifier;
- (bool)baseStringIsCoupleEmoji:(id)arg1;
- (id)category;
- (double)categoryHeaderFontSize;
- (double)categoryHeaderHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellRectToRevealFullCell:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)cellShouldScrollWhenSelectedAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id /* block */)completionBlock;
- (void)configureDataSource;
- (id)currentlyFocusedIndexPath;
- (long long)currentlyFocusedSectionIndex;
- (id)dataSource;
- (bool)datasourceIsReady;
- (void)dealloc;
- (void)deleteImageGlyph:(id)arg1 atPath:(id)arg2;
- (void)didDismissCardForKeyboardMediaController:(id)arg1;
- (long long)didInputSubTree:(id)arg1;
- (void)didInsertMediaForKeyboardMediaController:(id)arg1;
- (void)didMoveToWindow;
- (void)didPresentCardForKeyboardMediaController:(id)arg1;
- (void)didTearDownRecentsViewForKeyboardMediaController:(id)arg1;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (double)distanceInScrollingDirection:(struct CGSize { double x1; double x2; })arg1;
- (bool)doesShowMemoji;
- (bool)doesShowStickers;
- (bool)doesSupportImageGlyph;
- (id)emojiBaseFirstCharacterString:(id)arg1;
- (id)emojiBaseString:(id)arg1;
- (long long)emojiCategoryIndex;
- (long long)emojiCategoryTypeForSection:(long long)arg1;
- (double)emojiKeyWidth;
- (void)emojiSearchDidReceiveResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;
- (id)emojiSearchField;
- (id)emojiSearchInputViewController;
- (void)emojiSearchTextFieldDidBecomeActive:(id)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)arg1;
- (void)emojiSearchTextFieldDidReset:(id)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(id)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(id)arg1;
- (void)emojiSearchTextFieldWillClear:(id)arg1;
- (long long)emojiSectionIndex;
- (bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getIAGenmojiImageTypeFromImageGlyph:(id)arg1;
- (bool)handleKeyEvent:(id)arg1;
- (bool)handleKeyInputForCollectionViewNavigation:(id)arg1;
- (bool)handleKeyInputForFamilySelector:(id)arg1;
- (bool)handleKeyInputForVariantSelector:(id)arg1;
- (void)handleScrollViewDynamicPagination:(id)arg1;
- (bool)handleSelectionEvent:(id)arg1;
- (bool)hasVerticalScrolling;
- (id)hitTestResponder;
- (id)imageGlyphDataSource;
- (long long)indexForPrettyCategoryDisplay:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;
- (void)insertImageGlyph:(id)arg1 dismiss:(bool)arg2;
- (void)insertSelectedEmoji:(id)arg1 shouldDismissPopover:(bool)arg2;
- (bool)isCellMostlyOffscreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDraggingInputView;
- (bool)isEmojiCategory:(long long)arg1;
- (bool)isMemojiCategory:(long long)arg1;
- (bool)isRearrangingAllowed;
- (bool)isRecentCategory:(long long)arg1;
- (bool)isSearchCategory:(long long)arg1;
- (bool)isSearching;
- (bool)isStickersCategory:(long long)arg1;
- (id)itemInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)keyCodeForCurrentEnvironmentFromKeyCode:(long long)arg1;
- (bool)keySupportsVariants:(id)arg1;
- (long long)memojiCategoryIndex;
- (long long)memojiSectionIndex;
- (long long)numberOfPrefixCategories;
- (long long)numberOfPrefixSections;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)pointInScrollingDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)rearrangeStateChanged:(bool)arg1;
- (long long)recentCategoryIndex;
- (long long)recentSectionIndex;
- (id)recentsIndexPath;
- (void)resetSelectionIfNeeded;
- (long long)rowsInSection:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (double)scrollingEndPoint;
- (double)scrollingStartPoint;
- (id)searchResults;
- (long long)sectionForCategoryType:(long long)arg1;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (id)selectedIndexPath;
- (void)setCategory:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setEmojiSearchField:(id)arg1;
- (void)setEmojiSearchInputViewController:(id)arg1;
- (void)setHitTestResponder:(id)arg1;
- (void)setImageGlyphDataSource:(id)arg1;
- (void)setIsSearching:(bool)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTappedSkinToneEmoji:(id)arg1;
- (void)setUnavailableLaunchPath:(id)arg1;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (bool)showingRecents;
- (bool)skinToneWasUsedForEmoji:(id)arg1;
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(bool)arg2;
- (id)stickerCellForIndexPath:(id)arg1;
- (long long)stickersCategoryIndex;
- (long long)stickersSectionIndex;
- (id)subTreeHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)supportsDatasourceIsReady;
- (id)tappedSkinToneEmoji;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForSectionIndex:(long long)arg1;
- (double)topPadding;
- (long long)translatedEmojiCategoryForSection:(long long)arg1;
- (id)treeForCell:(id)arg1;
- (id)treeForStickerCell:(id)arg1;
- (id)trulyVisibleIndexPaths;
- (id)unavailableLaunchPath;
- (void)updateDataSourceSnapshot;
- (void)updateDataSourceSnapshotAnimated:(bool)arg1;
- (void)updateDataSourceWithSnapshot:(id)arg1 animated:(bool)arg2;
- (void)updateHighlightForIndexPath:(id)arg1 scrollIfNeeded:(bool)arg2 animateScroll:(bool)arg3;
- (void)updateLastSeenItemForIndexPath:(id)arg1;
- (void)updateOffsetForSearchResultsAnimated:(bool)arg1;
- (void)updatePreferencesForSelectedEmoji:(id)arg1;
- (void)updateToCategory:(long long)arg1;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
- (void)updateToIndexPath:(id)arg1;
- (id)verticalNeighborForIndexPath:(id)arg1 up:(bool)arg2 byPage:(bool)arg3;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(id /* block */)arg3;

@end
