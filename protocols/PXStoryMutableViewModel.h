/* Generated by RuntimeBrowser.
 */

@protocol PXStoryMutableViewModel

@required

- (<PXStoryViewActionPerformer> *)actionPerformer;
- (unsigned long long)allowedChromeItems;
- (void)autoPlayUpNext;
- (double)bufferingIndicatorVisibilityFraction;
- (unsigned long long)chromeItems;
- (unsigned long long)chromeItemsToBeDisplayedExternally;
- (double)chromeVisibilityFraction;
- (PXStoryViewChromeTitleConfiguration *)customGeneralChromeTitleConfiguration;
- (void)cycleHUDType;
- (void)deselectAllGridItems;
- (long long)desiredPlayState;
- (long long)diagnosticHUDType;
- (unsigned long long)edgeToHighlight;
- (double)fadeOutOverlayVisibilityFraction;
- (void)hideMuteToggleButtonWhenChromeIsHidden;
- (long long)highlightedRelatedIndex;
- (bool)isActionMenuOpen;
- (bool)isActive;
- (bool)isHUDVisible;
- (bool)isInSelectMode;
- (bool)isPerformingCrossfadeTransitionToRelated;
- (bool)isPerformingViewControllerTransition;
- (bool)isRelatedOverlayScrolledIntoView;
- (bool)isScrubbing;
- (bool)isUserPerformingRemoteGesture;
- (void)liveResizeDidEnd;
- (void)liveResizeWillStart;
- (double)maximumIndividualTopChromeItemVisibilityFraction;
- (double)muteToggleButtonVisibilityFraction;
- (bool)needsStatusBarVisible;
- (PXPhotosViewModel *)photosGridViewModel;
- (double)playbackEndDarkening;
- (NSArray *)relatedConfigurations;
- (double)relatedOverlayVisibilityFraction;
- (void)rewindToBeginning:(bool)arg1;
- (void)rewindToBeginning:(bool)arg1 rewindMusic:(bool)arg2;
- (struct { long long x1; double x2; long long x3; })scrubberPosition;
- (double)scrubberVisibilityFraction;
- (void)selectAllGridItems;
- (void)selectRelatedAtIndex:(long long)arg1;
- (void)setActionPerformer:(id <PXStoryViewActionPerformer>)arg1;
- (void)setAllowedChromeItems:(unsigned long long)arg1;
- (void)setBufferingIndicatorVisibilityFraction:(double)arg1;
- (void)setChromeItems:(unsigned long long)arg1;
- (void)setChromeItemsToBeDisplayedExternally:(unsigned long long)arg1;
- (void)setChromeVisibilityFraction:(double)arg1;
- (void)setCustomGeneralChromeTitleConfiguration:(PXStoryViewChromeTitleConfiguration *)arg1;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setDiagnosticHUDContentProvider:(id <PXStoryDiagnosticHUDContentProvider>)arg1 forType:(long long)arg2;
- (void)setDiagnosticHUDType:(long long)arg1;
- (void)setEdgeToHighlight:(unsigned long long)arg1;
- (void)setFadeOutOverlayVisibilityFraction:(double)arg1;
- (void)setHighlightedRelatedIndex:(long long)arg1;
- (void)setIsActionMenuOpen:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsHUDVisible:(bool)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setIsPerformingCrossfadeTransitionToRelated:(bool)arg1;
- (void)setIsPerformingViewControllerTransition:(bool)arg1;
- (void)setIsRelatedOverlayScrolledIntoView:(bool)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setIsUserPerformingRemoteGesture:(bool)arg1;
- (void)setMaximumIndividualTopChromeItemVisibilityFraction:(double)arg1;
- (void)setMenuIsOpen:(bool)arg1 withIdentifier:(NSString *)arg2;
- (void)setMuteToggleButtonVisibilityFraction:(double)arg1;
- (void)setMuted:(bool)arg1 reason:(long long)arg2;
- (void)setNeedsStatusBarVisible:(bool)arg1;
- (void)setPerformingExportOperation:(bool)arg1 withIdentifier:(NSString *)arg2;
- (void)setPhotosGridViewModel:(PXPhotosViewModel *)arg1;
- (void)setPlaybackEndDarkening:(double)arg1;
- (void)setRelatedConfigurations:(NSArray *)arg1;
- (void)setRelatedOverlayVisibilityFraction:(double)arg1;
- (void)setScrubberPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (void)setScrubberVisibilityFraction:(double)arg1;
- (void)setShouldCountDownToUpNext:(bool)arg1;
- (void)setShouldShowErrorIndicator:(bool)arg1;
- (void)setShowSongInTitleWhenPaused:(bool)arg1;
- (void)setStyleSwitcherVisibilityFraction:(double)arg1;
- (void)setSwipeDownDismissalPreviewEnabled:(bool)arg1;
- (void)setSwipeDownDismissalPreviewFraction:(double)arg1;
- (void)setSwipeDownInteractionState:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; id x4; double x5; double x6; })arg1;
- (void)setSwipeDownTriggeringDismissal:(bool)arg1;
- (void)setViewControllerDismissalTargetPlacement:(PXGItemPlacement *)arg1;
- (void)setViewEnvironmentModel:(id <PXStoryViewEnvironmentModel>)arg1;
- (void)setViewMode:(long long)arg1;
- (void)setVolume:(double)arg1;
- (void)setWantsChromeVisible:(bool)arg1;
- (void)setWantsRelatedOverlayNavigationButtonsVisible:(bool)arg1;
- (void)setWantsRelatedOverlayVisible:(bool)arg1;
- (void)setWantsScrubberVisible:(bool)arg1;
- (bool)shouldCountDownToUpNext;
- (bool)shouldShowErrorIndicator;
- (bool)showSongInTitleWhenPaused;
- (bool)skipToBeginningOfSegmentWithIdentifier:(long long)arg1;
- (bool)skipToSegmentWithOffset:(long long)arg1;
- (bool)skipToSegmentWithOffset:(long long)arg1 byTappingEdge:(bool)arg2;
- (double)styleSwitcherVisibilityFraction;
- (bool)swipeDownDismissalPreviewEnabled;
- (double)swipeDownDismissalPreviewFraction;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; id x4; double x5; double x6; })swipeDownInteractionState;
- (bool)swipeDownTriggeringDismissal;
- (void)temporarilyShowMuteToggleButtonWhenChromeIsHidden;
- (void)toggleAutoReplayPreference;
- (void)toggleChrome;
- (void)toggleHUD;
- (void)togglePlayback;
- (PXGItemPlacement *)viewControllerDismissalTargetPlacement;
- (<PXStoryViewEnvironmentModel> *)viewEnvironmentModel;
- (long long)viewMode;
- (double)volume;
- (bool)wantsChromeVisible;
- (bool)wantsRelatedOverlayNavigationButtonsVisible;
- (bool)wantsRelatedOverlayVisible;
- (bool)wantsScrubberVisible;

@end
