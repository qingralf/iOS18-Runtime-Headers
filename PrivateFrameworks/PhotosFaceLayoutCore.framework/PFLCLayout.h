/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFaceLayoutCore.framework/PhotosFaceLayoutCore
 */

@interface PFLCLayout : NSObject {
    double  _cropScore;
    double  _foregroundCoverage;
    double  _layoutScore;
    bool  _usesMask;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic) double cropScore;
@property (nonatomic) double foregroundCoverage;
@property (nonatomic) double layoutScore;
@property (nonatomic) bool usesMask;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (double)cropScore;
- (double)foregroundCoverage;
- (id)initWithCropScore:(double)arg1 layoutScore:(double)arg2 foregroundCoverage:(double)arg3 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 usesMask:(bool)arg5;
- (double)layoutScore;
- (void)setCropScore:(double)arg1;
- (void)setForegroundCoverage:(double)arg1;
- (void)setLayoutScore:(double)arg1;
- (void)setUsesMask:(bool)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)usesMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
