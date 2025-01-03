/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVInfoPanelDescriptionView : UIView <AVInfoPanelDescriptionViewFacade> {
    UIStackView * _actionButtonsStackView;
    NSLayoutConstraint * _actionButtonsStackViewWidthConstraint;
    NSArray * _actions;
    UIImageView * _closedCaptionBadge;
    double  _contentBottomMargin;
    double  _contentTopMargin;
    UILabel * _dateLabel;
    UILabel * _durationLabel;
    UILabel * _genreLabel;
    UIImageView * _mediaContentRatingImageView;
    UILabel * _mediaContentRatingLabel;
    UIStackView * _nextToPosterStackView;
    UIImageView * _posterView;
    NSLayoutConstraint * _posterViewHeightConstraint;
    NSLayoutConstraint * _posterViewWidthConstraint;
    UILabel * _seasonEpisodeLabel;
    UILabel * _subtitleLabel;
    UITapGestureRecognizer * _summaryOverflowGestureRecognizer;
    UILabel * _summaryView;
    UIColor * _textColor;
    UIFont * _textFont;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    UIColor * _titleTextColor;
    AVTomatoRatingView * _tomatoRatingView;
    UIImageView * _viewingModeBadgeImageView;
    NSLayoutConstraint * _viewingModeBadgeWidthConstraint;
}

@property (nonatomic, readonly) UIStackView *actionButtonsStackView;
@property (nonatomic, readonly) NSLayoutConstraint *actionButtonsStackViewWidthConstraint;
@property (nonatomic, copy) NSArray *actions; /* unknown property attribute: ? */
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) UIImageView *closedCaptionBadge;
@property (nonatomic) double contentBottomMargin;
@property (nonatomic) double contentTopMargin;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *durationLabel;
@property (nonatomic, readonly) UILabel *genreLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *mediaContentRatingImageView;
@property (nonatomic, readonly) UILabel *mediaContentRatingLabel;
@property (nonatomic, readonly) UIStackView *nextToPosterStackView;
@property (nonatomic, retain) UIImage *posterImage;
@property (nonatomic, readonly) UIImageView *posterView;
@property (nonatomic, readonly) NSLayoutConstraint *posterViewHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *posterViewWidthConstraint;
@property (nonatomic, readonly) UILabel *seasonEpisodeLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UITapGestureRecognizer *summaryOverflowGestureRecognizer;
@property (nonatomic, copy) NSString *summaryText;
@property (nonatomic, readonly) UILabel *summaryView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *textFont;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, readonly) AVTomatoRatingView *tomatoRatingView;
@property (nonatomic, readonly) UIImageView *viewingModeBadgeImageView;
@property (nonatomic, readonly) NSLayoutConstraint *viewingModeBadgeWidthConstraint;

+ (id)closedCaptioningBadgeImage;
+ (struct CGSize { double x1; double x2; })layoutSize;

- (void).cxx_destruct;
- (void)_updateActionButtons;
- (id)actionButtonsStackView;
- (id)actionButtonsStackViewWidthConstraint;
- (id)actions;
- (id)closedCaptionBadge;
- (double)contentBottomMargin;
- (double)contentTopMargin;
- (id)dateLabel;
- (id)durationLabel;
- (id)genreLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mediaContentRatingImageView;
- (id)mediaContentRatingLabel;
- (id)nextToPosterStackView;
- (id)posterImage;
- (id)posterView;
- (id)posterViewHeightConstraint;
- (id)posterViewWidthConstraint;
- (id)seasonEpisodeLabel;
- (void)setActions:(id)arg1;
- (void)setClosedCaptionBadgeHidden:(bool)arg1;
- (void)setContentBottomMargin:(double)arg1;
- (void)setContentMediaRatingText:(id)arg1 image:(id)arg2;
- (void)setContentTopMargin:(double)arg1;
- (void)setDateText:(id)arg1;
- (void)setDurationText:(id)arg1;
- (void)setGenreText:(id)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setPosterViewHidden:(bool)arg1;
- (void)setSeasonEpisodeText:(id)arg1;
- (void)setSecondaryTitleText:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTomatoFreshness:(unsigned long long)arg1 rating:(float)arg2 hidden:(bool)arg3;
- (void)setViewingModeBadge:(long long)arg1;
- (id)subtitleLabel;
- (id)summaryOverflowGestureRecognizer;
- (id)summaryText;
- (id)summaryView;
- (id)textColor;
- (id)textFont;
- (id)titleFont;
- (id)titleLabel;
- (id)titleTextColor;
- (id)tomatoRatingView;
- (id)viewingModeBadgeImageView;
- (id)viewingModeBadgeWidthConstraint;

@end
