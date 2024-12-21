/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBurstIndicatorView : UIView {
    UIView * __backgroundView;
    UILabel * __countLabel;
    long long  __numberOfPhotos;
    long long  _layoutStyle;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UILabel *_countLabel;
@property (nonatomic, readonly) long long _numberOfPhotos;
@property (nonatomic) long long layoutStyle;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(long long)arg1;
- (id)_countLabel;
- (long long)_numberOfPhotos;
- (void)_performCaptureAnimation;
- (void)_updateAttributes;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)finishIncrementingWithCompletionHandler:(id /* block */)arg1;
- (long long)incrementWithCaptureAnimation:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)reset;
- (void)setLayoutStyle:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end