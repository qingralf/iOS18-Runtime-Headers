/* Generated by RuntimeBrowser.
 */

@protocol _UITextPreviewRenderer <NSObject>

@required

- (void)addRenderingAttributes:(NSDictionary *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyRect;
- (bool)excludeBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstLineRect;
- (UIImage *)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastLineRect;
- (void)removeRenderingAttributes:(NSArray *)arg1;
- (void)setExcludeBackground:(bool)arg1;

@end