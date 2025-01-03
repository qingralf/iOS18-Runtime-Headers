/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKHighlightAnnotation : AKAnnotation <AKParentAnnotationProtocol> {
    UIColor * _color;
    NSArray * _quadPoints;
    unsigned long long  _style;
}

@property AKAnnotation *childAnnotation;
@property (retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *quadPoints;
@property unsigned long long style;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)quadPoints;
- (void)setColor:(id)arg1;
- (void)setQuadPoints:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;

@end
