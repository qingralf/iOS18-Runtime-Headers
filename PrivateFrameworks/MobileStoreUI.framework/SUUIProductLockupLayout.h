/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIProductLockupLayout : NSObject {
    long long  _bottomLeftLayoutStyle;
    NSMutableArray * _bottomLeftViewElements;
    NSMutableArray * _bottomRightViewElements;
    SUUIViewElementLayoutContext * _layoutContext;
    NSMutableArray * _middleLeftViewElements;
    SUUIViewElement * _productImageElement;
    NSMutableArray * _topLeftViewElements;
    NSMutableArray * _topRightViewElements;
}

@property (nonatomic, readonly) long long bottomLeftLayoutStyle;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeForSegmentedControl:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_sizeForVerticalViewElements:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_sizeForViewElement:(id)arg1 width:(double)arg2;
- (long long)bottomLeftLayoutStyle;
- (double)bottomPaddingForViewElement:(id)arg1;
- (void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasBottomRightElementWithRightAlignment;
- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;
- (struct SUUIProductLockupLayoutSizing { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; })layoutWidthsForWidth:(double)arg1;
- (double)metadataWidthForWidth:(double)arg1;
- (struct SUUIProductLockupLayoutSizing { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; })sizingToFitWidth:(double)arg1;
- (double)topPaddingForViewElement:(id)arg1;
- (id)viewElementsForSection:(long long)arg1;

@end
