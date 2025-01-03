/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLinkCustomizationTransitionContext : NSObject {
    double  _maxHeightForSourceView;
    double  _maxWidthForSourceView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preferredSourceRectAnchorPoint;
    double  _sourceViewDownscaleMultiplier;
}

@property (nonatomic) double maxHeightForSourceView;
@property (nonatomic) double maxWidthForSourceView;
@property (nonatomic) struct CGPoint { double x1; double x2; } preferredSourceRectAnchorPoint;
@property (nonatomic) double sourceViewDownscaleMultiplier;

- (double)maxHeightForSourceView;
- (double)maxWidthForSourceView;
- (struct CGPoint { double x1; double x2; })preferredSourceRectAnchorPoint;
- (void)setMaxHeightForSourceView:(double)arg1;
- (void)setMaxWidthForSourceView:(double)arg1;
- (void)setPreferredSourceRectAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSourceViewDownscaleMultiplier:(double)arg1;
- (double)sourceViewDownscaleMultiplier;

@end
