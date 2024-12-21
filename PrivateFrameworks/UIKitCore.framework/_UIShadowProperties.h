/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIShadowProperties : NSObject {
    UIColor * _color;
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    double  _opacity;
    double  _radius;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) struct CGSize { double x1; double x2; } offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

+ (id)propertiesFromView:(id)arg1;

- (void).cxx_destruct;
- (void)applyToView:(id)arg1;
- (id)color;
- (id)init;
- (struct CGSize { double x1; double x2; })offset;
- (double)opacity;
- (double)radius;
- (void)scaleBy:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;

@end