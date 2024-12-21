/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFImageSource : NSObject <NSCopying, NSSecureCoding, RFImageSource> {
    RFAppIconImage * _app_icon;
    RFAvatarImage * _avatar;
    RFBadgedImage * _badged_image;
    RFDefaultBrowserAppIconImage * _default_browser_app_icon;
    bool  _do_not_show_loading_placeholder;
    struct { 
        unsigned int url : 1; 
        unsigned int symbol : 1; 
        unsigned int app_icon : 1; 
        unsigned int avatar : 1; 
        unsigned int monogram : 1; 
        unsigned int badged_image : 1; 
        unsigned int default_browser_app_icon : 1; 
        unsigned int do_not_show_loading_placeholder : 1; 
    }  _has;
    RFMonogramImage * _monogram;
    RFSymbolImage * _symbol;
    RFUrlImage * _url;
}

@property (nonatomic, retain) RFAppIconImage *app_icon;
@property (nonatomic, retain) RFAvatarImage *avatar;
@property (nonatomic, retain) RFBadgedImage *badged_image;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) RFDefaultBrowserAppIconImage *default_browser_app_icon;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool do_not_show_loading_placeholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RFMonogramImage *monogram;
@property (readonly) Class superclass;
@property (nonatomic, retain) RFSymbolImage *symbol;
@property (nonatomic, retain) RFUrlImage *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)app_icon;
- (id)avatar;
- (id)badged_image;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)default_browser_app_icon;
- (id)dictionaryRepresentation;
- (bool)do_not_show_loading_placeholder;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasApp_icon;
- (bool)hasAvatar;
- (bool)hasBadged_image;
- (bool)hasDefault_browser_app_icon;
- (bool)hasDo_not_show_loading_placeholder;
- (bool)hasMonogram;
- (bool)hasSymbol;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)monogram;
- (void)setApp_icon:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setBadged_image:(id)arg1;
- (void)setDefault_browser_app_icon:(id)arg1;
- (void)setDo_not_show_loading_placeholder:(bool)arg1;
- (void)setMonogram:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)symbol;
- (id)url;

@end