/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MUIMessageListNavigationBarTitleView : _UINavigationBarTitleView {
    bool  _isSubtitleHidden;
    UINavigationBar * _navigationBar;
    UILabel * _subtitleLabel;
}

@property (nonatomic) bool isSubtitleHidden;
@property (nonatomic) UINavigationBar *navigationBar;
@property (nonatomic, retain) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 bucket:(long long)arg2;
- (id)initWithNavigationBar:(id)arg1;
- (bool)isSubtitleHidden;
- (void)layoutSubviews;
- (id)navigationBar;
- (void)setIsSubtitleHidden:(bool)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setSubtitleHidden:(bool)arg1 animated:(bool)arg2;
- (void)setSubtitleLabel:(id)arg1;
- (id)subtitleLabel;

@end
