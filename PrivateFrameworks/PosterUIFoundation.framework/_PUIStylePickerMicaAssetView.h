/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation
 */

@interface _PUIStylePickerMicaAssetView : UIView <PUIStylePickerMicaAssetControlling> {
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    BSUICAPackageView * _packageView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, readonly, copy) NSArray *publishedObjectNames;
@property (nonatomic) NSObject<CAStateControllerDelegate> *stateControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_layoutPackageView;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)setState:(id)arg1;
- (bool)setState:(id)arg1 animated:(bool)arg2;
- (bool)setState:(id)arg1 animated:(bool)arg2 transitionSpeed:(double)arg3 completion:(id /* block */)arg4;
- (bool)setState:(id)arg1 onLayer:(id)arg2 animated:(bool)arg3 transitionSpeed:(double)arg4 completion:(id /* block */)arg5;
- (void)setStateControllerDelegate:(id)arg1;
- (id)stateControllerDelegate;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateAsset:(id)arg1 bundle:(id)arg2;

@end
