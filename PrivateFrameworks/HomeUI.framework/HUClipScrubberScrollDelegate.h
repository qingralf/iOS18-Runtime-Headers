/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _clipCollectionView;
    <HFCameraRecordingEvent> * _currentEvent;
    HUClipScrubberDataSource * _dataSource;
    double  _elapsedTime;
    bool  _hasUserInteractedWithScrubber;
    double  _lastContentOffset;
    double  _lastContentWidth;
    HFCameraPlaybackEngine * _playbackEngine;
    bool  _scrollingForward;
    bool  _shouldIgnoreScrolling;
    double  _targetScrollOffset;
    bool  _userScrubbing;
}

@property (nonatomic) UICollectionView *clipCollectionView;
@property (nonatomic, retain) <HFCameraRecordingEvent> *currentEvent;
@property (nonatomic) HUClipScrubberDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double elapsedTime;
@property (nonatomic) bool hasUserInteractedWithScrubber;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) double lastContentWidth;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (getter=isScrollingForward, nonatomic) bool scrollingForward;
@property (nonatomic) bool shouldIgnoreScrolling;
@property (readonly) Class superclass;
@property (nonatomic) double targetScrollOffset;
@property (getter=isUserScrubbing, nonatomic) bool userScrubbing;

- (void).cxx_destruct;
- (bool)_doesPrecedingSpacerSpanMultipleDaysForEvent:(id)arg1;
- (void)_handleOutOfBoundsTimelinePosition:(float)arg1;
- (id)_interpolatedDateFromEvent:(id)arg1 toEvent:(id)arg2 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTimelinePosition:(float)arg4;
- (id)_selectedDateForAreaOfNoActivityAtPoint:(struct CGPoint { double x1; double x2; })arg1 inScrollView:(id)arg2;
- (id)_selectedDateForEventInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_selectedDateForTodayFromEvent:(id)arg1 percentDuration:(float)arg2;
- (id)_selectedDateForYesterdayFromPreviousEvent:(id)arg1 percentDuration:(float)arg2;
- (bool)_shouldScrollBypassPlaybackEngineUpdate;
- (void)_updateFamiliarFaceCell;
- (void)beginEditing;
- (id)clipCollectionView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)currentEvent;
- (id)dataSource;
- (void)dealloc;
- (double)elapsedTime;
- (void)finishEditing;
- (bool)hasUserInteractedWithScrubber;
- (id)initWithDataSource:(id)arg1;
- (bool)isScrollingForward;
- (bool)isUserScrubbing;
- (double)lastContentOffset;
- (double)lastContentWidth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playbackEngine;
- (float)playheadPosition;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setClipCollectionView:(id)arg1;
- (void)setCurrentEvent:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setHasUserInteractedWithScrubber:(bool)arg1;
- (void)setLastContentOffset:(double)arg1;
- (void)setLastContentWidth:(double)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setScrollingForward:(bool)arg1;
- (void)setShouldIgnoreScrolling:(bool)arg1;
- (void)setTargetScrollOffset:(double)arg1;
- (void)setUserScrubbing:(bool)arg1;
- (bool)shouldIgnoreScrolling;
- (double)targetScrollOffset;
- (void)updateCollectionView:(id)arg1;
- (void)updatePlaybackEngineDate:(id)arg1;

@end
