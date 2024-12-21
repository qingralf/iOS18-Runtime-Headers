/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    NSArray * _bundles;
    UIImage * _headerIcon;
    OBPrivacyFlow * _initialPrivacyFlow;
    bool  _isUnifiedAbout;
    OBHeaderAccessoryButton * _linkToPrivacyGatewayButton;
    NSArray * _privacyFlowGroups;
    NSArray * _privacyFlows;
}

@property (nonatomic, retain) NSArray *bundles;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *headerIcon;
@property (nonatomic, retain) OBPrivacyFlow *initialPrivacyFlow;
@property bool isUnifiedAbout;
@property (nonatomic, retain) OBHeaderAccessoryButton *linkToPrivacyGatewayButton;
@property (retain) NSArray *privacyFlowGroups;
@property (nonatomic, retain) NSArray *privacyFlows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_languageToggleTapped;
- (void)_loadViewsWithContentFromBundles;
- (id)_privacyFlowForIndexPath:(id)arg1;
- (id)bundles;
- (id)headerIcon;
- (id)initWithBundles:(id)arg1;
- (id)initialPrivacyFlow;
- (bool)isUnifiedAbout;
- (id)linkToPrivacyGatewayButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)privacyFlowGroups;
- (id)privacyFlows;
- (void)setBundles:(id)arg1;
- (void)setCustomTintColor:(id)arg1;
- (void)setHeaderIcon:(id)arg1;
- (void)setInitialPrivacyFlow:(id)arg1;
- (void)setIsUnifiedAbout:(bool)arg1;
- (void)setLinkToPrivacyGatewayButton:(id)arg1;
- (void)setPrivacyFlowGroups:(id)arg1;
- (void)setPrivacyFlows:(id)arg1;
- (void)showPrivacyGateway:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end