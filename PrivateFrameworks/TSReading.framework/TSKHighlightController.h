/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKHighlightController : NSObject <CALayerDelegate> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _canvasTransform;
    CALayer * _containingLayer;
    TSUImage * _image;
    CALayer * _imageLayer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _layerTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overallRect;
    struct CGPath { } * _path;
    double  _viewScale;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSUImage *image;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) struct CGPath { }*path;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) double viewScale;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })buildLayersForPath:(struct CGPath { }*)arg1 withImage:(id)arg2;
- (void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2;
- (void)dealloc;
- (void)disconnect;
- (bool)drawRoundedRect;
- (void)hide;
- (id)image;
- (id)layer;
- (struct CGPath { }*)path;
- (void)reset;
- (void)setCanvasTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 layerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setImage:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScale:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (double)viewScale;

@end
