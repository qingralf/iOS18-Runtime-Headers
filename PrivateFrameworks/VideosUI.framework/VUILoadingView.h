/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILoadingView : UIView {
    double  _delay;
    UIActivityIndicatorView * _indicatorView;
    VUILabel * _loadingLabel;
    NSString * _loadingMessage;
    VUILabel * _loadingMessageLabel;
    NSString * _loadingTitle;
    VUITextLayout * _messageTextLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic) double delay;
@property (nonatomic, retain) UIActivityIndicatorView *indicatorView;
@property (nonatomic, retain) VUILabel *loadingLabel;
@property (nonatomic, retain) NSString *loadingMessage;
@property (nonatomic, retain) VUILabel *loadingMessageLabel;
@property (nonatomic, retain) NSString *loadingTitle;
@property (nonatomic, retain) VUITextLayout *messageTextLayout;
@property (nonatomic, retain) VUITextLayout *titleTextLayout;

- (void).cxx_destruct;
- (void)_setupLabels:(id)arg1 message:(id)arg2;
- (void)configureMessageTextLayout:(id)arg1;
- (void)configureTitleTextLayout:(id)arg1;
- (double)delay;
- (id)indicatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 loadingTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 loadingTitle:(id)arg2 loadingMessage:(id)arg3;
- (void)layoutSubviews;
- (id)loadingLabel;
- (id)loadingMessage;
- (id)loadingMessageLabel;
- (id)loadingTitle;
- (id)messageTextLayout;
- (void)setDelay:(double)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLoadingMessage:(id)arg1;
- (void)setLoadingMessageLabel:(id)arg1;
- (void)setLoadingTitle:(id)arg1;
- (void)setMessageTextLayout:(id)arg1;
- (void)setTitleTextLayout:(id)arg1;
- (void)startTimer;
- (id)titleTextLayout;

@end