/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAnnotationPathRepresentation : AVAnnotationRepresentation {
    bool  _dashed;
    bool  _hasShadow;
    NSArray * _paths;
    struct CGColor { } * _strokeColor;
    long long  _strokeWidth;
}

@property (nonatomic) bool dashed;
@property (nonatomic) bool hasShadow;
@property (nonatomic, copy) NSArray *paths;
@property (nonatomic) struct CGColor { }*strokeColor;
@property (nonatomic) long long strokeWidth;

- (id)_initWithPropertyList:(id)arg1 binaryData:(id)arg2;
- (id)_propertyListAndBinaryData:(id*)arg1;
- (bool)dashed;
- (void)dealloc;
- (id)description;
- (bool)hasShadow;
- (unsigned long long)hash;
- (id)initWithPaths:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paths;
- (void)setDashed:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setPaths:(id)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeWidth:(long long)arg1;
- (struct CGColor { }*)strokeColor;
- (long long)strokeWidth;

@end