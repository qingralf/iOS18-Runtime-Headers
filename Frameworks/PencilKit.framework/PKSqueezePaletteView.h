/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKSqueezePaletteView : UIView {
    id /* block */  __extendedColorPickerColorSelectionHandler;
    double  _azimuth;
    UIView * _backgroundView;
    CAShapeLayer * _baseShapeLayer;
    struct CGPath { } * _baseShapeLayerPathForHitTesting;
    bool  _clockwise;
    long long  _colorUserInterfaceStyle;
    CAShapeLayer * _contentClippingShapeMask;
    double  _contentHeight;
    UIView * _contentView;
    PKSqueezePaletteViewContext * _context;
    <PKSqueezePaletteViewLayout> * _currentLayout;
    <PKSqueezePaletteViewDelegate> * _delegate;
    double  _endAngle;
    CAShapeLayer * _largeShadow;
    PKSqueezePaletteViewLayoutFactory * _layoutFactory;
    id /* block */  _layoutSubviewsHandler;
    double  _radius;
    PKSqueezePaletteViewResizeHandle * _resizeHandle;
    CAShapeLayer * _smallShadow;
    double  _startAngle;
    CAShapeLayer * _toolsContentClippingShapeMask;
    UIView * _toolsContentView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _viewCenter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end