/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSlidingButton : UIView <_UIActionSliderDelegate> {
    _UIActionSlider * _acceptButton;
    <TPSlidingButtonDelegateProtocol> * _delegate;
    UIImageView * _dialImageView;
    UIButton * _sideButtonRight;
    int  _type;
}

@property (retain) _UIActionSlider *acceptButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <TPSlidingButtonDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) UIImageView *dialImageView;
@property (readonly) unsigned long long hash;
@property (retain) UIButton *sideButtonRight;
@property (readonly) Class superclass;
@property int type;

- (void).cxx_destruct;
- (id)acceptButton;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dialImageView;
- (id)initWithSlidingButtonType:(int)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAcceptButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialImageView:(id)arg1;
- (void)setSideButtonRight:(id)arg1;
- (void)setType:(int)arg1;
- (id)sideButtonRight;
- (int)type;

@end
