/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRAtrialFibrillationIntroViewController : HKViewController <HKAdaptiveModalPresented> {
    UILabel * _bodyLabel;
    UIView * _contentView;
    UIView * _heroView;
    UIView * _learnMoreContentView;
    UIScrollView * _scrollView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic, retain) UIView *learnMoreContentView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (double)_assetImageBottomToTitleFirstBaseline;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (double)_bodyLastBaselineToContentBottom;
- (id)_createHeroView;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (id)bodyLabel;
- (id)contentView;
- (id)heroView;
- (id)learnMoreContentView;
- (id)scrollView;
- (void)setBodyLabel:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setLearnMoreContentView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)titleLabel;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidLoad;

@end
