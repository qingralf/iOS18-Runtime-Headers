/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AUDeveloperSettings.framework/AUDeveloperSettings
 */

@interface UIProgressFooterView : UITableViewHeaderFooterView <PSHeaderFooterView> {
    UILabel * _assetLabel;
    UILabel * _detailProgressLabel;
    UIProgressView * _progressView;
}

@property (nonatomic, retain) UILabel *assetLabel;
@property (nonatomic, retain) UILabel *detailProgressLabel;
@property (nonatomic, retain) UIProgressView *progressView;

- (void).cxx_destruct;
- (id)assetLabel;
- (void)clearProgress;
- (id)detailProgressLabel;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (bool)progressIsComplete;
- (id)progressView;
- (void)refreshContentsWithSpecifier:(id)arg1;
- (void)setAssetLabel:(id)arg1;
- (void)setDetailProgressLabel:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setupSubviewsAndConstraints;

@end
