/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamOverlayView : UIView <CAAnimationDelegate> {
    NSDate * _dateToStartGridAnimation;
    NSArray * _debugRects;
    NSString * _displayString;
    UILabel * _displayStringLabel;
    ICDocCamImageQuad * _documentQuad;
    CAGradientLayer * _gradientMaskLayer;
    CAAnimation * _gridAnimation;
    CAShapeLayer * _llShapeLayer;
    CAShapeLayer * _lrShapeLayer;
    unsigned long long  _numberOfMissedFrames;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewBounds;
    UIColor * _rectColor;
    CAShapeLayer * _rectangleGridLayer;
    bool  _rectangleIsActive;
    CAShapeLayer * _rectangleShapeLayer;
    bool  _showGridAnimation;
    CAShapeLayer * _ulShapeLayer;
    CAShapeLayer * _urShapeLayer;
    NSObject<OS_dispatch_semaphore> * sem;
}

@property (nonatomic, retain) NSDate *dateToStartGridAnimation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (retain) NSArray *debugRects;
@property (readonly, copy) NSString *description;
@property (retain) NSString *displayString;
@property (nonatomic, retain) UILabel *displayStringLabel;
@property (retain) ICDocCamImageQuad *documentQuad;
@property (nonatomic, retain) CAGradientLayer *gradientMaskLayer;
@property (nonatomic, retain) CAAnimation *gridAnimation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAShapeLayer *llShapeLayer;
@property (nonatomic, retain) CAShapeLayer *lrShapeLayer;
@property unsigned long long numberOfMissedFrames;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewBounds;
@property (retain) UIColor *rectColor;
@property (nonatomic, retain) CAShapeLayer *rectangleGridLayer;
@property (nonatomic) bool rectangleIsActive;
@property (nonatomic, retain) CAShapeLayer *rectangleShapeLayer;
@property bool showGridAnimation;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAShapeLayer *ulShapeLayer;
@property (nonatomic, retain) CAShapeLayer *urShapeLayer;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)calculateCurrentRectangleFromDocumentQuad:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })calculateRotationTransformForPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)clearRectangles;
- (double)crossProduct:(struct CGPoint { double x1; double x2; })arg1 v2:(struct CGPoint { double x1; double x2; })arg2;
- (id)dateToStartGridAnimation;
- (id)debugRects;
- (id)displayString;
- (id)displayStringLabel;
- (id)documentQuad;
- (id)extrudedRectFromRect:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForContentInView;
- (id)gradientMaskLayer;
- (id)gridAnimation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)llShapeLayer;
- (id)lrShapeLayer;
- (struct CGPath { }*)newGridPathFromRect:(id)arg1;
- (struct CGPath { }*)newPathFromRect:(id)arg1;
- (unsigned long long)numberOfMissedFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewBounds;
- (id)rectColor;
- (id)rectangleGridLayer;
- (bool)rectangleIsActive;
- (id)rectangleShapeLayer;
- (void)setDateToStartGridAnimation:(id)arg1;
- (void)setDebugRects:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayStringLabel:(id)arg1;
- (void)setDocumentQuad:(id)arg1;
- (void)setGradientMaskLayer:(id)arg1;
- (void)setGridAnimation:(id)arg1;
- (void)setLlShapeLayer:(id)arg1;
- (void)setLrShapeLayer:(id)arg1;
- (void)setNumberOfMissedFrames:(unsigned long long)arg1;
- (void)setPreviewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRectColor:(id)arg1;
- (void)setRectangleGridLayer:(id)arg1;
- (void)setRectangleIsActive:(bool)arg1;
- (void)setRectangleShapeLayer:(id)arg1;
- (void)setShowGridAnimation:(bool)arg1;
- (void)setUlShapeLayer:(id)arg1;
- (void)setUrShapeLayer:(id)arg1;
- (void)setupGridLayers;
- (void)setupRectangleLayer;
- (void)setupShapeLayersIfNeeded;
- (bool)showGridAnimation;
- (void)startGridAnimationFromRect:(id)arg1;
- (void)stopGridAnimation;
- (id)tintColorWithAlpha:(double)arg1;
- (id)ulShapeLayer;
- (void)updateGridLayerFromRect:(id)arg1;
- (void)updateRectangleLayerFromRect:(id)arg1;
- (void)updateShapeLayers;
- (id)urShapeLayer;

@end
