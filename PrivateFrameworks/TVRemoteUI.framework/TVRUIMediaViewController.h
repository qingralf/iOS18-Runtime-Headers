/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUIMediaViewController : UIViewController <UICollectionViewDelegate, _TVRUITemplateImageProviding> {
    UIButton * _actionButton;
    <TVRUIActionProviding> * _actionProvider;
    UIActivityIndicatorView * _activityIndicatorView;
    _TVRUIAvatarGenerator * _avatarGenerator;
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    TVRUIImageFetcher * _imageFetcher;
    id  _infosDidChangeNotificationObserver;
    bool  _isRequestingMediaInfo;
    NSString * _mediaIdentifier;
    UIImage * _mediaImage;
    TVRCMediaInfo * _mediaInfo;
    NSString * _mediaTitle;
    bool  _upNextOperationInProgress;
    <TVRUIUpNextProviding> * _upNextProvider;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic) <TVRUIActionProviding> *actionProvider;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) _TVRUIAvatarGenerator *avatarGenerator;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVRUIImageFetcher *imageFetcher;
@property (nonatomic, retain) id infosDidChangeNotificationObserver;
@property (nonatomic) bool isRequestingMediaInfo;
@property (nonatomic, retain) NSString *mediaIdentifier;
@property (nonatomic, retain) UIImage *mediaImage;
@property (nonatomic, retain) TVRCMediaInfo *mediaInfo;
@property (nonatomic, retain) NSString *mediaTitle;
@property (readonly) Class superclass;
@property (nonatomic) bool upNextOperationInProgress;
@property (nonatomic) <TVRUIUpNextProviding> *upNextProvider;

- (void).cxx_destruct;
- (void)_addToUpNext:(id)arg1;
- (bool)_canShowMediaInfo;
- (bool)_canShowWhileLocked;
- (id)_collectionViewLayout;
- (void)_configureHierarchy;
- (void)_didBeginUpNextCommand;
- (void)_gotoMediaInfo;
- (void)_markAsWatched:(id)arg1;
- (void)_performWebSearch;
- (void)_removeFromUpNext:(id)arg1;
- (void)_requestMediaInfoWithID:(id)arg1;
- (void)_shareMediaInfo;
- (void)_upNextCommand:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_updateBarButtonItemFromCurrentState;
- (void)_updateMediaInfo:(id)arg1;
- (void)_updateUIFromCurrentState;
- (id)actionButton;
- (id)actionButtonMenu;
- (id)actionProvider;
- (id)activityIndicatorView;
- (id)avatarGenerator;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)imageFetcher;
- (id)infosDidChangeNotificationObserver;
- (bool)isRequestingMediaInfo;
- (id)mediaIdentifier;
- (id)mediaImage;
- (id)mediaInfo;
- (id)mediaTitle;
- (void)requestImageForTemplate:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (void)setActionButton:(id)arg1;
- (void)setActionProvider:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAvatarGenerator:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setImageFetcher:(id)arg1;
- (void)setInfosDidChangeNotificationObserver:(id)arg1;
- (void)setIsRequestingMediaInfo:(bool)arg1;
- (void)setMediaIdentifier:(id)arg1;
- (void)setMediaImage:(id)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)setMediaTitle:(id)arg1;
- (void)setUpNextOperationInProgress:(bool)arg1;
- (void)setUpNextProvider:(id)arg1;
- (bool)upNextOperationInProgress;
- (id)upNextProvider;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end