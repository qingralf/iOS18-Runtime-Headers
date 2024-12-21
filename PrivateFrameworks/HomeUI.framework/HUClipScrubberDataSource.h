/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUClipScrubberDataSource : NSObject <HFCameraPlaybackEngineObserver> {
    UICollectionView * _clipCollectionView;
    NSDate * _currentDate;
    <HFCameraRecordingEvent> * _currentEvent;
    unsigned long long  _currentTimelineState;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    unsigned long long  _displayMode;
    bool  _editing;
    bool  _isUpdating;
    double  _lastGestureScale;
    long long  _lastSelectedClipIndex;
    <HFCameraRecordingEvent> * _lastUpdatedEvent;
    unsigned long long  _mostRecentClipIndex;
    HFCameraPlaybackEngine * _playbackEngine;
    double  _posterFrameWidth;
    HUClipScrubberSelectionView * _selectionView;
    bool  _selectionViewHidden;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    double  _startingPinchDeltaX;
    HUClipScrubberTimeController * _timeController;
}

@property (nonatomic) UICollectionView *clipCollectionView;
@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic) <HFCameraRecordingEvent> *currentEvent;
@property (nonatomic, readonly) NSArray *currentEvents;
@property (nonatomic) unsigned long long currentTimelineState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) unsigned long long displayMode;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property bool isUpdating;
@property (nonatomic) double lastGestureScale;
@property (nonatomic) long long lastSelectedClipIndex;
@property (nonatomic) <HFCameraRecordingEvent> *lastUpdatedEvent;
@property (nonatomic, readonly) unsigned long long mostRecentClipIndex;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic) double posterFrameWidth;
@property (nonatomic, retain) HUClipScrubberSelectionView *selectionView;
@property (nonatomic) bool selectionViewHidden;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (nonatomic) double startingPinchDeltaX;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUClipScrubberTimeController *timeController;

- (void).cxx_destruct;
- (void)_addDiffableDataSource;
- (id)_snapshotForEvents:(id)arg1 updatedIdentifiers:(id)arg2 replacedIdentifiers:(id)arg3;
- (void)_updateSnapshot;
- (void)_updateSnapshotForEditing;
- (void)_updateSnapshotForEditingFor:(id)arg1;
- (void)_updateSnapshotWithUpdatedIdentifiers:(id)arg1 replacedIdentifiers:(id)arg2;
- (void)_updateSnapshotWithUpdatedIdentifiers:(id)arg1 replacedIdentifiers:(id)arg2 forEvents:(id)arg3;
- (void)beginTimeScaleTrackingForPinchGesture:(id)arg1;
- (void)changeTimeScaleForNewScale:(double)arg1;
- (void)changeTimeScaleForPinchGesture:(id)arg1;
- (id)clipCollectionView;
- (id)currentDate;
- (id)currentEvent;
- (id)currentEvents;
- (unsigned long long)currentTimelineState;
- (id)diffableDataSource;
- (unsigned long long)displayMode;
- (id)eventForSection:(unsigned long long)arg1;
- (void)expandToMaximumZoom;
- (id)indexPathsForClip:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (bool)isEditing;
- (bool)isSpacerAtIndexPath:(id)arg1;
- (bool)isUpdating;
- (bool)isValidEventAtIndexPath:(id)arg1;
- (bool)isValidRecordingEventAtIndexPath:(id)arg1;
- (bool)isZoomingIn:(double)arg1;
- (double)lastGestureScale;
- (long long)lastSelectedClipIndex;
- (id)lastUpdatedEvent;
- (unsigned long long)mostRecentClipIndex;
- (double)offsetForEvent:(id)arg1;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didUpdateEventsIncludingUpdatedIdentifiers:(id)arg2 replacedIdentifiers:(id)arg3 removedIdentifiers:(id)arg4;
- (double)posterFrameWidth;
- (id)previousEventForSection:(unsigned long long)arg1;
- (id)reachabilitySectionCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;
- (id)recordingSectionCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;
- (void)reloadEvents;
- (double)scrubbingResolutionForClip:(id)arg1;
- (id)selectedDateFromCell:(id)arg1 atCurrentOffset:(double)arg2;
- (id)selectedDateFromCell:(id)arg1 atOffset:(double)arg2;
- (id)selectionView;
- (bool)selectionViewHidden;
- (void)setClipCollectionView:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setCurrentEvent:(id)arg1;
- (void)setCurrentTimelineState:(unsigned long long)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setIsUpdating:(bool)arg1;
- (void)setLastGestureScale:(double)arg1;
- (void)setLastSelectedClipIndex:(long long)arg1;
- (void)setLastUpdatedEvent:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPosterFrameWidth:(double)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setSelectionViewHidden:(bool)arg1;
- (void)setSnapshotQueue:(id)arg1;
- (void)setStartingPinchDeltaX:(double)arg1;
- (void)setTimeController:(id)arg1;
- (void)shrinkToMinimumZoom;
- (id)snapshotQueue;
- (id)spacerCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;
- (id)startDateFromCell:(id)arg1;
- (double)startingPinchDeltaX;
- (id)timeController;
- (void)toggleSelectionStateForItemAtIndexPath:(id)arg1;
- (void)updateMostRecentClipIndex;
- (void)updateSelectionViewIfNeeded;
- (void)updateToClipAtIndexPath:(id)arg1;

@end