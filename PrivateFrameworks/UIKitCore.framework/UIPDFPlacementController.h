/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPDFPlacementController : NSObject {
    NSMutableArray * _popups;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    UIPDFPageView * pageView;
}

@property (nonatomic) UIPDFPageView *pageView;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForObjectAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAnnotations:(id)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutViews:(double)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (void)shift:(double)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (double)yForObjectAtIndex:(unsigned long long)arg1;

@end
