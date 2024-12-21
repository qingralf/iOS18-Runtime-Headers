/* Generated by RuntimeBrowser.
 */

@protocol TVPPlayback <NSObject>

@required

- (id)addBoundaryTimeObserverForDates:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id)addBoundaryTimeObserverForTimes:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id)addElapsedTimeObserver:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSDate *, double, bool, void*
- (<TVPASyncPlaybackDelegate> *)asyncDelegate;
- (NSArray *)audioOptions;
- (TVPTimeRange *)bufferedTimeRange;
- (void)changeMediaInDirection:(long long)arg1;
- (void)changeMediaInDirection:(long long)arg1 reason:(NSString *)arg2;
- (NSArray *)chapterCollections;
- (void)continueLoadingCurrentItem;
- (TVPChapter *)currentChapter;
- (TVPChapterCollection *)currentChapterCollection;
- (TVPInterstitial *)currentInterstitial;
- (NSObject<TVPMediaItem> *)currentMediaItem;
- (bool)currentMediaItemHasDates;
- (bool)currentMediaItemHasVideoContent;
- (bool)currentMediaItemInitialLoadingComplete;
- (bool)currentMediaItemIsStreaming;
- (bool)currentMediaItemPreparedForLoading;
- (struct CGSize { double x1; double x2; })currentMediaItemPresentationSize;
- (bool)currentMediaItemSupportsScrubbingUsingPlayer;
- (<TVPPlaybackDelegate> *)delegate;
- (double)duration;
- (double)elapsedTime;
- (long long)errorBehavior;
- (double)forwardPlaybackEndTime;
- (id)init;
- (id)initWithName:(NSString *)arg1;
- (bool)interactive;
- (void)invalidate;
- (bool)isLive;
- (bool)limitReadAhead;
- (double)maximumBitRate;
- (long long)mediaItemEndAction;
- (bool)muted;
- (NSString *)name;
- (void)pause;
- (void)pauseIgnoringDelegate:(bool)arg1;
- (void)pauseWithVolumeRampDuration:(double)arg1;
- (void)play;
- (void)playIgnoringDelegate:(bool)arg1;
- (NSDate *)playbackDate;
- (TVPPlaylist *)playlist;
- (bool)preventsSleepDuringVideoPlayback;
- (double)rate;
- (double)rateUsedForPlayback;
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;
- (void)removeElapsedTimeObserverWithToken:(id)arg1;
- (bool)respondsToRemoteControlEvents;
- (double)reversePlaybackEndTime;
- (void)scanWithRate:(double)arg1;
- (TVPDateRange *)seekableDateRange;
- (TVPTimeRange *)seekableTimeRange;
- (TVPAudioOption *)selectedAudioOption;
- (TVPSubtitleOption *)selectedSubtitleOption;
- (void)setAsyncDelegate:(id <TVPASyncPlaybackDelegate>)arg1;
- (void)setCurrentChapterCollection:(TVPChapterCollection *)arg1;
- (void)setCurrentMediaItem:(NSObject<TVPMediaItem> *)arg1;
- (void)setDelegate:(id <TVPPlaybackDelegate>)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTime:(double)arg1 precise:(bool)arg2;
- (void)setElapsedTime:(double)arg1 seekPrecision:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setElapsedTime:(double)arg1 seekPrecision:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 ignoreDelegate:(bool)arg3;
- (void)setErrorBehavior:(long long)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setMaximumBitRate:(double)arg1;
- (void)setMediaItemEndAction:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackDate:(NSDate *)arg1;
- (void)setPlaylist:(TVPPlaylist *)arg1;
- (void)setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)setRateUsedForPlayback:(double)arg1;
- (void)setRespondsToRemoteControlEvents:(bool)arg1;
- (void)setSelectedAudioOption:(TVPAudioOption *)arg1;
- (void)setSelectedSubtitleOption:(TVPSubtitleOption *)arg1;
- (void)setSelectedSubtitleOption:(TVPSubtitleOption *)arg1 setGlobalPreference:(bool)arg2;
- (void)setUpdatesMediaRemoteInfoAutomatically:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setWaitsAfterPreparingMediaItems:(bool)arg1;
- (void)skipToNextChapterInDirection:(long long)arg1;
- (TVPPlaybackState *)state;
- (void)stop;
- (void)stopWithVolumeRampDuration:(double)arg1;
- (NSArray *)subtitleOptions;
- (void)togglePlayPause;
- (void)updateSubtitleOptions;
- (bool)updatesMediaRemoteInfoAutomatically;
- (float)volume;
- (bool)waitsAfterPreparingMediaItems;

@optional

- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(NSString *)arg2;

@end