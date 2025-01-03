/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding> {
    CPBarButton * _backButton;
    NSUUID * _identifier;
    NSArray * _internalLeadingBarButtons;
    NSArray * _internalTrailingBarButtons;
    bool  _needsUpdate;
    bool  _showsTabBadge;
    UIImage * _tabImage;
    long long  _tabSystemItem;
    NSString * _tabTitle;
    <CPTemplateDelegate> * _templateDelegate;
    <CPBaseTemplateProviding> * _templateProvider;
    NAFuture * _templateProviderFuture;
    id  _userInfo;
}

@property (nonatomic, retain) CPBarButton *backButton;
@property (nonatomic, readonly) NSString *backTitle;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) NSArray *internalLeadingBarButtons;
@property (nonatomic, retain) NSArray *internalTrailingBarButtons;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) bool showsTabBadge;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *tabImage;
@property (nonatomic) long long tabSystemItem;
@property (nonatomic, copy) NSString *tabTitle;
@property (nonatomic) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic, retain) <CPBaseTemplateProviding> *templateProvider;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;
@property (nonatomic, retain) id userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backButton;
- (id)backTitle;
- (bool)barButton:(id)arg1 setImage:(id)arg2;
- (bool)barButton:(id)arg1 setTitle:(id)arg2;
- (void)connectTemplateProvider:(id)arg1;
- (bool)control:(id)arg1 setEnabled:(bool)arg2;
- (bool)control:(id)arg1 setSelected:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internalLeadingBarButtons;
- (id)internalTrailingBarButtons;
- (void)invalidateTemplateProvider;
- (bool)isEqual:(id)arg1;
- (id)leadingNavigationBarButtons;
- (bool)needsUpdate;
- (void)performUpdate;
- (void)setBackButton:(id)arg1;
- (void)setInternalLeadingBarButtons:(id)arg1;
- (void)setInternalTrailingBarButtons:(id)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setShowsTabBadge:(bool)arg1;
- (void)setTabImage:(id)arg1;
- (void)setTabSystemItem:(long long)arg1;
- (void)setTabTitle:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setTemplateProvider:(id)arg1;
- (void)setTemplateProviderFuture:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldHideNavigationBar;
- (bool)showsTabBadge;
- (id)tabImage;
- (long long)tabSystemItem;
- (id)tabTitle;
- (id)templateDelegate;
- (void)templateDidAppearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)templateDidDisappearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (id)templateProvider;
- (id)templateProviderFuture;
- (void)templateWillAppearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)templateWillDisappearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (id)trailingNavigationBarButtons;
- (id)userInfo;

@end
