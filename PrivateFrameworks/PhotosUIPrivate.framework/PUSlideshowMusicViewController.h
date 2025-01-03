/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUSlideshowMusicViewController : UIViewController <MPMediaPickerControllerDelegate, PUViewControllerSpecChangeObserver, UITableViewDataSource, UITableViewDelegate> {
    bool  __needsUpdateBackgroundView;
    bool  __needsUpdateSpec;
    bool  __needsUpdateTableView;
    PUSlideshowMediaItem * _currentMediaItem;
    <PUSlideshowMusicDelegate> * _delegate;
    NSArray * _mediaItems;
    bool  _shouldHideTableViewWhenViewWillDisappear;
    PUSlideshowSettingsViewControllerSpec * _spec;
    UITableView * _tableView;
}

@property (setter=_setNeedsUpdateBackgroundView:, nonatomic) bool _needsUpdateBackgroundView;
@property (setter=_setNeedsUpdateSpec:, nonatomic) bool _needsUpdateSpec;
@property (setter=_setNeedsUpdateTableView:, nonatomic) bool _needsUpdateTableView;
@property (nonatomic, retain) PUSlideshowMediaItem *currentMediaItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PUSlideshowMusicDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFinish;
- (void)_didPickMediaItem:(id)arg1;
- (void)_invalidateBackgroundView;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (bool)_needsUpdate;
- (bool)_needsUpdateBackgroundView;
- (bool)_needsUpdateSpec;
- (bool)_needsUpdateTableView;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBackgroundView:(bool)arg1;
- (void)_setNeedsUpdateSpec:(bool)arg1;
- (void)_setNeedsUpdateTableView:(bool)arg1;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (id)currentMediaItem;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)pu_wantsNavigationBarVisible;
- (void)setCurrentMediaItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
