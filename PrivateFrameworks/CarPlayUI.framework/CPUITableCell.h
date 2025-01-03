/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
 */

@interface CPUITableCell : _CPUIBaseTableCell {
    CPUITableCellAccessory * _accessory;
    UIActivityIndicatorView * _activityIndicatorView;
    UIImage * _artwork;
    UIImageView * _artworkImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    UIImage * _chevronImage;
    CPUITableCellAccessory * _cloudAccessory;
    UIImage * _cloudImage;
    bool  _container;
    UIImageView * _explicitItemView;
    MPUNowPlayingIndicatorView * _nowPlayingIndicator;
    double  _playbackProgress;
    UIImage * _playbackProgressFullImage;
    UIView * _playbackProgressView;
    long long  _playbackState;
    bool  _playingIndicatorLeadingSide;
    bool  _shouldShowPlaybackProgress;
    bool  _showActivityIndicator;
    bool  _showExplicit;
}

@property (nonatomic, retain) CPUITableCellAccessory *accessory;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) UIImage *artwork;
@property (nonatomic, retain) UIImageView *artworkImageView;
@property (nonatomic) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, retain) UIImage *chevronImage;
@property (nonatomic, retain) CPUITableCellAccessory *cloudAccessory;
@property (nonatomic, retain) UIImage *cloudImage;
@property (nonatomic) bool container;
@property (nonatomic, retain) UIImageView *explicitItemView;
@property (nonatomic, readonly) MPUNowPlayingIndicatorView *nowPlayingIndicator;
@property (nonatomic) double playbackProgress;
@property (nonatomic, retain) UIImage *playbackProgressFullImage;
@property (nonatomic, retain) UIView *playbackProgressView;
@property (nonatomic) long long playbackState;
@property (nonatomic) bool playingIndicatorLeadingSide;
@property (nonatomic) bool shouldShowPlaybackProgress;
@property (nonatomic) bool showActivityIndicator;
@property (getter=isShowExplicit, nonatomic) bool showExplicit;

+ (double)minimumHeight;
+ (double)rowHeight;

- (void).cxx_destruct;
- (double)_accessoryWidth;
- (void)_setCloudAccessory:(id)arg1;
- (void)_updatePlayingArtworkIfNeeded;
- (void)_updateTintColors;
- (id)accessory;
- (id)activityIndicatorView;
- (void)applyConfiguration:(id)arg1;
- (id)artwork;
- (id)artworkImageView;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)chevronImage;
- (id)cloudAccessory;
- (id)cloudImage;
- (void)configureCell;
- (bool)container;
- (bool)currentlyPlaying;
- (id)explicitItemView;
- (bool)isShowExplicit;
- (void)layoutSubviews;
- (id)nowPlayingIndicator;
- (double)playbackProgress;
- (id)playbackProgressFullImage;
- (id)playbackProgressView;
- (long long)playbackState;
- (bool)playingIndicatorLeadingSide;
- (void)setAccessory:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkImageView:(id)arg1;
- (void)setArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setChevronImage:(id)arg1;
- (void)setCloudAccessory:(id)arg1;
- (void)setCloudImage:(id)arg1;
- (void)setContainer:(bool)arg1;
- (void)setExplicitItemView:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPlaybackProgress:(double)arg1;
- (void)setPlaybackProgressFullImage:(id)arg1;
- (void)setPlaybackProgressView:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setPlayingIndicatorLeadingSide:(bool)arg1;
- (void)setShouldShowPlaybackProgress:(bool)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowExplicit:(bool)arg1;
- (void)setShowsExplicit:(bool)arg1;
- (bool)shouldShowPlaybackProgress;
- (bool)showActivityIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateArtwork;
- (void)updatePlaybackProgress;

@end
