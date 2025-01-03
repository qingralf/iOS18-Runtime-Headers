/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleLegibilityDimmingView : UIView <PXGReusableView> {
    CABackdropLayer * _backdropLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    CALayer * _filterLayer;
    NSString * _gradientImageName;
    <NSCopying> * _userData;
}

@property (nonatomic, readonly) bool canUnloadWhenInvisible; /* unknown property attribute: ? */
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, retain) NSString *gradientImageName;
@property (nonatomic, readonly) bool isFloating; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldReuseWhenInvisible; /* unknown property attribute: ? */
@property (nonatomic, copy) <NSCopying> *userData;

- (void).cxx_destruct;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)gradientImageName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientImageName:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
