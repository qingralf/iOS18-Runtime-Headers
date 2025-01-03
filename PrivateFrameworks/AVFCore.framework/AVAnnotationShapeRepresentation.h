/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAnnotationShapeRepresentation : AVAnnotationRepresentation {
    bool  _dashed;
    bool  _hasShadow;
    NSString * _shape;
    struct CGColor { } * _strokeColor;
    long long  _strokeWidth;
}

@property (nonatomic) bool dashed;
@property (nonatomic) bool hasShadow;
@property (nonatomic, copy) NSString *shape;
@property (nonatomic) struct CGColor { }*strokeColor;
@property (nonatomic) long long strokeWidth;

- (id)_initWithPropertyList:(id)arg1 binaryData:(id)arg2;
- (id)_propertyListAndBinaryData:(id*)arg1;
- (bool)dashed;
- (void)dealloc;
- (id)description;
- (bool)hasShadow;
- (unsigned long long)hash;
- (id)initWithShape:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDashed:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setShape:(id)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeWidth:(long long)arg1;
- (id)shape;
- (struct CGColor { }*)strokeColor;
- (long long)strokeWidth;

@end
