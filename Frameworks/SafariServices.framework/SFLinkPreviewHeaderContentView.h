/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFLinkPreviewHeaderContentView : UIButton {
    <SFLinkPreviewHeaderContentViewDelegate> * _delegate;
    NSString * _domain;
    UILabel * _domainLabel;
    NSArray * _domainWithHidePreviewActionConstraints;
    bool  _previewEnabled;
    UIImageView * _safariIcon;
    NSArray * _safariIconWithShowPreviewActionConstraints;
    long long  _style;
    UIButton * _togglePreviewButton;
}

@property (nonatomic) <SFLinkPreviewHeaderContentViewDelegate> *delegate;
@property (nonatomic, copy) NSString *domain;
@property (getter=isPreviewEnabled, nonatomic) bool previewEnabled;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (void)_togglePreviewButtonPressed;
- (void)_updateDomainWithHidePreviewActionConstraints;
- (void)_updateSafariIconWithShowPreviewActionConstraints;
- (id)delegate;
- (id)domain;
- (id)initWithStyle:(long long)arg1;
- (bool)isPreviewEnabled;
- (id)secondaryLabelColor;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setPreviewEnabled:(bool)arg1;
- (long long)style;
- (void)updateConstraints;

@end