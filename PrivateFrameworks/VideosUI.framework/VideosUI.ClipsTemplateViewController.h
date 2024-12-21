/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.ClipsTemplateViewController : VideosUI.VUIViewController <VUIBackgroundMediaPlayerProvider, VUINowPlayingTabControllerDelegate, VUIOrientationOverride, VUIPlaybackTabManagerDelegate> {
    void cancellables;
    void clipType;
    void collectionTitle;
    void collectionViewModel;
    void document;
    void hudController;
    void maxMovieContentRating;
    void maxTVContentRating;
    void pageContext;
    void paginateOffset;
    void playlistViewController;
    void previousAlternateSubtitle;
    void previousSubtitle;
    void serviceRequest;
    void tabViewController;
}

@property (nonatomic, readonly) VUIPlayer *activePlayer;
@property (nonatomic, readonly) <TVPMediaItem> *currentMediaItem;
@property (nonatomic, readonly) long long maxMultiviewPlayerCount;
@property (nonatomic, readonly) bool mediaSupportsStartOver;
@property (nonatomic, readonly) NSArray *multiviewIdentifiers;
@property (nonatomic, readonly) long long multiviewPlayerCount;
@property (nonatomic, readonly) <VUINowPlayingTabControllerDelegate> *nowPlayingControllerDelegate;
@property (nonatomic, readonly) bool overridesOrientationLock;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) bool prefersStatusBarHidden;

- (void).cxx_destruct;
- (id)activePlayer;
- (id)currentMediaItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)maxMultiviewPlayerCount;
- (bool)mediaSupportsStartOver;
- (id)multiviewIdentifiers;
- (long long)multiviewPlayerCount;
- (id)nowPlayingControllerDelegate;
- (bool)overridesOrientationLock;
- (id)playerViewController;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end