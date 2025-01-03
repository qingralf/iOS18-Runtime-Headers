/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventGestureController : NSObject <EKICSPreviewControllerDelegate, UIAlertViewDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate> {
    bool  _commitBlocked;
    long long  _commitOffsetDays;
    long long  _consecutivePageTurnCount;
    EKCalendarDate * _currentDay;
    int  _currentDragType;
    int  _currentDraggingState;
    long long  _currentDropDataOwnerCache;
    EKICSPreviewController * _currentICSPreviewController;
    double  _dateAtFirstTouchPoint;
    <EKEventGestureControllerDelegate> * _delegate;
    bool  _dragCompletionPending;
    bool  _dragInitiationLocked;
    UIDragInteraction * _dragInteraction;
    bool  _dragInteractionCancellingWithoutDragging;
    bool  _dragLockDisabled;
    _UIDragSnappingFeedbackGenerator * _dragSnappingFeedback;
    UILongPressGestureRecognizer * _draggingGestureRecognizer;
    EKDayOccurrenceView * _draggingView;
    EKDayOccurrenceView * _draggingViewSource;
    bool  _dropAnimationInProgress;
    UIDropInteraction * _dropInteraction;
    EKEvent * _event;
    double  _firstContactOfDraggingViewTop;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstTouchPoint;
    double  _firstTouchTime;
    bool  _forcedStart;
    bool  _hasStartedScrolling;
    bool  _horizontalDragLocked;
    bool  _isDragging;
    bool  _isInCancelRegion;
    bool  _isMultiDayTimedEvent;
    bool  _isNewEvent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _latestTouchPoint;
    EKUIEmailCompositionManager * _messageSendingManager;
    UITapGestureRecognizer * _multiSelectGestureRecognizer;
    bool  _needToSetSystemDragPreview;
    bool  _needsCommit;
    long long  _occurrenceDateIndex;
    int  _pendingDraggingState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTouchPoint;
    double  _previousTouchTime;
    double  _previousTouchVelocity;
    int  _queuedDraggingState;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    NSTimer * _scrollTimer;
    NSString * _sessionIdentifierForDebug;
    int  _snappingTypeForCurrentDrag;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIView * _targetView;
    double  _timeSinceEnteredPageMargin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchOffset;
    long long  _touchOffsetDays;
    <EKEventGestureControllerUntimedDelegate> * _untimedDelegate;
    bool  _usesHorizontalDragLocking;
    bool  _usesXDragOffsetInCancelRegion;
    bool  _waitingForDragToInitialize;
}

@property (nonatomic) bool commitBlocked;
@property (nonatomic, readonly) int currentDragSnappingType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <EKEventGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dragGestureInProgress;
@property (nonatomic, readonly) EKDayOccurrenceView *draggingView;
@property (nonatomic, retain) EKDayOccurrenceView *draggingViewSource;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } firstTouchPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } latestTouchPoint;
@property (nonatomic, retain) EKUIEmailCompositionManager *messageSendingManager;
@property (nonatomic, readonly) EKCalendarDate *occurrenceDate;
@property (nonatomic, readonly) long long occurrenceDateIndex;
@property (nonatomic, retain) NSString *sessionIdentifierForDebug;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } touchOffset;
@property (nonatomic) <EKEventGestureControllerUntimedDelegate> *untimedDelegate;
@property (nonatomic) bool usesHorizontalDragLocking;
@property (nonatomic) bool usesXDragOffsetInCancelRegion;

