/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIUnderstanding.framework/UIUnderstanding
 */

@interface UIUnderstanding.BoundingBox : NSObject {
    void imageSize;
    void rect;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;

- (id)description;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end