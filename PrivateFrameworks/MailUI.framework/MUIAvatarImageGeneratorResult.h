/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MUIAvatarImageGeneratorResult : NSObject {
    void $__lazy_storage_$_analysis;
    void $__lazy_storage_$_colors;
    void address;
    void image;
    void style;
    void type;
}

@property (nonatomic) long long avatarStyle;
@property (nonatomic) long long avatarType;
@property (nonatomic, retain) MUISenderHeaderColors *headerColors;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (long long)avatarStyle;
- (long long)avatarType;
- (id)headerColors;
- (id)image;
- (id)init;
- (id)initWithAddress:(id)arg1 image:(id)arg2 style:(long long)arg3 type:(long long)arg4;
- (bool)needsBorderFor:(long long)arg1;
- (void)setAvatarStyle:(long long)arg1;
- (void)setAvatarType:(long long)arg1;
- (void)setHeaderColors:(id)arg1;
- (void)setImage:(id)arg1;

@end