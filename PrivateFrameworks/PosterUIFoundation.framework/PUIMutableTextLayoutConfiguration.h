/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation
 */

@interface PUIMutableTextLayoutConfiguration : PUITextLayoutConfiguration {
    bool  _alternateDateEnabled;
    double  _contentsLuminance;
    PUIFontConfiguration * _fontConfiguration;
    NSString * _groupName;
    NSString * _numberingSystemType;
    unsigned long long  _preferredAlignment;
    unsigned long long  _preferredLayout;
    <PUIStyle> * _style;
    PUIStyleColor * _styleColor;
    bool  _userConfigured;
}

@property (getter=isAlternateDateEnabled, nonatomic) bool alternateDateEnabled;
@property (nonatomic) double contentsLuminance;
@property (nonatomic, copy) PUIFontConfiguration *fontConfiguration;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *numberingSystemType;
@property (nonatomic) unsigned long long preferredAlignment;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic, copy) <PUIStyle> *style;
@property (getter=isUserConfigured, nonatomic) bool userConfigured;

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fontConfiguration;
- (id)groupName;
- (id)initWithFontConfiguration:(id)arg1 preferredAlignment:(unsigned long long)arg2 preferredLayout:(unsigned long long)arg3 style:(id)arg4 styleColor:(id)arg5 numberingSystemType:(id)arg6 userConfigured:(bool)arg7 contentsLuminance:(double)arg8 alternateDateEnabled:(bool)arg9 groupName:(id)arg10;
- (bool)isAlternateDateEnabled;
- (bool)isUserConfigured;
- (id)numberingSystemType;
- (unsigned long long)preferredAlignment;
- (unsigned long long)preferredLayout;
- (void)setAlternateDateEnabled:(bool)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setFontConfiguration:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setNumberingSystemType:(id)arg1;
- (void)setPreferredAlignment:(unsigned long long)arg1;
- (void)setPreferredLayout:(unsigned long long)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setUserConfigured:(bool)arg1;
- (id)style;
- (id)styleColor;

@end