+ (id)_captureImageOfOccurrenceView:(id)arg1 withFrameOfOpaqueContent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (double)_Debug_HoursSinceStartOfDay:(double)arg1;
- (bool)__timedDelegateBeginEditingSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_acceptedExternalTypes;
- (id)_acceptedFileExternalTypes;
- (id)_acceptedNonFileExternalTypes;
- (id)_acceptedTypes;
- (void)_adjustNewEventDates:(id)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 floorAtAllDayRegionBottom:(bool)arg3;
- (double)_allDayBottomPadding;
- (void)_animateInNewEvent;
- (bool)_beginEditingSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_beginNewDragFromOffStateWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateFrameForDraggingViewIncludingTravelTime:(bool)arg1;
- (bool)_calendarCanAcceptManagedData:(id)arg1;
- (void)_cancel;
- (double)_cancelRegionMargin;
- (double)_capOccurrenceViewYOrigin:(double)arg1;
- (id)_captureImageOfDraggingView;
- (void)_cleanUpAllStateWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2;
- (void)_cleanUpForcedStart;
- (id)_clippingPathForDraggingView;
- (void)_commit;
- (void)_commitUntimed;
- (double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 event:(id)arg2 allDay:(bool)arg3;
- (struct CGPoint { double x1; double x2; })_computeOriginAtTouchPoint:(struct CGPoint { double x1; double x2; })arg1 forDate:(double)arg2 isAllDay:(bool)arg3 allowXOffset:(bool)arg4 allowFloorAtRegionBottom:(bool)arg5;
- (double)_computeWidthForOccurrenceView;
- (void)_createAndSetUpDraggingViewWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 event:(id)arg2 ignoreOffsets:(bool)arg3 showEditMenu:(bool)arg4;
- (id)_createNewEventIfNeededAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_createTemporaryView:(id)arg1 animated:(bool)arg2;
- (id)_debugStringForDraggingState:(int)arg1;
- (void)_disableSystemPreviewForDrag:(id)arg1;
- (void)_dismissCurrentICSPreviewControllerAnimated:(bool)arg1;
- (void)_dragFailedToStart;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (bool)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (int)_draggingState;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (unsigned long long)_dropOperationGivenDropSession:(id)arg1;
- (bool)_dropSessionRequiresExternalDataExtraction:(id)arg1;
- (void)_enableSystemPreviewForDrag:(id)arg1;
- (struct CGPoint { double x1; double x2; })_estimateFinalDropOriginForTimedDelegate;
- (id)_eventToUseAtInteractionStart:(struct CGPoint { double x1; double x2; })arg1 outOccurrenceView:(id*)arg2;
- (void)_extractFileFromSession:(id)arg1;
- (id)_findFirstCalendar:(id)arg1;
- (id)_findLocalDragItemInSession:(id)arg1;
- (bool)_flingOrCancelDraggingViewIfNeeded;
- (id)_getEventUsingDropSession:(id)arg1;
- (void)_handleImportingICSData:(id)arg1 intoEventStore:(id)arg2;
- (void)_handleLongPressResponseForOldAPI:(id)arg1;
- (void)_handleShowingEventWithUniqueId:(id)arg1 date:(id)arg2 eventStore:(id)arg3;
- (void)_hideEditingMenuForView:(id)arg1;
- (void)_icsPreviewControllerCancelButtonPressed;
- (void)_installScrollTimer;
- (bool)_isPointInCancelRegion:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isTouchFromDragSessionInResizeHandles:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg1 to:(int)arg2;
- (void)_manageFeedbackForStateChangeFrom:(int)arg1 to:(int)arg2;
- (double)_minimumDuration;
- (void)_multiSelect:(id)arg1;
- (long long)_occurrenceDateIndexWithEvent:(id)arg1 occurrenceDate:(id)arg2;
- (void)_presentICSPreviewControllerIfNeeded;
- (void)_removeScrollTimer;
- (void)_resumePreviousDrag;
- (void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_scrollTimerFired:(id)arg1;
- (bool)_setDraggingState:(int)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2 event:(id)arg3;
- (bool)_setDraggingState:(int)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2 event:(id)arg3 context:(id)arg4;
- (void)_setEventCalendar:(id)arg1 useManagedCalendar:(bool)arg2;
- (void)_setLocalDraggingViewHidden:(bool)arg1;
- (void)_setToLocalDraggingImageForDrag:(id)arg1;
- (void)_setToSystemDraggingImageForDrag:(id)arg1;
- (void)_setTouchOffsetsFromPoint:(struct CGPoint { double x1; double x2; })arg1 fixedToCenter:(bool)arg2;
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setUpInitialTouchPointsWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setupEvent:(id)arg1 withImportData:(id)arg2;
- (bool)_shouldUseSystemAPIForDrag;
- (void)_suspendCurrentDrag;
- (void)_tapGesture:(id)arg1;
- (void)_update;
- (void)_updateFlingToCancelParameters;
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updatePositionOfEditingMenuForView:(id)arg1;
- (void)_updateSnappingTypeForCurrentDrag;
- (bool)_useNewDragAndDropAPI;
- (id)_viewForTracking;
- (void)_writeDraggingChangesToOccurrenceWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)attemptDisplayReviewPrompt;
- (bool)canProposeNewTime:(id)arg1;
- (bool)commitBlocked;
- (int)currentDragSnappingType;
- (id)currentlySelectedOccurrenceViewSource;
- (void)dealloc;
- (id)delegate;
- (void)didCrossDragBoundary:(int)arg1;
- (bool)dragGestureInProgress;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)draggingView;
- (id)draggingViewSource;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)endForcedStart:(bool)arg1;
- (void)endForcedStartAndUndim;
- (id)event;
- (struct CGPoint { double x1; double x2; })firstTouchPoint;
- (void)forceStartWithOccurrence:(id)arg1 occurrenceDate:(id)arg2 shouldUpdateViewSource:(bool)arg3 shouldUpdateOrigin:(bool)arg4 shouldPresentEditMenu:(bool)arg5;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)icsPreviewControllerImportDidFail:(id)arg1;
- (void)icsPreviewControllerImportDidImportEvents:(id)arg1;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)invalidate;
- (struct CGPoint { double x1; double x2; })latestTouchPoint;
- (void)liftUpOccurrenceForEditingEvent:(id)arg1;
- (id)messageSendingManager;
- (unsigned long long)numberOfDragSourcesForView:(id)arg1;
- (id)occurrenceDate;
- (long long)occurrenceDateIndex;
- (id)originalStartDateForEvent:(id)arg1 includingTravel:(bool)arg2;
- (void)promptUserForProposeNewTime:(id)arg1 forEvent:(id)arg2 whenFinished:(id /* block */)arg3;
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(id /* block */)arg2;
- (void)removeDraggedOccurrence;
- (id)sessionIdentifierForDebug;
- (void)setCommitBlocked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraggingViewSource:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setMessageSendingManager:(id)arg1;
- (void)setSessionIdentifierForDebug:(id)arg1;
- (void)setUntimedDelegate:(id)arg1;
- (void)setUsesHorizontalDragLocking:(bool)arg1;
- (void)setUsesXDragOffsetInCancelRegion:(bool)arg1;
- (bool)splitMultiDays;
- (struct CGPoint { double x1; double x2; })touchOffset;
- (id)untimedDelegate;
- (void)updateDraggingOccurrence;
- (void)updateDraggingOccurrenceForced:(bool)arg1 animated:(bool)arg2;
- (void)updateDraggingOccurrenceFrame;
- (void)updateDraggingOccurrenceFrameFromSource;
- (void)updateDraggingOccurrenceOrigin;
- (bool)usesHorizontalDragLocking;
- (bool)usesXDragOffsetInCancelRegion;

@end
