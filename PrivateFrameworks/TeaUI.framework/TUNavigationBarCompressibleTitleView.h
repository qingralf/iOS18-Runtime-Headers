/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TUNavigationBarCompressibleTitleView : NSObject <TUNavigationBarCompressible> {
    UIView<TUNavigationBarCompressible> * _customTitleView;
    UILabel * _regularTitleView;
    double  contentAlpha;
}

@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) UIView<TUNavigationBarCompressible> *customTitleView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *regularTitleView;
@property (readonly) Class superclass;
@property (nonatomic) double verticalOffset;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (double)contentAlpha;
- (id)customTitleView;
- (id)initWithCustomTitleView:(id)arg1;
- (id)initWithRegularTitleView:(id)arg1;
- (id)regularTitleView;
- (void)setContentAlpha:(double)arg1;
- (void)setVerticalOffset:(double)arg1;
- (double)verticalOffset;
- (id)view;

@end
