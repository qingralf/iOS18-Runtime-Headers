/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
 */

@interface GKTextStyle : NSObject {
    double  _UIKitFontLeading;
    NSString * _UIKitFontTextStyleName;
    UIColor * _color;
    NSString * _fontName;
    SEL  _fontNameRebaseSelector;
    double  _fontSize;
    SEL  _fontSizeRebaseSelector;
    long long  _lineBreakMode;
    double  _m34;
    double  _minimumLineHeight;
    bool  _needsParagraphStyle;
    bool  _overrideUIKitFontSize;
    GKColorPalette * _palette;
    long long  _textAlignment;
    double  _zPosition;
}

@property (nonatomic, retain) NSString *UIKitFontTextStyleName;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) SEL fontNameRebaseSelector;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic) SEL fontSizeRebaseSelector;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double m34;
@property (nonatomic) double minimumLineHeight;
@property (nonatomic) bool needsParagraphStyle;
@property (nonatomic) bool overrideUIKitFontSize;
@property (nonatomic, retain) GKColorPalette *palette;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double zPosition;

+ (id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2 systemContentSizeDidChange:(bool)arg3;
+ (double)scaledValueFromHISpecLeading:(double)arg1 forFontTextStyle:(id)arg2;
+ (double)standardFontSize;
+ (double)standardLeadingForFontTextStyle:(id)arg1;
+ (id)textStyle;

- (void).cxx_destruct;
- (id)UIKitFontTextStyleName;
- (id)achievementLeaderboardPointsText;
- (id)achievementLeaderboardRank;
- (id)achievementValueText;
- (id)alignment:(long long)arg1 lineBreakMode:(long long)arg2;
- (void)applyScaleForMesh;
- (void)applyToEditField:(id)arg1;
- (void)applyToLabel:(id)arg1;
- (id)attributes;
- (id)bannerMessage;
- (id)bannerShortTitle;
- (id)bannerTitle;
- (id)baseFontRebaseSelector;
- (id)body;
- (id)bold;
- (id)buttonTitle;
- (id)buyButtonTitle;
- (id)callout;
- (id)caption;
- (id)caption1;
- (id)caption2;
- (id)cellActionItem;
- (id)centered;
- (id)challengeText;
- (id)challengeTitleText;
- (id)color;
- (id)composeFields;
- (id)composeMessage;
- (id)copy;
- (id)copyWithBaseClass:(Class)arg1;
- (id)description;
- (id)detailSecondaryHeaderText;
- (id)emphasized;
- (id)emphasizedOnDarkBackground;
- (id)fontName;
- (SEL)fontNameRebaseSelector;
- (double)fontSize;
- (SEL)fontSizeRebaseSelector;
- (id)footnote;
- (id)friendCaptionColor;
- (id)friendColor;
- (id)gameDetailNameText;
- (unsigned long long)hash;
- (id)header0;
- (id)header1;
- (id)header2;
- (id)header3;
- (id)header4;
- (id)headerViewSubText1;
- (id)headline;
- (id)info;
- (id)init;
- (id)initEmpty;
- (bool)isEqual:(id)arg1;
- (id)leaderboardRankLarge;
- (id)leaderboardRankMedium;
- (id)leaderboardRankSmall;
- (id)light;
- (long long)lineBreakMode;
- (id)lineBreakMode:(long long)arg1;
- (id)lineHeight:(double)arg1;
- (id)localPlayerColor;
- (double)m34;
- (id)medium;
- (double)minimumLineHeight;
- (id)multiplayerAddText;
- (id)multiplayerFooterText;
- (id)multiplayerHeaderText;
- (id)multiplayerNameText;
- (id)multiplayerStatusText;
- (bool)needsParagraphStyle;
- (bool)overrideUIKitFontSize;
- (id)palette;
- (id)regular;
- (id)remoteUIDetailLabel:(int)arg1;
- (id)remoteUIEditField:(int)arg1;
- (id)remoteUIEditLabel:(int)arg1;
- (id)remoteUILabel:(int)arg1;
- (id)remoteUINickNameField:(int)arg1;
- (id)remoteUINickNameLabel:(int)arg1;
- (id)remoteUISectionFooter:(int)arg1;
- (id)remoteUISectionHeader:(int)arg1;
- (id)remoteUISelectField:(int)arg1;
- (id)remoteUISelectLabel:(int)arg1;
- (id)remoteUITableFooterButton:(int)arg1;
- (id)remoteUITableHeaderButton:(int)arg1;
- (id)remoteUITableHeaderLabel:(int)arg1;
- (id)remoteUITableHeaderSubLabel:(int)arg1;
- (id)removeButtonTitle;
- (id)replayOnBaseStyle:(id)arg1 systemContentSizeDidChange:(bool)arg2;
- (id)resolveFontAndLineSpacing:(double*)arg1;
- (id)roundButtonTitle;
- (id)scaled:(double)arg1;
- (id)scaledForM34:(double)arg1 zPosition:(double)arg2;
- (id)sectionCaption;
- (id)sectionCaptionSmall;
- (id)sectionHeader;
- (id)selectedBuyButtonTitle;
- (void)setColor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(double)arg3 shouldOverrideSize:(bool)arg4 rebaseSelector:(SEL)arg5;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(bool)arg3 rebaseSelector:(SEL)arg4;
- (void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontNameRebaseSelector:(SEL)arg1;
- (void)setFontSize:(double)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontSizeRebaseSelector:(SEL)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setM34:(double)arg1;
- (void)setMinimumLineHeight:(double)arg1;
- (void)setNeedsParagraphStyle:(bool)arg1;
- (void)setOverrideUIKitFontSize:(bool)arg1;
- (void)setPalette:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setUIKitFontTextStyleName:(id)arg1;
- (void)setZPosition:(double)arg1;
- (id)settingsBoldButton;
- (id)settingsButton;
- (id)settingsFooter;
- (id)settingsHeader;
- (id)settingsLabel;
- (id)settingsLinkText;
- (id)small;
- (id)smallInfo;
- (id)strong;
- (id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3;
- (id)tabIconCaption;
- (id)tableCellSubtitle;
- (id)tableCellTitle;
- (id)tableFooterStyle;
- (long long)textAlignment;
- (id)thin;
- (id)thinNumberText;
- (id)viewBackground;
- (double)zPosition;

@end
