/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXZoomableMiniModeFoldedRow : NSObject {
    struct { 
        double alpha; 
        double scale; 
        double translation; 
        double zOffset; 
        double blur; 
        double dimming; 
    }  _collapseProgress;
    double  _yPosition;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; double x6; } collapseProgress;
@property (nonatomic, readonly) double yPosition;

- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })collapseProgress;
- (id)description;
- (id)initWithCollapseProgress:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 yPosition:(double)arg2;
- (double)yPosition;

@end