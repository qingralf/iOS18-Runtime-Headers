/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUHapticViewController : UIViewController <MRUArtworkViewObserver, MRUNowPlayingControllerObserver> {
    unsigned long long  _context;
    bool  _delayArtworkChange;
    bool  _dimmed;
    bool  _hasAppeared;
    MRUNowPlayingController * _nowPlayingController;
    bool  _onScreen;
}

@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) bool delayArtworkChange;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic) bool hasAppeared;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MRUNowPlayingController *nowPlayingController;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUHapticView *view;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;
- (unsigned long long)context;
- (bool)delayArtworkChange;
- (bool)hasAppeared;
- (id)initWithContext:(unsigned long long)arg1 nowPlayingController:(id)arg2;
- (bool)isDimmed;
- (bool)isOnScreen;
- (void)loadView;
- (id)nowPlayingController;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDelayArtworkChange:(bool)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setHasAppeared:(bool)arg1;
- (void)setNowPlayingController:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)updateArtworkImageWithMediaCode:(id)arg1 treatCodesAsAdamIDs:(bool)arg2;
- (void)updateVisibility;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end