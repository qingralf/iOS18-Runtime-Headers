/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffectDebugRect : NSObject {
    UIColor * _fillColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _ignoreTransform;
    NSArray * _lineDashPattern;
    double  _lineDashPhase;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool ignoreTransform;
@property (nonatomic, retain) NSArray *lineDashPattern;
@property (nonatomic) double lineDashPhase;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (id)fillColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)ignoreTransform;
- (id)init;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (void)setFillColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoreTransform:(bool)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (double)strokeWidth;

@end