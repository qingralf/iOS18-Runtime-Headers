/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView> {
    UIImageView * _chevronView;
    UILabel * _detailTextLabel;
    UIButton * _disclosureButton;
}

@property (nonatomic, retain) UIImageView *chevronView;
@property <SiriUITextTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailTextLabel;
@property (nonatomic, retain) UIButton *disclosureButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SiriUITemplatedView> *templatedSuperview;

- (void).cxx_destruct;
- (void)_setupDisclosureButton;
- (void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (id)chevronView;
- (id)detailTextLabel;
- (id)disclosureButton;
- (id)initWithDataSource:(id)arg1;
- (void)layoutDetailText;
- (void)layoutSubviews;
- (void)reloadData;
- (void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)setChevronView:(id)arg1;
- (void)setDetailTextLabel:(id)arg1;
- (void)setDisclosureButton:(id)arg1;
- (void)setupDisclosureIndicator;

@end
