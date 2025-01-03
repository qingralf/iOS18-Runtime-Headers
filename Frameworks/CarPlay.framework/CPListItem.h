/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPListItem : NSObject <CPListItemPrivate, CPSelectableListItem, NSSecureCoding> {
    CPImageSet * _accessoryImageSet;
    long long  _accessoryType;
    NSString * _detailText;
    bool  _enabled;
    bool  _explicitContent;
    id /* block */  _handler;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    CPListTemplate * _listTemplate;
    double  _playbackProgress;
    bool  _playing;
    long long  _playingIndicatorLocation;
    bool  _showsDisclosureIndicator;
    NSString * _text;
    id  _userInfo;
}

@property (nonatomic, readonly) UIImage *accessoryImage;
@property (nonatomic, retain) CPImageSet *accessoryImageSet;
@property (nonatomic) long long accessoryType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *detailText;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (nonatomic) CPListTemplate *listTemplate;
@property (nonatomic) double playbackProgress;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) long long playingIndicatorLocation;
@property (nonatomic, readonly) bool showsDisclosureIndicator;
@property (nonatomic) bool showsExplicitLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, retain) id userInfo;

+ (struct CGSize { double x1; double x2; })maximumImageSize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (id)accessoryImage;
- (id)accessoryImageSet;
- (long long)accessoryType;
- (id)description;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 detailText:(id)arg2;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 accessoryImage:(id)arg4 accessoryType:(long long)arg5;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showsDisclosureIndicator:(bool)arg4;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (bool)isPlaying;
- (id)listTemplate;
- (double)playbackProgress;
- (long long)playingIndicatorLocation;
- (void)setAccessoryImage:(id)arg1;
- (void)setAccessoryImageSet:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)setDetailText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSet:(id)arg1;
- (void)setListTemplate:(id)arg1;
- (void)setPlaybackProgress:(double)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPlayingIndicatorLocation:(long long)arg1;
- (void)setShowsDisclosureIndicator:(bool)arg1;
- (void)setShowsExplicitLabel:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)showsDisclosureIndicator;
- (bool)showsExplicitLabel;
- (id)text;
- (id)userInfo;

@end
