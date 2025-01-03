/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRUIMediaInfoCell : UICollectionViewCell {
    UILabel * _factoidsLabel;
    <_TVRUITemplateImageProviding> * _imageProvider;
    UIImageView * _imageView;
    TVRCMediaInfo * _mediaInfo;
    UILabel * _titleLabel;
    <TVRUIUpNextProviding> * _upNextProvider;
}

@property (nonatomic, readonly) UILabel *factoidsLabel;
@property (nonatomic) <_TVRUITemplateImageProviding> *imageProvider;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) TVRCMediaInfo *mediaInfo;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) <TVRUIUpNextProviding> *upNextProvider;

+ (double)preferredHeight;
+ (struct CGSize { double x1; double x2; })preferredImageSize;

- (void).cxx_destruct;
- (void)_configureHierarchy;
- (id)factoidsLabel;
- (id)imageProvider;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mediaInfo;
- (void)prepareForReuse;
- (void)setImageProvider:(id)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)setUpNextProvider:(id)arg1;
- (id)titleLabel;
- (id)upNextProvider;

@end
